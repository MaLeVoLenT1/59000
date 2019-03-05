#include "rampoven_registers.h"
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

rampoven_Registers::rampoven_Registers(QWidget *parent)
    : QDialog(parent){ui.setupUi(this);}
rampoven_Registers::~rampoven_Registers(){}

void rampoven_Registers::WriteDataButton(void)
{
	MainWindow writeEM;
	int slaveID, addr;
	double valu;

	slaveID = 1;

	//addr = 0;
	//valu = ui.ro_process_value_SpinBox->value();
	//writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	//qDebug("Process Value %f", valu);

	writeEM.delay(20);
	addr = 1;
	valu = ui.ro_setpoint_eeprom_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug("Setpoint EEPROM and RAM %f", valu);

	writeEM.delay(20);
	addr = 2;
	valu = ui.ro_setpoint_ram_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug("Setpoint RAM %f", valu);

	writeEM.delay(20);
	addr = 56;
	valu = ui.ro_active_setpoint_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug("Active Setpoint %f", valu);
}
void rampoven_Registers::ReadDataButton(void)
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
	addr = 0;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
	ui.ro_process_value_SpinBox->setValue(valu);
	qDebug() << "Process Value entered";

	rdzonrspar.delay(50);
	addr = 1;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
	ui.ro_setpoint_eeprom_SpinBox->setValue(valu);
	qDebug() << "Setpoint EEPROM and RAM entered";

	rdzonrspar.delay(50);
	addr = 2;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
	ui.ro_setpoint_ram_SpinBox->setValue(valu);
	qDebug() << "Setpoint RAM entered";

	rdzonrspar.delay(50);
	addr = 6;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
	ui.ro_recipe_setpoint_SpinBox->setValue(valu);
	qDebug() << "Recipe Setpoint entered";

	rdzonrspar.delay(50);
	addr = 56;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
	ui.ro_active_setpoint_SpinBox->setValue(valu);
	qDebug() << "Active Setpoint entered";
}
