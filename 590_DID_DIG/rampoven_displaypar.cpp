#include "rampoven_displaypar.h"
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

rampoven_displaypar::rampoven_displaypar(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);
}

rampoven_displaypar::~rampoven_displaypar()
{

}
void rampoven_displaypar::ro_disPar_write_recipe(void)
{
	MainWindow writeEM;
	int slaveID, addr;
	double valu;

	slaveID = 1;
	writeEM.delay(20);
	addr = 4068;// Decimal Position for TC or RTD 0-1
	valu = ui.ro_Disply_par_dp_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug("Display decimal position %f", valu);

	writeEM.delay(20);
	addr = 4069;// Maximum Decimal Position or linear input 0 to 3
	valu = ui.ro_Disply_par_MaxDp_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug("Maximum Decimal Position or linear input %f", valu);

	writeEM.delay(20);
	addr = 35;//Display Filter
	valu = ui.ro_Disply_par_Df_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug("Display Filter %f", valu);

	writeEM.delay(20);
	addr = 4070;// Display Unit of Measure 1 to 3
	valu = ui.ro_Disply_par_Um_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug("Display Unit of Measure %f", valu);

	writeEM.delay(20);
	addr = 4071;// Setpoint Display Blanking 9 to 9999
	valu = ui.ro_Disply_par_Sdb_SpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug("Setpoint Display Blanking %f", valu);
}

void rampoven_displaypar::ro_dispPar_ReadZoneRampSoakParameters(void)//( m_modbus, slaveID )
{
	MainWindow rdzonrspar;
	double valu;
	int addr;
	int slaveID;
	modbus_t *ctx;

//	qDebug() << "GOT IN!!! ReadZoneRampSoakParameters";

//	ctx = modbus_new_rtu("/dev/ttyS2", 9600, 'N', 8, 1);
	ctx = modbus_new_rtu("/dev/ttyUSB0", 9600, 'N', 8, 1);	/* Add the appropriate path to your serial port */
	if (ctx == NULL) {
//		fprintf(stderr, "Unable to create the libmodbus context\n");
	}

    slaveID = 1;
    rdzonrspar.delay(50);
    addr = 4068;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr); // Display position 0,1
    ui.ro_Disply_par_dp_SpinBox->setValue(valu);
    qDebug() << "Changed!!! Display position";


    addr = 4069;
    rdzonrspar.delay(50);
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);// Maximum Decimal Position 0 to 3
    ui.ro_Disply_par_MaxDp_SpinBox->setValue(valu);
    qDebug() << "Changed!!! Maximum Decimal position";

    addr = 35;
    rdzonrspar.delay(50);
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);// Display Filter 0 to 100
    ui.ro_Disply_par_Df_SpinBox->setValue(valu);
    qDebug() << "Changed!!! Display Filter";

    addr = 4070;
    rdzonrspar.delay(50);
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//Display Unit Of Measure 1 to 3
    ui.ro_Disply_par_Um_SpinBox->setValue(valu);
   qDebug() << "Changed!!! Display Unit Of Measure";

    rdzonrspar.delay(50);
    addr = 4071;
    valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//Setpoint Display Blanking 9 to 9999
    ui.ro_Disply_par_Sdb_SpinBox->setValue(valu);
    qDebug() << "Changed!!! Setpoint Display Blanking";
}
