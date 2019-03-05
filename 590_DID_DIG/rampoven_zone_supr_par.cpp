#include "rampoven_zone_supr_par.h"
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
extern unsigned int i2c_slaveAddr;

rampoven_Zone_Supr_Par::rampoven_Zone_Supr_Par(QWidget *parent)
    : QDialog(parent){ui.setupUi(this);}
rampoven_Zone_Supr_Par::~rampoven_Zone_Supr_Par(){}

void rampoven_Zone_Supr_Par::WriteDataButton(void)
{
	MainWindow writeEM;
	int slaveID, addr;
	double valu;
	slaveID = 1;

	writeEM.delay(20);
	addr = 4085;
	valu = ui.ro_OutputOne_Failsafe_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug("Output One Failsafe %f", valu);

	writeEM.delay(20);
	addr = 4086;
	valu = ui.ro_OutputTwo_Failsafe_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug("Output Two Failsafe %f", valu);

	writeEM.delay(20);
	addr = 4087;
	valu = ui.ro_Loop_Break_Time_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug("Loop Break Time %f", valu);

	writeEM.delay(20);
	addr = 40;
	valu = ui.ro_Highest_Reading_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug("Highest Reading %f", valu);

	writeEM.delay(20);
	addr = 41;
	valu = ui.ro_Lowest_Reading_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug("Lowest Reading %f", valu);
}

void rampoven_Zone_Supr_Par::ReadDataButton(void)
{
	MainWindow rdzonrspar;
	double valu;
	int addr;
	int slaveID;
	modbus_t *ctx;

	slaveID = 1;	qDebug() << "GOT IN!!! Rampoven_comm";

	ctx = modbus_new_rtu("/dev/ttyUSB0", 9600, 'N', 8, 1);	/* Add the appropriate path to your serial port */
	if (ctx == NULL) {fprintf(stderr, "Unable to create the libmodbus context\n");}

	rdzonrspar.delay(50);
	addr = 4085;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
	ui.ro_OutputOne_Failsafe_SpinBox->setValue(valu);
	qDebug("Output One Failsafe %f", valu);

	rdzonrspar.delay(50);
	addr = 4086;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
	ui.ro_OutputTwo_Failsafe_SpinBox->setValue(valu);
	qDebug("Output Two Failsafe %f", valu);

	rdzonrspar.delay(50);
	addr = 4087;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
	ui.ro_Loop_Break_Time_SpinBox->setValue(valu);
	qDebug("Loop Break Time %f", valu);

	rdzonrspar.delay(50);
	addr = 40;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
	ui.ro_Highest_Reading_SpinBox->setValue(valu);
	qDebug("Highest Reading %f", valu);

	rdzonrspar.delay(50);
	addr = 41;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
	ui.ro_Lowest_Reading_SpinBox->setValue(valu);
	qDebug("Lowest Reading %f", valu);

}
