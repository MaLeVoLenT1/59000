#include "rampoven_zone_damping.h"
#include "modbus.h"
#include "modbus-private.h"
#include "qextserialenumerator.h"
#include <QtGui>
#include <QAction>
#include <errno.h>

#include <stdio.h>
#include <stdlib.h>
#include "mainwindow.h"//1/11/14
#include "part.h"//1/8/14
#include "detectorwidget.h"
#include <QProcess>
#include <QDebug>
#include <QKeyEvent>

extern unsigned int i2c_slaveAddr;

rampoven_Zone_Damping::rampoven_Zone_Damping(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);
}

rampoven_Zone_Damping::~rampoven_Zone_Damping()
{

}
void rampoven_Zone_Damping::keyReleaseEvent(QKeyEvent *event)
{
//	DetectorWidget detKeyPress;
//	OvenWidget owValves;
//	OvenWidget owReadFl;
	MainWindow tune;

	switch (event->key()){
	case Qt::Key_F1:{
		tune.closeVent();
		qDebug() << "Released F1 Key";
		break;
	}
	case Qt::Key_F2:{
		tune.openVent();
		qDebug() << "Released F2 Key";
		break;
	}
	case Qt::Key_F3:{
		qDebug() << "Released F3 Key";
		break;
	}
	case Qt::Key_F4:{
		qDebug() << "Released F4 Key";
		break;
	}
	case Qt::Key_F5:{
		qDebug() << "Released F5 Key (DET 1)";
/*		detNumberDirector = 1;
		ui->partStack->setCurrentWidget(currentWidgetList[1]);
		ui->partStack->setCurrentIndex(1);*/
		break;
	}
	case Qt::Key_F6:{
		qDebug() << "Released F6 Key (Oven)";
/*		ui->partStack->setCurrentWidget(currentWidgetList[0]);
		ui->partStack->setCurrentIndex(0);*/
		break;
	}
	case Qt::Key_F7:{
//		owReadFl.owReadFlow();
		qDebug() << "Released F7 Key (Flow)";
		break;
	}
	case Qt::Key_F8:{
/*		detNumberDirector = 2;
		qDebug() << "Released F8 Key (Det 2)";
		ui->partStack->setCurrentWidget(currentWidgetList[2]);
		ui->partStack->setCurrentIndex(2);*/
		break;
	}
	case Qt::Key_F9:{
//		owValves.owValveControl();
		qDebug() << "Released F9 Key (Valve)";
		break;
	}
	case Qt::Key_F10:{
		qDebug() << "Released F10 Key (Inj Port)";
/*		ui->partStack->setCurrentWidget(currentWidgetList[3]);
		ui->partStack->setCurrentIndex(3);*/
		break;
	}
	default:{//
		break;
	}
}
}
void rampoven_Zone_Damping::readAutotuneStatus(int recipe_state)
{
	MainWindow mw_rs;
	QString statusmw;

	switch (recipe_state){
		case 0:{// sucess
			statusmw = "SUCESS";
			ui.autoTuneStatusLineEdit->setText(statusmw);
			break;
		}
		case 1:{// ABORTED
			statusmw = "ABORTED";
			ui.autoTuneStatusLineEdit->setText(statusmw);
			break;
		}
		case 2:{// ERROR - NO PID OUTPUT
			statusmw = "ERROR: NO PID OUTPUT";
			ui.autoTuneStatusLineEdit->setText(statusmw);
			break;
		}
		case 3:{// ERROR: NO DEVIATION
			statusmw = "error: NO DEVIATION";
			ui.autoTuneStatusLineEdit->setText(statusmw);
			break;
		}
		case 4:{// ERROR: NO OUTPUT
			statusmw = "ERROR: NO OUTPUT";
			ui.autoTuneStatusLineEdit->setText(statusmw);
			break;
		}
		case 5:{// ERROR: TIMED OUT
			statusmw = "ERROR: TIMED OUT";
			ui.autoTuneStatusLineEdit->setText(statusmw);
			break;
		}
		case 6:{// ERROR: BAD TUNE
			statusmw = "ERROR: BAD TUNE";
			ui.autoTuneStatusLineEdit->setText(statusmw);
			break;
		}
		case 7:{// WAITING FOR PV TO SETTLE
			statusmw = "WAITING FOR PV TO SETTLE";
			ui.autoTuneStatusLineEdit->setText(statusmw);
			break;
		}
		case 8:{// REVERSE TUNE IN PROGRESS
			statusmw = "REVERSE TUNE IN PROGRESS";
			ui.autoTuneStatusLineEdit->setText(statusmw);
			break;
		}
		case 9:{// DIRECT TUNE IN PROGRESS
			statusmw = "DIRECT TUNE IN PPROGRESS";
			ui.autoTuneStatusLineEdit->setText(statusmw);
			break;
		}
		default:{//
			break;
		}
	}
}

void rampoven_Zone_Damping::WriteDataButton(void)
{
	MainWindow writeEM;
	int slaveID, addr;
	double valu;

	slaveID = 1;
	addr = 4011;//twoDeviation(double valu)
	valu = ui.ro_Autotune_Damping_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug("Display decimal position %f", valu);
}
void rampoven_Zone_Damping::ReadDataButton(void)
{
	MainWindow rdzonrspar;
	double valu;
	int addr;
	int slaveID;
	modbus_t *ctx;

	slaveID = 1;
	qDebug() << "GOT IN!!! Rampoven_comm";

	ctx = modbus_new_rtu("/dev/ttyUSB0", 9600, 'N', 8, 1);	/* Add the appropriate path to your serial port */
	if (ctx == NULL) {
		fprintf(stderr, "Unable to create the libmodbus context\n");
	}
//ro_Autotune_Damping_SpinBox
	rdzonrspar.delay(50);
	addr = 4011;//twoDeviation(double valu)
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ro_comm_protocol_SpinBox
	ui.ro_Autotune_Damping_SpinBox->setValue(valu);
	qDebug() << "Output two Deviation entered";
}
void rampoven_Zone_Damping::autoTuneStartButton(void)
{
	MainWindow writeEM;
	MainWindow rdzonrspar;
	int slaveID, addr;
	double valu, status, temp;

	slaveID = ui.slaveIdSpinBox->value();
	valu = ui.roAutoTuneModeSpinBox->value();

	if(valu == 2){

		addr = 4004;//twoDeviation(double valu)
		writeEM.writeRecipeSetpoint(slaveID, addr, valu);
		qDebug("AUTOTUNE MODE %f", valu);

		temp = ui.ovenSetTempSpinBox->value();
		writeEM.writeRecipeSetpoint(slaveID, 0x01, temp);

		writeEM.delay(2000);

		addr = 4004;//twoDeviation(double valu)
		valu = 4;// AUTOTUNE
		writeEM.writeRecipeSetpoint(slaveID, addr, valu);
		qDebug("AUTOTUNE MODE %f", valu);

		rdzonrspar.delay(2000);
		addr = 4091;//twoDeviation(double valu)
		status = rdzonrspar.readRecipeValue(slaveID, addr);//ro_comm_protocol_SpinBox
		writeEM.delay(50);
		while(status > 0){
			rdzonrspar.delay(50);
			addr = 4091;//autotune status register
			status = rdzonrspar.readRecipeValue(slaveID, addr);//get auto tune status
			readAutotuneStatus(status);
			writeEM.delay(50);
			valu = rdzonrspar.readRecipeValue(0x01, 0);// read actual temp
			writeEM.delay(50);
			ui.ovenActTempLCD->display(valu);//display actual temp
		}
	}
	else{
		addr = 4004;//MODE
		writeEM.writeRecipeSetpoint(slaveID, addr, valu);
	}
}
