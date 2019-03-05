#include "rampoven_comm.h"
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

extern unsigned int i2c_slaveAddr;//6-30-2014

Rampoven_comm::Rampoven_comm(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);

	connect(ui.ro_comm_protocol_SpinBox, SIGNAL(valueChanged(double)), this, SLOT(commProtocol(double)));
	connect(ui.ro_comm_ID_SpinBox, SIGNAL(valueChanged(double)), this, SLOT(commID(double)));
	connect(ui.ro_comm_baud_SpinBox, SIGNAL(valueChanged(double)), this, SLOT(baudrate(double)));
	connect(ui.ro_comm_parity_SpinBox, SIGNAL(valueChanged(double)), this, SLOT(parity(double)));
	connect(ui.ro_comm_regordering_SpinBox, SIGNAL(valueChanged(double)), this, SLOT(Ieeeregordering(double)));
}

Rampoven_comm::~Rampoven_comm()
{

}
void Rampoven_comm::ReadROCommParameters(void)
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
	addr = 4080;//
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ro_comm_protocol_SpinBox
	ui.ro_comm_protocol_SpinBox->setValue(valu);
	qDebug() << "Changed!!! Protocol";

	rdzonrspar.delay(50);
	addr = 4081;//
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//commID
	ui.ro_comm_ID_SpinBox->setValue(valu);
	qDebug() << "Changed!!! ID";

	rdzonrspar.delay(50);
	addr = 4082;//
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//BAUDRATE
	ui.ro_comm_baud_SpinBox->setValue(valu);
	qDebug() << "Changed!!! Baudrate";

	rdzonrspar.delay(50);
	addr = 4083;//
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//Parity
	ui.ro_comm_parity_SpinBox->setValue(valu);
	qDebug() << "Changed!!! parity";

	rdzonrspar.delay(50);
	addr = 4084;//
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//IEEE REG Ordering
	ui.ro_comm_regordering_SpinBox->setValue(valu);
	qDebug() << "Changed!!! IEEE REG Ordering";

}
void Rampoven_comm::commProtocol(double valu)// read only
{
	MainWindow rdzonrspar;
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
	addr = 4080;//
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ro_comm_protocol_SpinBox
	ui.ro_comm_protocol_SpinBox->setValue(valu);
	qDebug() << "Changed!!! Protocol";
}
void Rampoven_comm::commID(double valu)
{
	MainWindow writeEM,rdzonrspar;
	int slaveID, addr;

	slaveID = 1;
	rdzonrspar.delay(50);
	addr = 4081;//
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "ID SLOT entered";
}
void Rampoven_comm::baudrate(double valu)
{
	MainWindow writeEM, rdzonrspar;
	int slaveID, addr;

	slaveID = 1;
	rdzonrspar.delay(50);
	addr = 4082;//
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "Baudrate SLOT entered";
}
void Rampoven_comm::parity(double valu)
{
	MainWindow writeEM, rdzonrspar;
	int slaveID, addr;

	slaveID = 1;
	rdzonrspar.delay(50);
	addr = 4083;//
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "parity SLOT entered";
}
void Rampoven_comm::Ieeeregordering(double valu)
{
	MainWindow writeEM, rdzonrspar;
	int slaveID, addr;

	slaveID = 1;
	rdzonrspar.delay(50);
	addr = 4084;//
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "IEEE ReG Ordering SLOT entered";
}
