#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <QDebug>
#include <QTimer>
#include <QSettings>
#include <QFileInfo>
#include <QTime>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);

    QApplication::setOrganizationName("Gow-Mac");
    QApplication::setApplicationName("2300");
    appSettings = new QSettings("/home/root/Settings/Gow-Mac/2300.conf", QSettings::NativeFormat);

    lineEditkeyboard = new Keyboard();

    ui->rangeButtonGroup->setId(ui->btnRange1,RANGE1_OFFSET);
    ui->rangeButtonGroup->setId(ui->btnRange2,RANGE2_OFFSET);
    ui->rangeButtonGroup->setId(ui->btnRange3,RANGE3_OFFSET);
    ui->rangeButtonGroup->setId(ui->btnRange4,RANGE4_OFFSET);

    ui->gainButtonGroup->setId(ui->gain1Button, 0);
    ui->gainButtonGroup->setId(ui->gain2Button, 1);
    ui->gainButtonGroup->setId(ui->gain3Button, 2);
    ui->gainButtonGroup->setId(ui->gain4Button, 3);

    qApp->setStyleSheet("QMainWindow { background-color:#C0C0C0; }"                        
                        "QPushButton:focus { outline:none; }"
                        "QPushButton { background-color:#00FFFF; }");

    ui->busyWidget->setColor("#00FFFF");
    ui->busyWidget->start();
    ui->btnCal->setEnabled(false);
    ui->btnRun->setEnabled(false);
    ui->statusLine->setEnabled(false);
    ui->btnIgnite->setEnabled(false);

    /* Set up clock */
    updateClock();
    QTimer *clockTimer = new QTimer(this);
    connect(clockTimer, SIGNAL(timeout()), this, SLOT(updateClock()));
    clockTimer->start(1000);

    /* Tempurature read timer */
    tempsTimer = new QTimer(this);
    connect(tempsTimer, SIGNAL(timeout()), this, SLOT(setTempLabels()));

    /* Flows read timer */
    flowsTimer = new QTimer(this);
    connect(flowsTimer, SIGNAL(timeout()), this, SLOT(readFlows()));

    /* Run page timer */
    runTimer = new QTimer(this);
    connect(runTimer, SIGNAL(timeout()), this, SLOT(runTimerTimeout()));

    workThread = new WorkerThread(this);
    connect(workThread, SIGNAL(workDone(bool,int)), this, SLOT(threadComplete(bool,int)));

    labelIndicator(ui->fidLabel,false);
    pageList << ui->mainPane->currentIndex();

    connect(ui->rangeButtonGroup, SIGNAL(buttonClicked(int)), this, SLOT(set_range(int)));
    connect(ui->gainButtonGroup, SIGNAL(buttonClicked(int)), this, SLOT(set_gain(int)));

    connect(ui->alarm1LowLine, SIGNAL(textChanged(QString)), this, SLOT(alarms_changed(QString)));
    connect(ui->alarm2LowLine, SIGNAL(textChanged(QString)), this, SLOT(alarms_changed(QString)));
    connect(ui->alarm1Set, SIGNAL(textChanged(QString)), this, SLOT(alarms_changed(QString)));
    connect(ui->alarm2Set, SIGNAL(textChanged(QString)), this, SLOT(alarms_changed(QString)));

    connect(ui->fidTemp_hi1, SIGNAL(textChanged(QString)), this, SLOT(temps_changed(QString)));
    connect(ui->sampTemp_hi2, SIGNAL(textChanged(QString)), this, SLOT(temps_changed(QString)));
    connect(ui->methTemp_hi3, SIGNAL(textChanged(QString)), this, SLOT(temps_changed(QString)));
    connect(ui->colTemp_hi4, SIGNAL(textChanged(QString)), this, SLOT(temps_changed(QString)));

    connect(ui->airLine, SIGNAL(textChanged(QString)), this, SLOT(flows_changed(QString)));
    connect(ui->fuelLine, SIGNAL(textChanged(QString)), this, SLOT(flows_changed(QString)));
    connect(ui->sampleLine, SIGNAL(textChanged(QString)), this, SLOT(flows_changed(QString)));

    connect(ui->alarmLowSet0, SIGNAL(textChanged(QString)), this, SLOT(tempAlarms_changed(QString)));
    connect(ui->alarmHighSet2, SIGNAL(textChanged(QString)), this, SLOT(tempAlarms_changed(QString)));
    connect(ui->alarmLowSet1, SIGNAL(textChanged(QString)), this, SLOT(tempAlarms_changed(QString)));
    connect(ui->alarmHighSet3, SIGNAL(textChanged(QString)), this, SLOT(tempAlarms_changed(QString)));

    connect(ui->out_4ma, SIGNAL(textChanged(QString)), this, SLOT(output_changed(QString)));
    connect(ui->out_20ma, SIGNAL(textChanged(QString)), this, SLOT(output_changed(QString)));
    connect(ui->cal_zero_ppmSet, SIGNAL(textChanged(QString)), this, SLOT(output_changed(QString)));
    connect(ui->cal_span_ppmSet, SIGNAL(textChanged(QString)), this, SLOT(output_changed(QString)));
    connect(ui->statusLine, SIGNAL(textChanged(QString)), this, SLOT(status_changed(QString)));
    connect(ui->logInterval, SIGNAL(textChanged(QString)), this, SLOT(log_interval_changed(QString)));

    ui->mainPane->setCurrentWidget(ui->Homepage);

    bool meth, column;
    meth = appSettings->value("has_meth").toBool();
    column = appSettings->value("has_column").toBool();

    if (! meth)
    {
        ui->lblMethTemp->setFixedWidth(140);
        ui->lblMethTemp->setText("Not Configured");
        ui->methTemp_hi3->setVisible(false);
    }

    if (! column)
    {
        ui->lblColTemp->setFixedWidth(140);
        ui->lblColTemp->setText("Not Configured");
        ui->colTemp_hi4->setVisible(false);
    }

    if (! column && ! meth)
        ui->alarmMethButton->setVisible(false);

    init();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::init()
{
    READY = false;
    FLAME = false;
    printLog("Reading Settings, Version " + appSettings->value("settingsVer").toString());
    ui->lblCalDate->setText(appSettings->value("cal_date").toString());
    initPolarization();

    initDacs();
    setRS485Mode();
    initTemps();

    set_range(RANGE4_OFFSET);
    setSampleFlows(appSettings->value("basegas").toString());

    set_gain(appSettings->value("gain").toInt());
    init7176ADC();

    workThread->start();

    gpiotools_set(DETECTOR_GPIO_CHIP,LED2_OFFSET,0);
}

void MainWindow::updateClock()
{
    QDateTime dateTime = QDateTime::currentDateTime();
    QString time = dateTime.toString("h:mm AP");
    QString date = dateTime.toString("M/dd/yy");
    ui->lblTime->setText(time);
    ui->lblDate->setText(date);
}

void MainWindow::threadComplete(bool error, int errNum)
{

    if (error)
    {
        ui->busyWidget->show();
        ui->busyWidget->start();
        ui->btnCal->setEnabled(false);
        ui->btnRun->setEnabled(false);
        ui->statusLine->setEnabled(false);
        ui->btnIgnite->setEnabled(false);
        READY = false;
    }

    else if ((! error) && (READY == false))
    {
        ui->busyWidget->stop();
        ui->busyWidget->hide();

        ui->btnCal->setEnabled(true);
        ui->btnRun->setEnabled(true);
        ui->statusLine->setEnabled(true);
        ui->btnIgnite->setEnabled(true);
        READY = true;
    }

    updateStatus(errNum);
}

void MainWindow::labelIndicator(QLabel *label, bool state)
{
    QPixmap pixmap(20,20);
    pixmap.fill(QColor("transparent"));

    QPainter painter(&pixmap);
    if (state)
        painter.setBrush(QBrush(Qt::red));

    painter.drawEllipse(0,0,18,18);
    label->setPixmap(pixmap);
}

void MainWindow::on_backButton_clicked()
{
    if (pageList.count() > 1){
        pageList.removeLast();
        ui->mainPane->setCurrentIndex(pageList.takeLast());
    }
}

void MainWindow::on_homeButton_clicked()
{
    ui->mainPane->setCurrentWidget(ui->Homepage);
}

void MainWindow::on_mainPane_currentChanged(int currentIndex)
{
    pageList.append(currentIndex);
}

void MainWindow::on_btnTemps_clicked()
{
    ui->mainPane->setCurrentWidget(ui->tempsPage);
    tempsTimer->start(2000);
    readTemps();
}

void MainWindow::readTemps()
{
    bool meth, column;
    meth = appSettings->value("has_meth").toBool();
    column = appSettings->value("has_column").toBool();

    ui->fidTemp_hi1->setText(QString::number(workThread->fidSetTemp));
    ui->sampTemp_hi2->setText(QString::number(workThread->sampleSetTemp));

    if ( meth )
        ui->methTemp_hi3->setText(QString::number(readSetTemp(MODBUS_METH_ID)));

    if ( column )
        ui->colTemp_hi4->setText(QString::number(readSetTemp(MODBUS_COLUMN_ID)));

    setTempLabels();
}

void MainWindow::setTempLabels()
{
    bool meth, column;
    meth = appSettings->value("has_meth").toBool();
    column = appSettings->value("has_column").toBool();

    ui->lblFidTemp->setText(QString::number(workThread->fidCurTemp,'f',1));
    ui->lblSampleTemp->setText(QString::number(workThread->sampleCurTemp,'f',1));

    if ( meth )
        ui->lblMethTemp->setText(QString::number(readCurTemp(MODBUS_METH_ID),'f',1));

    if ( column )
        ui->lblColTemp->setText(QString::number(readCurTemp(MODBUS_COLUMN_ID),'f',1));

    if ( (ui->mainPane->currentIndex() != 2) && tempsTimer->isActive())
        tempsTimer->stop();
}

void MainWindow::on_btnFlows_clicked()
{
    QAbstractButton *selectedFuel;
    QString fuel = appSettings->value("fuel").toString();

    if ( fuel == "h2")
        selectedFuel = ui->btnH2;
    else
        selectedFuel = ui->btnFuelMix;

    selectedFuel->setStyleSheet("background-color:#62ca4a;color:white");

    ui->mainPane->setCurrentWidget(ui->fuelSelPage);
}

void MainWindow::on_btnH2_clicked()
{
    appSettings->setValue("fuel", "h2");

    ui->btnH2->setStyleSheet("background-color:#62ca4a;color:white");
    ui->btnFuelMix->setStyleSheet("background-color:#00FFFF;color:black");

    setBaseGas();
    ui->mainPane->setCurrentWidget(ui->flowSelPage);
}

void MainWindow::on_btnFuelMix_clicked()
{
    appSettings->setValue("fuel", "mix");
    ui->btnFuelMix->setStyleSheet("background-color:#62ca4a;color:white");
    ui->btnH2->setStyleSheet("background-color:#00FFFF;color:black");
    setBaseGas();
    ui->mainPane->setCurrentWidget(ui->flowSelPage);
}

void MainWindow::setBaseGas()
{
    QString base = appSettings->value("basegas").toString();
    QAbstractButton *selectedBase;
    ui->btnAirBase->setStyleSheet("background-color:#00FFFF;color:black");
    ui->btnO2Base->setStyleSheet("background-color:#00FFFF;color:black");
    ui->btnH2Base->setStyleSheet("background-color:#00FFFF;color:black");
    ui->btnOtherBase->setStyleSheet("background-color:#00FFFF;color:black");

    if( base == "Air")
        selectedBase = ui->btnAirBase;
    else if ( base == "O2" )
        selectedBase = ui->btnO2Base;
    else if ( base == "H2" )
        selectedBase = ui->btnH2Base;
    else
        selectedBase = ui->btnOtherBase;

    selectedBase->setStyleSheet("background-color:#62ca4a;color:white");
    flowsTimer->start(2000);
}

void MainWindow::on_btnO2Base_clicked()
{
    setSampleFlows("O2");
    setBaseGas();
    ui->mainPane->setCurrentWidget(ui->sampleFlowsPage);
}

void MainWindow::on_btnAirBase_clicked()
{
    setSampleFlows("Air");
    setBaseGas();
    ui->mainPane->setCurrentWidget(ui->sampleFlowsPage);
}

void MainWindow::on_btnH2Base_clicked()
{
    setSampleFlows("H2");
    setBaseGas();
    ui->mainPane->setCurrentWidget(ui->sampleFlowsPage);
}

void MainWindow::on_btnOtherBase_clicked()
{
    setSampleFlows("Other");
    setBaseGas();
    ui->mainPane->setCurrentWidget(ui->sampleFlowsPage);
}

void MainWindow::setSampleFlows(QString baseGas)
{
    appSettings->setValue("basegas",baseGas);

    QString fuel = appSettings->value("fuel").toString().toUpper();
    ui->lblBaseGas->setText(baseGas + " Sample Flows On " + fuel + " Fuel (SCCM)");
    QString base = fuel.toLower() + "_" + baseGas.toLower() + "_";
    QString air = base + "airSet";
    fuel = base + "fuelSet";
    QString sample = base + "sampSet";

    ui->airLine->setText(appSettings->value(air).toString());
    setFlowsDAC(appSettings->value(air).toInt(), MASS_AIR_OUT, "air", MASS_AIR_IN);

    ui->fuelLine->setText(appSettings->value(fuel).toString());
    setFlowsDAC(appSettings->value(fuel).toInt(), MASS_FUEL_OUT, "fuel", MASS_FUEL_IN);

    ui->sampleLine->setText(appSettings->value(sample).toString());
    setFlowsDAC(appSettings->value(sample).toInt(), MASS_SAMPLE_OUT, "samp", MASS_SAMPLE_IN);

    readFlows();
}

int MainWindow::setFlowsDAC(int flow, const char* channel, QString gas, const char* adcChannel)
{
    char* dev_dir_name;
    QString maxGas = gas +"Flow_hi";
    int max = appSettings->value(maxGas).toInt();

    if ( flow > max )
        flow = max;

    int dacVal = ((double)flow/max) * 65535;

    asprintf(&dev_dir_name, "%siio:device%d", IIO_DIR, MASS_FLOW_DAC_DEV);
    write_sysfs_int(channel,dev_dir_name, dacVal);

    int flowRead = (getMAXADC(adcChannel)/(double)4095) * max;

    if (flowRead < flow - 5 || flowRead > flow + 5)
    {
        //set error condition
        //qDebug() << "Flow out of range!";
    }
    return flowRead;
}

void MainWindow::readFlows()
{
    ui->lblAirRead->setText(QString::number(workThread->airFlow));
    ui->lblFuelRead->setText(QString::number(workThread->fuelFlow));
    ui->lblSampRead->setText(QString::number(workThread->sampleFlow));

    if ( (ui->mainPane->currentIndex() != 5) && flowsTimer->isActive())
        flowsTimer->stop();
}

void MainWindow::flows_changed(const QString &arg1)
{
    flowsTimer->stop();

    if ((arg1.length() > 0) && (arg1[arg1.length() - 1] == 'a'))
    {
        QString strVal = arg1;
        strVal.remove(strVal.length()-1,strVal.length());
        int value = strVal.toInt();

        QLineEdit *line = (QLineEdit *)sender();
        QString key = line->objectName().left(3);        

        QString base = appSettings->value("fuel").toString().toLower() + "_" + appSettings->value("basegas").toString().toLower() + "_";
        const char *channel, *adcChannel;
        QString gas;

        if (key == "air")
        {
            key = base + "airSet";
            channel = MASS_AIR_OUT;
            adcChannel = MASS_AIR_IN;
            gas = "air";
        }
        else if (key == "fue")
        {
            key = base + "fuelSet";
            channel = MASS_FUEL_OUT;
            adcChannel = MASS_FUEL_IN;
            gas = "fuel";
        }
        else
        {
            key = base + "sampSet";
            channel = MASS_SAMPLE_OUT;
            adcChannel = MASS_SAMPLE_IN;
            gas = "samp";
        }

        QString maxGas = gas +"Flow_hi";
        int max = appSettings->value(maxGas).toInt();

        if (value > max)
            value = max;
        strVal = QString::number(value);
        line->setText(strVal);

        setFlowsDAC(value, channel, gas, adcChannel);
        readFlows();
        set_setting(key,strVal);
    }
    flowsTimer->start(2000);
}

void MainWindow::on_btnAutoSetup_clicked()
{
    ui->mainPane->setCurrentWidget(ui->autoSetupPage);
}

void MainWindow::on_btnOutput_clicked()
{
    ui->out_4ma->setText(appSettings->value("out_4ma").toString());
    ui->out_20ma->setText(appSettings->value("out_20ma").toString());
    ui->mainPane->setCurrentWidget(ui->outputPage);
}

void MainWindow::output_changed(const QString &arg1)
{
    if ((arg1.length() > 0) && (arg1[arg1.length() - 1] == 'a'))
    {
        QString value = arg1;
        QLineEdit *line = (QLineEdit *)sender();

        value.remove(value.length()-1,value.length());
        line->setText(value);
        set_setting(line->objectName(),value);
    }
}

void MainWindow::on_btnCal_clicked()
{
    ui->mainPane->setCurrentWidget(ui->calPage);
}

void MainWindow::on_btnSetup_clicked()
{
    ui->mainPane->setCurrentWidget(ui->setupPage);
}


void MainWindow::on_alarmButton_clicked()
{
    ui->alarm1Set->setText(appSettings->value("alarm1Set").toString());
    ui->alarm2Set->setText(appSettings->value("alarm2Set").toString());

    ui->alarm1OnBox->setChecked(appSettings->value("alarm1").toBool());
    ui->alarm2OnBox->setChecked(appSettings->value("alarm2").toBool());
    ui->mainPane->setCurrentWidget(ui->ppmAlarmPage);
}

void MainWindow::on_btnRange_clicked()
{
    QAbstractButton *selectedRange;
    bool autoRange = appSettings->value("autoRange").toBool();

    /*if ( autoRange )
    {
        ui->btnRangeAuto->setDown(true);
        ui->btnRangeAuto->setChecked(true);
        ui->btnRangeAuto->setStyleSheet("background-color:#62ca4a;color:white");
    }
    else
    {*/
        int range = ui->rangeButtonGroup->checkedId();

        selectedRange = ui->rangeButtonGroup->button(range);
        selectedRange->setChecked(true);
        selectedRange->setDown(true);
        selectedRange->setStyleSheet("background-color:#62ca4a;color:white");
        selectedRange->setEnabled(false);
    //}

    ui->mainPane->setCurrentWidget(ui->rangeSetupPage);
}

void MainWindow::set_range(int id)
{
    int range;
    bool autoRange = appSettings->value("autoRange").toBool();
    QAbstractButton *selectedRange;

    /*qDebug() << "auto" << autoRange;
    if ( autoRange )
    {
        ui->btnRangeAuto->setChecked(true);
        ui->btnRangeAuto->setDown(true);
        ui->btnRangeAuto->setStyleSheet("background-color:#62ca4a;color:white");
    }
    else
    {*/
        selectedRange = ui->rangeButtonGroup->button(id);
        selectedRange->setChecked(true);
        selectedRange->setDown(true);
        selectedRange->setStyleSheet("background-color:#62ca4a;color:white");
        selectedRange->setEnabled(false);

        gpiotools_set(DETECTOR_GPIO_CHIP,id,0);
        for(int i=RANGE4_OFFSET; i<=RANGE1_OFFSET;i++){
            if ( i != id)
            {
                gpiotools_set(DETECTOR_GPIO_CHIP,i,1);
                selectedRange = ui->rangeButtonGroup->button(i);
                selectedRange->setChecked(false);
                selectedRange->setDown(false);
                selectedRange->setStyleSheet("background-color:#00FFFF;;color:black");
                selectedRange->setEnabled(true);
            }
        }

        range = (id - 26) * -1;
        appSettings->setValue("rangeSel",range);
        printLog("Setting Range to " + QString::number(range));
        appSettings->sync();
    //}
}

void MainWindow::on_btnRangeAuto_clicked()
{
   /*
    bool autoRange = s.value("autoRange").toBool();
    QAbstractButton *selectedRange;
    autoRange = !autoRange;

    for(int i=RANGE4_OFFSET; i<=RANGE1_OFFSET;i++)
    {
        gpiotools_set(DETECTOR_GPIO_CHIP,i,1);
        selectedRange = ui->rangeButtonGroup->button(i);
        selectedRange->setChecked(autoRange);
        selectedRange->setDown(autoRange);
        if ( !autoRange)
            selectedRange->setStyleSheet("background-color:#00FFFF;color:black");

        selectedRange->setEnabled(autoRange);
    }

    if ( autoRange)
    {
        ui->btnRangeAuto->setChecked(false);
        ui->btnRangeAuto->setDown(false);
        ui->btnRangeAuto->setStyleSheet("background-color:#00FFFF;color:black");
        int range = s.value("rangeSel").toInt();
        range = (range * -1) +26;
        //set_range(range);
    }
    else
    {
        qDebug() << autoRange;
        ui->btnRangeAuto->setChecked(true);
        ui->btnRangeAuto->setDown(true);
        ui->btnRangeAuto->setStyleSheet("background-color:#62ca4a;color:white");
    }

    appSettings.setValue("autoRange",autoRange);*/
}

void MainWindow::set_gain(int id)
{
    short bit0 = id & 1;
    short bit1 = id & (1 << 1) ? 1 : 0;
    gpiotools_set(DETECTOR_GPIO_CHIP,GAIN_0,bit0);
    gpiotools_set(DETECTOR_GPIO_CHIP,GAIN_1,bit1);
    printLog("Setting Gain to " + QString::number(qPow(10,id)));
}

void MainWindow::tempAlarms_changed(const QString &arg1)
{
    if ((arg1.length() > 0) && (arg1[arg1.length() - 1] == 'a'))
    {
        QLineEdit *line = (QLineEdit *)sender();
        QString key = line->objectName();
        QChar channel = key[key.length()-1];
        QString value = arg1;
        int id = channel.digitValue();
        int addr = 38;
        int mod_id = 1;

        value.remove(value.length()-1,value.length());

        if (id > 1 )
            addr = 36;

        if(id % 2)
            mod_id = 2;

        if (ui->alarm1Label->text() == "Meth")
            mod_id += 2;

        setRegister(addr,mod_id,value.toInt());
        readAlarms();
    }
}

void MainWindow::on_alarmFIDButton_clicked()
{
    ui->alarm1Label->setText("FID");
    ui->alarm2Label->setText("Sample");
    ui->alarmLowSet0->setVisible(true);
    ui->alarmLowSet1->setVisible(true);
    ui->alarmHighSet2->setVisible(true);
    ui->alarmHighSet3->setVisible(true);
    ui->alarm1LowLabel->setVisible(true);
    ui->alarm1HighLabel->setVisible(true);
    ui->alarm2LowLabel->setVisible(true);
    ui->alarm2HighLabel->setVisible(true);
    readAlarms();
    ui->mainPane->setCurrentWidget(ui->tempAlarmPage);
}

void MainWindow::on_alarmMethButton_clicked()
{
    bool meth, column;
    meth = appSettings->value("has_meth").toBool();
    column = appSettings->value("has_column").toBool();
    if (meth)
        ui->alarm1Label->setText("Meth");
    else
    {
        ui->alarm1Label->setText("");
        ui->alarmLowSet0->setVisible(false);
        ui->alarmHighSet2->setVisible(false);
        ui->alarm1LowLabel->setVisible(false);
        ui->alarm1HighLabel->setVisible(false);
    }

    if (column)
        ui->alarm2Label->setText("Column");
    else
    {
        ui->alarm2Label->setText("");
        ui->alarmLowSet1->setVisible(false);
        ui->alarmHighSet3->setVisible(false);
        ui->alarm2LowLabel->setVisible(false);
        ui->alarm2HighLabel->setVisible(false);
    }
    readAlarms();
    ui->mainPane->setCurrentWidget(ui->tempAlarmPage);
}

void MainWindow::readAlarms()
{
    int addr = MODBUS_FID_ID;
    if (ui->alarm1Label->text() == "Meth"){
        addr = MODBUS_METH_ID;
    }
    uint16_t temp_reg[2];
    bool alarm1, alarm2;

    readRegister(38, addr, temp_reg);
    ui->alarmLowSet0->setText(QString::number(temp_reg[0]));

    readRegister(36, addr, temp_reg);
    ui->alarmHighSet2->setText(QString::number(temp_reg[0]));

    readRegister(4003, addr, temp_reg);
    alarm1 = temp_reg[0] & 0x10;
    alarm2 = temp_reg[0] & 0x20;
    labelIndicator(ui->alarm1LowLabel,alarm1);
    labelIndicator(ui->alarm1HighLabel,alarm2);

    readRegister(38, (addr+1), temp_reg);
    ui->alarmLowSet1->setText(QString::number(temp_reg[0]));

    readRegister(36, (addr+1), temp_reg);
    ui->alarmHighSet3->setText(QString::number(temp_reg[0]));

    readRegister(4003, (addr+1), temp_reg);
    alarm1 = temp_reg[0] & 0x10;
    alarm2 = temp_reg[0] & 0x20;
    labelIndicator(ui->alarm2LowLabel,alarm1);
    labelIndicator(ui->alarm2HighLabel,alarm2);
}

void MainWindow::on_btnRun_clicked()
{    
    runTimerTimeout();
    ui->mainPane->setCurrentWidget(ui->runPage);
    runTimer->start(1000);
}

void MainWindow::runTimerTimeout()
{
    int reading = read7176ADC();
    double voltage = (reading * (2.5/8388607)) - 2.5;
    voltage -= ADC_OFFSET;
    QString displayText;
    displayText.sprintf("%.5f",voltage);
    ui->runLCD->display(displayText);

    if ( (ui->mainPane->currentIndex() != 14) && runTimer->isActive())
        runTimer->stop();
}

void MainWindow::on_btnIgnite_clicked()
{    
    ui->busyWidget->start();
    ui->busyWidget->show();

    int igniteOnTime = appSettings->value("ignite_on_sec").toInt();
    QTimer::singleShot(igniteOnTime * 1000, this, SLOT(fid_timeout()));
    gpiotools_set(DETECTOR_GPIO_CHIP,IGNITE_OFFSET,1);
}

void MainWindow::fid_timeout()
{
    ui->busyWidget->stop();
    ui->busyWidget->hide();
    gpiotools_set(DETECTOR_GPIO_CHIP,IGNITE_OFFSET,0);
    qDebug() << "ignite off";
}

void MainWindow::on_alarm1OnBox_clicked()
{
    appSettings->setValue("alarm1",ui->alarm1OnBox->isChecked());
}

void MainWindow::on_alarm2OnBox_clicked()
{
    appSettings->setValue("alarm2",ui->alarm2OnBox->isChecked());
}

void MainWindow::temps_changed(const QString &arg1)
{

    if ((arg1.length() > 0) && (arg1[arg1.length() - 1] == 'a'))
    {
        QLineEdit *line = (QLineEdit *)sender();
        QString key = line->objectName();
        QChar channel = key[key.length()-1];
        QString value = arg1;
        key.remove(key.length()-1,key.length());

        value.remove(value.length()-1,value.length());
        line->setText(value);
        set_setting(key, value);
        setRegister(1001,channel.digitValue(),(value.toInt() *10));
    }
}

void MainWindow::alarms_changed(const QString &arg1)
{

    if ((arg1.length() > 0) && (arg1[arg1.length() - 1] == 'a'))
    {
        QString value = arg1;

        value.remove(value.length()-1,value.length());
        QLineEdit *line = (QLineEdit *)sender();
        line->setText(value);
        set_setting(line->objectName(), value);
    }
}

void MainWindow::status_changed(const QString &arg1)
{
    if ((arg1.length() > 0) && (arg1[arg1.length() - 1] == 'a'))
    {
        QString value = arg1;

        value.remove(value.length()-1,value.length());
        QLineEdit *line = (QLineEdit *)sender();
        line->setText(value);
        updateStatus(value.toInt());
    }
}

void MainWindow::updateStatus(int code)
{
    ui->statusLabel->setText("OK");
    switch (code)
    {
    case 0:
        if (FLAME)
            labelIndicator(ui->fidLabel,false);
        ui->statusLabel->setText("Not Ready");
        FLAME = false;
        break;
    case 1:
        ui->statusLabel->setText("Zero Gas");
        switchSampleGas(ZERO_GAS_OFFSET);
        break;
    case 2:
        ui->statusLabel->setText("Span Gas");
        switchSampleGas(SPAN_GAS_OFFSET);
        break;
    case 3:
        ui->statusLabel->setText("Alarms Disabled");
        break;
    case 5:
        ui->statusLabel->setText("Updating to");
        break;
    }

    if (code & (1 << 2))
    {
        ui->statusLabel->setText("Temps Not Ready");
    }

    if (code & (1 << 3))
    {
        if (! FLAME)
            labelIndicator(ui->fidLabel,true);
        FLAME = true;
    }
    else
    {
        if (FLAME)
            labelIndicator(ui->fidLabel,false);
        FLAME = false;
    }
}

void MainWindow::set_setting(QString setting, QString value)
{
    appSettings->setValue(setting,value);
    appSettings->sync();
}

void MainWindow::printLog(const QString message)
{
    if(appSettings->value("log").toBool())
    {
        QString dMessage = QDateTime::currentDateTime().toString("M/dd/yy hh:mm:ss: ") + message;
        if(appSettings->value("con_log").toBool())
            qDebug() << qPrintable(dMessage);
        /* write message to file
        if(s.value("usb_log").toBool())
        */
    }
}

void MainWindow::switchSampleGas(int gas)
{
    int delay = appSettings->value("gas_switch_sec").toInt();
    gpiotools_set(DETECTOR_GPIO_CHIP,ZERO_GAS_OFFSET,0);
    gpiotools_set(DETECTOR_GPIO_CHIP,SPAN_GAS_OFFSET,0);
    gpiotools_set(DETECTOR_GPIO_CHIP,SAMPLE_GAS_OFFSET,0);

    mydelay(delay*1000);

    if ( gas > 0)
        gpiotools_set(DETECTOR_GPIO_CHIP,gas,1);
}

/*void MainWindow::readSettings()
{
    LOG = s.value("log").toBool();
    CON_LOG = s.value("con_log").toBool();
    USB_LOG = s.value("usb_log").toBool();
    //int range = s.value("rangeSel").toInt();
    //range = (range * -1) + 26;
    //set_range(range);
}*/

void MainWindow::on_btnZeroGas_clicked()
{
    ui->cal_zero_ppmSet->setText(appSettings->value("cal_zero_ppmSet").toString());
    ui->mainPane->setCurrentWidget(ui->zeroGasPage);
}

void MainWindow::on_btnSpanGas_clicked()
{
    ui->cal_span_ppmSet->setText(appSettings->value("cal_span_ppmSet").toString());
    ui->mainPane->setCurrentWidget(ui->spanGasPage);
}

void MainWindow::on_btnZeroZero_clicked()
{
    int delay = appSettings->value("cal_stable_sec").toInt();
    printLog("Zero Calibration");
    QDate calDate = QDate::currentDate();
    appSettings->setValue("cal_date", calDate.toString("M/dd/yy"));
    ui->lblCalDate->setText(appSettings->value("cal_date").toString());
    set_range(RANGE1_OFFSET);
    switchSampleGas(ZERO_GAS_OFFSET);

    mydelay(delay*1000);
    int reading = read7176ADC();
    double voltage = (reading * (2.5/8388607)) - 2.5;
    voltage -= ADC_OFFSET;

    qDebug() << voltage;
}

void MainWindow::on_btnZeroSpan_clicked()
{
    QDate calDate = QDate::currentDate();
    appSettings->setValue("cal_date", calDate.toString("M/dd/yy"));
    ui->lblCalDate->setText(appSettings->value("cal_date").toString());
    switchSampleGas(SPAN_GAS_OFFSET);
}

void MainWindow::mydelay( int millisecondsToWait )
{
    ui->busyWidget->start();
    ui->busyWidget->show();

    QTime dieTime = QTime::currentTime().addMSecs( millisecondsToWait );
    while( QTime::currentTime() < dieTime )
    {
        QCoreApplication::processEvents( QEventLoop::AllEvents, 100 );
    }

    ui->busyWidget->stop();
    ui->busyWidget->hide();
}
