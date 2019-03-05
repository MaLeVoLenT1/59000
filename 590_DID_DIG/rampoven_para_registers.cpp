#include "rampoven_para_registers.h"
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
rampoven_para_registers::rampoven_para_registers(QWidget *parent)
    : QDialog(parent){ui.setupUi(this);}
rampoven_para_registers::~rampoven_para_registers(){}


void rampoven_para_registers::WriteDataButton(void)
{
	MainWindow writeEM;
	int slaveID, addr;
	double valu;

	slaveID = 1;
	addr = 4004;//twoDeviation(double valu)
	valu = ui.ro_operating_mode_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug("Operating Mode %f", valu);
}
void rampoven_para_registers::ReadDataButton(void)
{
	MainWindow rdzonrspar;
	double valu;
	int addr;
	int slaveID;
	modbus_t *ctx;

	slaveID = 1;qDebug() << "GOT IN!!! Rampoven_comm";
	ctx = modbus_new_rtu("/dev/ttyUSB0", 9600, 'N', 8, 1);	/* Add the appropriate path to your serial port */
	if (ctx == NULL) {fprintf(stderr, "Unable to create the libmodbus context\n");}

	rdzonrspar.delay(50);
	addr = 4004;
	valu = rdzonrspar.readRecipeValue(slaveID, addr);//ro_comm_protocol_SpinBox
	ui.ro_operating_mode_SpinBox->setValue(valu);
	qDebug() << "Operating Mode entered";

	rdzonrspar.delay(50);
	addr = 4003;
	valu = rdzonrspar.readRecipeValue(slaveID, addr);//ro_comm_protocol_SpinBox
	ui.ro_Status_Byte_SpinBox->setValue(valu);
	qDebug() << "Statues Byte entered";

	rdzonrspar.delay(50);
	addr = 4091;
	valu = rdzonrspar.readRecipeValue(slaveID, addr);//ro_comm_protocol_SpinBox
	ui.ro_autotune_state_SpinBox->setValue(valu);
	qDebug() << "autotune state entered";

	rdzonrspar.delay(50);
	addr = 4092;
	valu = rdzonrspar.readRecipeValue(slaveID, addr);//ro_comm_protocol_SpinBox
	ui.ro_Recipe_State_SpinBox->setValue(valu);
	qDebug() << "Recipe State entered";

	rdzonrspar.delay(50);
	addr = 4093;
	valu = rdzonrspar.readRecipeValue(slaveID, addr);//ro_comm_protocol_SpinBox
	ui.ro_Recipe_Segment_SpinBox->setValue(valu);
	qDebug() << "Recipe Segment entered";

	rdzonrspar.delay(50);
	addr = 4094;
	valu = rdzonrspar.readRecipeValue(slaveID, addr);//ro_comm_protocol_SpinBox
	ui.ro_Resume_Exhaustion_SpinBox->setValue(valu);
	qDebug() << "Resume Exhaustion entered";
}
