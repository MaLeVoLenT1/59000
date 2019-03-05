#include "ovencontrol.h"
#include "ovenwidget.h"
#include <QDebug>
#include <QApplication>
#include <QKeyEvent>

#include "modbus.h"
#include "modbus-private.h"
#include "qextserialenumerator.h"
#include <QtGui>
#include <QAction>
#include <errno.h>

#include <stdio.h>
#include <stdlib.h>
//#include<string>
#include "mainwindow.h"//1/11/14
#include "part.h"//1/8/14
#include "detectorwidget.h"
#include <QProcess>
#include "event_io.h"
#include "rampoven_comm.h"
#include "inputparam.h"
#include "pleasewait.h"
#include "runrecipeerror.h"
#include "rampmonitor.h"
#include "rampoven_displaypar.h"
#include "rampoven_zone_damping.h"
#include "rampoven_output_parameter.h"
#include "rampoven_zone_control.h"
#include "rampoven_zone_supr_par.h"
#include "rampoven_cal_zero.h"
#include "rampoven_board_secruity.h"
#include "rampoven_zone_alarm_para.h"
#include "rampoven_registers.h"
#include "setinittemp.h"
#include "readflow.h"
#include "valvecontrol.h"

extern MainWindow* globalMainWin;
extern unsigned int i2c_slaveAddr;//6-30-2014
extern bool stopMeFlow;
extern bool TRIGGER;
#define ODT 1
// 50
//extern bool m_superUser;// from mainWindow

double TEST_GLOBAL_OC;//
int TEST_GLOBAL_OC1;//
//bool donotconnectWrite;

//modbus_t* m_modbus;// duplicate from mainwindow.h for use with comm modbus ??//7

OvenControl::OvenControl(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);
//	MainWindow oc;

//	oc.changeSerialPort(2);

/*	if(m_superUser == false){
		qDebug() << "super user false";
	}
	if(m_superUser == true){
		qDebug() << "super user true";
	}*/

////////////////////////////////////////////////// Athena Control Buttons
	ui.boardSecurityButton->setDisabled(1);
	ui.commParametersButton->setDisabled(1);
	ui.zoneAlarmButton->setDisabled(1);
	ui.zoneAutotuneButton->setDisabled(1);
	ui.zoneCalibrationButton->setDisabled(1);
	ui.zoneControlButton->setDisabled(1);
	ui.zoneDisplayButton->setDisabled(1);
	ui.zoneInputParametersButton->setDisabled(1);
	ui.zoneOutputButton->setDisabled(1);
	ui.zoneProcessValueButton->setDisabled(1);
	ui.zoneSupervisorButton->setDisabled(1);
///////////////////////////////////////////////////////////////////////

//	ui.slaveIdSpinBox->setValue(1.0);
//	connect(ui.slaveIdSpinBox, SIGNAL(valueChanged(double)), this, SLOT(test_slotwtrj(double)));
//	connect(ui.closeButton, SIGNAL(clicked()),this, SLOT(test_slotwtrj2(void)));// test remove (works)
//	connect(ui.getCurrentButton, SIGNAL(clicked()), this, SLOT(ReadZoneRampSoakParameters()));
	connect(ui.slaveIdSpinBox, SIGNAL(valueChanged(double)), this, SLOT(setSlaveIdD(double)));
	//monitorRun
	//connect(ui.runCurrentButton, SIGNAL(released()), this, SLOT(monitorRun()));
}

OvenControl::~OvenControl()
{

}
void OvenControl::keyReleaseEvent(QKeyEvent *event)
{
	readFlow owReadFl;
	event_io setRdy;

//	unsigned int tempSid;

	switch (event->key()){
		case Qt::Key_F1:{
			ui.writeCurrentButton->click();
			qDebug() << "Released F1 Key";
			break;
		}
		case Qt::Key_F2:{
			ui.runCurrentButton->click();
			qDebug() << "Released F2 Key";
			break;
		}
		case Qt::Key_F3:{
			ui.getCurrentButton->click();
			qDebug() << "Released F3 Key";
			break;
		}
		case Qt::Key_F4:{
			ui.closeButton->click();
			qDebug() << "Released F4 Key";
			break;
		}
		case Qt::Key_F5:{
			qDebug() << "Released F5 Key (DET 1)";
//			ui->partStack->setCurrentWidget(currentWidgetList[1]);
			break;
		}
		case Qt::Key_F6:{
			qDebug() << "Released F6 Key (Oven)";
//			ui->partStack->setCurrentWidget(currentWidgetList[0]);
			break;
		}
		case Qt::Key_F7:{// Read FLow
			stopMeFlow = 1;
			owReadFl.flowMeter();
			qDebug() << "Released F7 Key (Flow)";
			break;
		}
		case Qt::Key_F8:{
			qDebug() << "Released F8 Key (Det 2)";
//			ui->partStack->setCurrentWidget(currentWidgetList[2]);
			break;
		}
		case Qt::Key_F9:{
//			owValves.owValveControl();
			qDebug() << "Released F9 Key (Valve)";
			break;
		}
		case Qt::Key_F10:{
			qDebug() << "Released F10 Key (Inj Port)";
//			ui->partStack->setCurrentWidget(currentWidgetList[3]);
			break;
		}
		default:{//
			break;
		}
	}
}

void OvenControl::abortRun(void)
{
	rampMonitor abortRn;

	abortRn.monitorabort();
	QCursor crr;
	crr.setPos(2, 2);
}

void OvenControl::setSlaveIdD(double valu)// Set Global Slave Id
{
	i2c_slaveAddr = valu;
}

void OvenControl::startMonitor(void)
{
	rampMonitor startMon;
	startMon.monitorRun();
	QCursor crr;
	crr.setPos(2, 2);
}

void OvenControl::runMonitor(void)
{
	rampMonitor runM(this);// Crerate a dialog
			if (runM.exec()) {

				QTimer timer;
				rampMonitor rM;

				QTime startTime(0,0,0,0);

				QTimer timercnt;
				timer.start(1000);//time out every second and emit timeout
				connect(&timercnt, SIGNAL(timeout()), this, SLOT(slotTimeout()));
			}// 1st if end
}
void OvenControl::r0SetInitTemp(void)
{
	setinittemp rosit(this);// Crerate a dialog
			if (rosit.exec()) {

			}
}
void OvenControl::runrecipe_error(void)
{
/*	runRecipeerror error_ro(this);// Crerate a dialog
			if (error_ro.exec()) {
//				qDebug() << "Incorrect value for Run Recipe (Button connect)";
			}*/
}

void OvenControl::outputparam(void)
{
	rampoven_output_parameter roOutPar(this);// Crerate a dialog
		if (roOutPar.exec()) {
//			qDebug() << "GOT IN RO Output Parameter Button";
		}
}

void OvenControl::inputparam(void)
{
	inputParam inputpar(this);// Crerate a dialog
		if (inputpar.exec()) {
//			qDebug() << "GOT IN RO Input Parameter Button";
		}
}
void OvenControl::zCalibrate(void)
{
/*	rampoven_Calibration_Zero zCal(this);// Crerate a dialog
		if (zCal.exec()) {
//			qDebug() << "GOT IN RO zone Calibration Parameter Button";
		}*/
}

void OvenControl::zSupar(void)
{
	rampoven_Zone_Supr_Par zoneSupar(this);// Crerate a dialog
		if (zoneSupar.exec()) {
//			qDebug() << "GOT IN zone supervisory Parameter Button";
		}
}

void OvenControl::zBoardSecurity(void)
{
	rampoven_board_Secruity zBSecurity(this);// Crerate a dialog
		if (zBSecurity.exec()) {
//			qDebug() << "GOT IN zone Security Parameter Button";
		}
}

void OvenControl::zAlarmPar(void)
{
	rampoven_Zone_Alarm_para zapar(this);// Crerate a dialog
		if (zapar.exec()) {
//			qDebug() << "GOT IN zone Alarm Parameter Button";
		}
}

void OvenControl::zCalPar(void)
{
	rampoven_cal_zero zcal(this);// Crerate a dialog
		if (zcal.exec()) {
//			qDebug() << "GOT IN zone Cal Parameter Button";
		}
}

void OvenControl::zoneControl(void)
{
	rampoven_zone_control zoneC(this);// Crerate a dialog
		if (zoneC.exec()) {
//			qDebug() << "GOT IN Zone control Parameter Button";
		}
}

void OvenControl::zoneRegisters(void)
{
	rampoven_Registers zoneReg(this);// Crerate a dialog
		if (zoneReg.exec()) {
//			qDebug() << "GOT IN Zone Registers Parameter Button";
		}
}

void OvenControl::comm(void)
{
	Rampoven_comm roComm(this);// Crerate a dialog
			if (roComm.exec()) {
//				qDebug() << "GOT IN RO COMM Button";
			}
}
void OvenControl::zoneDisplay(void)
{
	rampoven_displaypar roZD(this);// Crerate a dialog
			if (roZD.exec()) {
//				qDebug() << "GOT IN RO Zone Display Button";
			}
}

void OvenControl::ro_rzDamping(void)
{
	rampoven_Zone_Damping ro_rzDamping(this);// Crerate a dialog
			if (ro_rzDamping.exec()) {
//				qDebug() << "GOT IN Zone damping Button";
			}
}

void OvenControl::run_recipe(void)
{
	MainWindow writeEM;
	event_io setRdy;
//	valveControl tgr;

	int addr;
	double valu;
//	unsigned int tempSid;

	addr = 4012;// recipe options
	if(writeEM.readRecipeValue(i2c_slaveAddr, 4012) >= 1){
		valu = 5;
		addr = 4004;// Run and resume
		writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//		qDebug() << "Run Started";
	}else{
		OvenControl::runrecipe_error();
//		qDebug() << "put run recipe error box";
	}

	QCursor crr;
	crr.setPos(2, 2);
}
void OvenControl::write_recipe(void)
{
	MainWindow writeEM;
	int slaveID, addr;
	double valu;
	QString busyState;// 9-5-2014
	QString notBusyState;

	busyState = "BUSY...";// 9-5-2014
	notBusyState = "DONE...";

	ui.busyLineEdit->setText(busyState);

	slaveID = 1;
	addr = 4046;// Level 2 Recycle Number 0 to 9999
	valu = OvenControl::recycle_numberValue();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("RN SLOT entered %f", valu);

	slaveID = 1;
	addr = 4047;// Level 2 Termination State 0 to 9999
	valu = OvenControl::termination_stateValue();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("TS SLOT entered %f", valu);

	addr = 4012;//
	valu = OvenControl::recipeOptionsValue();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("RO SLOT entered %f", valu);

	addr = 4013;// Level 2 Single Step 0 to 9999
	valu = OvenControl::ss_ramp_timeValue();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("SS SLOT entered %f", valu);

	addr = 24;// Level 2 Holdback 0 to 9999
	valu = OvenControl::holdbackValue();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("HB SLOT entered %f", valu);

	addr = 4048;// Level 2 Resume From Power Off 0 to 9999
	valu = OvenControl::resume_from_pfValue();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("RP SLOT entered %f", valu);

	addr = 4014;// Level 1 Ramp Time 0 to 9999
	valu = OvenControl::ramp_times_1_value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("level 1_RT SLOT entered %f", valu);

	addr = 4015;// Level 2 Ramp Time 0 to 9999
	valu = OvenControl::ramp_times_2_value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("level 2_RT SLOT entered %f", valu);

	addr = 4016;// Level 3 Ramp Time 0 to 9999
	valu = OvenControl::ramp_times_3_value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("level 3_RT SLOT entered %f", valu);

	addr = 4017;// Level 4 Ramp Time 0 to 9999
	valu = OvenControl::ramp_times_4_value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("level 4_RT SLOT entered %f", valu);

	addr = 4018;// Level 5 Ramp Time 0 to 9999
	valu = OvenControl::ramp_times_5_value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("level 5_RT SLOT entered %f", valu);

	addr = 4019;// Level 6 Ramp Time 0 to 9999
	valu = OvenControl::ramp_times_6_value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("level 6_RT SLOT entered %f", valu);

	addr = 4020;// Level 7 Ramp Time 0 to 9999
	valu = OvenControl::ramp_times_7_value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("level 7_RT SLOT entered %f", valu);

	addr = 4021;// Level 8 Ramp Time 0 to 9999
	valu = OvenControl::ramp_times_8_value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("level 8_RT SLOT entered %f", valu);

//////////////////////////////////////////////////////Ramp EVENTS
/*	addr = 4022;// Level 1 Ramp Event 0 to 9999
	valu = OvenControl::ramp_events_1_value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("level 1 RE SLOT entered %f", valu);

	addr = 4023;// Level 2 Ramp Event 0 to 9999
	valu = OvenControl::ramp_events_2_value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("level 2 RE SLOT entered %f", valu);

	addr = 4024;// Level 3 Ramp Event 0 to 9999
	valu = OvenControl::ramp_events_3_value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("level 3 RE SLOT entered %f", valu);

	addr = 4025;// Level 4 Ramp Event 0 to 9999
	valu = OvenControl::ramp_events_4_value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("level 4 RE SLOT entered %f", valu);

	addr = 4026;// Level 5 Ramp Event 0 to 9999
	valu = OvenControl::ramp_events_5_value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("level 5_RE SLOT entered %f", valu);

	addr = 4027;// Level 6 Ramp Event 0 to 9999
	valu = OvenControl::ramp_events_6_value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("level 6_RE SLOT entered %f", valu);

	addr = 4028;// Level 7 Ramp Event 0 to 9999
	valu = OvenControl::ramp_events_7_value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("level 7 RE SLOT entered %f", valu);

	addr = 4029;// Level 8 Ramp Event 0 to 9999
	valu = OvenControl::ramp_events_8_value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("level 8 RE SLOT entered %f", valu);*/

//////////////////////////////////////////////////////// SOAK LEVEL
	addr = 16;// Level 1 SOAK LEVEL 0 to 9999
	valu = OvenControl::soak_levels_1_value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("level 1 SL SLOT entered %f", valu);

	addr = 17;// Level 2 SOAK LEVEL 0 to 9999
	valu = OvenControl::soak_levels_2_value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("level 2 SL SLOT entered %f", valu);

	addr = 18;// Level 3 SOAK LEVEL 0 to 9999
	valu = OvenControl::soak_levels_3_value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("level 3 SL SLOT entered %f", valu);

	addr = 19;// Level 4 SOAK LEVEL 0 to 9999
	valu = OvenControl::soak_levels_4_value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("level 4 SL SLOT entered %f", valu);

	addr = 20;// Level 5 SOAK LEVEL 0 to 9999
	valu = OvenControl::soak_levels_5_value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("level 5 SL SLOT entered %f", valu);

	addr = 21;// Level 6 SOAK LEVEL 0 to 9999
	valu = OvenControl::soak_levels_6_value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("level 6 SL SLOT entered %f", valu);

	addr = 22;// Level 7 SOAK LEVEL 0 to 9999
	valu = OvenControl::soak_levels_7_value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("level 7 SL SLOT entered %f", valu);

	addr = 23;// Level 8 SOAK LEVEL 0 to 9999
	valu = OvenControl::soak_levels_8_value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("level 8 SL SLOT entered %f", valu);

//////////////////////////////////////////////////////// SOAK TIME
	addr = 4030;// Level 1 SOAK TIME 0 to 9999
	valu = OvenControl::soak_times_1_value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("level 1 ST SLOT entered %f", valu);

	addr = 4031;// Level 2 SOAK TIME 0 to 9999
	valu = OvenControl::soak_times_2_value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("level 2 ST SLOT entered %f", valu);

	addr = 4032;// Level 3 SOAK TIME 0 to 9999
	valu = OvenControl::soak_times_3_value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("level 3 ST SLOT entered %f", valu);

	addr = 4033;// Level 4 SOAK TIME 0 to 9999
	valu = OvenControl::soak_times_4_value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("level 4 ST SLOT entered %f", valu);

	addr = 4034;// Level 5 SOAK TIME 0 to 9999
	valu = OvenControl::soak_times_5_value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("level 5 ST SLOT entered %f", valu);

	addr = 4035;// Level 6 SOAK TIME 0 to 9999
	valu = OvenControl::soak_times_6_value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("level 6 ST SLOT entered %f", valu);

	addr = 4036;// Level 7 SOAK TIME 0 to 9999
	valu = OvenControl::soak_times_7_value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("level 7 ST SLOT entered %f", valu);

	addr = 4037;// Level 8 SOAK TIME 0 to 9999
	valu = OvenControl::soak_times_8_value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("level 8 ST SLOT entered %f", valu);

//////////////////////////////////////////////////////// SOAK Event
/*	addr = 4038;// Level 1 SOAK Event 0 to 9999
	valu = OvenControl::soak_events_1_value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("level 1 SE SLOT entered %f", valu);

	addr = 4039;// Level 2 SOAK Event 0 to 9999
	valu = OvenControl::soak_events_2_value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("level 2 SE SLOT entered %f", valu);

	addr = 4040;// Level 3 SOAK Event 0 to 9999
	valu = OvenControl::soak_events_3_value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("level 3 SE SLOT entered %f", valu);

	addr = 4041;// Level 4 SOAK Event 0 to 9999
	valu = OvenControl::soak_events_4_value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("level 4 SE SLOT entered %f", valu);

	addr = 4042;// Level 5 SOAK Event 0 to 9999
	valu = OvenControl::soak_events_5_value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("level 5 SE SLOT entered %f", valu);

	addr = 4043;// Level 6 SOAK Event 0 to 9999
	valu = OvenControl::soak_events_6_value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("level 6 SE SLOT entered %f", valu);

	addr = 4044;// Level 7 SOAK Event 0 to 9999
	valu = OvenControl::soak_events_7_value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("level 7 SE SLOT entered %f", valu);

	addr = 4045;// Level 8 SOAK Event 0 to 9999
	valu = OvenControl::soak_events_8_value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
//	qDebug("level 8 SE SLOT entered %f", valu);*/

	QCursor crr;
	crr.setPos(2, 2);
	ui.busyLineEdit->setText(notBusyState);
}

double OvenControl::readEmac(double addr)
{
//	MainWindow readEM;
//	int slaveID, tempSP;
//	int n;
//	char nb[1];
//	char buffer[256];  // make sure this is big enough!!!

//	ui.ovenSetSoakL1SpinBox->setValue(46);// Works - sets value in the widget

//	slaveID = 1,
//	tempSP = 63;
	addr = 0;

//	TEST_GLOBAL_OC1 = readEM.readRecipeValue(slaveID, addr);//test

/*	nb[0] = "1";
	n=snprintf(buffer, sizeof(buffer), "%g", addr);
	qDebug() <<"addr = "<< buffer;

	printf ("[%s] is a string %d chars long\n",buffer,n);

	QString prog = "./modbus_read";// *prog;
	QStringList arguments;
	arguments << buffer << nb;//"2";// addr value
	QProcess *myProcess = new QProcess(this);
	myProcess->start(prog, arguments);
	myProcess->waitForFinished();*/

//	qDebug() << "readEmac SLOT entered";

	return 0;// test change
}

void OvenControl::RN(double valu)// Recycle Number
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 4046;// Level 2 Recycle Number 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "RN SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
void OvenControl::TS(double valu)// TErmination State
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 4047;// Level 2 Termination State 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "TS SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
void OvenControl::RO(double valu)// Recipe Option
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 4012;// Level 2 Termination State 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "RO SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
void OvenControl::SS(double valu)// Single Step
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 4013;// Level 2 Single Step 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "SS SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
void OvenControl::HB(double valu)// HoldBACk
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 24;// Level 2 Holdback 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "HB SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
void OvenControl::RP(bool valu)// HoldBACk
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 4048;// Level 2 Resume From Power Off 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "RP SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
///////////////////////////////////////////////////////////////RAMP TIMES
void OvenControl::level1_RT(double valu)// Level 1 Ramp Time
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 4014;// Level 1 Ramp Time 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);

//	int a=0, b=3;
//	double c1=1,c2=2;
//	ui.ovenSetSoakL1SpinBox->setValue(46);// Works
/*
//	temp2 = OvenControl::soak_levels_1_value();// test current value retrieval
//	v=snprintf(buffer1, sizeof(buffer1), "%g", temp2);
//	qDebug() << buffer1;

// Format double valu into character buffer
//	n=snprintf(buffer, sizeof(buffer), "(%g, %g)", c1, c2);
	n=snprintf(buffer, sizeof(buffer), "%g", valu);
	qDebug() << buffer;

////////// Display buffer contents and # of chars
	//	n=sprintf (buffer, "%d plus %d is %d", a, b, a+b);
	printf ("[%s] is a string %d chars long\n",buffer,n);

// Execute command line with address and value
	QString prog = "./modbus_set";// *prog;
	QStringList arguments;
	arguments << "4009" << buffer;//"2";// addr value ////-style"<<"motif";// test addr
	QProcess *myProcess = new QProcess(this);//(this);
	myProcess->start(prog, arguments);
	myProcess->waitForFinished();

//	TEST_GLOBAL_OC = readEmac(0);
//	ui.ovenSetSoakL1SpinBox->setValue(TEST_GLOBAL_OC);// test
//	readEmac(0	);//test 4009*/

//	writeEM.writeTempSetpoint(slaveID, tempSP);// test works
//	TEST_GLOBAL_OC = valu;
//	writeEM.writeRecipeSetpoint(slaveID, addr, TEST_GLOBAL_OC);// write to Level ramp time

	qDebug() << "level 1_RT SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
void OvenControl::level2_RT(double valu)// Level 2 Ramp Time
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 4015;// Level 2 Ramp Time 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "level 2_RT SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
void OvenControl::level3_RT(double valu)// Level 3 Ramp Time
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 4016;// Level 3 Ramp Time 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "level 3_RT SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
void OvenControl::level4_RT(double valu)// Level 4 Ramp Time
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 4017;// Level 4 Ramp Time 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "level 4_RT SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
void OvenControl::level5_RT(double valu)// Level 5 Ramp Time
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 4018;// Level 5 Ramp Time 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "level 5_RT SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
void OvenControl::level6_RT(double valu)// Level 6 Ramp Time
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 4019;// Level 6 Ramp Time 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "level 6_RT SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
void OvenControl::level7_RT(double valu)// Level 7 Ramp Time
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 4020;// Level 7 Ramp Time 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "level 7_RT SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
void OvenControl::level8_RT(double valu)// Level 8 Ramp Time
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 4021;// Level 8 Ramp Time 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "level 8_RT SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
//////////////////////////////////////////////////////Ramp EVENTS
void OvenControl::level1_RE(double valu)// Level 1 Ramp Event
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 4022;// Level 1 Ramp Event 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "level 1 RE SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
void OvenControl::level2_RE(double valu)// Level 2 Ramp Event
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 4023;// Level 2 Ramp Event 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "level 2 RE SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
void OvenControl::level3_RE(double valu)// Level 3 Ramp Event
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 4024;// Level 3 Ramp Event 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "level 3 RE SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
void OvenControl::level4_RE(double valu)// Level 4 Ramp Event
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 4025;// Level 4 Ramp Event 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "level 4 RE SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
void OvenControl::level5_RE(double valu)// Level 5 Ramp Event
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 4026;// Level 5 Ramp Event 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "level 5_RE SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
void OvenControl::level6_RE(double valu)// Level 6 Ramp EVENT
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 4027;// Level 6 Ramp Event 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "level 6_RE SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
void OvenControl::level7_RE(double valu)// Level 7 Ramp Event
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 4028;// Level 7 Ramp Event 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "level 7 RE SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
void OvenControl::level8_RE(double valu)// Level 8 Ramp Event
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 4029;// Level 8 Ramp Event 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "level 8 RE SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
//////////////////////////////////////////////////////// SOAK LEVEL
void OvenControl::level1_SL(double valu)// Level 1 SOAK LEVEL
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 16;// Level 1 SOAK LEVEL 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "level 1 SL SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
void OvenControl::level2_SL(double valu)// Level 2 SOAK LEVEL
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 17;// Level 2 SOAK LEVEL 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "level 2 SL SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
void OvenControl::level3_SL(double valu)// Level 3 SOAK LEVEL
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 18;// Level 3 SOAK LEVEL 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "level 3 SL SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
void OvenControl::level4_SL(double valu)// Level 4 SOAK LEVEL
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 19;// Level 4 SOAK LEVEL 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "level 4 SL SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
void OvenControl::level5_SL(double valu)// Level 5 SOAK LEVEL
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 20;// Level 5 SOAK LEVEL 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "level 5 SL SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
void OvenControl::level6_SL(double valu)// Level 6 SOAK LEVEL
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 21;// Level 6 SOAK LEVEL 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "level 6 SL SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
void OvenControl::level7_SL(double valu)// Level 7 SOAK LEVEL
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 22;// Level 7 SOAK LEVEL 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "level 7 SL SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
void OvenControl::level8_SL(double valu)// Level 8 SOAK LEVEL
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 23;// Level 8 SOAK LEVEL 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "level 8 SL SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
//////////////////////////////////////////////////////// SOAK TIME
void OvenControl::level1_ST(double valu)// Level 1 SOAK TIME
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 4030;// Level 1 SOAK TIME 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "level 1 ST SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
void OvenControl::level2_ST(double valu)// Level 2 SOAK TIME
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 4031;// Level 2 SOAK TIME 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "level 2 ST SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
void OvenControl::level3_ST(double valu)// Level 3 SOAK TIME
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 4032;// Level 3 SOAK TIME 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "level 3 ST SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
void OvenControl::level4_ST(double valu)// Level 4 SOAK TIME
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 4033;// Level 4 SOAK TIME 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "level 4 ST SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
void OvenControl::level5_ST(double valu)// Level 5 SOAK TIME
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 4034;// Level 5 SOAK TIME 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "level 5 ST SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
void OvenControl::level6_ST(double valu)// Level 6 SOAK TIME
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 4035;// Level 6 SOAK TIME 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "level 6 ST SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
void OvenControl::level7_ST(double valu)// Level 7 SOAK TIME
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 4036;// Level 7 SOAK TIME 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "level 7 ST SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
void OvenControl::level8_ST(double valu)// Level 8 SOAK TIME
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 4037;// Level 8 SOAK TIME 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "level 8 ST SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
//////////////////////////////////////////////////////// SOAK Event
void OvenControl::level1_SE(double valu)// Level 1 SOAK Event
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 4038;// Level 1 SOAK Event 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "level 1 SE SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
void OvenControl::level2_SE(double valu)// Level 2 SOAK Event
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 4039;// Level 2 SOAK Event 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "level 2 SE SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
void OvenControl::level3_SE(double valu)// Level 3 SOAK Event
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 4040;// Level 3 SOAK Event 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "level 3 SE SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
void OvenControl::level4_SE(double valu)// Level 4 SOAK Event
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 4041;// Level 4 SOAK Event 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "level 4 SE SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
void OvenControl::level5_SE(double valu)// Level 5 SOAK Event
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 4042;// Level 5 SOAK Event 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "level 5 SE SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
void OvenControl::level6_SE(double valu)// Level 6 SOAK Event
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 4043;// Level 6 SOAK Event 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "level 6 SE SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
void OvenControl::level7_SE(double valu)// Level 7 SOAK Event
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 4044;// Level 7 SOAK Event 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "level 7 SE SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
void OvenControl::level8_SE(double valu)// Level 8 SOAK Event
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 4045;// Level 8 SOAK Event 0 to 9999
	writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	qDebug() << "level 8 SE SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
}
////////////////////////////////////////////////////////

void OvenControl::test_slotwtrj(double temp)
{
	class MainWindow;//1/13/14
	double temp1, temp2;

	temp1 = temp;
	temp2 = OvenControl::soak_levels_1_value();

	qDebug() << "Test OvenControl SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);

//	return temp;//ramp_times_1_value();
}
void OvenControl::test_slotwtrj2(void)
{
	class MainWindow;//1/13/14
	double temp2;
	int slaveID, tempPV, tempSP;

//	QObject *parent;

	QString prog = "./modbus_set";;// *prog;
//	*prog = " ./modbus_set";
	QStringList arguments;
	arguments << "2" << "245";//-style"<<"motif";// addr value
	QProcess *myProcess = new QProcess(this);//(this);
	myProcess->start(prog, arguments);
	myProcess->waitForFinished();

	slaveID = 1;
	tempPV = 97;
	tempSP = 86;

	temp2 = OvenControl::soak_levels_1_value();

	qDebug() << "Test 2 OvenControl SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);
//	emit tempProcessValue(slaveID, tempPV);
//	emit tempSetPoint(slaveID, tempSP);

//	return temp;//ramp_times_1_value();
}
void OvenControl::test_slotwtrj3(int slaveID, int tempPV)
{
	MainWindow wrzonrspar;
	double temp1, temp2;
	int addr;
	double valu;

	addr = 4012;
	valu = 1;

	slaveID = 1; // delete - only to get rid of warning
	temp1 = tempPV;
	temp2 = tempPV;
	tempPV = OvenControl::soak_levels_1_value();
	TEST_GLOBAL_OC = OvenControl::soak_levels_1_value();


	qDebug() << "Test 3 OvenControl SLOT entered";
	QCursor crr;
	crr.setPos(2, 2);


//	emit recipeWrites( slaveID,  addr, valu); // temp removed wtr 6-11-14
}

void OvenControl::ReadZoneRampSoakParameters(void)//( m_modbus, slaveID )
{
	MainWindow rdzonrspar;
	double valu;
	int addr;
	int slaveID;
//	modbus_t *ctx;
	QString busyState;// 9-5-2014
	QString notBusyState;

	busyState = "BUSY...";// 9-5-2014
	notBusyState = "DONE...";

	ui.busyLineEdit->setText(busyState);

//	donotconnectWrite = 0;

	/*pleaseWait wait(this);// Crerate a dialog
		if (wait.exec()) {
			qDebug() << "GOT IN WAIT";
		    wait.reject();
				}*/

//	qDebug() << "GOT IN!!! ReadZoneRampSoakParameters";

//	ctx = modbus_new_rtu("/dev/ttyS2", 9600, 'N', 8, 1);
/*	ctx = modbus_new_rtu("/dev/ttyUSB0", 9600, 'N', 8, 1);	// Add the appropriate path to your serial port
	if (ctx == NULL) {
//		fprintf(stderr, "Unable to create the libmodbus context\n");
	}*/
	rdzonrspar.delay(50);
    slaveID = 1;
    addr = 4012;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr); // recipe option 4012
    ui.recipeOptionSpinBox->setValue(valu);
//    qDebug() << "Changed!!! recipeOptionSpinBox";

/*    while (valu == -1){
        slaveID = 1;
        addr = 4012;
        valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr); // recipe option 4012
        ui.recipeOptionSpinBox->setValue(valu);
    //    qDebug() << "Changed!!! recipeOptionSpinBox";
    	qDebug() << "Recipe Option MISSREAD !!!!";
    	rdzonrspar.delay(1000);
    }*/
//////////////////////////////////////////////////////////////////////////////////////////////////

    rdzonrspar.delay(ODT);
    addr = 4013;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);// ss_ramp_time 4013
    ui.singleStepRampTimeSpinBox->setValue(valu);
//    qDebug() << "Changed!!! singleStepRampTimeSpinBox";

    rdzonrspar.delay(ODT);
    addr = 4047;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//4047//termination_state
    ui.terminationStateSpinBox->setValue(valu);
//    qDebug() << "Changed!!! termination_state";

    rdzonrspar.delay(ODT);
    addr = 4046;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//recycle_number 4046
    ui.recycleNumberSpinBox->setValue(valu);
//  qDebug() << "Changed!!! recycle_number";

//    rdzonrspar.readZoneRegParameters(ctx, 0x4014, 0x08, dest);//ramp_times
    rdzonrspar.delay(ODT);
    addr = 4014;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ramp_times 4014
    ui.rampTime1SpinBox->setValue(valu);
//    qDebug() << "Changed!!! ramp_times";

    rdzonrspar.delay(ODT);
    addr = 4015;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ramp_times 4015
    ui.rampTime2SpinBox->setValue(valu);

    rdzonrspar.delay(ODT);
    addr = 4016;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ramp_times 4016
    ui.rampTime3SpinBox->setValue(valu);

    rdzonrspar.delay(ODT);
    addr = 4017;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ramp_times 4017
    ui.rampTime4SpinBox->setValue(valu);

    rdzonrspar.delay(ODT);
    addr = 4018;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ramp_times 4018
    ui.rampTime5SpinBox->setValue(valu);

    rdzonrspar.delay(ODT);
    addr = 4019;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ramp_times 4019
    ui.rampTime6SpinBox->setValue(valu);

    rdzonrspar.delay(ODT);
    addr = 4020;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ramp_times 4020
    ui.rampTime7SpinBox->setValue(valu);

    rdzonrspar.delay(ODT);
    addr = 4021;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ramp_times 4021
    ui.rampTime8SpinBox->setValue(valu);

//    ramp_events =  OvenControl::readZoneRegParameters(m_modbus, 0x4023, 0x08, dest);//ramp_times
/*    rdzonrspar.delay(50);
    addr = 4022;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ramp_Event 4022
    ui.ovenSetRampE1SpinBox->setValue(valu);

    rdzonrspar.delay(50);
    addr = 4023;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ramp_Event 4023
    ui.ovenSetRampE2SpinBox->setValue(valu);

    rdzonrspar.delay(50);
    addr = 4024;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ramp_Event 4024
    ui.ovenSetRampE3SpinBox->setValue(valu);

    rdzonrspar.delay(50);
    addr = 4025;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ramp_Event 4025
    ui.ovenSetRampE4SpinBox->setValue(valu);

    rdzonrspar.delay(50);
    addr = 4026;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ramp_Event 4026
    ui.ovenSetRampE5SpinBox->setValue(valu);

    rdzonrspar.delay(50);
    addr = 4027;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ramp_Event 4027
    ui.ovenSetRampE6SpinBox->setValue(valu);

    rdzonrspar.delay(50);
    addr = 4028;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ramp_Event 4028
    ui.ovenSetRampE7SpinBox->setValue(valu);

    rdzonrspar.delay(50);
    addr = 4029;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ramp_Event 4029
    ui.ovenSetRampE8SpinBox->setValue(valu);*/

//    soak_levels = OvenControl::readZoneRegParameters(m_modbus, 0x16, 0x08, dest);//soak_levels
    rdzonrspar.delay(ODT);
    addr = 16;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ramp_Event 16
    ui.ovenSetSoakL1SpinBox->setValue(valu);

    rdzonrspar.delay(ODT);
    addr = 17;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ramp_Event 17
    ui.ovenSetSoakL2SpinBox->setValue(valu);

    rdzonrspar.delay(ODT);
    addr = 18;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ramp_Event 18
    ui.ovenSetSoakL3SpinBox->setValue(valu);

    rdzonrspar.delay(ODT);
    addr = 19;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ramp_Event 19
    ui.ovenSetSoakL4SpinBox->setValue(valu);

    rdzonrspar.delay(ODT);
    addr = 20;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ramp_Event 20
    ui.ovenSetSoakL5SpinBox->setValue(valu);

    rdzonrspar.delay(ODT);
    addr = 21;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ramp_Event 21
    ui.ovenSetSoakL6SpinBox->setValue(valu);

    rdzonrspar.delay(ODT);
    addr = 22;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ramp_Event 22
    ui.ovenSetSoakL7SpinBox->setValue(valu);

    rdzonrspar.delay(ODT);
    addr = 23;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ramp_Event 23
    ui.ovenSetSoakL8SpinBox->setValue(valu);

//    soak_times = OvenControl::readZoneRegParameters(m_modbus, 0x4030, 0x08, dest);//soak_times
    rdzonrspar.delay(ODT);
    addr = 4030;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//Soak_Time 4030
    ui.ovenSetSoakT1SpinBox->setValue(valu);

    rdzonrspar.delay(ODT);
    addr = 4031;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//Soak_Time 4031
    ui.ovenSetSoakT2SpinBox->setValue(valu);

    rdzonrspar.delay(ODT);
    addr = 4032;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//Soak_Time 4032
    ui.ovenSetSoakT3SpinBox->setValue(valu);

    rdzonrspar.delay(ODT);
    addr = 4033;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//Soak_Time 4033
    ui.ovenSetSoakT4SpinBox->setValue(valu);

    rdzonrspar.delay(ODT);
    addr = 4034;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//Soak_Time 4034
    ui.ovenSetSoakT5SpinBox->setValue(valu);

    rdzonrspar.delay(ODT);
    addr = 4035;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//Soak_Time 4035
    ui.ovenSetSoakT6SpinBox->setValue(valu);

    rdzonrspar.delay(ODT);
    addr = 4036;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//Soak_Time 4036
    ui.ovenSetSoakT7SpinBox->setValue(valu);

    rdzonrspar.delay(ODT);
    addr = 4037;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//Soak_Time 4037
    ui.ovenSetSoakT8SpinBox->setValue(valu);

//    soak_events = OvenControl::readZoneRegParameters(m_modbus, 0x4038, 0x08, dest);//soak_events
/*    rdzonrspar.delay(50);
    addr = 4038;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//soak_events 4038
    ui.ovenSetSoakE1SpinBox->setValue(valu);

    rdzonrspar.delay(50);
    addr = 4039;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//soak_events 4039
    ui.ovenSetSoakE2SpinBox->setValue(valu);

    rdzonrspar.delay(50);
    addr = 4040;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//soak_events 4040
    ui.ovenSetSoakE3SpinBox->setValue(valu);

    rdzonrspar.delay(50);
    addr = 4041;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//soak_events 4041
    ui.ovenSetSoakE4SpinBox->setValue(valu);

    rdzonrspar.delay(50);
    addr = 4042;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//soak_events 4042
    ui.ovenSetSoakE5SpinBox->setValue(valu);

    rdzonrspar.delay(50);
    addr = 4043;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//soak_events 4043
    ui.ovenSetSoakE6SpinBox->setValue(valu);

    rdzonrspar.delay(50);
    addr = 4044;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//soak_events 4044
    ui.ovenSetSoakE7SpinBox->setValue(valu);

    rdzonrspar.delay(50);
    addr = 4045;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//soak_events 4045
    ui.ovenSetSoakE8SpinBox->setValue(valu);*/

//    OvenControl::readZoneRegParameters(m_modbus, 0x24, 0x01, dest);//holdback
    rdzonrspar.delay(ODT);
    addr = 24;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//holdback 24
    ui.holdBackSpinBox->setValue(valu);

//    OvenControl::readZoneRegParameters(m_modbus, 0x4048, 0x01, dest);//resume_from_pf
    rdzonrspar.delay(ODT);
    addr = 4048;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//resume_from_pf 4048
    ui.resumepowerfailureCheckBox->setChecked(valu);

	ui.busyLineEdit->setText(notBusyState);
	QCursor crr;
	crr.setPos(2, 2);
//    qDebug() << "READ and SET";
//    qDebug() << "END!!! ReadZoneRampSoakParameters";

//    donotconnectWrite = 0;
}

/*void OvenControl::ZoneRampSoakParameters(void)// Note read in parameters first. Then change and send
{
	int i;
	double recipe_option;
	double ss_ramp_time;
	double holdback;
	double termination_state;
	double recycle_number;
	double resume_from_pf;
	double* ramp_times;
	double* ramp_events;
	double* soak_levels;
	double* soak_times;
	double* soak_events;

	qDebug() << "GOT IN!!! ZoneRampSoakParameters";

	recipe_option = OvenControl::recipeOptionsValue();
	ss_ramp_time = OvenControl::ss_ramp_timeValue();
	holdback = OvenControl::holdbackValue();
	termination_state = OvenControl::termination_stateValue();
	recycle_number = OvenControl::recycle_numberValue();
	resume_from_pf = OvenControl::resume_from_pfValue();
}*/

void OvenControl::resetZone(void)
{
	ui.slaveIdSpinBox->setValue(0);
//	qDebug() << "GOT IN!!! resetZone";
}
