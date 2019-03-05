#include "inputparam.h"
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

inputParam::inputParam(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);

//	connect(ui.ro_inpar_type_SpinBox,SIGNAL(valueChanged(double)), this, SLOT(intype(double)));
//	connect(ui.ro_inpar_inbias_SpinBox, SIGNAL(valueChanged(double)), this, SLOT(inbias(double)));
//	connect(ui.ro_inpar_indeb_SpinBox, SIGNAL(valueChanged(double)), this, SLOT(indebounce(double)));
//	connect(ui.ro_inpar_infilter_SpinBox, SIGNAL(valueChanged(double)), this, SLOT(infilter(double)));
//	connect(ui.ro_inpar_lishl_SpinBox, SIGNAL(valueChanged(double)), this, SLOT(lishl(double)));
//	connect(ui.ro_inpar_lisll_SpinBox, SIGNAL(valueChanged(double)), this, SLOT(lisll(double)));
//	connect(ui.ro_inpar_sphl_SpinBox, SIGNAL(valueChanged(double)), this, SLOT(sphl(double)));
//	connect(ui.ro_inpar_spll_SpinBox, SIGNAL(valueChanged(double)), this, SLOT(spll(double)));



}

inputParam::~inputParam()
{

}

void inputParam::intype(double valu)//4049
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 4049;//
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "input type SLOT entered";
}//
void inputParam::indebounce(double valu)//4116
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 4116;//
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "input Debounce SLOT entered";
}//
void inputParam::inbias(double valu)//25
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 25;//
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "input bias SLOT entered";
}//
void inputParam::lisll(double valu)//26
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 26;//
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "input lisll SLOT entered";
}//
void inputParam::lishl(double valu)//27
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 27;//
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "input lishl SLOT entered";
}//
void inputParam::spll(double valu)//28
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 28;//
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "input spll SLOT entered";
}//
void inputParam::sphl(double valu)//29
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 29;//
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "input sphl SLOT entered";
}//
void inputParam::infilter(double valu)//30
{
	MainWindow writeEM;
	int slaveID, addr;

	slaveID = 1;
	addr = 30;//
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "input input filter SLOT entered";
}//

void inputParam::WriteDataButton(void)
{
	MainWindow writeEM;
	int slaveID, addr;
	double valu;
	slaveID = 1;

	addr = 4049;//
	valu = ui.ro_inpar_type_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "input type SLOT entered";

	addr = 4116;//
	valu = ui.ro_inpar_indeb_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "input Debounce SLOT entered";

	addr = 25;//
	valu = ui.ro_inpar_inbias_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "input bias SLOT entered";

	addr = 26;//
	valu = ui.ro_inpar_lisll_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "input lisll SLOT entered";

	addr = 27;//
	valu = ui.ro_inpar_lishl_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "input lishl SLOT entered";

	addr = 28;//
	valu = ui.ro_inpar_spll_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "input spll SLOT entered";

	addr = 29;//
	valu = ui.ro_inpar_sphl_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "input sphl SLOT entered";

	addr = 30;//
	valu = ui.ro_inpar_infilter_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "input input filter SLOT entered";
}

void inputParam::ReadROinputparameters(void)
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

	addr = 4049;//
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//
	ui.ro_inpar_type_SpinBox->setValue(valu);
	qDebug() << "Read!!! input type";

	addr = 4116;//
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//
	ui.ro_inpar_indeb_SpinBox->setValue(valu);
	qDebug() << "Read!!! input Debounce";

	addr = 25;//
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//
	ui.ro_inpar_inbias_SpinBox->setValue(valu);
	qDebug() << "Read!!! input bias";

	addr = 26;//
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//
	ui.ro_inpar_lisll_SpinBox->setValue(valu);
	qDebug() << "Read!!! input lisll";

	addr = 27;//
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//
	ui.ro_inpar_lishl_SpinBox->setValue(valu);
	qDebug() << "Read!!! input lishl";

	addr = 28;//
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//
	ui.ro_inpar_spll_SpinBox->setValue(valu);
	qDebug() << "Read!!! input spll";

	addr = 29;//
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//
	ui.ro_inpar_sphl_SpinBox->setValue(valu);
	qDebug() << "Read!!! input sphl";

	addr = 30;//
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//
	ui.ro_inpar_infilter_SpinBox->setValue(valu);
	qDebug() << "Read!!! input filter";
}
