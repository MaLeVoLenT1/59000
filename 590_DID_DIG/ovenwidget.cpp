#include "ovenwidget.h"
#include "mainwindow.h"//modbus_t* m_modbus;1/8/2014
#include "ui_ovenwidget.h"
#include "ovencontrol.h"
#include <QDebug>
#include <QApplication>
#include "modbus.h"
#include "modbus-private.h"
#include "modbus-rtu.h"
#include "qextserialenumerator.h"
#include "rampmonitor.h"
#include "event_io.h"
#include "valvecontrol.h"
#include "readflow.h"
#include "detconfigure.h"

#include <QtGui>
#include <QAction>
#include <errno.h>
#include <QDebug>
#include <stdio.h>
#include <stdlib.h>

#include "ui_rampoven.h" //{}class DetectorWidget : public QWidget

//modbus_t* m_modbus;// temporary 1/8/14

OvenWidget::OvenWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OvenWidget)
{

	ui->setupUi(this);

//	MainWindow oven;
//	qDebug() << "GOT IN oven widget";
    ui->exteventsButton->setDisabled(1);
    ui->heatOffCheckBox->setChecked(1);

    ui->ovenSetTempSpinBox->setRange(-1,450);

    connect(ui->tempCheckBox, SIGNAL(clicked(bool)),ui->ovenSetTempSpinBox,SLOT(setEnabled(bool)));
    ui->tempCheckBox->setChecked(true);//false

    ui->ovenRampTempRadio->setChecked(true);
    connect(ui->ovenRampTempRadio, SIGNAL(toggled(bool)),this,SLOT(rampTempEnabler(bool)));
    ui->ovenIsoTempRadio->setChecked(true);

//    ui->ovenActTempLCD->display(oven.readRecipeValue(1, 0));
//    oven.delay(1000);
}

OvenWidget::~OvenWidget()
{
    delete ui;
}

void OvenWidget::rampTempEnabler(bool isEnabled)
{
//	MainWindow mw_monitor;
//	double setp;
//	int in_setp;

//	setp = mw_monitor.readRecipeValue(0x01, 1);// 1/7/2014

//	in_setp = setp;

	if (isEnabled)
    {
		ui->ovenSetTempSpinBox->setEnabled(true);
        ui->ovenSetTempSpinBox->setValue(25);
//        ui->ovenSetTempSpinBox->setEnabled(true); // was commented out and false

        ui->tempCheckBox->setChecked(true);//false
        ui->tempCheckBox->setCheckable(false);

        ui->ovenRampTempButton->setEnabled(true);
    }
    else
    {
        ui->ovenSetTempSpinBox->setEnabled(true);
        ui->ovenSetTempSpinBox->setValue(25);
//        ui->ovenSetTempSpinBox->setEnabled(true);//false

        ui->tempCheckBox->setCheckable(false);// true
        ui->tempCheckBox->setChecked(true);// false

        ui->ovenRampTempButton->setEnabled(false);// false
    }

}

void OvenWidget::setIdealTemp(double tempSetpoint)
{
    ui->tempSetTestLabel->setText("(" + QString::number(tempSetpoint) + " , " +
                                  QString::number(m_tempSlaveID) + ")");

 //   emit tempSetPoint(m_tempSlaveID, tempSetpoint);// removed for test 7/29/2014
}

void OvenWidget::setActualTemp(int slaveID, int actualTemp)
{
    if (slaveID == m_tempSlaveID)
    {
    m_actualTemp = actualTemp;
    ui->ovenActTempLCD->display(m_actualTemp);// int
    ui->ovenActTempLCD->display(m_actualTemp);// double wtr
    }
}

void OvenWidget::setLabels(QString nameLabel, QString typeLabel)
{
	nameLabel = "test";
	typeLabel = "test1";
//    ui->nameLabel->setText("<font size=\"5\"><b><u>" + nameLabel + " Settings </u></b></font>");
//    ui->typeLabel->setText("<font void sendRampParameters(void)void sendRampParameters(void)size=\"4\"><b><u>(" + typeLabel + ")</u></b></font>");
}

void OvenWidget::setIsHeated(bool isHeated)
{
    ui->tempCheckBox->setEnabled(isHeated);
    ui->tempCheckBox->setChecked(true);//false
}

void OvenWidget::setConnectsMinsMaxes(ColumnObject *column)
{
    connect(ui->ovenSetTempSpinBox,SIGNAL(valueChanged(double)), column, SLOT(setIdealTemp(double)));
    connect(ui->ovenSetTempSpinBox, SIGNAL(valueChanged(double)), this, SLOT(setIdealTemp(double)));

    QString colType = column->getColumnType();

    if (colType == "Capillary")
    {
        ui->ovenSetTempSpinBox->setRange(-1,400);//100

    }
    else if (colType == "Packed Metal")
    {
        ui->ovenSetTempSpinBox->setRange(-1,400);//200

    }
    else if (colType == "Packed Glass")
    {
        ui->ovenSetTempSpinBox->setRange(-1,400);//300

    }
    else if (colType == "None")
    {
        ui->ovenSetTempSpinBox->setRange(-1,400);//0,0
        ui->tempCheckBox->setCheckable(false);
    };

}

void OvenWidget::setSlaveIDs(int tempSlaveID)
{
    m_tempSlaveID = tempSlaveID;
}

void OvenWidget::on_actualTempButton_clicked()
{
    emit tempProcessValue(m_tempSlaveID);
}

void OvenWidget::manualWriteTemp(void)
{
	int tempSetpoint;

	tempSetpoint = ui->ovenSetTempSpinBox->value();
	emit tempSetPoint(m_tempSlaveID, tempSetpoint);
}

void OvenWidget::rampTempButton(void)//slot for on_ovenRampTempButton
{
	MainWindow mwramptbutton;
	OvenControl ocramptbutton;
//	int addr;
	int slaveID;
//	int valu;
//	long sp;
//	double test;
//	double value;

	slaveID = 1;
//	uint16_t* dest;
//	uint16_t * dest16 = (uint16_t *) dest;//???
//	modbus_t *ctx;
	OvenControl ovenConfig(this);// Crerate a dialog
		if (ovenConfig.exec()) {
			qDebug() << "GOT IN rampTEMPButton";
		}

}
void OvenWidget::rampTempMonitor(void)
{
	rampMonitor monitor(this);// Crerate a dialog
			if (monitor.exec()) {
				qDebug() << "GOT IN ramp monitor Button";
			}
}
void OvenWidget::extEvent(void)
{
	event_io eEvent(this);// Crerate a dialog
			if (eEvent.exec()) {
				qDebug() << "GOT IN External Event Button";
			}
}

void OvenWidget::owValveControl(void)
{
	valveControl owValve(this);// Crerate a dialog
			if (owValve.exec()) {
				qDebug() << "GOT IN Valve Control Button";
			}
}

void OvenWidget::owReadFlow(void)
{
	readFlow owReadFlw(this);// Crerate a dialog
			if (owReadFlw.exec()) {
				qDebug() << "GOT IN Read Flow Button OW";
			}
}

/*void OvenWidget::readZoneRegParameters(modbus_t *ctx, int addr, int nb, uint16_t *dest)//double*
{
	int slaveID = 1;// change to suit 2 control devices

	if( ow_m_modbus == NULL )//m_modbus 1/8/14
    {
        qDebug() << "WHOOPS!";
//            return 0;// added 0 to satisfy reurn. Check on valid return values
    }

    double tempPV[32] = {0};
//		        const int addr = 0;
    int num;
    int ret = -1;

    num = nb;
//    uint8_t dest[1024];
    uint16_t * dest16 = (uint16_t *) dest;//wtr removed 1-21-13 for test was removed above

    memset( dest, 0, 1024 );

    bool is16Bit = false;
//    bool writeAccess = false;

    modbus_set_slave(ow_m_modbus, slaveID);//( m_modbus, slaveID );1/8/14

    ret = modbus_read_registers( ow_m_modbus, addr, num, dest16 );//m_modbus 1/8/14
    is16Bit = true;

    if( ret == num  )
    {
        for( int i = 0; i < num; ++i )
        {
                int data = is16Bit ? dest16[i] : dest[i];
                tempPV[i] = data;
        }
        qDebug() << "process value successful READ";
    }
    else
    {
            if( ret < 0 )
            {
                    if(
#ifdef WIN32
                                    errno == WSAETIMEDOUT ||
#endif
                                    errno == EIO
		                                                                                                                                        )
                    {
                            QMessageBox::critical( this, tr( "I/O error" ),
                                    tr( "I/O error: did not receive any data from slave." ) );
                    }
                    else
                    {
                            QMessageBox::critical( this, tr( "Protocol error" ),
                                    tr( "Slave threw exception \"%1\" or "
                                            "function not implemented." ).
                                                            arg( modbus_strerror( errno ) ) );
                    }
            }
            else
            {
                    QMessageBox::critical( this, tr( "Protocol error" ),
                            tr( "Number of registers returned does not "
                                    "match number of registers "
                                                    "requested!" ) );
            }
    }

	//	    emit tempProcessValue(slaveID, tempPV);
//    return tempPV;// added 0 to satisfy reurn. Check on valid return values
}*/
//modbus_t *ctx;//removed 22015 - this was acidental, most likely
/*void OvenWidget::ReadZoneRampSoakParameters(void)//( m_modbus, slaveID )
{
//	int i;// slaveID is temporary - pass this variable when Funct is verified
//	double valu;
//	double* recipe_option;
//	double* ss_ramp_time;
//	double* termination_state;
//	double* recycle_number;
//	double* ramp_times;
//	double* ramp_events;
//	double* soak_levels;
//	double* soak_times;
//	double* soak_events;
//	uint16_t *dest;
//	float holdback;
//	double resume_from_pf;//bool

    qDebug() << "GOT IN!!! ReadZoneRampSoakParameters";

//	uint16_t * dest16 = (uint16_t *) dest;
//    memset( dest, 0, 1024 );
}*/

void OvenWidget::sendRampParameters(void)
{
	qDebug() << "GOT IN!!! Send OVEN PARAMETERS";
}

/*void OvenWidget::writeZoneRegParameters(modbus_t *ctx, int addr, int nb, uint16_t *dest)//double*
{

}*/
void OvenWidget::ovenHeaterOnOff(bool state){

	if (state == 0){
		ui->heatOffCheckBox->setChecked(1);
		ui->heatOnCheckBox->setChecked(0);
	}
	if (state == 1){
		ui->heatOnCheckBox->setChecked(1);
		ui->heatOffCheckBox->setChecked(0);
	}
}

void OvenWidget::ovenHeaterOff(void){
	MainWindow oven;

	oven.writeRecipeSetpoint(0x01, 4004, 2);// go to standby
	ovenHeaterOnOff(0);// uncheck box
	//    oven.delay(1000);
}
void OvenWidget::ovenHeaterOn(void){
	MainWindow oven;
	oven.writeRecipeSetpoint(0x01, 4004, 3);// go to normal (Automatic
	ovenHeaterOnOff(1);// check box
	//    oven.delay(1000);
}
