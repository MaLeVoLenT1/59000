#include "valvecontrol.h"
#include "i2c--dev.h"
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/ioctl.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <QProcess>
#include <QApplication>
#include <QKeyEvent>
#include "detectorwidget.h"
#include "objectmgmt.h"
#include "qlistwidget.h"
#include "qtablewidget.h"
#include "rampmonitor.h"

bool stopRead;
bool toggleValve1;
bool toggleValve2;
bool toggleValve3;
bool toggleValve4;
bool toggleValve5;
bool toggleValve6;
bool toggleValve7;
bool toggleValve8;
extern unsigned int i2c_slaveAddr;
extern unsigned int value_1;
extern unsigned int value_2;
extern unsigned int value_3;
extern unsigned int value_4;
extern bool FLAMEON;
extern bool vstate1;
extern bool vstate2;
extern bool vstate3;
extern bool vstate4;
extern bool vstate5;
extern bool vstate6;
extern bool CALINDICATOR;
extern bool READY;

valveControl::valveControl(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);

	i2c_slaveAddr = 0x40;//07/1/2014
	readValveState();
}

valveControl::~valveControl()
{

}

void valveControl::readValveState(void)
{
	if (toggleValve8 == 1){
		ui.valve_8_EnabledCheckBox->setChecked(1);
	}else{
		ui.valve_8_EnabledCheckBox->setChecked(0);
	}
	if (toggleValve7 == 1){
		ui.valve_7_EnabledCheckBox->setChecked(1);
	}else{
		ui.valve_7_EnabledCheckBox->setChecked(0);
	}
	if (toggleValve6 == 1){
		ui.valve_6_EnabledCheckBox->setChecked(1);
	}else{
		ui.valve_6_EnabledCheckBox->setChecked(0);
	}
	if (toggleValve5 == 1){
		ui.valve_5_EnabledCheckBox->setChecked(1);
	}else{
		ui.valve_5_EnabledCheckBox->setChecked(0);
	}
	if (toggleValve4 == 1){
		ui.valve_4_EnabledCheckBox->setChecked(1);
	}else{
		ui.valve_4_EnabledCheckBox->setChecked(0);
	}
	if (toggleValve3 == 1){
		ui.valve_3_EnabledCheckBox->setChecked(1);
	}else{
		ui.valve_3_EnabledCheckBox->setChecked(0);
	}
	if (toggleValve2 == 1){
		ui.valve_2_EnabledCheckBox->setChecked(1);
	}else{
		ui.valve_2_EnabledCheckBox->setChecked(0);
	}
	if (toggleValve1 == 1){
		ui.valve_1_EnabledCheckBox->setChecked(1);
	}else{
		ui.valve_1_EnabledCheckBox->setChecked(0);
	}
}
void valveControl::remoteCalTrigger(void){
	__u8 buft[3], buff[3];
	int fd;
	__u8 port_addr;
	unsigned int tempSid;

	port_addr = 0x34;// address for Trigger read P20 IO12

	tempSid = i2c_slaveAddr;// store current I2C Slave Id
	i2c_slaveAddr = 0x40;// Change to needed Id for input reading

	fd = vc_i2c.init_i2c();// open device
	vc_i2c.test_set_slave(fd, i2c_slaveAddr);
	buft[0] = port_addr;
	if (write(fd, buft, 2) != 2) {
			fprintf(stderr, "i2c_write_command: 0x09 0x0a Error on write: %s\n",
			strerror(errno));
	}

	vc_i2c.i2c_read_reg(fd, buff, port_addr);
//		qDebug("buff[0] = %x", buff[0]);

	vc_i2c.delay(1000);

	if(buff[0] == 0){
//	qDebug("buff[0] = %x", buff[0]);
	stopRead = 0;
	}
		qApp->processEvents();// stop and check for any events to be processed - added 7/27/2014 test

		vc_i2c.close_device(fd);
	i2c_slaveAddr = tempSid;
}
unsigned int valveControl::fidH2BypassRdInput(void){// Checks flame state and controls solenoid on / off for H2
													// Checks 123-302 input to main board IN3
													// 123-302 shuts off fuel independantly
	__u8 buft[3], buff[3];
	int fd;
	__u8 port_addr;
	unsigned int tempSid;
	unsigned int i;

	port_addr = 0x35;// address for H3 Bypass read P21

	tempSid = i2c_slaveAddr;// store current I2C Slave Id
	i2c_slaveAddr = 0x40;// Change to needed Id for input reading

	fd = vc_i2c.init_i2c();// open device
	vc_i2c.test_set_slave(fd, i2c_slaveAddr);
	buft[0] = port_addr;
	if (write(fd, buft, 2) != 2) {
			fprintf(stderr, "i2c_write_command: 0x09 0x0a Error on write: %s\n",
			strerror(errno));
	}

	for(i=0; i<1; ++i){//was 1

		vc_i2c.i2c_read_reg(fd, buff, port_addr);// Read in3 port (pin) 21 for FLAME ON Status
		qDebug("Function fidH2BypassRdInput() buff[0] = %x", buff[0]);

		if(buff[0] == 0){
			FLAMEON = 0;
			qDebug("Valve FLAME STATE OFF 0 = %x", FLAMEON);
			IO8b();// make not ready
			IO5b();// switch solenoid off
//			IO6b();// Flame Off indicator Off
			stup.killFlowSafety();
		}
		else if((buff[0] == 1)){// && (CALINDICATOR == 1)
			FLAMEON = 1;
			qDebug("Valve FLAME STATE On 1 = %x", FLAMEON);
			IO5b();// switch solenoid off
//			IO6a();// Flame on Indicator On
			if (CALINDICATOR == 1) {
//				IO8a();// make ready
			}else{
//				IO8b();// make not ready
			}
			/////////////////////////////////// Write messages
		}

	}

	vc_i2c.close_device(fd);
	i2c_slaveAddr = tempSid;

	return FLAMEON;
}
void valveControl::testRdInput(void){
//	MainWindow vc_i2c;

	__u8 buft[3], buff[3];
	int fd;
	__u8 port_addr;
	unsigned int tempSid;

	port_addr = 0x34;// address for Trigger read P20 IO12

	tempSid = i2c_slaveAddr;// store current I2C Slave Id
	i2c_slaveAddr = 0x40;// Change to needed Id for input reading

	fd = vc_i2c.init_i2c();// open device
	vc_i2c.test_set_slave(fd, i2c_slaveAddr);
	buft[0] = port_addr;
	if (write(fd, buft, 2) != 2) {
			fprintf(stderr, "i2c_write_command: 0x09 0x0a Error on write: %s\n",
			strerror(errno));
	}

	stopRead = 1;
	while(stopRead){

		vc_i2c.i2c_read_reg(fd, buff, port_addr);
//		qDebug("buff[0] = %x", buff[0]);

		vc_i2c.delay(1000);

		if(buff[0] == 0){
//			qDebug("buff[0] = %x", buff[0]);
			stopRead = 0;
		}
		qApp->processEvents();// stop and check for any events to be processed - added 7/27/2014 test
	}

	vc_i2c.close_device(fd);
	i2c_slaveAddr = tempSid;
}
void valveControl::keyReleaseEvent(QKeyEvent *event)
{

		switch (event->key()){
		case Qt::Key_F1:{

//			IO8a(); //  Rdy
			ui.ValveOkButton->click();
			qDebug() << "Released F1 Key";
			break;
		}
		case Qt::Key_F2:{
//			IO8b(); // not Rdy
			qDebug() << "Released F2 Key";
			break;
		}
		case Qt::Key_F3:{// Trigger test
//			stopRead = 1;
//			testRdInput();
			qDebug() << "Released F3 Key";
			break;
		}
		case Qt::Key_F4:{// Trigger stop
//			stopRead = 0;
			qDebug() << "Released F4 Key";
			break;
		}
		case Qt::Key_F5:{
			qDebug() << "Released F5 Key (DET 1)";
//			ui->partStack->setCurrentWidget(currentWidgetList[1]);
			break;
		}
		case Qt::Key_F6:{
			qDebug() << "Released F6 Key (Oven)";
//			ui->partStack->setCurrentWidget(currentWidgetList[0]);
			break;
		}
		case Qt::Key_F7:{
//			owReadFl.owReadFlow();
			qDebug() << "Released F7 Key (Flow)";
			break;
		}
		case Qt::Key_F8:{
			qDebug() << "Released F8 Key (Det 2)";
//			ui->partStack->setCurrentWidget(currentWidgetList[2]);
			break;
		}
		case Qt::Key_F9:{
//			owValves.owValveControl();
			qDebug() << "Released F9 Key (Valve)";
			break;
		}
		case Qt::Key_F10:{
			qDebug() << "Released F10 Key (Inj Port)";
//			ui->partStack->setCurrentWidget(currentWidgetList[3]);
			break;
		}
		case Qt::Key_1:{
			if(toggleValve1 == 1){
				IO20b();
				toggleValve1 = 0;
				ui.valve_1_EnabledCheckBox->setChecked(0);
			}else if (toggleValve1 == 0){
				IO20a();
				toggleValve1 = 1;
				ui.valve_1_EnabledCheckBox->setChecked(1);
			}
			break;
		}
		case Qt::Key_2:{
			if(toggleValve2 == 1){
				IO19b();
				toggleValve2 = 0;
				ui.valve_2_EnabledCheckBox->setChecked(0);
			}else if (toggleValve2 == 0){
				IO19a();
				toggleValve2 = 1;
				ui.valve_2_EnabledCheckBox->setChecked(1);
			}
			qDebug() << "Pressed 2 Key";
			break;
		}
		case Qt::Key_3:{
			if(toggleValve3 == 1){
				IO18b();
				toggleValve3 = 0;
				ui.valve_3_EnabledCheckBox->setChecked(0);
			}else if (toggleValve3 == 0){
				IO18a();
				toggleValve3 = 1;
				ui.valve_3_EnabledCheckBox->setChecked(1);
			}
			qDebug() << "Pressed 3 Key";
			break;
		}
		case Qt::Key_4:{
			if(toggleValve4 == 1){
				IO17b();
				toggleValve4 = 0;
				ui.valve_4_EnabledCheckBox->setChecked(0);
			}else if (toggleValve4 == 0){
				IO17a();
				toggleValve4 = 1;
				ui.valve_4_EnabledCheckBox->setChecked(1);
			}
			qDebug() << "Pressed 4 Key";
			break;
		}
		case Qt::Key_5:{
			if(toggleValve5 == 1){
				IO16b();
				toggleValve5 = 0;
				ui.valve_5_EnabledCheckBox->setChecked(0);
			}else if (toggleValve5 == 0){
				IO16a();
				toggleValve5 = 1;
				ui.valve_5_EnabledCheckBox->setChecked(1);
			}
			qDebug() << "Pressed 5 Key";
			break;
		}
		case Qt::Key_6:{
			if(toggleValve6 == 1){
				IO15b();
				toggleValve6 = 0;
				ui.valve_6_EnabledCheckBox->setChecked(0);
			}else if (toggleValve6 == 0){
				IO15a();
				toggleValve6 = 1;
				ui.valve_6_EnabledCheckBox->setChecked(1);
			}
			qDebug() << "Pressed 6 Key";
			break;
		}
		case Qt::Key_7:{
			if(toggleValve7 == 1){
				IO14b();
				toggleValve7 = 0;
				ui.valve_7_EnabledCheckBox->setChecked(0);
			}else if (toggleValve7 == 0){
				IO14a();
				toggleValve7 = 1;
				ui.valve_7_EnabledCheckBox->setChecked(1);
			}
			qDebug() << "Pressed 7 Key";
			break;
		}
		case Qt::Key_8:{
			if(toggleValve8 == 1){
				IO13b();
				toggleValve8 = 0;
				ui.valve_8_EnabledCheckBox->setChecked(0);
			}else if (toggleValve8 == 0){
				IO13a();
				toggleValve8 = 1;
				ui.valve_8_EnabledCheckBox->setChecked(1);
			}
			qDebug() << "Pressed 8 Key";
			break;
		}
		default:{//
			break;
		}
	}
}

void valveControl::configIO(void)// Configure all port as output not good for valves
{

//	MainWindow vc_i2c;
	__u8 buff[3];//__16
	__u8 port_addr;
	unsigned int i;
	int fd;
	unsigned int device_addr;

	device_addr = 0x40;
	i2c_slaveAddr = 0x40;

	fd = vc_i2c.init_i2c();
	vc_i2c.test_set_slave(fd, i2c_slaveAddr);

	port_addr = 0x09;// set 0x09 and 0x0A
	for(i=0;i<2;++i){
		buff[0] = port_addr;// command for P4-7
		buff[1] = 0x55;// Data to configure ports to output
		if (write(fd, buff, 2) != 2) {
				fprintf(stderr, "i2c_write_command: 0x09 0x0a Error on write: %s\n",
				strerror(errno));
			}
		++port_addr;
	}

	port_addr = 0x0E;// set 0x0E and 0x0F
	for(i=0;i<2;++i){
		buff[0] = port_addr;// command for P4-7
		buff[1] = 0x55;// Data to configure ports to output
		if (write(fd, buff, 2) != 2) {
				fprintf(stderr, "i2c_write_command: 0x0e 0x0f Error on write: %s\n",
				strerror(errno));
			}
		++port_addr;
	}

	port_addr = 0x0B;
	buff[0] = port_addr;
	buff[1] = 0x5F;
	if (write(fd, buff, 2) != 2) {
		fprintf(stderr, "i2c_write_command: 0x0b Error on write: %s\n",
		strerror(errno));
	}

	port_addr = 0x0C;
	buff[0] = port_addr;
	buff[1] = 0x55;
	if (write(fd, buff, 2) != 2) {
		fprintf(stderr, "i2c_write_command: 0x0c Error on write: %s\n",
		strerror(errno));
	}

	port_addr = 0x0D;
	buff[0] = port_addr;
	buff[1] = 0x5F;
	if (write(fd, buff, 2) != 2) {
		fprintf(stderr, "i2c_write_command: 0x0d Error on write: %s\n",
		strerror(errno));
	}

	port_addr = 0x04;
	buff[0] = port_addr;
	buff[1] = 0x01;
	if (write(fd, buff, 2) != 2) {
		fprintf(stderr, "i2c_write_command: Start Error on write: %s\n",
		strerror(errno));
	}
	vc_i2c.close_device(fd);
}
/*void valveControl::IO1a(void)// On I/O
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x2c;// command for P12
	 buff[1] = 0x01;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void valveControl::IO1b(void)// Off I/O
{//MainWindow::
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x2c;// command for P12
	 buff[1] = 0x00;// Data to switch

	 fd = i2c.init_i2c();
	 i2c.test_set_slave(fd, i2c_slaveAddr);//addFlame indicatorr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void valveControl::IO2a(void)// On I/O
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x2d;// command for P12
	 buff[1] = 0x01;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void valveControl::IO2b(void)// Off I/O
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x2d;// command for P12
	 buff[1] = 0x00;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addrFlame indicator = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void valveControl::IO3a(void)// On I/O
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;
Flame indicator
	 buff[0] = 0x2e;// command for P12
	 buff[1] = 0x01;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void valveControl::IO3b(void)// Off I/O
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x2e;// command for P12
	 buff[1] = 0x00;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void valveControl::IO4a(void)// On I/O
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;Flame indicator

	 buff[0] = 0x2f;// command for P12
	 buff[1] = 0x01;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void valveControl::IO4b(void)// Off I/O
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x2f;// command for P12
	 buff[1] = 0x00;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}*/
void valveControl::IO5a(void)// On I/O 16 Relay 4
{
//	MainWindow vc_i2c;
	__u8 buff[3];//__16
	int fd;
	unsigned int tempSid;

	tempSid = i2c_slaveAddr;// store current I2C Slave Id
	i2c_slaveAddr = 0x40;// Change to needed Id for input reading

	 buff[0] = 0x30;// command for P12
	 buff[1] = 0x01;// Data to switch

	fd = vc_i2c.init_i2c();
	vc_i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "IO5a i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	vc_i2c.close_device(fd);
	i2c_slaveAddr = tempSid;
}
void valveControl::IO5b(void)// Off I/O 16 Relay 4
{
//	MainWindow vc_i2c;
	__u8 buff[3];//__16
	int fd;

	unsigned int tempSid;

	tempSid = i2c_slaveAddr;// store current I2C Slave Id
	i2c_slaveAddr = 0x40;// Change to needed Id for input reading

	 buff[0] = 0x30;// command for P12
	 buff[1] = 0x00;// Data to switch

	fd = vc_i2c.init_i2c();
	vc_i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "IO5b i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	vc_i2c.close_device(fd);
	i2c_slaveAddr = tempSid;
}
void valveControl::IO6a(void)// On I/O 15 relay 3 - Flame Out Indicator
{
//	MainWindow vc_i2c;
	__u8 buff[3];//__16
	int fd;

	unsigned int tempSid;

	tempSid = i2c_slaveAddr;// store current I2C Slave Id
	i2c_slaveAddr = 0x40;// Change to needed Id for input reading

	 buff[0] = 0x31;// command for P12
	 buff[1] = 0x01;// Data to switch

	fd = vc_i2c.init_i2c();
	vc_i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "IO6a i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	vc_i2c.close_device(fd);
	i2c_slaveAddr = tempSid;
}
void valveControl::IO6b(void)// Off I/O 15 relay 3 Flame indicator
{
//	MainWindow vc_i2c;
	__u8 buff[3];//__16
	int fd;

	unsigned int tempSid;

	tempSid = i2c_slaveAddr;// store current I2C Slave Id
	i2c_slaveAddr = 0x40;// Change to needed Id for input reading

	 buff[0] = 0x31;// command for P12
	 buff[1] = 0x00;// Data to switch

	fd = vc_i2c.init_i2c();
	vc_i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "IO6b i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	vc_i2c.close_device(fd);
	i2c_slaveAddr = tempSid;
}
void valveControl::IO7a(void)// On I/O 14 relay 2
{
//	MainWindow vc_i2c;
	__u8 buff[3];//__16
	int fd;
	unsigned int tempSid;

	tempSid = i2c_slaveAddr;// store current I2C Slave Id
	i2c_slaveAddr = 0x40;// Change to needed Id for input reading

	 buff[0] = 0x32;// command for P12
	 buff[1] = 0x01;// Data to switch

	fd = vc_i2c.init_i2c();
	vc_i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "IO7a i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	vc_i2c.close_device(fd);
	i2c_slaveAddr = tempSid;
}
void valveControl::IO7b(void)// Off I/O 14 relay 2
{
//	MainWindow vc_i2c;
	__u8 buff[3];//__16
	int fd;
	unsigned int tempSid;

	tempSid = i2c_slaveAddr;// store current I2C Slave Id
	i2c_slaveAddr = 0x40;// Change to needed Id for input reading

	 buff[0] = 0x32;// commandvc_i2c for P12
	 buff[1] = 0x00;// Data to switch

	fd = vc_i2c.init_i2c();
	vc_i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "IO7b i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	vc_i2c.close_device(fd);
	i2c_slaveAddr = tempSid;
}
void valveControl::IO8a(void)// On I/O 13 relay 1 READY SIG
{
//	MainWindow vc_i2c;
	__u8 buff[3];//__16
	int fd;
	unsigned int tempSid;

	tempSid = i2c_slaveAddr;// store current I2C Slave Id
	i2c_slaveAddr = 0x40;// Change to needed Id for input reading

	 buff[0] = 0x33;// command for P12
	 buff[1] = 0x01;// Data to switch

	fd = vc_i2c.init_i2c();
	vc_i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "IO8a i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	vc_i2c.close_device(fd);
	READY = 1;
	i2c_slaveAddr = tempSid;
}
void valveControl::IO8b(void)// Off I/O 13 relay 1 READY SIG
{
//	MainWindow vc_i2c;
	__u8 buff[3];//__16
	int fd;
	unsigned int tempSid;

	tempSid = i2c_slaveAddr;// store current I2C Slave Id
	i2c_slaveAddr = 0x40;// Change to needed Id for input reading

	 buff[0] = 0x33;// command for P12
	 buff[1] = 0x00;// Data to switch

	fd = vc_i2c.init_i2c();
	vc_i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "IO8b i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	vc_i2c.close_device(fd);
	READY = 0;
	i2c_slaveAddr = tempSid;
}/*
void valveControl::IO9a(void)// On I/O Trigger input - used in another function - not used here
{
//	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x34;// command for P12
	 buff[1] = 0x01;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void valveControl::IO9b(void)// Off I/O
{
//	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x34;// command for P12
	 buff[1] = 0x00;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2cIO6a.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void valveControl::IO10a(void)// On I/O
{
//	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x35;// command for P12
	 buff[1] = 0x01;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void valveControl::IO10b(void)// Off I/O
{
//	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;i2c

	 buff[0] = 0x35;// command for P12
	 buff[1] = 0x00;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}*/
void valveControl::IO11a(void)// On I/O
{
//	MainWindow vc_i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x36;// command for P12
	 buff[1] = 0x01;// Data to switch

	fd = vc_i2c.init_i2c();
	vc_i2c.test_set_slave(fd, 0x41);//i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "IO11a i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	vc_i2c.close_device(fd);
}
void valveControl::IO11b(void)// Off I/O
{
//	MainWindow vc_i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x36;// command for P12
	 buff[1] = 0x00;// Data to switch

	fd = vc_i2c.init_i2c();
	vc_i2c.test_set_slave(fd, 0x41);//i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "IO11b i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	vc_i2c.close_device(fd);
}
void valveControl::IO12a(void)// On I/O Sample? detector board slaveIdaddress hard coded
{
//	MainWindow vc_i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x37;// command for P12
	 buff[1] = 0x01;// Data to switch

	fd = vc_i2c.init_i2c();
	vc_i2c.test_set_slave(fd, 0x41);//i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "IO12a i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	vc_i2c.close_device(fd);
	vstate4 = 1;
}
void valveControl::IO12b(void)// Off I/O Sample? detector board slaveIdaddress hard coded
{
//	MainWindow vc_i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x37;// command for P12
	 buff[1] = 0x00;// Data to switch

	fd = vc_i2c.init_i2c();
	vc_i2c.test_set_slave(fd, 0x41);//i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "iIO12b 2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	vc_i2c.close_device(fd);
	vstate4 = 0;
}
void valveControl::IO13a(void)// On I/O Zero? detector boarIO6ad slaveIdaddress hard coded
{
//	MainWindow vc_i2c;
	__u8 buff[3];//__16
	__u8 port_addr;
	int fd;

	port_addr = 0x38;

	 buff[0] = port_addr;// command for P
	 buff[1] = 0x01;// Data to switch

	fd = vc_i2c.init_i2c();
	vc_i2c.test_set_slave(fd, 0x41);//i2c_slaveAddr);
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "IO13a i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	toggleValve8 = 1;
	ui.valve_8_EnabledCheckBox->setChecked(1);
	vc_i2c.close_device(fd);

	vstate5 = 1;
}
void valveControl::IO13b(void)// Off I/O Q8 Zero? detector board slaveIdaddress hard coded
{
//	MainWindow vc_i2c;
	__u8 buff[3];//__16
	__u8 port_addr;
	int fd;

	port_addr = 0x38;

	 buff[0] = port_addr;// command for P
	 buff[1] = 0x00;// Data to switch

	fd = vc_i2c.init_i2c();
	vc_i2c.test_set_slave(fd, 0x41);//i2c_slaveAddr);
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "IO13b i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	toggleValve8 = 0;// 8100
	ui.valve_8_EnabledCheckBox->setChecked(0);// 8100
	vc_i2c.close_device(fd);

	vstate5 = 0;
}
void valveControl::IO14a(void)// On I/O Q7 span? detector board slaveIdaddress hard coded
{
//	MainWindow vc_i2c;
	__u8 buff[3];//__16
	__u8 port_addr;
	int fd;

	port_addr = 0x39;

	buff[0] = port_addr;// command for P
	 buff[1] = 0x01;// Data to switch

	fd = vc_i2c.init_i2c();
	vc_i2c.test_set_slave(fd, 0x41);//i2c_slaveAddr);
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "IO14a i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	toggleValve7 = 1;// 8100
	ui.valve_7_EnabledCheckBox->setChecked(1);// 8100
	vc_i2c.close_device(fd);

	vstate6 = 1;
}
void valveControl::IO14b(void)// Off I/O Q7 Span? detector board slaveIdaddress hard coded
{
//	MainWindow vc_i2c;
	__u8 buff[3];//__16
	int fd;
	__u8 port_addr;

	port_addr = 0x39;

	 buff[0] = port_addr;// command for P
	 buff[1] = 0x00;// Data to switch

	fd = vc_i2c.init_i2c();
	vc_i2c.test_set_slave(fd, 0x41);//i2c_slaveAddr);
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "IO14b i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	toggleValve7 = 0;// 8100
	ui.valve_7_EnabledCheckBox->setChecked(0);// 8100
	vc_i2c.close_device(fd);

	vstate6 = 0;
}
void valveControl::IO15a(void)// On I/O Q6 Valve 6
{
//	MainWindow vc_i2c;
	__u8 buff[3];//__16
	int fd;
	__u8 port_addr;

	port_addr = 0x3a;

	 buff[0] = port_addr;// command for P
	 buff[1] = 0x01;// Data to switch

	fd = vc_i2c.init_i2c();
	vc_i2c.test_set_slave(fd, i2c_slaveAddr);
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "IO15a i2c_write_comm0x3band: Error on write: %s\n",
			strerror(errno));
		}
	toggleValve6 = 1;
	ui.valve_6_EnabledCheckBox->setChecked(1);
	vc_i2c.close_device(fd);
}
void valveControl::IO15b(void)// Off I/O Q6 Valve 6
{
//	MainWindow vc_i2c;
	__u8 buff[3];//__16
	int fd;
	__u8 port_addr;

	port_addr = 0x3a;

	 buff[0] = port_addr;// command for P
	 buff[1] = 0x00;// Data to switch

	fd = vc_i2c.init_i2c();
	vc_i2c.test_set_slave(fd, i2c_slaveAddr);
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "IO15b i2c_write_comm0x3band: Error on write: %s\n",
			strerror(errno));
		}
	toggleValve6 = 0;
	ui.valve_6_EnabledCheckBox->setChecked(0);
	vc_i2c.close_device(fd);
}
void valveControl::IO16a(void)// On I/O Q5 Valve 5
{
//	MainWindow vc_i2c;
	__u8 buff[3];//__16
	int fd;
	__u8 port_addr;

	port_addr = 0x3b;

	 buff[0] = port_addr;// command for P
	 buff[1] = 0x01;// Data to switch

	fd = vc_i2c.init_i2c();
	vc_i2c.test_set_slave(fd, i2c_slaveAddr);
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "IO16a i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	toggleValve5 = 1;
	ui.valve_5_EnabledCheckBox->setChecked(1);
	vc_i2c.close_device(fd);
}
void valveControl::IO16b(void)// Off I/O Q5 Valve 5
{
//	MainWindow vc_i2c;
	__u8 buff[3];//__16
	int fd;
	__u8 port_addr;

	port_addr = 0x3b;

	 buff[0] = port_addr;// command for P
	 buff[1] = 0x00;// Data to switch

	fd = vc_i2c.init_i2c();
	vc_i2c.test_set_slave(fd, i2c_slaveAddr);
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "IO16b i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	toggleValve5 = 0;
	ui.valve_5_EnabledCheckBox->setChecked(0);
	vc_i2c.close_device(fd);
}
void valveControl::IO17a(void)// On I/O Q4 Valve 4
{
//	MainWindow vc_i2c;
	__u8 buff[3];//__16
	int fd;
	__u8 port_addr;

	port_addr = 0x3c;

	buff[0] = port_addr;// command for P
	buff[1] = 0x01;// Data to switch

	fd = vc_i2c.init_i2c();
	vc_i2c.test_set_slave(fd, i2c_slaveAddr);
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "IO17a i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	toggleValve4 = 1;
	ui.valve_4_EnabledCheckBox->setChecked(1);
	vc_i2c.close_device(fd);
}
void valveControl::IO17b(void)// Off I/O Q4 Valve 4
{
//	MainWindow vc_i2c;
	__u8 buff[3];//__16
	int fd;
	__u8 port_addr;

	port_addr = 0x3c;

	 buff[0] = port_addr;// command for P
	 buff[1] = 0x00;// Data to switch

	fd = vc_i2c.init_i2c();
	vc_i2c.test_set_slave(fd, i2c_slaveAddr);
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "IO17b i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	toggleValve4 = 0;
	ui.valve_4_EnabledCheckBox->setChecked(0);
	vc_i2c.close_device(fd);
}
void valveControl::IO18a(void)// On I/O Q3 Valve 3 on detector boarb slaveIdaddress hard coded
{
//	MainWindow vc_i2c;
	__u8 buff[3];//__16
	int fd;
	__u8 port_addr;

	port_addr = 0x3d;

	 buff[0] = port_addr;// command for P
	 buff[1] = 0x01;// Data to switch

	fd = vc_i2c.init_i2c();
	vc_i2c.test_set_slave(fd, 0x40);//i2c_slaveAddr);
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "IO18a i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	toggleValve3 = 1;// 8100
	ui.valve_3_EnabledCheckBox->setChecked(1);// 8100
	vc_i2c.close_device(fd);

	vstate3 = 1;
}
void valveControl::IO18b(void)// Off I/O Q3 Valve 3 detector boarb slaveIdaddress hard coded
{
//	MainWindow vc_i2c;
	__u8 buff[3];//__16
	int fd;
	__u8 port_addr;

	port_addr = 0x3d;

	buff[0] = port_addr;// command for P
	 buff[1] = 0x00;// Data to switch

	fd = vc_i2c.init_i2c();
	vc_i2c.test_set_slave(fd, 0x40);//i2c_slaveAddr);

	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "IO18b i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	toggleValve3 = 0;// 8100
	ui.valve_3_EnabledCheckBox->setChecked(0);// 8100
	vc_i2c.close_device(fd);

	vstate3 = 0;
}
void valveControl::IO19a(void)// On I/O Q2 Valve 2 detector boarb slaveIdaddress hard coded
{
//	MainWindow vc_i2c;
	__u8 buff[3];//__16
	int fd;
	__u8 port_addr;

	port_addr = 0x3e;

	 buff[0] = port_addr;// command for P
	 buff[1] = 0x01;// Data to switch

	fd = vc_i2c.init_i2c();
	vc_i2c.test_set_slave(fd, 0x40);//i2c_slaveAddr);
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "IO19a i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	toggleValve2 = 1;// 8100
	ui.valve_2_EnabledCheckBox->setChecked(1);// 8100
	vc_i2c.close_device(fd);

	vstate2 = 1;
}
void valveControl::IO19b(void)// Off I/O Q2 Valve 2 detector boarb slaveIdaddress hard coded
{
//	MainWindow vc_i2c;
	__u8 buff[3];//__16
	int fd;
	__u8 port_addr;

	port_addr = 0x3e;

	 buff[0] = port_addr;// command for P
	 buff[1] = 0x00;// Data to switch

	fd = vc_i2c.init_i2c();
	vc_i2c.test_set_slave(fd, 0x40);//i2c_slaveAddr);
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "IO19b i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	toggleValve2 = 0;// 8100
	ui.valve_2_EnabledCheckBox->setChecked(0);// 8100
	vc_i2c.close_device(fd);

	vstate2 = 0;
}
void valveControl::IO20a(void)// On I/O Q1 Valve 1 detector boarb slaveIdaddress hard coded
{
//	MainWindow vc_i2c;
	__u8 buff[3];//__16
	int fd;
	__u8 port_addr;

	port_addr = 0x3f;

	 buff[0] = port_addr;// command for P
	 buff[1] = 0x01;// Data to switch

	fd = vc_i2c.init_i2c();
	vc_i2c.test_set_slave(fd, 0x40);//i2c_slaveAddr);
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "IO20a i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	toggleValve1 = 1;// 8100
	ui.valve_1_EnabledCheckBox->setChecked(1);// 8100
	vc_i2c.close_device(fd);

	vstate1 = 1;
}
void valveControl::IO20b(void)// Off I/O Q1 Valve 1
{
//	MainWindow vc_i2c;
	__u8 buff[3];//__16
	int fd;
	__u8 port_addr;

	port_addr = 0x3f;

	 buff[0] = port_addr;// command for P
	 buff[1] = 0x00;// Data to switch

	fd = vc_i2c.init_i2c();
	vc_i2c.test_set_slave(fd, 0x40);//i2c_slaveAddr);
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "IO20b i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	toggleValve1 = 0;// 8100
	ui.valve_1_EnabledCheckBox->setChecked(0);// 8100
	vc_i2c.close_device(fd);

	vstate1 = 0;
}
