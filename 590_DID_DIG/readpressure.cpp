#include "readpressure.h"
#include "mainwindow.h"
#include "i2c--dev.h"
#include "ovenwidget.h"
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/ioctl.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <QProcess>
#include <QDebug>
#include <QApplication>
#include <QKeyEvent>

bool stopMePressure;
extern unsigned int i2c_slaveAddr;
//extern __u8 readval[4];

readPressure::readPressure(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);
}

readPressure::~readPressure()
{
	stopMePressure = 0;// Kill WHile Loop for pressure
}
void readPressure::keyReleaseEvent(QKeyEvent *event)
{
	OvenWidget owValves;

	switch (event->key()){
	case Qt::Key_F1:{
		stopMePressure = 0;// Kill WHile Loop for pressure
		ui.pressureOkButton->click();
		qDebug() << "Released F7 Key (pressure)";
		break;
	}
	case Qt::Key_F2:{
		qDebug() << "Released F2 Key";
		break;
	}
	case Qt::Key_F3:{
		qDebug() << "Released F3 Key";
		break;
	}
	case Qt::Key_F4:{
		qDebug() << "Released F4 Key";
		break;
	}
	case Qt::Key_F5:{
		qDebug() << "Released F5 Key (DET 1)";
//		ui->partStack->setCurrentWidget(currentWidgetList[1]);
		break;
	}
	case Qt::Key_F6:{
		qDebug() << "Released F6 Key (Oven)";
//		ui->partStack->setCurrentWidget(currentWidgetList[0]);
		break;
	}
	case Qt::Key_F7:{
		break;
	}
	case Qt::Key_F8:{
		qDebug() << "Released F8 Key (Det 2)";
//		ui->partStack->setCurrentWidget(currentWidgetList[2]);
		break;
	}
	case Qt::Key_F9:{
		owValves.owValveControl();
		qDebug() << "Released F9 Key (Valve)";
		break;
	}
	case Qt::Key_F10:{
		qDebug() << "Released F10 Key (Inj Port)";
//		ui->partStack->setCurrentWidget(currentWidgetList[3]);
		break;
	}
	default:{//
		break;
	}
}
}
void readPressure::pressureConfig(void){
	MainWindow i2c;

	__u16 buff[3];

	int fd;
	__u8 port_addr;
	unsigned int tempSid;

	port_addr = 0xa2;// address for pressure read ??

	tempSid = i2c_slaveAddr;// store current I2C Slave Id
	i2c_slaveAddr = 0x33;// Change to needed Id for Pressure reading

	fd = i2c.init_i2c();// open device
	i2c.test_set_slave(fd, i2c_slaveAddr);

	buff[0] = port_addr;
	if (write(fd, buff, 1) != 1) {
		fprintf(stderr, "i2c_write_command: 0x0b Error on write: %s\n",
		strerror(errno));
	}

	i2c.close_device(fd);
	i2c_slaveAddr = tempSid;
	qDebug("Wrote Pressure Config");
}
void readPressure::pressureMeter(void){
	MainWindow i2c;

	__u16 buff[3], temp_16;//__16
	__u8 buft[3];
	int fd;
	__u8 port_addr;
	unsigned int tempSid, i;
	double valu, valu1, t_16;

	temp_16 = 0x00;

	port_addr = 0x69;// address for pressure read ??

	tempSid = i2c_slaveAddr;// store current I2C Slave Id
	i2c_slaveAddr = 0x33;// Change to needed Id for pressure reading

	fd = i2c.init_i2c();// open device
	i2c.test_set_slave(fd, i2c_slaveAddr);
	buff[0] = port_addr;// command for P4-7
	if (write(fd, buff, 1) != 1) {
			fprintf(stderr, "i2c_write_command: 0x09 0x0a Error on write: %s\n",
			strerror(errno));
	}

	stopMePressure = 1;
	while(stopMePressure){

		for(i=0;i<2;++i){
			buff[0] = port_addr;// command for P4-7
			if (read(fd, buff, 2) != 2) {
					fprintf(stderr, "i2c_write_command: 0x09 0x0a Error on write: %s\n",
							strerror(errno));
				}
		}


		buft[1] = buff[0]>>8;
		buft[0] = buff[0] & 0x00ff;

//		qDebug("buff[0] = %x", buff[0]);

//		qDebug("hi Byte buft[0] = %x", buft[0]);
//		qDebug("lo Byte buft[1] = %x", buft[1]);

		temp_16 = (buft[0] & 0x0F);
//		qDebug("mask hi Byte = %x", temp_16);

		temp_16 = temp_16<<8;
//		qDebug("shift hi Byte = %x", temp_16);

		temp_16 = temp_16 + buft[1];
//		qDebug("Add hi & Lo Byte = %x", temp_16);

		t_16 = temp_16;// move to double

		valu1 = ((t_16 / 4096) * 5.0);    // % voltage of max voltage;
//		qDebug("VALU1 = %f", valu1);

		valu = ((valu1 - 0.5) / 0.04 )  * 5.0;// was /.1 now /0.04
		valu = valu / 2.0;

//		he_Valu = 15.576 * valu - 40.875;// correction factor for helium

		ui.readPressureLCD->display(valu);
//		qDebug("Pressure = %f", valu);
//		qDebug("corrected pressure = %f", he_Valu);
		i2c.delay(500);
		qApp->processEvents();// stop and check for any events to be processed - added 7/27/2014 test
	}
	i2c.close_device(fd);
	i2c_slaveAddr = tempSid;
}
