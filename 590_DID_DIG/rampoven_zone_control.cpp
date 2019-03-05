#include "rampoven_zone_control.h"

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

rampoven_zone_control::rampoven_zone_control(QWidget *parent)
    : QDialog(parent)
{	ui.setupUi(this);}

rampoven_zone_control::~rampoven_zone_control(){}

void rampoven_zone_control::WriteDataButton(void)
{
	MainWindow writeEM;
	int slaveID, addr;
	double valu;
	slaveID = 1;

	writeEM.delay(20);
	addr = 9;
	valu = ui.ro_PID_band_outputOne_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << " one band entered";

	writeEM.delay(20);
	addr = 10;
	valu = ui.ro_PID_band_outputTwo_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << " two band entered";

	writeEM.delay(20);
	addr = 11;
	valu = ui.ro_Derivative_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "Derivative entered";

	writeEM.delay(20);
	addr = 12;
	valu = ui.ro_AutoReset_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "Auto Reset entered";

	writeEM.delay(20);
	addr = 13;
	valu = ui.ro_ManualReset_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "Manual Reset entered";

	writeEM.delay(20);
	addr = 7;
	valu = ui.ro_Deadband_OutputOne_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "Deadband entered";

	writeEM.delay(20);
	addr = 8;
	valu = ui.ro_Hysteresis_OutputOne_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "Hysteresis entered";

	writeEM.delay(20);
	addr = 14;
	valu = ui.ro_Deadband_OutputTwo_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "Deadband Output Two entered";

	writeEM.delay(20);
	addr = 15;
	valu = ui.ro_Hysteresis_OutputTwo_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "Hysteresis entered";
}
void rampoven_zone_control::ReadDataButton(void)
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

	rdzonrspar.delay(50);
	addr = 9;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
	ui.ro_PID_band_outputOne_SpinBox->setValue(valu);
	qDebug() << " one band entered";

	rdzonrspar.delay(50);
	addr = 10;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
	ui.ro_PID_band_outputTwo_SpinBox->setValue(valu);
	qDebug() << " two band entered";

	rdzonrspar.delay(50);
	addr = 11;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
	ui.ro_Derivative_SpinBox->setValue(valu);
	qDebug() << "Derivative entered";

	rdzonrspar.delay(50);
	addr = 12;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
	ui.ro_AutoReset_SpinBox->setValue(valu);
	qDebug() << "Auto Reset entered";

	rdzonrspar.delay(50);
	addr = 13;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
	ui.ro_ManualReset_SpinBox->setValue(valu);
	qDebug() << "Manual Reset entered";

	rdzonrspar.delay(50);
	addr = 7;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
	ui.ro_Deadband_OutputOne_SpinBox->setValue(valu);
	qDebug() << "Deadband entered";

	rdzonrspar.delay(50);
	addr = 8;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
	ui.ro_Hysteresis_OutputOne_SpinBox->setValue(valu);
	qDebug() << "Hysteresis entered";

	rdzonrspar.delay(50);
	addr = 14;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
	ui.ro_Deadband_OutputTwo_SpinBox->setValue(valu);
	qDebug() << "Deadband Output Two entered";

	rdzonrspar.delay(50);
	addr = 15;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
	ui.ro_Hysteresis_OutputTwo_SpinBox->setValue(valu);
	qDebug() << "Hysteresis entered";
}





