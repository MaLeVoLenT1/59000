#include "rampoven_zone_alarm_para.h"
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

rampoven_Zone_Alarm_para::rampoven_Zone_Alarm_para(QWidget *parent)
    : QDialog(parent)
{ui.setupUi(this);}
rampoven_Zone_Alarm_para::~rampoven_Zone_Alarm_para(){}

void rampoven_Zone_Alarm_para::WriteDataButton(void)
{
	MainWindow writeEM;
	int slaveID, addr;
	double valu;

	slaveID = 1;

	writeEM.delay(20);
	//Alarm 1
	addr = 4072;
	valu = ui.ro_Alarm_One_Action_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug("Alarm One Action %f", valu);

	writeEM.delay(20);
	addr = 4073;
	valu = ui.ro_Alarm_One_OP_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug("Alarm One Operation %f", valu);

	writeEM.delay(20);
	addr = 4074;
	valu = ui.ro_Alarm_One_Delay_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug("Alarm One Delay %f", valu);

	writeEM.delay(20);
	addr = 4075;
	valu = ui.ro_Alarm_One_Inhibit_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug("Alarm One Inhibit %f", valu);

	writeEM.delay(20);
	addr = 36;
	valu = ui.ro_Alarm_One_Setpoint_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug("Alarm One Setpoint %f", valu);

	writeEM.delay(20);
	addr = 37;
	valu = ui.ro_Alarm_One_Deviation_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug("Alarm One Deviation %f", valu);

	writeEM.delay(20);
	// Alarm 2

	addr = 4076;
	valu = ui.ro_Alarm_Two_Action_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug("Alarm Two Action %f", valu);

	writeEM.delay(20);
	addr = 4077;
	valu = ui.ro_Alarm_Two_OP_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug("Alarm Two Operation %f", valu);

	writeEM.delay(20);
	addr = 4078;
	valu = ui.ro_Alarm_Two_Delay_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug("Alarm Two Delay %f", valu);

	writeEM.delay(20);
	addr = 4079;
	valu = ui.ro_Alarm_Two_Inhibit_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug("Alarm Two Inhibit %f", valu);

	writeEM.delay(20);
	addr = 38;
	valu = ui.ro_Alarm_Two_Setpoint_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug("Alarm Two Setpoint %f", valu);

	writeEM.delay(20);
	addr = 39;
	valu = ui.ro_Alarm_Two_Deviation_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug("Alarm Two Deviation %f", valu);
}

void rampoven_Zone_Alarm_para::ReadDataButton(void)
{
	MainWindow rdzonrspar;
	double valu;
	int addr;
	int slaveID;
	modbus_t *ctx;

	slaveID = 1;
	qDebug() << "GOT IN!!! Rampoven_comm";
	ctx = modbus_new_rtu("/dev/ttyUSB0", 9600, 'N', 8, 1);	/* Add the appropriate path to your serial port */
	if (ctx == NULL) {fprintf(stderr, "Unable to create the libmodbus context\n");}

	rdzonrspar.delay(50);
	//Alarm 1
	addr = 4072;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
	ui.ro_Alarm_One_Action_SpinBox->setValue(valu);
	qDebug() << "Alarm One Action";

	rdzonrspar.delay(50);
	addr = 4073;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
	ui.ro_Alarm_One_OP_SpinBox->setValue(valu);
	qDebug("Alarm One Operation %f", valu);

	rdzonrspar.delay(50);
	addr = 4074;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
	ui.ro_Alarm_One_Delay_SpinBox->setValue(valu);
	qDebug("Alarm One Delay %f", valu);

	rdzonrspar.delay(50);
	addr = 4075;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
	ui.ro_Alarm_One_Inhibit_SpinBox->setValue(valu);
	qDebug("Alarm One Inhibit %f", valu);

	rdzonrspar.delay(50);
	addr = 36;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
	ui.ro_Alarm_One_Setpoint_SpinBox->setValue(valu);
	qDebug("Alarm One Setpoint %f", valu);

	rdzonrspar.delay(50);
	addr = 37;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
	ui.ro_Alarm_One_Deviation_SpinBox->setValue(valu);
	qDebug("Alarm One Deviation %f", valu);

	rdzonrspar.delay(50);
	// Alarm 2

	addr = 4076;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
	ui.ro_Alarm_Two_Action_SpinBox->setValue(valu);
	qDebug("Alarm Two Action %f", valu);

	rdzonrspar.delay(50);
	addr = 4077;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
	ui.ro_Alarm_Two_OP_SpinBox->setValue(valu);
	qDebug("Alarm Two Operation %f", valu);

	rdzonrspar.delay(50);
	addr = 4078;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
	ui.ro_Alarm_Two_Delay_SpinBox->setValue(valu);
	qDebug("Alarm Two Delay %f", valu);

	rdzonrspar.delay(50);
	addr = 4079;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
	ui.ro_Alarm_Two_Inhibit_SpinBox->setValue(valu);
	qDebug("Alarm Two Inhibit %f", valu);

	rdzonrspar.delay(50);
	addr = 38;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
	ui.ro_Alarm_Two_Setpoint_SpinBox->setValue(valu);
	qDebug("Alarm Two Setpoint %f", valu);

	rdzonrspar.delay(50);
	addr = 39;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
	ui.ro_Alarm_Two_Deviation_SpinBox->setValue(valu);
	qDebug("Alarm Two Deviation %f", valu);
}
