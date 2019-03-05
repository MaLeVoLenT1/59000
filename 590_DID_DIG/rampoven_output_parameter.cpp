#include "rampoven_output_parameter.h"
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


rampoven_output_parameter::rampoven_output_parameter(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);

}
rampoven_output_parameter::~rampoven_output_parameter()
{

}
void rampoven_output_parameter::ReadROOutputparameters(void)
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
	addr = 34;//twoDeviation(double valu)
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ro_comm_protocol_SpinBox
	qDebug("read twoDeviation = %f", valu);
//	ui.output_two_deviationSpinBox->setValue(valu);
	qDebug() << "Output two Deviation entered";

	rdzonrspar.delay(50);
	addr = 33;//twoAlarmSetpoint(double valu)
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ro_comm_protocol_SpinBox
//	ui.output_two_alarm_setpointSpinBox->setValue(valu);
	qDebug() << "Output two Alarm Setpoint entered";

	rdzonrspar.delay(50);
	addr = 4064;//twoAlarmInhibit(double valu)
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ro_comm_protocol_SpinBox
//	ui.output_two_alarm_inhibitSpinBox->setValue(valu);
	qDebug() << "Output two Alarm Inhibit entered";

	rdzonrspar.delay(50);
	addr = 4063;//twoAlarmDelay(double valu)
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ro_comm_protocol_SpinBox
//	ui.output_two_alarm_delaySpinBox->setValue(valu);
	qDebug() << "Output two Alarm Delay entered";

	rdzonrspar.delay(50);
	addr = 4062;//twoAlarmOperation(double valu)
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ro_comm_protocol_SpinBox
//	ui.output_two_alarm_operationSpinBox->setValue(valu);
	qDebug() << "Output two Alarm Operation entered";

	rdzonrspar.delay(50);
	addr = 4061;//twoAlarmAction(double valu)
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ro_comm_protocol_SpinBox
//	ui.output_two_alarmactionSpinBox->setValue(valu);
	qDebug() << "Output two Alarm Action entered";

	rdzonrspar.delay(50);
	addr = 4067;//twoHighLimit(double valu)
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ro_comm_protocol_SpinBox
//	ui.output_two_highlimitSpinBox->setValue(valu);
	qDebug() << "Output two High Limit entered";

	rdzonrspar.delay(50);
	addr = 4066;//twoLowLimit(double valu)
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ro_comm_protocol_SpinBox
//	ui.output_two_lowlimitSpinBox->setValue(valu);
	qDebug() << "Output two Low Limit entered";

	rdzonrspar.delay(50);
	addr = 4065;//twoCycleTime(double valu)
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ro_comm_protocol_SpinBox
//	ui.output_two_cycletimeSpinBox->setValue(valu);
	qDebug() << "Output two Cycle Time entered";

	rdzonrspar.delay(50);
	addr = 4060;//twoAction(double valu)
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ro_comm_protocol_SpinBox
//	ui.output_two_actionSpinBox->setValue(valu);
	qDebug() << "Output two Action entered";

	rdzonrspar.delay(50);
	addr = 4059;//twoType(double valu)
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ro_comm_protocol_SpinBox
	qDebug("read two type = %f", valu);
//	ui.output_two_typeSpinBox->setValue(valu);
	qDebug() << "Output two Type entered";

	rdzonrspar.delay(50);
	//---------------------------------------------

	rdzonrspar.delay(50);
	addr = 32;//oneDeviation(double valu)
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ro_comm_protocol_SpinBox
	ui.output_one_deviationSpinBox->setValue(valu);
	qDebug() << "Output one Deviation entered";

	rdzonrspar.delay(50);
	addr = 31;//oneAlarmSetpoint(double valu)
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ro_comm_protocol_SpinBox
	ui.output_one_alarm_setpointSpinBox->setValue(valu);
	qDebug() << "Output one Alarm Setpoint entered";

	rdzonrspar.delay(50);
	addr = 4055;//oneAlarmInhibit(double valu)
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ro_comm_protocol_SpinBox
	ui.output_one_alarm_inhibitSpinBox->setValue(valu);
	qDebug() << "Output one Alarm Inhibit entered";

	rdzonrspar.delay(50);
	addr = 4054;//oneAlarmDelay(double valu)
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ro_comm_protocol_SpinBox
	ui.output_one_alarm_delaySpinBox->setValue(valu);
	qDebug() << "Output one Alarm Delay entered";

	rdzonrspar.delay(50);
	addr = 4053;//oneAlarmOperation(double valu)
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ro_comm_protocol_SpinBox
	ui.output_one_alarm_operationSpinBox->setValue(valu);
	qDebug() << "Output one Alarm Operation entered";

	rdzonrspar.delay(50);
	addr = 4052;//oneAlarmAction(double valu)
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ro_comm_protocol_SpinBox
	ui.output_one_alarmactionSpinBox->setValue(valu);
	qDebug() << "Output one Alarm Action entered";

	rdzonrspar.delay(50);
	addr = 4058;//oneHighLimit(double valu)
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ro_comm_protocol_SpinBox
	ui.output_one_highlimitSpinBox->setValue(valu);
	qDebug() << "Output one High Limit entered";

	rdzonrspar.delay(50);
	addr = 4057;//oneLowLimit(double valu)
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ro_comm_protocol_SpinBox
	ui.output_one_lowlimitSpinBox->setValue(valu);
	qDebug() << "Output one Low Limit entered";

	rdzonrspar.delay(50);
	addr = 4056;//oneCycleTime(double valu)
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ro_comm_protocol_SpinBox
	ui.output_one_cycletimeSpinBox->setValue(valu);
	qDebug() << "Output one Cycle Time entered";

	rdzonrspar.delay(50);
	addr = 4051;//oneAction(double valu)
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ro_comm_protocol_SpinBox
	ui.output_one_actionSpinBox->setValue(valu);
	qDebug() << "Output one Action entered";

	rdzonrspar.delay(50);
	addr = 4050;//oneType(double valu)
	valu = rdzonrspar.readRecipeValue(i2c_slaveAddr, addr);//ro_comm_protocol_SpinBox
	ui.output_one_typeSpinBox->setValue(valu);
	qDebug() << "Output one Type entered";
}
void rampoven_output_parameter::WritesData(void)
{
	MainWindow writeEM;
	int slaveID,addr;
	slaveID = 1;
	double valu = 0.0;// added 0.0 7-28-15 to satisfy warning

	writeEM.delay(20);
	addr = 34;//twoDeviation(double valu)
//	valu = ui.output_two_deviationSpinBox->value();
	qDebug("write twoDeviation = %f", valu);
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "Output two Deviation entered";

	writeEM.delay(20);
	addr = 33;//twoAlarmSetpoint(double valu)
//	valu = ui.output_two_alarm_setpointSpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "Output two Alarm Setpoint entered";

	writeEM.delay(20);
	addr = 4064;//twoAlarmInhibit(double valu)
//	valu = ui.output_two_alarm_inhibitSpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "Output two Alarm Inhibit entered";

	writeEM.delay(20);
	addr = 4063;//twoAlarmDelay(double valu)
//	valu = ui.output_two_alarm_delaySpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "Output two Alarm Delay entered";

	writeEM.delay(20);
	addr = 4062;//twoAlarmOperation(double valu)
//	valu = ui.output_two_alarm_operationSpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "Output two Alarm Operation entered";

	writeEM.delay(20);
	addr = 4061;//twoAlarmAction(double valu)
//	valu = ui.output_two_alarmactionSpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "Output two Alarm Action entered";

	writeEM.delay(20);
	addr = 4067;//twoHighLimit(double valu)
//	valu = ui.output_two_highlimitSpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "Output two High Limit entered";

	writeEM.delay(20);
	addr = 4066;//twoLowLimit(double valu)
//	valu = ui.output_two_lowlimitSpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "Output two Low Limit entered";

	writeEM.delay(20);
	addr = 4065;//twoCycleTime(double valu)
//	valu = ui.output_two_cycletimeSpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "Output two Cycle Time entered";

	writeEM.delay(20);
	addr = 4060;//twoAction(double valu)
//	valu = ui.output_two_actionSpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "Output two Action entered";

	writeEM.delay(20);
	addr = 4059;//twoType(double valu)
//	valu = ui.output_two_typeSpinBox->value();
	qDebug("write two type = %f", valu);

	writeEM.delay(20);
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "Output two Type entered";

	//---------------------------------------------

	writeEM.delay(20);
	addr = 32;//oneDeviation(double valu)
	valu = ui.output_one_deviationSpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "Output one Deviation entered";

	writeEM.delay(20);
	addr = 31;//oneAlarmSetpoint(double valu)
	valu = ui.output_one_alarm_setpointSpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "Output one Alarm Setpoint entered";

	writeEM.delay(20);
	addr = 4055;//oneAlarmInhibit(double valu)
	valu = ui.output_one_alarm_inhibitSpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "Output one Alarm Inhibit entered";

	writeEM.delay(20);
	addr = 4054;//oneAlarmDelay(double valu)
	valu = ui.output_one_alarm_delaySpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "Output one Alarm Delay entered";

	writeEM.delay(20);
	addr = 4053;//oneAlarmOperation(double valu)
	valu = ui.output_one_alarm_operationSpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "Output one Alarm Operation entered";

	writeEM.delay(20);
	addr = 4052;//oneAlarmAction(double valu)
	valu = ui.output_one_alarmactionSpinBox->value();
	qDebug("write one output alarm action = %f", valu);

	writeEM.delay(20);
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "Output one Alarm Action entered";

	writeEM.delay(20);
	addr = 4058;//oneHighLimit(double valu)
	valu = ui.output_one_highlimitSpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "Output one High Limit entered";

	writeEM.delay(20);
	addr = 4057;//oneLowLimit(double valu)
	valu = ui.output_one_lowlimitSpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "Output one Low Limit entered";

	writeEM.delay(20);
	addr = 4056;//oneCycleTime(double valu)
	valu = ui.output_one_cycletimeSpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "Output one Cycle Time entered";

	writeEM.delay(20);
	addr = 4051;//oneAction(double valu)
	valu = ui.output_one_actionSpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "Output one Action entered";

	writeEM.delay(20);
	addr = 4050;//oneType(double valu)
	valu = ui.output_one_typeSpinBox->value();
	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	qDebug() << "Output one Type entered";
}
