#include "output.h"
#include "valves.h"
#include "outputgainctrl.h"
#include <QDebug>
#include <QApplication>
#include <QKeyEvent>
#include <errno.h>

bool opStopMe;
__u8 opbuff[3];

extern double CURRENTRANGE;

extern unsigned int Range;
extern bool ALARM1ACTIVE;
extern bool ALARM2ACTIVE;
extern bool ALARMACTIVE;
extern double ALARMLO2;
extern double ALARMHI2;
extern double ALARMLO1;
extern double ALARMHI1;

extern double m_AlarmTest;

extern unsigned int i2c_slaveAddr;

extern double SETUP402RANGE;

output::output(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);

	ui.opAlarmL1lcdNumber->display(ALARMLO1);
	ui.opAlarmH1lcdNumber->display(ALARMHI1);
	ui.opAlarmL2lcdNumber->display(ALARMLO2);
	ui.opAlarmH2lcdNumber->display(ALARMHI2);

	ui.opCurrentRangeSpinBox->setValue(CURRENTRANGE);
}

output::~output()
{

}
// start slots

void output::keyReleaseEvent(QKeyEvent *event)
{
	QCursor crr;

	switch (event->key()){
		case Qt::Key_F1:{// setup
			opStopMe = 0;
			qDebug() << "Released F1 Key Setup";
			SETUP402RANGE = ui.opCurrentRangeSpinBox->value();
			CURRENTRANGE = ui.opCurrentRangeSpinBox->value();
			ui.setupButton->click();
			crr.setPos(2, 2);
			break;
		}
		case Qt::Key_F2:{// valves
			opStopMe = 0;
			qDebug() << "Released F2 Key Valves";
			ui.valvesButton->click();
			crr.setPos(2, 2);
			break;
		}
		case Qt::Key_F3:{// gain
			opStopMe = 0;
			qDebug() << "Released F3 Key Gain";
			ui.outputGainButton->click();
			crr.setPos(2, 2);
			break;
		}
		case Qt::Key_F4:{
			qDebug() << "Released F4 Key Setup";
			SETUP402RANGE = ui.opCurrentRangeSpinBox->value();
			CURRENTRANGE = ui.opCurrentRangeSpinBox->value();
			opStopMe = 0;
			crr.setPos(2, 2);
			break;
		}
		case Qt::Key_F5:{
//			crr.setPos(2, 2);
			opStopMe = 0;
			qDebug() << "Released F5 Key";
			break;
		}
		case Qt::Key_F6:{
//			crr.setPos(2, 2);
			opStopMe = 0;
			qDebug() << "Released F6 Key ()";
			break;
		}
		case Qt::Key_F7:{
//			crr.setPos(2, 2);
			opStopMe = 0;
			qDebug() << "Released F7 Key ()";
			break;
		}
		case Qt::Key_F8:{
//			crr.setPos(2, 2);
			opStopMe = 0;
			qDebug() << "Released F8 Key ()";
			break;
		}
		case Qt::Key_F9:{
//			crr.setPos(2, 2);
			opStopMe = 0;
			qDebug() << "Released F9 Key ()";
			break;
		}
		case Qt::Key_F10:{
//			crr.setPos(2, 2);
			opStopMe = 0;
			qDebug() << "Released F10 Key ()";
			break;
		}
		case Qt::Key_Return:{
			opStopMe = 0;
			crr.setPos(2, 2);
			qDebug() << "Released ENTER Key ()";
			ui.endButton->click();
			break;
		}
		default:{//
			qDebug() << "Default";
			qDebug("Default %x", event->key());
			break;
		}
	}
}
void output::current4to20mAOutput(double Sample){
	int fd;
	unsigned int tempSid;
	double cOutput;
	__u16 hextemp;
	__u8 hexlo, hexhi;

	tempSid = i2c_slaveAddr;// store current I2C Slave Id
	i2c_slaveAddr = 0x1A;// Change to needed Id for input reading

	cOutput = (Sample / CURRENTRANGE) * (20.0);// + 4.0;
	if (cOutput < 0.0){
		cOutput = 0.0;
	}
	if (cOutput > 19.999999){
		cOutput = 19.999999;
	}
	hextemp = ((cOutput + 0.000001) / 20.0) * 0xffff;

	hexlo = hextemp & 0x00ff;
	hexhi = (hextemp & 0xff00) >> 8;

	 opbuff[0] = 0x18;// device channel
	 opbuff[1] = hexhi;
	 opbuff[2] = hexlo;

/*	 qDebug("ALARM 2 output Sample = %f", Sample);
	 qDebug("ALARM 2 output Current Range = %f", currentRange);
	 qDebug("ALARM 2 output Current = %f", cOutput);
	 qDebug("ALARM 2 output 16bit hexlo = %x", hextemp);
	 qDebug("ALARM 2 output 16bit hexlo = %x", hexlo);
	 qDebug("ALARM 2 output 16bit hexhi = %x", hexhi);*/


	fd = opi2c.init_i2c();
	opi2c.test_set_slave(fd, i2c_slaveAddr);
	if (write(fd, opbuff, 3) != 3) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}

	opi2c.close_device(fd);
	i2c_slaveAddr = tempSid;
}
void output::oreadSignal(void){
	double temp;

	opStopMe = 1;

	while(opStopMe){
		temp = opreadSig.detTCD_I_Sig();
	}
}

void output::setup_1(void)
{
	setup setup1(this);// Crerate a dialog
	if (setup1.exec()) {
		qDebug() << "GOT IN setup";
		opStopMe = 0;
	}
}

void output::oValvesCtrl(void)
{
	Valves valctrl(this);// Crerate a dialog
	if (valctrl.exec()) {
		qDebug() << "GOT IN valve ctrl";
		opStopMe = 0;
	}
}
void output::oGainCtrl(void)
{
	OutputGainCtrl gainctrl(this);// Crerate a dialog
	if (gainctrl.exec()) {
		qDebug() << "GOT IN Gain ctrl";
		opStopMe = 0;
	}
}
