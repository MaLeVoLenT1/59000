#include "rampoven_cal_zero.h"
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

rampoven_cal_zero::rampoven_cal_zero(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);
}

rampoven_cal_zero::~rampoven_cal_zero()
{

}

void rampoven_cal_zero::WriteDataButton(void)
{
	MainWindow writeEM;
	int slaveID, addr;
	double valu;
	slaveID = 1;

	writeEM.delay(20);
	addr = 42;
	valu = ui.ro_Thermo_Zero_Offset_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug("Thermo Zero Offset %f", valu);

	writeEM.delay(20);
	addr = 43;
	valu = ui.ro_Thermo_Span_Adj_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug("Thermo Zero Span %f", valu);

	writeEM.delay(20);
	addr = 44;
	valu = ui.ro_RTD_Zero_Offset_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug("RTD Zero Offset %f", valu);

	writeEM.delay(20);
	addr = 45;
	valu = ui.ro_RTD_Span_Adj_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug("RTD Span %f", valu);

	writeEM.delay(20);
	addr = 46;
	valu = ui.ro_LowVolt_Zero_Offset_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug("Low-Voltage Zero Offset %f", valu);

	writeEM.delay(20);
	addr = 47;
	valu = ui.ro_LowVolt_Span_Adj_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug("Low-Voltage Span %f", valu);

	writeEM.delay(20);
	addr = 48;
	valu = ui.ro_HighVolt_Zero_Offset_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug("High-Voltage Zero Offset %f", valu);

	writeEM.delay(20);
	addr = 49;
	valu = ui.ro_HighVolt_Span_Adj_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug("High-Voltage Span %f", valu);

	writeEM.delay(20);
	addr = 50;
//	valu = ui.ro_Current_Zero_Offset_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug("Current Zero Offset %f", valu);

	writeEM.delay(20);
	addr = 51;
//	valu = ui.ro_Current_Span_Adj_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug("Current Span %f", valu);

	writeEM.delay(20);
	addr = 57;
//	valu = ui.ro_Decimal_Zero_Offset_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug("RTD Decimal Zero Offset %f", valu);

	writeEM.delay(20);
	addr = 58;
//	valu = ui.ro_Decimal_Span_Adj_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug("RTD Decimal Span %f", valu);

	writeEM.delay(20);
	addr = 59;
//	valu = ui.ro_SecHiVolt_Zero_Offset_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug("2nd High-Voltage Zero Cal %f", valu);

	writeEM.delay(20);
	addr = 60;
//	valu = ui.ro_SecHiVolt_Span_Adj_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug("2nd High-Voltage Span %f", valu);

	writeEM.delay(20);
	addr = 61;
//	valu = ui.ro_mV_Zero_Offset_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug("mV Zero Cal %f", valu);

	writeEM.delay(20);
	addr = 62;
//	valu = ui.ro_mV_Span_Adj_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug("mV Span %f", valu);
}

void rampoven_cal_zero::ReadDataButton(void)
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
	addr = 42;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
	ui.ro_Thermo_Zero_Offset_SpinBox->setValue(valu);
	qDebug() << "Output two Deviation entered";

	rdzonrspar.delay(50);
	addr = 43;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
	ui.ro_Thermo_Span_Adj_SpinBox->setValue(valu);
	qDebug("Thermo Zero Span %f", valu);

	rdzonrspar.delay(50);
	addr = 44;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
	ui.ro_RTD_Zero_Offset_SpinBox->setValue(valu);
	qDebug("RTD Zero Offset %f", valu);

	rdzonrspar.delay(50);
	addr = 45;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
	ui.ro_RTD_Span_Adj_SpinBox->setValue(valu);
	qDebug("RTD Span %f", valu);

	rdzonrspar.delay(50);
	addr = 46;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
	ui.ro_LowVolt_Zero_Offset_SpinBox->setValue(valu);
	qDebug("Low-Voltage Zero Offset %f", valu);

	rdzonrspar.delay(50);
	addr = 47;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
	ui.ro_LowVolt_Span_Adj_SpinBox->setValue(valu);
	qDebug("Low-Voltage Span %f", valu);

	rdzonrspar.delay(50);
	addr = 48;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
	ui.ro_HighVolt_Zero_Offset_SpinBox->setValue(valu);
	qDebug("High-Voltage Zero Offset %f", valu);

	rdzonrspar.delay(50);
	addr = 49;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
	ui.ro_HighVolt_Span_Adj_SpinBox->setValue(valu);
	qDebug("High-Voltage Span %f", valu);

	rdzonrspar.delay(50);
	addr = 50;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
//	ui.ro_Current_Zero_Offset_SpinBox->setValue(valu);
	qDebug("Current Zero Offset %f", valu);

	rdzonrspar.delay(50);
	addr = 51;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
//	ui.ro_Current_Span_Adj_SpinBox->setValue(valu);
	qDebug("Current Span %f", valu);

	rdzonrspar.delay(50);
	addr = 57;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
//	ui.ro_Decimal_Zero_Offset_SpinBox->setValue(valu);
	qDebug("RTD Decimal Zero Offset %f", valu);

	rdzonrspar.delay(50);
	addr = 58;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
//	ui.ro_Decimal_Span_Adj_SpinBox->setValue(valu);
	qDebug("RTD Decimal Span %f", valu);

	rdzonrspar.delay(50);
	addr = 59;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
//	ui.ro_SecHiVolt_Zero_Offset_SpinBox->setValue(valu);
	qDebug("2nd High-Voltage Zero Cal %f", valu);

	rdzonrspar.delay(50);
	addr = 60;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
//	ui.ro_SecHiVolt_Span_Adj_SpinBox->setValue(valu);
	qDebug("2nd High-Voltage Span %f", valu);

	rdzonrspar.delay(50);
	addr = 61;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
//	ui.ro_mV_Zero_Offset_SpinBox->setValue(valu);
	qDebug("mV Zero Cal %f", valu);

	rdzonrspar.delay(50);
	addr = 62;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
//	ui.ro_mV_Span_Adj_SpinBox->setValue(valu);
	qDebug("mV Span %f", valu);
}
