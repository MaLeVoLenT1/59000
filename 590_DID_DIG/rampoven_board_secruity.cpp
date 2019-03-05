#include "rampoven_board_secruity.h"
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

rampoven_board_Secruity::rampoven_board_Secruity(QWidget *parent)
    : QDialog(parent){ui.setupUi(this);}
rampoven_board_Secruity::~rampoven_board_Secruity(){}

void rampoven_board_Secruity::WriteDataButton(void)
{
	MainWindow writeEM;
	int slaveID, addr;
	double valu;//slaveID
	slaveID = 1;

	addr = 4005;
	valu = ui.ro_AccessLevel_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug("access level %f", valu);
}
void rampoven_board_Secruity::ReadDataButton(void)
{
	MainWindow rdzonrspar;
	double valu;
	int addr;
	int slaveID;
	modbus_t *ctx;

	slaveID = 1;qDebug() << "GOT IN!!! Rampoven_comm";
	ctx = modbus_new_rtu("/dev/ttyUSB0", 9600, 'N', 8, 1);	/* Add the appropriate path to your serial port */
	if (ctx == NULL) {fprintf(stderr, "Unable to create the libmodbus context\n");}

	addr = 4005;
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);
	ui.ro_AccessLevel_SpinBox->setValue(valu);
	qDebug() << "Access level entered";
}
