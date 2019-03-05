#include "injectorwidget.h"
#include "ui_injectorwidget.h"

InjectorWidget::InjectorWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InjectorWidget)
{
    ui->setupUi(this);

    ui->injectorLabel->setVisible(true);//false
    ui->injSetTempSpinBox->setEnabled(true);//false
    ui->injSetTempSpinBox->setRange(0,450);

//    connect(ui->injSetTempSpinBox,SIGNAL(valueChanged(double)),ui->injActTempLCD,SLOT(display(double)));
    connect(ui->tempCheckBox, SIGNAL(clicked(bool)),ui->injSetTempSpinBox,SLOT(setEnabled(bool)));

}

InjectorWidget::~InjectorWidget()
{
    delete ui;
}


void InjectorWidget::setIdealTemp(double tempSetpoint)
{
    ui->tempSetTestLabel->setText("(" + QString::number(tempSetpoint) + " , " +
                                  QString::number(m_tempSlaveID) + ")");

 //   emit tempSetPoint(m_tempSlaveID, tempSetpoint);
}

void InjectorWidget::setActualTemp(int slaveID, int actualTemp)
{
    if (slaveID == m_tempSlaveID)
    {
    m_actualTemp = actualTemp;
    ui->injActTempLCD->display(m_actualTemp);
    }
}

void InjectorWidget::setLabels(QString nameLabel, QString typeLabel)
{
    ui->nameLabel->setText("<font size=\"5\"><b><u>" + nameLabel + " Settings </u></b></font>");
    ui->typeLabel->setText("<font size=\"4\"><b><u>(" + typeLabel + ")</u></b></font>");
}

void InjectorWidget::setIsHeated(bool isHeated)
{
    ui->tempCheckBox->setEnabled(isHeated);
    ui->tempCheckBox->setChecked(true);//false
}

void InjectorWidget::setConnectsMinsMaxes(InjectorObject *injector)
{
    connect(ui->injSetTempSpinBox,SIGNAL(valueChanged(double)), injector, SLOT(setIdealTemp(double)));
    connect(ui->injSetTempSpinBox, SIGNAL(valueChanged(double)), this, SLOT(setIdealTemp(double)));

    QString injType = injector->getInjectorType();

    if (injType == "")
    {
        ui->injSetTempSpinBox->setRange(0,849);

    }
    else if (injType == "None")
    {
        ui->injSetTempSpinBox->setRange(0,0);
        ui->tempCheckBox->setCheckable(false);
    };

}

void InjectorWidget::setSlaveIDs(int tempSlaveID)
{
    m_tempSlaveID = tempSlaveID;
}

void InjectorWidget::on_actualTempButton_clicked()
{
    emit tempProcessValue(m_tempSlaveID);
}
void InjectorWidget::manualWriteTemp(void)
{
	int tempSetpoint;

	tempSetpoint = ui->injSetTempSpinBox->value();
	emit tempSetPoint(m_tempSlaveID, tempSetpoint);
}
void InjectorWidget::readPressureInj(void)
{
	readPressure readPres(this);// Crerate a dialog
			if (readPres.exec()) {
//				qDebug() << "Called read Pressure dialog";
			}
}
