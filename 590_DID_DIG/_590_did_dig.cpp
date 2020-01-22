#include "_590_did_dig.h"

//#include "detconfigure.h"
#include <errno.h>
#include <QDebug>
#include <QtGui>
#include <QAction>
#include <QProcess>
#include <QApplication>
#include <QKeyEvent>

#include <QFile>// added 6-17-2016

extern double updateRate;
bool thStopMe;
bool CALINDICATOR;
double lcdMultiplyer;
double ConcMultiplyer;
unsigned int CAL_RANGE;
bool IN_CAL_MODE;

extern double ZERO;// Raw zero voltage
extern double ZERO_SAVE;// For range control
extern double SPAN;// raw span voltage
extern double SAMPLE_VOLT;// measured sample voltage
extern double CONC;// SPAN Concentration
extern double RAW_SPAN;// RAW_SPAN = SPAN - ZERO
extern double SAMPLE_RESULT;// calculated result
extern unsigned int Range;
extern double offSet1;
extern bool cStopMe;

extern double ALARMLO2;
extern double ALARMHI2;
extern double ALARMLO1;
extern double ALARMHI1;
extern bool ALARM1STATE;
extern bool ALARM2STATE;

extern bool vstate1;
extern bool vstate2;
extern bool vstate3;
extern bool vstate4;
extern bool vstate5;
extern bool vstate6;

extern bool ALARMACTIVE;
extern bool ALARM1ACTIVE;
extern bool ALARM2ACTIVE;

extern unsigned int i2c_slaveAddr;
extern bool cRemoteCalIndicator;

bool FLAMEON;

extern int HOUR;
extern int MINUTE;
extern int SECONDS;
extern int MILISECONDS;
extern int MONTH;
extern int DAY;
extern int YEAR;
extern bool DLOGCHECK;
extern void main_datalog(void);

//QString alarm1Display;
//QString alarm2Display;
//QString busyState;
//QString notBusyState;

extern unsigned int DIDhexHoldGlobal;
extern unsigned int DIDhexHoldGlobal2;

bool dcGain1, dcGain2, dcGain1_1, dcGain2_1, dcOF, dcOF2, dcpol1, dcpol2;// for storing the set gain while on. off will default to 1
extern unsigned int detNumberDirector;// used to select detector for processing - Temporary find another way

//Variables Added by Dione.
extern bool IGNITE_DID1;
double DVC1D; // TCD1 Voltage
double PolVolt;
char AR[15] = "/dev/spi0cs3";// ar[] changed from cs3 because of problem with emac 4"
char BR[5] = "44";//br[]
bool DID_ONOFFCTRL2;
extern unsigned int hexHoldGlobal;
bool Valve1toggle;
bool Valve2toggle;
bool Valve3toggle;
bool Valve4toggle;


_590_DID_DIG::_590_DID_DIG(QWidget *parent)
    : QMainWindow(parent)
{
	ui.setupUi(this);

    QTimer *timer = new QTimer(this);
//    connect(timer, SIGNAL(timeout()), this, SLOT(callViewSigs()));//callMain_datalog()

	displayStatusBusy();

	timer->start(updateRate);

	connect(timer, SIGNAL(timeout()), this, SLOT(callViewSigs()));//callMain_datalog()
}

_590_DID_DIG::~_590_DID_DIG()
{

}
//NEW_DID_INBOX::NEW_DID_INBOX(QWidget *parent)
//    : QMainWindow(parent)
//{
//	ui.setupUi(this);
//
//    QTimer *timer = new QTimer(this);
////    connect(timer, SIGNAL(timeout()), this, SLOT(callViewSigs()));//callMain_datalog()
//
//	displayStatusBusy();
//
//	timer->start(updateRate);
//
//	connect(timer, SIGNAL(timeout()), this, SLOT(callViewSigs()));//callMain_datalog()
//}
//
//NEW_DID_INBOX::~NEW_DID_INBOX()
//{
//
//}
// slots begin

void _590_DID_DIG::shutdownNow(void){

	QProcess process;
	process.startDetached("shutdown -h now");//-P now");

    qDebug("shutdown............................................. ");

}
void _590_DID_DIG::shutDwnMsg(void)
{
	poweroffmessage pfm(this);// Create a dialog
	if (pfm.exec()) {
	}
}
void _590_DID_DIG::callMain_datalog(void){
	qDebug() << "TIMER REACHED";
	if(DLOGCHECK == 1){// DATA LOGGER
		main_datalog();
	}
}
void _590_DID_DIG::callViewSigs(void){
	// This is a Test.
	th_i2c.delay(200);
	ui.detDid1LCD->display(dc.detDID_I_read());
	th_i2c.delay(200);
	ui.detDidHvLCD->display(dc.detHvSig());
	th_i2c.delay(200);
	ui.detDidPolVLCD->display(dc.detPolSig());

	if ((dc.detDIDSig() * -2.0 * 1.25)>=5.0){
		ui.detDidISigLCD->display(12.5 - (dc.detDIDSig() * -2.0 * 1.25));
	}else{
		ui.detDidISigLCD->display(dc.detDIDSig() * -2.0 * 1.25);
	}
//	ui.detDidISigLCD->display(dc.detDIDSig() * -2.0 * 1.25));
}
void _590_DID_DIG::calibrat(void)
{
	calibrate cal1(this);// Create a dialog
	if (cal1.exec()) {
	}
}
void _590_DID_DIG::outpt(void)
{
	output out1(this);// Create a dialog
	if (out1.exec()) {
	}
}
void _590_DID_DIG::data(void)
{
	class data data1(this);// Crerate a dialog
	if (data1.exec()) {
	}
}

// This Opens detctg Menu that's to be added to the main.ui file.
// Therefore this is not needed by the 5900: Dione Robertson 2/21/2019
/*
void _590_DID_DIG::detcfg(void)
{
	detConfigure didcfg1(this);// Create a dialog
	if (didcfg1.exec()) {
		dc.setSettings();// if dialog is opened get last settings- did notwork
	}
}
*/

void _590_DID_DIG::oGainCtrl(void)
{
	OutputGainCtrl gainctrl(this);// Crerate a dialog
	if (gainctrl.exec()) {
		qDebug() << "GOT IN Gain ctrl";
	}
}

void _590_DID_DIG::killSampFuelMethFlow(void){
	th_stup.killFlowSafety();
}

void _590_DID_DIG::displayStatusBusy(void){
	QString busyState;// 9-5-2014

	busyState = "BUSY...";// 9-5-2014

	ui.mainStatusLineEdit->setText(busyState);
}
void _590_DID_DIG::displayStatusDone(void){

	updateRate = 1000;
	notBusyState = "DONE...";

//	ui.mainStatusLineEdit->setText(notBusyState);
}
void _590_DID_DIG::initSettings(void){
	dc.setSettings();
}
// Commented out so it doesn't run.
//void NEW_DID_INBOX::alarmOutput(double Sample){}
void _590_DID_DIG::measure(void){}
void _590_DID_DIG::sendSerial_3(void){}

// +++++++++++++++++++++++++++ Added by Dione. Moved from Detconfigure.h +++++++++++++++++++++++++++++++



void _590_DID_DIG::detRange(void){
		__u8 buff[3];//__16
		int fd;
		__u8 port_addr;


		if (ui.R1->isChecked()){
			Range = 1;
		}else if (ui.R2->isChecked()){
			Range = 2;
		}else if(ui.R3->isChecked()){
			Range = 3;
		}else if (ui.R4->isChecked()){
			Range = 4;
		}

		detNumberDirector = 1; // set for 2300

		switch (detNumberDirector)
		{
			case 1:
			{
				port_addr = 0x041;// 7300 on detector 1 board

				switch (Range){
					case 1:{// port 29 // range 1
						Range = 1;
						qDebug("Range 1.............%d", Range);
						buff[0] = 0x3D;// command
						buff[1] = 0x00;// Data to switch
						fd = dci2c.init_i2c();
						dci2c.test_set_slave(fd, port_addr);//i2c_slaveAddr);//addr = 0x45;
						if (write(fd, buff, 2) != 2) {
								fprintf(stderr, "i2c_write_command: R1-1 Error on write: %s\n",
								strerror(errno));
							}
						dci2c.close_device(fd);
			///////////////////////////////////////// reset other range controls
						buff[0] = 0x3c;// command
						buff[1] = 0x01;// Data to switch
						fd = dci2c.init_i2c();
						dci2c.test_set_slave(fd, port_addr);//i2c_slaveAddr);//addr = 0x45;
						if (write(fd, buff, 2) != 2) {
								fprintf(stderr, "i2c_write_command: R2-1 Error on write: %s\n",
								strerror(errno));
							}
						dci2c.close_device(fd);

						buff[0] = 0x3B;// command
						buff[1] = 0x01;// Data to switch
						fd = dci2c.init_i2c();
						dci2c.test_set_slave(fd, port_addr);//i2c_slaveAddr);//addr = 0x45;
						if (write(fd, buff, 2) != 2) {
								fprintf(stderr, "i2c_write_command: R3-1 Error on write: %s\n",
								strerror(errno));
							}
						dci2c.close_device(fd);

						buff[0] = 0x3A;// command
						buff[1] = 0x01;// Data to switch
						fd = dci2c.init_i2c();
						dci2c.test_set_slave(fd, port_addr);//i2c_slaveAddr);//addr = 0x45;
						if (write(fd, buff, 2) != 2) {
								fprintf(stderr, "i2c_write_command: R4-1 Error on write: %s\n",
								strerror(errno));
							}
						dci2c.close_device(fd);

						break;
					}
					case 2:{// port 28 // range 2
						Range = 2;
						qDebug("Range 2.............%d", Range);
						buff[0] = 0x3C;// command
						buff[1] = 0x00;// Data to switch
						fd = dci2c.init_i2c();
						dci2c.test_set_slave(fd, port_addr);//i2c_slaveAddr);//addr = 0x45;
						if (write(fd, buff, 2) != 2) {
								fprintf(stderr, "i2c_write_command: R1-2 Error on write: %s\n",
								strerror(errno));
							}
						dci2c.close_device(fd);

			///////////////////////////////////////// reset other range controls
						buff[0] = 0x3D;// command
						buff[1] = 0x01;// Data to switch
						fd = dci2c.init_i2c();
						dci2c.test_set_slave(fd, port_addr);//i2c_slaveAddr);//addr = 0x45;
						if (write(fd, buff, 2) != 2) {
								fprintf(stderr, "i2c_write_command: R2-2 Error on write: %s\n",
								strerror(errno));
							}
						dci2c.close_device(fd);	QCursor crr;
						crr.setPos(2, 2);

						buff[0] = 0x3B;// command
						buff[1] = 0x01;// Data to switch
						fd = dci2c.init_i2c();
						dci2c.test_set_slave(fd, port_addr);//i2c_slaveAddr);//addr = 0x45;
						if (write(fd, buff, 2) != 2) {
								fprintf(stderr, "i2c_write_command: R3-2 Error on write: %s\n",
								strerror(errno));
							}
						dci2c.close_device(fd);

						buff[0] = 0x3A;// command	QCursor crr;
						crr.setPos(2, 2);
						buff[1] = 0x01;// Data to switch
						fd = dci2c.init_i2c();
						dci2c.test_set_slave(fd, port_addr);//i2c_slaveAddr);//addr = 0x45;
						if (write(fd, buff, 2) != 2) {
								fprintf(stderr, "i2c_write_command: R4-2 Error on write: %s\n",
								strerror(errno));
							}
						dci2c.close_device(fd);

						break;
					}
					case 3:{// port 27 // range 3	QCursor crr;
						Range = 3;
	//					crr.setPos(2, 2);
						qDebug("Range 3.............%d", Range);
						buff[0] = 0x3B;// command
						buff[1] = 0x00;// Data to switch
						fd = dci2c.init_i2c();
						dci2c.test_set_slave(fd, port_addr);//i2c_slaveAddr);//addr = 0x45;
						if (write(fd, buff, 2) != 2) {
								fprintf(stderr, "i2c_write_command: R1-3 Error on write: %s\n",
								strerror(errno));
							}
						dci2c.close_device(fd);
			///////////////////////////////////////// reset other range controls
						buff[0] = 0x3c;// command	QCursor crr;
	//					crr.setPos(2, 2);
						buff[1] = 0x01;// Data to switch
						fd = dci2c.init_i2c();
						dci2c.test_set_slave(fd, port_addr);//i2c_slaveAddr);//addr = 0x45;
						if (write(fd, buff, 2) != 2) {
								fprintf(stderr, "i2c_write_command: R2-3 Error on write: %s\n",
								strerror(errno));
							}
						dci2c.close_device(fd);

						buff[0] = 0x3D;// command
						buff[1] = 0x01;// Data to switch
						fd = dci2c.init_i2c();
						dci2c.test_set_slave(fd, port_addr);//i2c_slaveAddr);//addr = 0x45;
						if (write(fd, buff, 2) != 2) {
								fprintf(stderr, "i2c_write_command: R3-3 Error on write: %s\n",
								strerror(errno));
							}
						dci2c.close_device(fd);

						buff[0] = 0x3A;// command
						buff[1] = 0x01;// Data to switch
						fd = dci2c.init_i2c();
						dci2c.test_set_slave(fd, port_addr);//i2c_slaveAddr);//addr = 0x45;
						if (write(fd, buff, 2) != 2) {
								fprintf(stderr, "i2c_write_command: R4-3 Error on write: %s\n",
								strerror(errno));
							}
						dci2c.close_device(fd);
						break;
					}
					case 4:{// port 26 // range 4
						Range = 4;
						qDebug("Range 4.............%d", Range);
						buff[0] = 0x3A;// command
						buff[1] = 0x00;// Data to switch
						fd = dci2c.init_i2c();
						dci2c.test_set_slave(fd, port_addr);//i2c_slaveAddr);//addr = 0x45;
						if (write(fd, buff, 2) != 2) {
								fprintf(stderr, "i2c_write_command: R5-1 Error on write: %s\n",
								strerror(errno));
							}
						dci2c.close_device(fd);

			///////////////////////////////////////// reset other range controls
						buff[0] = 0x3B;// command
						buff[1] = 0x01;// Data to switch
						fd = dci2c.init_i2c();
						dci2c.test_set_slave(fd, port_addr);//i2c_slaveAddr);//addr = 0x45;
						if (write(fd, buff, 2) != 2) {
								fprintf(stderr, "i2c_write_command: R5-2 Error on write: %s\n",
								strerror(errno));
							}
						dci2c.close_device(fd);

						buff[0] = 0x3C;// command
						buff[1] = 0x01;// Data to switch
						fd = dci2c.init_i2c();
						dci2c.test_set_slave(fd, port_addr);//i2c_slaveAddr);//addr = 0x45;
						if (write(fd, buff, 2) != 2) {
								fprintf(stderr, "i2c_write_command: R5-3 Error on write: %s\n",
								strerror(errno));
							}
						dci2c.close_device(fd);

						buff[0] = 0x3D;// command
						buff[1] = 0x01;// Data to switch
						fd = dci2c.init_i2c();
						dci2c.test_set_slave(fd, port_addr);//i2c_slaveAddr);//addr = 0x45;
						if (write(fd, buff, 2) != 2) {
								fprintf(stderr, "i2c_write_command: R5-4 Error on write: %s\n",
								strerror(errno));
							}
						dci2c.close_device(fd);
						break;
					}
					default:{
						break;
					}
				}
				break;
			}
			case 2:
			{
				port_addr = 0x044;// 7300 on detector 2 board

				switch (Range){
					case 1:{// port 29 // range 1
						buff[0] = 0x3D;// command
						buff[1] = 0x00;// Data to switch
						fd = dci2c.init_i2c();
						dci2c.test_set_slave(fd, port_addr);//i2c_slaveAddr);//addr = 0x45;
						if (write(fd, buff, 2) != 2) {
								fprintf(stderr, "i2c_write_command: R1-1 Error on write: %s\n",
								strerror(errno));
							}
						dci2c.close_device(fd);
			///////////////////////////////////////// reset other range controls
						buff[0] = 0x3c;// command
						buff[1] = 0x01;// Data to switch
						fd = dci2c.init_i2c();
						dci2c.test_set_slave(fd, port_addr);//i2c_slaveAddr);//addr = 0x45;
						if (write(fd, buff, 2) != 2) {
	//							printf(stderr, "i2c_write_command: R2-0 Error on write: %s\n",
	//							strerror(errno));
							}
						dci2c.close_device(fd);

						buff[0] = 0x3B;// command
						buff[1] = 0x01;// Data to switch
						fd = dci2c.init_i2c();
						dci2c.test_set_slave(fd, port_addr);//i2c_slaveAddr);//addr = 0x45;
						if (write(fd, buff, 2) != 2) {
								fprintf(stderr, "i2c_write_command: R3-0 Error on write: %s\n",
								strerror(errno));
							}
						dci2c.close_device(fd);

						buff[0] = 0x3A;// command
						buff[1] = 0x01;// Data to switch
						fd = dci2c.init_i2c();
						dci2c.test_set_slave(fd, port_addr);//i2c_slaveAddr);//addr = 0x45;
						if (write(fd, buff, 2) != 2) {
								fprintf(stderr, "i2c_write_command: R4-0 Error on write: %s\n",
								strerror(errno));
							}
						dci2c.close_device(fd);

						break;
					}
					case 2:{// port 28 // range 2
						buff[0] = 0x3C;// command
						buff[1] = 0x00;// Data to switch
						fd = dci2c.init_i2c();
						dci2c.test_set_slave(fd, port_addr);//i2c_slaveAddr);//addr = 0x45;
						if (write(fd, buff, 2) != 2) {
								fprintf(stderr, "i2c_write_command: Error on write: %s\n",
								strerror(errno));
							}
						dci2c.close_device(fd);

			///////////////////////////////////////// reset other range controls
						buff[0] = 0x3D;// command
						buff[1] = 0x01;// Data to switch
						fd = dci2c.init_i2c();
						dci2c.test_set_slave(fd, port_addr);//i2c_slaveAddr);//addr = 0x45;
						if (write(fd, buff, 2) != 2) {
	//							printf(stderr, "i2c_write_command: R2-0 Error on write: %s\n",
	//							strerror(errno));
							}
						dci2c.close_device(fd);
						QCursor crr;
						crr.setPos(2, 2);
						buff[0] = 0x3B;// command
						buff[1] = 0x01;// Data to switch
						fd = dci2c.init_i2c();
						dci2c.test_set_slave(fd, port_addr);//i2c_slaveAddr);//addr = 0x45;
						if (write(fd, buff, 2) != 2) {
								fprintf(stderr, "i2c_write_command: R3-0 Error on write: %s\n",
								strerror(errno));
							}
						dci2c.close_device(fd);

						buff[0] = 0x3A;// command
						buff[1] = 0x01;// Data to switch
						fd = dci2c.init_i2c();
						dci2c.test_set_slave(fd, port_addr);//i2c_slaveAddr);//addr = 0x45;
						if (write(fd, buff, 2) != 2) {
								fprintf(stderr, "i2c_write_command: R4-0 Error on write: %s\n",
								strerror(errno));
							}
						dci2c.close_device(fd);

						break;
					}
					case 3:{// port 27 // range 3
						buff[0] = 0x3B;// command
						buff[1] = 0x00;// Data to switch
						fd = dci2c.init_i2c();
						dci2c.test_set_slave(fd, port_addr);//i2c_slaveAddr);//addr = 0x45;
						if (write(fd, buff, 2) != 2) {
								fprintf(stderr, "i2c_write_command: Error on write: %s\n",
								strerror(errno));
							}
						dci2c.close_device(fd);
			///////////////////////////////////////// reset other range controls
						buff[0] = 0x3c;// command
						buff[1] = 0x01;// Data to switch
						fd = dci2c.init_i2c();
						dci2c.test_set_slave(fd, port_addr);//i2c_slaveAddr);//addr = 0x45;
						if (write(fd, buff, 2) != 2) {
								fprintf(stderr, "i2c_write_command: R2-0 Error on write: %s\n",
								strerror(errno));
							}
						dci2c.close_device(fd);

						buff[0] = 0x3D;// command
						buff[1] = 0x01;// Data to switch
						fd = dci2c.init_i2c();
						dci2c.test_set_slave(fd, port_addr);//i2c_slaveAddr);//addr = 0x45;
						if (write(fd, buff, 2) != 2) {
								fprintf(stderr, "i2c_write_command: R3-0 Error on write: %s\n",
								strerror(errno));
							}
						dci2c.close_device(fd);

						buff[0] = 0x3A;// command
						buff[1] = 0x01;// Data to switch
						fd = dci2c.init_i2c();
						dci2c.test_set_slave(fd, port_addr);//i2c_slaveAddr);//addr = 0x45;
						if (write(fd, buff, 2) != 2) {
								fprintf(stderr, "i2c_write_command: R4-0 Error on write: %s\n",
								strerror(errno));
							}
						dci2c.close_device(fd);
						break;
					}
					case 4:{// port 26 // range 4
						buff[0] = 0x3A;// command
						buff[1] = 0x00;// Data to switch
						fd = dci2c.init_i2c();
						dci2c.test_set_slave(fd, port_addr);//i2c_slaveAddr);//addr = 0x45;
						if (write(fd, buff, 2) != 2) {
								fprintf(stderr, "i2c_write_command: Error on write: %s\n",
								strerror(errno));
							}
						dci2c.close_device(fd);

			///////////////////////////////////////// reset other range controls
						buff[0] = 0x3B;// command
						buff[1] = 0x01;// Data to switch
						fd = dci2c.init_i2c();
						dci2c.test_set_slave(fd, port_addr);//i2c_slaveAddr);//addr = 0x45;
						if (write(fd, buff, 2) != 2) {
								fprintf(stderr, "i2c_write_command: R2-0 Error on write: %s\n",
								strerror(errno));
							}
						dci2c.close_device(fd);

						buff[0] = 0x3C;// command
						buff[1] = 0x01;// Data to switch
						fd = dci2c.init_i2c();
						dci2c.test_set_slave(fd, port_addr);//i2c_slaveAddr);//addr = 0x45;
						if (write(fd, buff, 2) != 2) {
								fprintf(stderr, "i2c_write_command: R3-0 Error on write: %s\n",
								strerror(errno));
							}
						dci2c.close_device(fd);

						buff[0] = 0x3D;// command
						buff[1] = 0x01;// Data to switch
						fd = dci2c.init_i2c();
						dci2c.test_set_slave(fd, port_addr);//i2c_slaveAddr);//addr = 0x45;
						if (write(fd, buff, 2) != 2) {
								fprintf(stderr, "i2c_write_command: R4-0 Error on write: %s\n",
								strerror(errno));
							}
						dci2c.close_device(fd);
						break;
					}
					default:{
						break;
					}
				}
				break;
			}
			default:
				break;
		}
		dci2c.delay(3000);// delay 3 second to allow for signal to become more stable
}

void _590_DID_DIG::detGain(void){//(double valu){// good USED FOR 2300
//	MainWindow dci2c;
	__u8 buff[3];//__16
	int fd;
	__u8 port_addr;
	int value_int;
	double readValu;

	busyState = "BUSY...";// 9-5-2014
	notBusyState = "DONE...";

	ui.busyLineEdit->setText(busyState);

	detNumberDirector = 1; // added for 2300

//	qDebug("Before case DET GAIN detNumberDirector = %x", detNumberDirector);//
	//			ntxt = numIn();
	//			readValu = ntxt.toDouble();
	//			ui.detGainSpinBox_2->setValue(readValu);

	switch (detNumberDirector)
	{
		case 1:
		{
//			qDebug("DET GAIN detNumberDirector = %x", detNumberDirector);//
			qDebug("DET GAIN ........................");

			readValu = ui.detGainSpinBox_2->value();

			port_addr = 0x41;
			value_int = readValu - 1;

//			qDebug("DET GAIN case statement entry = %x", value_int);// test
			ui.detDidGainLCD->display(ui.detGainSpinBox_2->value());

			switch (value_int){
				case 0:{// port 14 & 13 // gain 1

					qDebug("DET GAIN case 0 statement = %x", value_int);// test

					buff[0] = 0x2C;// command
					buff[1] = 0x00;// Data to switch
					dcGain1 = 0;
					fd = dci2c.init_i2c();
					dci2c.test_set_slave(fd, port_addr);//i2c_slaveAddr)
					if (write(fd, buff, 2) != 2) {
							fprintf(stderr, "i2c_write_command: R1-1 Error on write: %s\n",
							strerror(errno));
						}
					dci2c.close_device(fd);

					buff[0] = 0x2D;// command
					buff[1] = 0x00;// Data to switch
					dcGain2 = 0;
					fd = dci2c.init_i2c();
					dci2c.test_set_slave(fd, port_addr);
					if (write(fd, buff, 2) != 2) {
							fprintf(stderr, "i2c_write_command: R2-0 Error on write: %s\n",
							strerror(errno));
						}
					dci2c.close_device(fd);

					break;
				}
				case 1:{// port  14 & 13  // gain 10

					qDebug("DET GAIN case 1 statement = %x", value_int);// test

					buff[0] = 0x2C;// command
					buff[1] = 0x01;// Data to switch
					dcGain1 = 1;
					fd = dci2c.init_i2c();
					dci2c.test_set_slave(fd, port_addr);
					if (write(fd, buff, 2) != 2) {
							fprintf(stderr, "i2c_write_command: Error on write: %s\n",
							strerror(errno));
						}
					dci2c.close_device(fd);

					buff[0] = 0x2D;// command
					buff[1] = 0x00;// Data to switch
					fd = dci2c.init_i2c();
					dcGain2 = 0;
					dci2c.test_set_slave(fd, port_addr);
					if (write(fd, buff, 2) != 2) {
							fprintf(stderr, "i2c_write_command: R2-0 Error on write: %s\n",
							strerror(errno));
						}
					dci2c.close_device(fd);

					break;
				}
				case 2:{// port  14 & 13  // gain 100

					qDebug("DET GAIN case 2 statement = %x", value_int);// test

					buff[0] = 0x2C;// command
					buff[1] = 0x00;// Data to switch
					dcGain1 = 0;
					fd = dci2c.init_i2c();
					dci2c.test_set_slave(fd, port_addr);
					if (write(fd, buff, 2) != 2) {
							fprintf(stderr, "i2c_write_command: Error on write: %s\n",
							strerror(errno));
						}
					dci2c.close_device(fd);

					buff[0] = 0x2D;// command
					buff[1] = 0x01;// Data to switch
					dcGain2 = 1;
					fd = dci2c.init_i2c();
					dci2c.test_set_slave(fd, port_addr);
					if (write(fd, buff, 2) != 2) {
							fprintf(stderr, "i2c_write_command: R2-0 Error on write: %s\n",
							strerror(errno));
						}
					dci2c.close_device(fd);

					break;
				}
				case 3:{// port  14 & 13  // gain 1000

					qDebug("DET GAIN case 3 statement = %x", value_int);// test

					buff[0] = 0x2C;// command
					buff[1] = 0x01;// Data to switch
					dcGain1 = 1;
					fd = dci2c.init_i2c();
					dci2c.test_set_slave(fd, port_addr);
					if (write(fd, buff, 2) != 2) {
							fprintf(stderr, "i2c_write_command: Error on write: %s\n",
							strerror(errno));
						}
					dci2c.close_device(fd);

					buff[0] = 0x2D;// command
					buff[1] = 0x01;// Data to switch
					dcGain2 = 1;
					fd = dci2c.init_i2c();
					dci2c.test_set_slave(fd, port_addr);
					if (write(fd, buff, 2) != 2) {
							fprintf(stderr, "i2c_write_command: R2-0 Error on write: %s\n",
							strerror(errno));
						}
					dci2c.close_device(fd);

					break;
				}
				default:{
					dcGain1 = 0;
					dcGain2 = 0;
					break;
				}
			}
			break;
		}
		case 2:
		{
//			qDebug("DET GAIN i2c_slaveAddr = %x", i2c_slaveAddr);// test

			readValu = ui.detGainSpinBox_2->value();
			port_addr = 0x44;
			value_int = readValu - 1;

			//ui.detTCDWriteGainButton->clearFocus();

			switch (value_int){
				case 0:{// port 14 & 13 // gain 1
					buff[0] = 0x2C;// command
					buff[1] = 0x00;// Data to switch
					dcGain1_1 = 0;
					fd = dci2c.init_i2c();
					dci2c.test_set_slave(fd, port_addr);//i2c_slaveAddr)
					if (write(fd, buff, 2) != 2) {
							fprintf(stderr, "i2c_write_command: R1-1 Error on write: %s\n",
							strerror(errno));
						}
					dci2c.close_device(fd);

					buff[0] = 0x2D;// command
					buff[1] = 0x00;// Data to switch
					dcGain2_1 = 0;
					fd = dci2c.init_i2c();
					dci2c.test_set_slave(fd, port_addr);
					if (write(fd, buff, 2) != 2) {
							fprintf(stderr, "i2c_write_command: R2-0 Error on write: %s\n",
							strerror(errno));
						}
					dci2c.close_device(fd);
					break;
				}
				case 1:{// port  14 & 13  // gain 10
					buff[0] = 0x2C;// command
					buff[1] = 0x01;// Data to switch
					dcGain1_1 = 1;
					fd = dci2c.init_i2c();
					dci2c.test_set_slave(fd, port_addr);
					if (write(fd, buff, 2) != 2) {
							fprintf(stderr, "i2c_write_command: Error on write: %s\n",
							strerror(errno));
						}
					dci2c.close_device(fd);

					buff[0] = 0x2D;// command
					buff[1] = 0x00;// Data to switch
					fd = dci2c.init_i2c();
					dcGain2_1 = 0;
					dci2c.test_set_slave(fd, port_addr);
					if (write(fd, buff, 2) != 2) {
							fprintf(stderr, "i2c_write_command: R2-0 Error on write: %s\n",
							strerror(errno));
						}
					dci2c.close_device(fd);
					break;
				}
				case 2:{// port  14 & 13  // gain 100
					buff[0] = 0x2C;// command
					buff[1] = 0x00;// Data to switch
					dcGain1_1 = 0;
					fd = dci2c.init_i2c();
					dci2c.test_set_slave(fd, port_addr);
					if (write(fd, buff, 2) != 2) {
							fprintf(stderr, "i2c_write_command: Error on write: %s\n",
							strerror(errno));
						}
					dci2c.close_device(fd);

					buff[0] = 0x2D;// command
					buff[1] = 0x01;// Data to switch
					dcGain2_1 = 1;
					fd = dci2c.init_i2c();
					dci2c.test_set_slave(fd, port_addr);
					if (write(fd, buff, 2) != 2) {
							fprintf(stderr, "i2c_write_command: R2-0 Error on write: %s\n",
							strerror(errno));
						}
					dci2c.close_device(fd);
					break;
				}
				case 3:{// port  14 & 13  // gain 1000
					buff[0] = 0x2C;// command
					buff[1] = 0x01;// Data to switch
					dcGain1_1 = 1;
					fd = dci2c.init_i2c();
					dci2c.test_set_slave(fd, port_addr);
					if (write(fd, buff, 2) != 2) {
							fprintf(stderr, "i2c_write_command: Error on write: %s\n",
							strerror(errno));
						}
					dci2c.close_device(fd);

					buff[0] = 0x2D;// command
					buff[1] = 0x01;// Data to switch
					dcGain2_1 = 1;
					fd = dci2c.init_i2c();
					dci2c.test_set_slave(fd, port_addr);
					if (write(fd, buff, 2) != 2) {
							fprintf(stderr, "i2c_write_command: R2-0 Error on write: %s\n",
							strerror(errno));
						}
					dci2c.close_device(fd);
					break;
				}
				default:{
					dcGain1_1 = 0;
					dcGain2_1 = 0;
					break;
				}
			}
			break;
		}
		default:
			break;
	}
//	QCursor crr;
//	crr.setPos(2, 2);
	ui.busyLineEdit->setText(notBusyState);
	dci2c.delay(2000);
	ui.busyLineEdit->clear();
}

void _590_DID_DIG::detDIDIgnite(void){// OK USED for DID Only
	MainWindow i2c;
//	QCursor crr;
//	crr.setPos(1,1);
	__u8 buff[3];//__16
	unsigned int temp_16;
	double iBIT, readValue;
	int fd;
	__u8 device_addr;

	busyState = "BUSY...";// 9-5-2014
	notBusyState = "DONE...";

	ui.busyLineEdit->setText(busyState);

	if(IGNITE_DID1 == 0){//ui.didIgniteEnableCheckBox->isChecked()
		// IGNITE
//		ui.didIgniteEnableCheckBox->click();
		device_addr = 0x10;

		buff[0] = 0x1a;//
		buff[1] = 0x5c;//temp>>8;// upper bits
		buff[2] = 0xb3;//temp & 0x00ff;// lower 8 bits

		qDebug("High Volt buff{0} %x", buff[0]);
		qDebug("High Volt buff{1} %x", buff[1]);
		qDebug("High Volt buff{2} %x", buff[2]);

		fd = i2c.init_i2c();
		i2c.test_set_slave(fd, device_addr);//i2c_slaveAddr);
		if (write(fd, buff, 3) != 3) {
				fprintf(stderr, "i2c_write_command: I ctrl Error on write: %s\n",
				strerror(errno));
			}
		i2c.close_device(fd);
		qDebug() << "SET Start LIMIT";

		IGNITE_DID1 = 1;

		i2c.delay(5000);// give time to settle
		detDID_I_read();
		detHvSig();// read and display HV
	}
	else{
		// Operate

		if(IGNITE_DID1 == 1){//ui.didIgniteEnableCheckBox->isChecked()){
//			ui.didIgniteEnableCheckBox->click();
			qDebug("DET DID Operate v-ctrl detNumberDirector = %x", detNumberDirector);// test

			readValue =  ui.detVdcCtlSpinBox->value();
			DVC1D = readValue;

			device_addr = 0x10;

			buff[0] = 0x1a;//
			buff[1] = 0x3f;//temp>>8;// upper bits
			buff[2] = 0xe0;//temp & 0x00ff;// lower 8 bits

			qDebug("High Volt buff{0} %x", buff[0]);
			qDebug("High Volt buff{1} %x", buff[1]);
			qDebug("High Volt buff{2} %x", buff[2]);

			fd = i2c.init_i2c();
			i2c.test_set_slave(fd, device_addr);//i2c_slaveAddr);
			if (write(fd, buff, 3) != 3) {
					fprintf(stderr, "i2c_write_command: I ctrl Error on write: %s\n",
					strerror(errno));
				}
			i2c.close_device(fd);
			qDebug() << "SET Operate LIMIT";
			IGNITE_DID1 = 0;

			i2c.delay(5000);
			detDID_I_read();
			detHvSig();// read and display HV

	}

		}

		ui.busyLineEdit->setText(notBusyState);
		i2c.delay(2000);
		ui.busyLineEdit->clear();
}
double _590_DID_DIG::detDID_I_read(void){// ok USED FOR DID ONLY
//	MainWindow i2c;
//	QCursor crr;
//	crr.setPos(1,1);

	__u16 buff[3], temp_16;//__16
	__u8 buft[3];
	int fd;
	__u8 port_addr;
	unsigned int tempSid, i;
	double valu, valu1, t_16;//, he_Valu;

	temp_16 = 0x00;

	QString busyState;// 9-5-2014
	QString notBusyState;

	busyState = "BUSY...";// 9-5-2014
	notBusyState = "DONE...";

	ui.busyLineEdit->setText(busyState);

	detNumberDirector = 1; // forcing

	switch (detNumberDirector)
	{
		case 1://DID
		{
			port_addr = 0x65;// address for flow DID CURRENT ??

			tempSid = i2c_slaveAddr;// store current I2C Slave Id
			i2c_slaveAddr = 0x35;// Change to needed Id for Flow reading

			fd = dci2c.init_i2c();// open device
			dci2c.test_set_slave(fd, i2c_slaveAddr);
			buff[0] = port_addr;// command for P4-7
			if (write(fd, buff, 1) != 1) {
					fprintf(stderr, "i2c_write_command: 0x09 0x0a Error on write: %s\n",
					strerror(errno));
			}

			for(i=0;i<2;++i){
				buff[0] = port_addr;// command for P4-7
				if (read(fd, buff, 2) != 2) {
						fprintf(stderr, "i2c_write_command: 0x09 0x0a Error on write: %s\n",
								strerror(errno));
					}
			}


			buft[1] = buff[0]>>8;
			buft[0] = buff[0] & 0x00ff;

			qDebug("buff[0] = %x", buff[0]);

			qDebug("hi Byte buft[0] = %x", buft[0]);
			qDebug("lo Byte buft[1] = %x", buft[1]);

			temp_16 = (buft[0] & 0x0F);
			qDebug("mask hi Byte = %x", temp_16);

			temp_16 = temp_16<<8;
			qDebug("shift hi Byte = %x", temp_16);

			temp_16 = temp_16 + buft[1];
			qDebug("Add hi & Lo Byte = %x", temp_16);

			t_16 = temp_16;// move to double

			valu1 = ((t_16 / 4096) * 5.0);    // % voltage of max voltage;
			qDebug("VALU1 = %f", valu1);
			valu = valu1 * 10.0;// Multiply to make read 6.45mA instead of 0.645//((valu1 - 0.5) / 0.1 )  * 5.0;

			qDebug("DISCHARGE CURRENT = %f", valu);
//			i2c.delay(500);

			dci2c.close_device(fd);
			i2c_slaveAddr = tempSid;

			ui.detDid1LCD->display(valu);

			break;
		}
		case 2://DID 2
		{/*
			port_addr = 0x65;// address for flow DID CURRENT For Detector 1

			tempSid = i2c_slaveAddr;// store current I2C Slave Id
			i2c_slaveAddr = 0x35;// Change to needed Id for Flow reading

			fd = i2c.init_i2c();// open device
			i2c.test_set_slave(fd, i2c_slaveAddr);
			buff[0] = port_addr;// command for P4-7
			if (write(fd, buff, 1) != 1) {
					fprintf(stderr, "i2c_write_command: 0x09 0x0a Error on write: %s\n",
					strerror(errno));
			}

			for(i=0;i<2;++i){
				buff[0] = port_addr;// command for P4-7
				if (read(fd, buff, 2) != 2) {
						fprintf(stderr, "i2c_write_command: 0x09 0x0a Error on write: %s\n",
								strerror(errno));
					}
			}


			buft[1] = buff[0]>>8;
			buft[0] = buff[0] & 0x00ff;

			qDebug("buff[0] = %x", buff[0]);

			qDebug("hi Byte buft[0] = %x", buft[0]);
			qDebug("lo Byte buft[1] = %x", buft[1]);

			temp_16 = (buft[0] & 0x0F);
			qDebug("mask hi Byte = %x", temp_16);

			temp_16 = temp_16<<8;
			qDebug("shift hi Byte = %x", temp_16);

			temp_16 = temp_16 + buft[1];
			qDebug("Add hi & Lo Byte = %x", temp_16);

			t_16 = temp_16;// move to double

			valu1 = ((t_16 / 4096) * 5.0);    // % voltage of max voltage;
			qDebug("VALU1 = %f", valu1);
			valu = valu1 * 10.0;//((valu1 - 0.5) / 0.1 )  * 5.0;

			qDebug("DISCHARGE CURRENT = %f", valu);
//			i2c.delay(500);

			i2c.close_device(fd);
			i2c_slaveAddr = tempSid;

//			ui.detDid1LCD->display(valu);*/
			break;
		}
		default:
			break;
	}
	ui.busyLineEdit->setText(notBusyState);
//	dci2c.delay(2000);
//	ui.busyLineEdit->clear();

	return valu;
}
double _590_DID_DIG::detHvSig(void){
	__u16 buff[3], temp_16;//__16
	__u8 buft[3];
	int fd;
	__u8 port_addr;
	unsigned int tempSid, i;
	double valu, valu1, t_16;

	temp_16 = 0x00;

	busyState = "BUSY...";// 9-5-2014
	notBusyState = "DONE...";

	ui.busyLineEdit->setText(busyState);

	qDebug("DET High volt Sig............");

	detNumberDirector = 1; // forcing  - test statement

	switch (detNumberDirector)
	{
		case 1://DID 1
		{
			port_addr = 0x63;// address for DID HV

			tempSid = i2c_slaveAddr;// store current I2C Slave Id
			i2c_slaveAddr = 0x35;// Change to needed Id for Flow reading

			fd = dci2c.init_i2c();// open device
			dci2c.test_set_slave(fd, i2c_slaveAddr);
			buff[0] = port_addr;// command for P4-7
			if (write(fd, buff, 1) != 1) {
					fprintf(stderr, "i2c_write_command: 0x09 0x0a Error on write: %s\n",
					strerror(errno));
			}

			for(i=0;i<2;++i){
				buff[0] = port_addr;// command for P4-7
				if (read(fd, buff, 2) != 2) {
						fprintf(stderr, "i2c_write_command: 0x09 0x0a Error on write: %s\n",
								strerror(errno));
					}
			}


			buft[1] = buff[0]>>8;
			buft[0] = buff[0] & 0x00ff;

//			qDebug("buff[0] = %x", buff[0]);

//			qDebug("hi Byte buft[0] = %x", buft[0]);
//			qDebug("lo Byte buft[1] = %x", buft[1]);

			temp_16 = (buft[0] & 0x0F);
//			qDebug("mask hi Byte = %x", temp_16);

			temp_16 = temp_16<<8;
//			qDebug("shift hi Byte = %x", temp_16);

			temp_16 = temp_16 + buft[1];
//			qDebug("Add hi & Lo Byte = %x", temp_16);

			t_16 = temp_16;// move to double

			valu1 = ((t_16 / 4096) * 5.0);    // % voltage of max voltage;
//			qDebug("VALU1 = %f", valu1);
			valu = valu1 * 200.0;//((valu1 - 0.5) / 0.1 )  * 5.0;

//			qDebug("READ DISCHARGE Voltage = %f", valu);

			dci2c.close_device(fd);
			i2c_slaveAddr = tempSid;

			ui.detDidHvLCD->display(valu);
			break;
		}
		case 2://DID 2
		{/*
			port_addr = 0x63;// address for DID HV For Detector 1

			tempSid = i2c_slaveAddr;// store current I2C Slave Id
			i2c_slaveAddr = 0x35;// Change to needed Id for Flow reading

			fd = i2c.init_i2c();// open device
			i2c.test_set_slave(fd, i2c_slaveAddr);
			buff[0] = port_addr;// command for P4-7
			if (write(fd, buff, 1) != 1) {
					fprintf(stderr, "i2c_write_command: 0x09 0x0a Error on write: %s\n",
					strerror(errno));
			}

			for(i=0;i<2;++i){
				buff[0] = port_addr;// command for P4-7
				if (read(fd, buff, 2) != 2) {
						fprintf(stderr, "i2c_write_command: 0x09 0x0a Error on write: %s\n",
								strerror(errno));
					}
			}


			buft[1] = buff[0]>>8;
			buft[0] = buff[0] & 0x00ff;

			qDebug("buff[0] = %x", buff[0]);,

			qDebug("hi Byte buft[0] = %x", buft[0]);
			qDebug("lo Byte buft[1] = %x", buft[1]);

			temp_16 = (buft[0] & 0x0F);
			qDebug("mask hi Byte = %x", temp_16);

			temp_16 = temp_16<<8;
			qDebug("shift hi Byte = %x", temp_16);

			temp_16 = temp_16 + buft[1];
			qDebug("Add hi & Lo Byte = %x", temp_16);

			t_16 = temp_16;// move to double

			valu1 = ((t_16 / 4096) * 5.0);    // % voltage of max voltage;
			qDebug("VALU1 = %f", valu1);
			valu = valu1 * 200.0;//((valu1 - 0.5) / 0.1 )  * 5.0;

			qDebug("DISCHARGE CURRENT = %f", valu);
//			i2c.delay(500);

			i2c.close_device(fd);
			i2c_slaveAddr = tempSid;

//			->display(valu);*/
			break;
		}
		default:
			break;
	}
	ui.busyLineEdit->setText(notBusyState);
//	dci2c.delay(2000);
//	ui.busyLineEdit->clear();

	return valu;
//	MainWindow i2c;
//
//	__u16 buff[3], temp_16;//__16
//	__u8 buft[3];
//	int fd;
//	__u8 port_addr;
//	double valu;
//
//	switch (detNumberDirector)
//	{
//		case 1:
//		{
//			port_addr = 0x0A;// address for flow read ??
//			fd = i2c.init_i2c();
//			if (i2c.i2c_read_reg2(fd, buff, port_addr)< 0){
//				fprintf(stderr, "i2c_read_reg2: Error on read: %s\n",
//				strerror(errno));
//			}
//			i2c.close_device(fd);
//			buft[0] = buff[0]<<8;
//			buft[1] = buff[1]<<8;
//			buft[2] = buff[2]<<8;
//			buft[3] = buff[3]<<8;
//
//			temp_16 = buft[1] + (buft[0] & 0x0F)<<4;
//			valu = temp_16 * 0.0006;
//
//			ui.detHvLCD->display(valu);
//			break;
//		}
//		case 2:
//		{//calvc.fidH2BypassRdInput()
//			port_addr = 0x0A;// address for flow read ??
//			fd = i2c.init_i2c();
//			if (i2c.i2c_read_reg2(fd, buff, port_addr)< 0){
//				fprintf(stderr, "i2c_read_reg2: Error on read: %s\n",
//				strerror(errno));
//			}    char ar[15] = "/dev/spi0cs3";// ar[] changed from cs3 because of problem with emac 4"
//    char br[5] = "44";//br[]
//			i2c.close_device(fd);
//			buft[0] = buff[0]<<8;
//			buft[1] = buff[1]<<8;
//			buft[2] = buff[2]<<8;
//			buft[3] = buff[3]<<8;
//
//			temp_16 = buft[1] + (buft[0] & 0x0F)<<4;
//			valu = temp_16 * 0.0006;
//
//			ui.detHvLCD->display(valu);
//			break;
//		}
//		default:
//			break;
//	}
////	ui.readFlowLCD->display(valu);
}

void _590_DID_DIG::detIgn(void){
//	MainWindow i2c;
//	QCursor crr;
//	crr.setPos(1,1);
	__u16 buff[3], temp_16;//__16
	__u8 buft[3];
	int fd;
	__u8 port_addr;
	double valu;

	detNumberDirector = 1; // forcing  - test statement

	switch (detNumberDirector)
	{
		case 1://FID need feedback to test for ignition -  need to time out as well
		{
			port_addr = 0x041;// 7300 on detector 1 board
			// port 29 // range 1
			buff[0] = 0x36;// command
			buff[1] = 0x00;// Data to switch
			fd = dci2c.init_i2c();
			dci2c.test_set_slave(fd, port_addr);//i2c_slaveAddr);//addr = 0x45;
			if (write(fd, buff, 2) != 2) {
					fprintf(stderr, "i2c_write_command: R1-1 Error on write: %s\n",
					strerror(errno));
				}
			dci2c.close_device(fd);
			break;
		}
		case 2:
		{
//			port_addr = 0x0A;// address for flow read ??
//			fd = i2c.init_i2c();
//			if (i2c.i2c_read_reg2(fd, buff, port_addr)< 0){
//				fprintf(stderr, "i2c_read_reg2: Error on read: %s\n",
//				strerror(errno));
//			}
//			i2c.close_device(fd);
//			buft[0] = buff[0]<<8;
//			buft[1] = buff[1]<<8;
//			buft[2] = buff[2]<<8;
//			buft[3] = buff[3]<<8;
//
//			temp_16 = buft[1] + (buft[0] & 0x0F)<<4;
//			valu = temp_16 * 0.0006;
			break;
		}
		default:
			break;
	}
//	ui.readFlowLCD->display(valu);

//	MainWindow i2c;
//
//	__u16 buff[3], temp_16;//__16
//	__u8 buft[3];
//	int fd;
//	__u8 port_addr;
//	double valu;
//
//	switch (detNumberDirector)
//	{
//		case 1:
//		{
//			port_addr = 0x0A;// address for flow read ??
//			fd = i2c.init_i2c();
//			if (i2c.i2c_read_reg2(fd, buff, port_addr)< 0){
//				fprintf(stderr, "i2c_read_reg2: Error on read: %s\n",
//				strerror(errno));
//			}
//			i2c.close_device(fd);
//			buft[0] = buff[0]<<8;
//			buft[1] = buff[1]<<8;
//			buft[2] = buff[2]<<8;
//			buft[3] = buff
//			[3]<<8;
//
//			temp_16 = buft[1] + (buft[0] & 0x0F)<<4;
//			valu = temp_16 * 0.0006;
//			break;
//		}
//		case 2:
//		{
//			port_addr = 0x0A;// address for flow read ??
//			fd = i2c.init_i2c();
//			if (i2c.i2c_read_reg2(fd, buff, port_addr)< 0){
//				fprintf(stderr, "i2c_read_reg2: Error on read: %s\n",
//				strerror(errno));
//			}
//			i2c.close_device(fd);
//			buft[0] = buff[0]<<8;
//			buft[1] = buff[1]<<8;
//			buft[2] = buff[2]<<8;
//			buft[3] = buff[3]<<8;
//
//			temp_16 = buft[1] + (buft[0] & 0x0F)<<4;
//			valu = temp_16 * 0.0006;
//			break;
//		}
//		default:
//			break;
//	}
////	ui.readFlowLCD->display(valu);
}

void _590_DID_DIG::detPolSet(void){// Used for DID and FID
//	MainWindow i2c;
//	QCursor crr;
//	crr.setPos(1,1);
	__u8 buff[3];//__16
	unsigned int temp_16;
	double iBIT, readValue;
	int fd;
	__u8 device_addr;

	busyState = "BUSY...";// 9-5-2014
	notBusyState = "DONE...";

	detNumberDirector = 1; // forcing  - test statement

	switch (detNumberDirector)
	{
		case 1:
		{
				ui.busyLineEdit->setText(busyState);

				qDebug("Polarization Voltage set....................");

				PolVolt = ui.didPolVCtlSpinBox->value() - 20.0;

				device_addr = 0x10;

				temp_16 = (PolVolt / 500) * 0xffff;

				buff[0] = 0x19;//
				buff[1] = temp_16>>8;// upper bits
				buff[2] = temp_16 & 0x00ff;// lower 8 bits

				qDebug("DID POL Volt buff{0} %x", buff[0]);
				qDebug("DID POL Volt buff{1} %x", buff[1]);
				qDebug("DID POL Volt buff{2} %x", buff[2]);

				fd = dci2c.init_i2c();
				dci2c.test_set_slave(fd, device_addr);//i2c_slaveAddr);
				if (write(fd, buff, 3) != 3) {
				fprintf(stderr, "i2c_write_command: I ctrl Error on write: %s\n",
				strerror(errno));
				}
				dci2c.close_device(fd);
				detPolSig();
				qDebug() << "DID SET POL VOLT";
				break;
		}
		case 2:// CHANGE TO FIT SECOND IONIZATION DETECTOR
		{
			/*ui.busyLineEdit->setText(busyState);

			PolVolt = ui.didPolVCtlSpinBox->value();

			device_addr = 0x1c;

			temp_16 = (PolVolt / 500.0) * 0xffff;

			buff[0] = 0x19;//
			buff[1] = temp_16>>8;// upper bits
			buff[2] = temp_16 & 0x00ff;// lower 8 bits

			qDebug("POL Volt buff{0} %x", buff[0]);
			qDebug("POL Volt buff{1} %x", buff[1]);
			qDebug("POL Volt buff{2} %x", buff[2]);

			fd = i2c.init_i2c();
			i2c.test_set_slave(fd, device_addr);//i2c_slaveAddr);
			if (write(fd, buff, 3) != 3) {
			fprintf(stderr, "i2c_write_command: I ctrl Error on write: %s\n",
			strerror(errno));
			}
			i2c.close_device(fd);
			detPolSig();
			qDebug() << "SET POL VOLT";*/
			break;
		}
		default:
			break;
	}

	ui.busyLineEdit->setText(notBusyState);
	dci2c.delay(2000);
	ui.busyLineEdit->clear();
}

double _590_DID_DIG::detPolSig(void){
//	MainWindow i2c;
//	QCursor crr;
//	crr.setPos(1,1);

	__u16 buff[3], temp_16;//__16
	__u8 buft[3];
	int fd;
	__u8 port_addr;
	unsigned int tempSid, i;
	double valu, valu1, t_16, he_Valu;

	temp_16 = 0x00;

	busyState = "BUSY...";// 9-5-2014
	notBusyState = "DONE...";

	ui.busyLineEdit->setText(busyState);

	qDebug("det Pol Sig.............");

	detNumberDirector = 1; // forcing  - test statement

	switch (detNumberDirector)
	{
		case 1://DID 1
		{
			port_addr = 0x61;// address for flow DID PV

			tempSid = i2c_slaveAddr;// store current I2C Slave Id
			i2c_slaveAddr = 0x35;// Change to needed Id for Flow reading

			fd = dci2c.init_i2c();// open device
			dci2c.test_set_slave(fd, i2c_slaveAddr);
			buff[0] = port_addr;// command for P4-7
			if (write(fd, buff, 1) != 1) {
					fprintf(stderr, "i2c_write_command: 0x09 0x0a Error on write: %s\n",
					strerror(errno));
			}

			for(i=0;i<2;++i){
				buff[0] = port_addr;// command for P4-7
				if (read(fd, buff, 2) != 2) {
						fprintf(stderr, "i2c_write_command: 0x09 0x0a Error on write: %s\n",
								strerror(errno));
					}
			}


			buft[1] = buff[0]>>8;
			buft[0] = buff[0] & 0x00ff;

//			qDebug("buff[0] = %x", buff[0]);

//			qDebug("hi Byte buft[0] = %x", buft[0]);
//			qDebug("lo Byte buft[1] = %x", buft[1]);

			temp_16 = (buft[0] & 0x0F);
//			qDebug("mask hi Byte = %x", temp_16);

			temp_16 = temp_16<<8;
//			qDebug("shift hi Byte = %x", temp_16);

			temp_16 = temp_16 + buft[1];
//			qDebug("Add hi & Lo Byte = %x", temp_16);

			t_16 = temp_16;// move to double

			valu1 = ((t_16 / 4096) * 5.0);    // % voltage of max voltage;
//			qDebug("VALU1 = %f", valu1);
			valu = valu1 * 100.0;//((valu1 - 0.5) / 0.1 )  * 5.0;

			dci2c.close_device(fd);
			i2c_slaveAddr = tempSid;

			ui.detDidPolVLCD->display(valu);
			break;
		}
		case 2://DID 2
		{/*
			port_addr = 0x61;// address for flow DID PV For Detector 1

			tempSid = i2c_slaveAddr;// store current I2C Slave Id
			i2c_slaveAddr = 0x35;// Change to needed Id for Flow reading

			fd = i2c.init_i2c();// open device
			i2c.test_set_slave(fd, i2c_slaveAddr);
			buff[0] = port_addr;// command for P4-7
			if (write(fd, buff, 1) != 1) {
					fprintf(stderr, "i2c_write_command: 0x09 0x0a Error on write: %s\n",
					strerror(errno));
			}

			for(i=0;i<2;++i){
				buff[0] = port_addr;// command for P4-7
				if (read(fd, buff, 2) != 2) {
						fprintf(stderr, "i2c_write_command: 0x09 0x0a Error on write: %s\n",
								strerror(errno));
					}
			}


			buft[1] = buff[0]>>8;
			buft[0] = buff[0] & 0x00ff;

			qDebug("buff[0] = %x", buff[0]);

			qDebug("hi Byte buft[0] = %x", buft[0]);
			qDebug("lo Byte buft[1] = %x", buft[1]);

			temp_16 = (buft[0] & 0x0F);
			qDebug("mask hi Byte = %x", temp_16);

			temp_16 = temp_16<<8;
			qDebug("shift hi Byte = %x", temp_16);

			temp_16 = temp_16 + buft[1];
			qDebug("Add hi & Lo Byte = %x", temp_16);

			t_16 = temp_16;// move to double

			valu1 = ((t_16 / 4096) * 5.0);    // % voltage of max voltage;
			qDebug("VALU1 = %f", valu1);
			valu = valu1 * 100.0;//((valu1 - 0.5) / 0.1 )  * 5.0;

			qDebug("DISCHARGE CURRENT = %f", valu);
//			i2c.delay(500);

			i2c.close_device(fd);
			i2c_slaveAddr = tempSid;

//			->display(valu);*/
			break;
		}
		default:
			break;
	}
	ui.busyLineEdit->setText(notBusyState);
//	dci2c.delay(2000);
//	ui.busyLineEdit->clear();

	return valu;
//	MainWindow i2c;
//
//	__u16 buff[3], temp_16;//__16
//	__u8 buft[3];
//	int fd;
//	__u8 port_addr;
//	double valu;
//
//	switch (detNumberDirector)
//	{
//		case 1:
//		{
//			port_addr = 0x061;/
//			fd = i2c.init_i2c();
//			if (i2c.i2c_read_reg2(fd, buff, port_addr)< 0){
//				fprintf(stderr, "i2c_read_reg2: Error on read: %s\n",
//				strerror(errno));
//			}
//			i2c.close_device(fd);
//			buft[0] = buff[0]<<8;
//			buft[1] = buff[1]<<8;
//			buft[2] = buff[2]<<8;
//			buft[3] = buff[3]<<8;
//
//			temp_16 = buft[1] + (buft[0] & 0x0F)<<4;
//			valu = temp_16 * 0.0006;
//
//			ui.detPvLCD->display(valu);
//			break;
//		}
//		case 2:
//		{
//			port_addr = 0x0A;// address for flow read ??
//			fd = i2c.init_i2c();
//			if (i2c.i2c_read_reg2(fd, buff, port_addr)< 0){
//				fprintf(stderr, "i2c_read_reg2: Error on read: %s\n",
//				strerror(errno));
//			}
//			i2c.close_device(fd);
//			buft[0] = buff[0]<<8;
//			buft[1] = buff[1]<<8;
//			buft[2] = buff[2]<<8;
//			buft[3] = buff[3]<<8;
//
//			temp_16 = buft[1] + (buft[0] & 0x0F)<<4;
//			valu = temp_16 * 0.0006;
//
//			ui.detPvLCD->display(valu);
//			break;
//		}
//		default:
//			break;
//	}
////	ui.readFlowLCD->display(valu);
}
double _590_DID_DIG::detDIDSig(void){//ok - used for DID / FID- OK

    double result;
    double resultDsply;
    double didResult[10];
    unsigned int i, t, avgTop;


	busyState = "BUSY...";// 9-5-2014
	notBusyState = "DONE...";

	ui.busyLineEdit->setText(busyState);

	qDebug("DID SIG  DISPLAY...........................");

	detNumberDirector = 1; // forcing  - test statement

	switch (detNumberDirector)
	{
		case 1:
		{
		    char AR[] = "/dev/spi0cs3";
		    char BR[] = "44";
		    avgTop = 10.0;

		    //ui.detSigReadButton->clearFocus();

		    i = 0;
		    for (i = 0; i < avgTop; ++i){
		    	if(dci2c.setup_spi(AR) == -1){};// exit(EXIT_FAILURE);

		    	didResult[i] = dci2c.getSig_spi(4,BR);

		    	dci2c.close_spi();
		    }

		    t = 0;
		    result = 0.0;
		    for (t = 0; t < avgTop; t++){
		    	result = result + didResult[t];
		    }
		    result = result / avgTop;

//			qDebug("DID Read Signal Result = %f", result);

			   if (result >= 2.5){
				   resultDsply = result - 2.5;
//				   qDebug("(>= 2.5) DID ResultDsply - 2.5 = %f", resultDsply);
			   }
			   else if(result < 2.5 && result > 0){
				   resultDsply = (result - 2.5);
//				   qDebug("(< 2.5) DID ResultDsply - 2.5 = %f", resultDsply);
			   }else if (result < 0.0){
				   resultDsply = (result + 2.5) * (-1);
//				   qDebug("(< 0) DID ResultDsply + 2.5 = %f", resultDsply);
			   }

			ui.detDidISigLCD->display(resultDsply * -2.0 * 1.25);

			break;
		}
		case 2:
		{/*
		    char ar[] = "/dev/spi0cs1";
		    char br[] = "44";
		    avgTop = 1;

		    //ui.detSigReadButton->clearFocus();

			qDebug("DET detTCD_I_Sig detNumberDirector = %x", detNumberDirector);// test

		    i = 0;
		    for (i = 0; i < avgTop; ++i){
		    	if(dcZero.setup_spi(ar) == -1){};// exit(EXIT_FAILURE);

		    	tcdResult[i] = dcZero.getSig_spi(4,br);

		    	dcZero.close_spi();
		    }

		    t = 0;
		    result = 0.0;
		    for (t = 0; t < avgTop; t++){
		    	result = result + tcdResult[t];
		    }
		    result = result / 1.0;//avgTop;

			qDebug("Signal Result = %f", result);

			   if (result >= 2.5){
				   resultDsply = result - 2.5;
				   qDebug("ResultDsply - 2.5 = %f", resultDsply);
			   }
			   else{
				   resultDsply = (result + 2.5) * (-1);
				   qDebug("ResultDsply + 2.5 = %f", resultDsply);
			   }

			   ui.detDidISigLCD->display(resultDsply) * 2.0;*/

			break;
		}
		default:
			result = 0.0;
			break;
	}
	ui.busyLineEdit->setText(notBusyState);
	return result - 2.5;

//	if((result < 2.5 && result > 0) || (result >= 2.5)){
//		resultDsply = (result - 2.5);
//		return result - 2.5;
//	}else if (result < 0.0){
//		return (result + 2.5) * (-1);
//	}
/*	MainWindow i2c;

	__u16 buff[3], temp_16, valu;//__16
	__u8 buft[3];
	int fd;
	__u8 port_addr;

	switch (detNumberDirector)
	{
		case 1:
		{
			port_addr = 0x0A;// address for flow read ??
			fd = i2c.init_i2c();
			if (i2c.i2c_read_reg2(fd, buff, port_addr)< 0){
				fprintf(stderr, "i2c_read_reg2: Error on read: %s\n",
				strerror(errno));
			}
			i2c.close_device(fd);
			buft[0] = buff[0]<<8;
			buft[1] = buff[1]<<8;
			buft[2] = buff[2]<<8;
			buft[3] = buff[3]<<8;

			temp_16 = buft[1] + (buft[0] & 0x0F)<<4;
			valu = temp_16 * 0.0006;

			ui.detDidISigLCD->display(valu);
			break;
		}
		case 2:
		{
			port_addr = 0x0A;// address for flow read ??
			fd = i2c.init_i2c();
			if (i2c.i2c_read_reg2(fd, buff, port_addr)< 0){
				fprintf(stderr, "i2c_read_reg2: Error on read: %s\n",
				strerror(errno));
			}
			i2c.close_device(fd);
			buft[0] = buff[0]<<8;
			buft[1] = buff[1]<<8;
			buft[2] = buff[2]<<8;
			buft[3] = buff[3]<<8;

			temp_16 = buft[1] + (buft[0] & 0x0F)<<4;
			valu = temp_16 * 0.0006;

			ui.detDidISigLCD->display(valu);
			break;
		}
		default:
			break;
	}
//	ui.readFlowLCD->display(valu);*/
}

double _590_DID_DIG::detTCD_I_Sig(void){// Ok // good USED FOR 2300 reads any det sig from A/D "Voltage"

//	crr.setPos(2, 2);
//	MainWindow dcZero;

    double result;
    double resultDsply;
    double tcdResult[10];
    unsigned int i, t, avgTop;
    int g;

//	QString busyState;// 9-5-2014
//	QString notBusyState;

//	busyState = "BUSY...";// 9-5-2014
//	notBusyState = "DONE...";

//	ui.busyLineEdit->setText(busyState);

	resultDsply = 0.0;
	detNumberDirector = 1; // Added for 2300

	switch (detNumberDirector)
	{
		case 1:
		{
		    avgTop = 10.0;

//			qDebug("DET FID detTCD_I_Sig detNumberDirector = %x", detNumberDirector);// test
		    g = dci2c.setup_spi(AR);
//g = 0;//remove
		    i = 0;
		    if(g == -1){
		    	qDebug("SETUP SPI FAILURE = %d", g);
		    }else{// exit(EXIT_FAILURE);
//		    	qDebug("SETUP SPI Collecting = %d", g);
			    for (i = 0; i < avgTop; ++i){
			    	tcdResult[i] = dci2c.getSig_spi(4,BR);
			    }
			    dci2c.close_spi();// close when done
		    }


		    t = 0;
		    result = 0.0;
		    for (t = 0; t < avgTop; t++){
		    	result = result + tcdResult[t];
		    }
		    result = result / (avgTop * 1.0);

			qDebug("Signal Result = %f", result);
//			resultDsply = 0.0;// added 8-13-15 for test//

			   if (result >= 2.5){
				   resultDsply = result - 2.5;// result = 2.5 to 5.0 => 0 to 2.5
				   qDebug("Result Dsply - 2.5 = %f", resultDsply);
			   }
			   else if (result <= 0.0 && result >= -2.5){
				   resultDsply = (result + 2.5) * (-1);// 0.0 to -2.5 => 0 to -2.5
				   qDebug("Result Dsply + 2.5 = %f", resultDsply);
			   }

			ui.detTcdISigLCD->display(resultDsply);

			break;
		}
		case 2:
		{
/*		    char ar[] = "/dev/spi0cs3";
		    char br[] = "44";
		    avgTop = 1;

		    //ui.detSigReadButton->clearFocus();

//			qDebug("DET detTCD_I_Sig detNumberDirector = %x", detNumberDirector);// test

		    i = 0;
		    for (i = 0; i < avgTop; ++i){
		    	if(dcZero.setup_spi(ar) == -1){};// exit(EXIT_FAILURE);

		    	tcdResult[i] = dcZero.getSig_spi(4,br);

		    	dcZero.close_spi();
		    }

		    t = 0;
		    result = 0.0;
		    for (t = 0; t < avgTop; t++){
		    	result = result + tcdResult[t];
		    }
		    result = result / (avgTop * 1.0);

//			qDebug("Signal Result = %f", result);

			   if (result >= 2.5){
				   resultDsply = result - 2.5;
//				   qDebug("ResultDsply - 2.5 = %f", resultDsply);
			   }detconfigure.cpp:1348: error: ‘notBusyState’ was not declared in this scope

			   else{
				   resultDsply = (result + 2.5) * (-1);
//				   qDebug("ResultDsply + 2.5 = %f", resultDsply);
			   }

			ui.detTcdISigLCD->display(resultDsply);*/

			break;
		}
		default:
			result = 0.0;
			break;
	}
//	ui.busyLineEdit->setText(notBusyState);
//	dcZero.delay(2000);
//	ui.busyLineEdit->clear();
	return (resultDsply * -1.0);//Added * -1.0 6-18-2015 Versions before this had correct polarity ?????*/
}

void _590_DID_DIG::detDID_I_OnOffCtl(void){//(int valu){// turn on or off current amp --- OK
//	MainWindow i2c;
//	QCursor crr;
//	crr.setPos(1,1);
	__u8 buff[3];//__16
	int fd;
	__u8 device_addr;
//	double readValue;//added

	busyState = "BUSY...";// 9-5-2014
	notBusyState = "DONE...";

	ui.busyLineEdit->setText(busyState);

//	detNumberDirector = ui.didDetSelectSpinBox->value();// added

	detNumberDirector = 1; // forcing  - test statement

	switch (detNumberDirector)
	{
		case 1://
		{
			//ui.detTCDOnOffButton->clearFocus();
			qDebug("DET on/off detNumberDirector = %x", detNumberDirector);// test

			device_addr = 0x41;

//			ui.detAmpEnableCheckBox->click();

			if (DID_ONOFFCTRL2 == 0){//ui.detAmpEnableCheckBox->isChecked()){
//				ui.detAmpEnableCheckBox->click();
				buff[0] = 0x2E;// command for P14
				buff[1] = 0x01;// Data to switch
				fd = dci2c.init_i2c();
				dci2c.test_set_slave(fd, device_addr);//i2c_slaveAddr);
			 	if (write(fd, buff, 2) != 2) {
						fprintf(stderr, "i2c_write_command: On Off I Error on write: %s\n",
						strerror(errno));
					}
//			 	dcOFd = 1;
			 	qDebug() << "Power Supply On ";
			 	//////////////////////////////// Added Fixed Voltage setting for DID / FID
//					qDebug("DET DID FIX ctrl Voltage detNumberDirector = %x", detNumberDirector);// test

				device_addr = 0x10;

				buff[0] = 0x1b;//
				buff[1] = 0xe3;//temp_16>>8;//Hi Byte
				buff[2] = 0x10;//temp_16 & 0x00ff;//LO Byte

				qDebug("Fixed Current buff{0} %x", buff[0]);
				qDebug("Fixed Current buff{1} %x", buff[1]);
				qDebug("Fixed Current buff{2} %x", buff[2]);

				fd = dci2c.init_i2c();
				dci2c.test_set_slave(fd, device_addr);//i2c_slaveAddr);//addr = 0x45;
				if (write(fd, buff, 3) != 3) {
						fprintf(stderr, "i2c_write_command: DID HV Error on write: %s\n",
						strerror(errno));
					}
				dci2c.close_device(fd);
				DID_ONOFFCTRL2 = 1;
				/////////////////////////////// END ADD*/
			}
		 	else{
					if (DID_ONOFFCTRL2 == 1) {
//						ui.detAmpEnableCheckBox->click();
						buff[0] = 0x2E;// command for P14
						buff[1] = 0x00;// Data to switch
						fd = dci2c.init_i2c();
						dci2c.test_set_slave(fd, device_addr);//i2c_slaveAddr);
						if (write(fd, buff, 2) != 2) {
							fprintf(stderr, "i2c_write_command: On Off I Error on write: %s\n",
									strerror(errno));
						}
						qDebug() << "Power Supply Off OFF ";
//						dcOFd = 0;
						DID_ONOFFCTRL2 = 0;
					}
		 		}
		// 			qDebug("ImA On / Off passed valu %d", valu);

			dci2c.close_device(fd);

//				detTCD_I_read();
				break;
		}
		case 2://OK
		{/*
			//ui.detTCDOnOffButton->clearFocus();
			qDebug("DET on/off detNumberDirector = %x", detNumberDirector);// test OK

			device_addr = 0x44;

			if (ui.detAmpEnableCheckBox->isChecked()){

		//		ui.detAmpEnableCheckBox->click();

					buff[0] = 0x2E;// command for P14
					buff[1] = 0x01;// Data to switch
					fd = i2c.init_i2c();
				 	i2c.test_set_slave(fd, device_addr);//i2c_slaveAddr);
				 	if (write(fd, buff, 2) != 2) {
							fprintf(stderr, "i2c_write_command: On Off I Error on write: %s\n",
							strerror(errno));
						}
				 	dcOF2d = 1;
				 	qDebug() << "Current On ";
			}
		 	else{
		// 			ui.detAmpEnableCheckBox->click();


				buff[0] = 0x2E;// command for P14
				buff[1] = 0x00;// Data to switch
				fd = i2c.init_i2c();
				i2c.test_set_slave(fd, device_addr);//i2c_slaveAddr);
				if (write(fd, buff, 2) != 2) {
					fprintf(stderr, "i2c_write_command: On Off I Error on write: %s\n",
					strerror(errno));
				}
				qDebug() << "Current OFF ";
				dcOF2d = 0;
		 	}
		// 			qDebug("ImA On / Off passed valu %d", valu);

			i2c.close_device(fd);
//			detTCD_I_read();*/
			break;
		}
		default:
			break;
	}
	ui.busyLineEdit->setText(notBusyState);
	dci2c.delay(2000);
	ui.busyLineEdit->clear();
}

void _590_DID_DIG::IO20b(void)// Off I/O Q1 Valve 1
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

	Valve1toggle = 0;// 8100
	//Dione: This is for the checkbox thats no longer going to be there.
	//ui.valve_1_EnabledCheckBox->setChecked(0);// 8100

	vc_i2c.close_device(fd);

	vstate1 = 0;
}

void _590_DID_DIG::IO20a(void)// On I/O Q1 Valve 1 detector boarb slaveIdaddress hard coded
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
	Valve1toggle = 1;// 8100
	//ui.valve_1_EnabledCheckBox->setChecked(1);// 8100
	vc_i2c.close_device(fd);

	vstate1 = 1;
}

void _590_DID_DIG::activateValve1(void){
	// Default Button Color
	QPalette defaultColor;
	QBrush brush28(QColor(170, 255, 255, 255));
	brush28.setStyle(Qt::SolidPattern);
	defaultColor.setBrush(QPalette::Active, QPalette::Button, brush28);

	// Activated Button Color
	QPalette activeColor;
	QBrush activeGreen(QColor(0, 255, 0, 255));
	activeColor.setBrush(QPalette::Active, QPalette::Button, activeGreen);

	if(Valve1toggle == 1){
		ui.v1_pushButton->setPalette(defaultColor);
		IO20b();
		Valve1toggle = 0;
	}else if (Valve1toggle == 0){
		ui.v1_pushButton->setPalette(activeColor);
		IO20a();
		Valve1toggle = 1;
	}

}

void _590_DID_DIG::IO19a(void)// On I/O Q2 Valve 2 detector boarb slaveIdaddress hard coded
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
	Valve2toggle = 1;// 8100
	//ui.valve_2_EnabledCheckBox->setChecked(1);// 8100
	vc_i2c.close_device(fd);

	vstate2 = 1;
}
void _590_DID_DIG::IO19b(void)// Off I/O Q2 Valve 2 detector boarb slaveIdaddress hard coded
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
	Valve2toggle = 0;// 8100
	//ui.valve_2_EnabledCheckBox->setChecked(0);// 8100
	vc_i2c.close_device(fd);

	vstate2 = 0;
}


void _590_DID_DIG::activateValve2(void){
	// Default Button Color
	QPalette defaultColor;
	QBrush brush28(QColor(170, 255, 255, 255));
	brush28.setStyle(Qt::SolidPattern);
	defaultColor.setBrush(QPalette::Active, QPalette::Button, brush28);

	// Activated Button Color
	QPalette activeColor;
	QBrush activeGreen(QColor(0, 255, 0, 255));
	activeColor.setBrush(QPalette::Active, QPalette::Button, activeGreen);

	if(Valve2toggle == 1){
		ui.v2_pushButton->setPalette(defaultColor);
		IO19b();
		Valve2toggle = 0;
	}else if (Valve2toggle == 0){
		ui.v2_pushButton->setPalette(activeColor);
		IO19a();
		Valve2toggle = 2;
	}

}

void _590_DID_DIG::IO17a(void)// On I/O Q4 Valve 4
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
	Valve4toggle = 1;
	//ui.valve_4_EnabledCheckBox->setChecked(1);
	vc_i2c.close_device(fd);
}
void _590_DID_DIG::IO17b(void)// Off I/O Q4 Valve 4
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
	Valve4toggle = 0;
	//ui.valve_4_EnabledCheckBox->setChecked(0);
	vc_i2c.close_device(fd);
}

void _590_DID_DIG::activateValve4(void){
	// Default Button Color
	QPalette defaultColor;
	QBrush brush28(QColor(170, 255, 255, 255));
	brush28.setStyle(Qt::SolidPattern);
	defaultColor.setBrush(QPalette::Active, QPalette::Button, brush28);

	// Activated Button Color
	QPalette activeColor;
	QBrush activeGreen(QColor(0, 255, 0, 255));
	activeColor.setBrush(QPalette::Active, QPalette::Button, activeGreen);

	if(Valve4toggle == 1){
		ui.v4_pushButton->setPalette(defaultColor);
		IO17b();
		Valve4toggle = 0;
	}else if (Valve4toggle == 0){
		ui.v4_pushButton->setPalette(activeColor);
		IO17a();
		Valve4toggle = 2;
	}

}

void _590_DID_DIG::activateValve3(void){
	// Default Button Color
	QPalette defaultColor;
	QBrush brush28(QColor(170, 255, 255, 255));
	brush28.setStyle(Qt::SolidPattern);
	defaultColor.setBrush(QPalette::Active, QPalette::Button, brush28);

	// Activated Button Color
	QPalette activeColor;
	QBrush activeGreen(QColor(0, 255, 0, 255));
	activeColor.setBrush(QPalette::Active, QPalette::Button, activeGreen);

	if(Valve3toggle == 1){
		ui.v3_pushButton->setPalette(defaultColor);
		IO18b();
		Valve3toggle = 0;
	}else if (Valve3toggle == 0){
		ui.v3_pushButton->setPalette(activeColor);
		IO18a();
		Valve3toggle = 2;
	}

}


void _590_DID_DIG::IO18a(void)// On I/O Q3 Valve 3 on detector boarb slaveIdaddress hard coded
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
	Valve3toggle = 1;// 8100
	//ui.valve_3_EnabledCheckBox->setChecked(1);// 8100
	vc_i2c.close_device(fd);

	vstate3 = 1;
}
void _590_DID_DIG::IO18b(void)// Off I/O Q3 Valve 3 detector boarb slaveIdaddress hard coded
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
	Valve3toggle = 0;// 8100
	//ui.valve_3_EnabledCheckBox->setChecked(0);// 8100
	vc_i2c.close_device(fd);

	vstate3 = 0;
}

void _590_DID_DIG::detDID_I_Ctl(void){//(double valu){// ok
//	MainWindow i2c;
//	QCursor crr;
//	crr.setPos(1,1);
	__u8 buff[3];//__16
	unsigned int temp_16, temp;
	double iBIT, readValu;
	int fd;
	__u8 device_addr;

	busyState = "BUSY...";// 9-5-2014
	notBusyState = "DONE...";

	ui.busyLineEdit->setText(busyState);

	//ui.detTCDOnOffButton->clearFocus();

	detNumberDirector = 1; // forcing  - test statement

	qDebug("DET before case current ctrl detNumberDirector = %x", detNumberDirector);// test

	switch (detNumberDirector)
	{
		case 1:
		{// No Current control when DID or FID as firts detector
			qDebug("DET current ctrl detNumberDirector = %x", detNumberDirector);// test

//			readValu = 0;//ui.det_I_CtlSpinBox->value();
//			dcId = readValu;
//
////			qDebug("ImA Ctl passed value %f", readValu);//valu);
//
//			iBIT = 350.0 / 65535.0;// calculate current per bit for 16 bits of data What is max current
//			temp_16 = readValu / iBIT;// calculate num of bits
//			qDebug("ImA Ctl passed temp_16 bits before %x", temp_16);
//			temp = 0xffff - temp_16;
//			qDebug("ImA Ctl passed temp bits before %x", temp);
//
//			if (temp > 0xFC16){//64534 FC16
//				temp = 0xFC16;
//			}
//			if (temp < 0xDEA8){
//					temp = 0xDEA8;//57000
//				}

			temp = 0xDEA8;//Turn full on for DID - Added for DID IN BOX 1/5/2017

			qDebug("ImA Ctl passed temp bits after %x", temp);
			device_addr = 0x10;

			buff[0] = 0x1b;//
			buff[1] = temp>>8;// upper bits
			buff[2] = temp & 0x00ff;// lower 8 bits

			qDebug("ImA buff{0} %x", buff[0]);
			qDebug("ImA buff{1} %x", buff[1]);
			qDebug("ImA buff{2} %x", buff[2]);

			fd = dci2c.init_i2c();
			dci2c.test_set_slave(fd, device_addr);//i2c_slaveAddr);
			if (write(fd, buff, 3) != 3) {
					fprintf(stderr, "i2c_write_command: I ctrl Error on write: %s\n",
					strerror(errno));
				}
			dci2c.close_device(fd);
			detDID_I_read();
			break;
		}
		case 2://OK
		{/*
			qDebug("DET current ctrl detNumberDirector = %x", detNumberDirector);// test

			readValu = 0;// ui.det_I_CtlSpinBox->value();
			dcI2d = readValu;

			qDebug("ImA Ctl passed value %f", readValu);//valu);

			iBIT = 350.0 / 65535.0;// calculate current per bit for 16 bits of data What is max current
			temp_16 = readValu / iBIT;// calculate num of bits
			qDebug("ImA Ctl passed temp_16 bits before %x", temp_16);
			temp = 0xffff - temp_16;
			qDebug("ImA Ctl passed temp bits before %x", temp);

			if (temp > 0xFC16){//64534 FC16
				temp = 0xFC16;
			}
			if (temp < 0xDEA8){
					temp = 0xDEA8;//57000
				}
			qDebug("ImA Ctl passed temp bits after %x", temp);
			device_addr = 0x1c;

			buff[0] = 0x1b;//
			buff[1] = temp>>8;// upper bits
			buff[2] = temp & 0x00ff;// lower 8 bits

			qDebug("ImA buff{0} %x", buff[0]);
			qDebug("ImA buff{1} %x", buff[1]);
			qDebug("ImA buff{2} %x", buff[2]);

			fd = i2c.init_i2c();
			i2c.test_set_slave(fd, device_addr);//i2c_slaveAddr);
			if (write(fd, buff, 3) != 3) {
					fprintf(stderr, "i2c_write_command: I ctrl Error on write: %s\n",
					strerror(errno));
				}
			i2c.close_device(fd);
//			detTCD_I_read();*/
			break;
		}
		default:
			break;
	}
	ui.busyLineEdit->setText(notBusyState);
	dci2c.delay(2000);
	ui.busyLineEdit->clear();
}
void _590_DID_DIG::setSettings2(void){
	qDebug("TIMER 2 .................................................START");
	completeProcess = "COMPLETE...2";

	detDIDSig();
	qDebug("DID SIGNAL READ");
	detDID_I_read();

	ui.busyLineEdit->setText(completeProcess);
}

void _590_DID_DIG::detDID_V_Ctl(void){//(double valu){// ok
//	MainWindow i2c;
//	QCursor crr;
//	crr.setPos(1,1);
	__u8 buff[3];//__16
	unsigned int temp_16;
	double iBIT, readValue;
	int fd;
	__u8 device_addr;

	busyState = "BUSY...";// 9-5-2014
	notBusyState = "DONE...";

	ui.busyLineEdit->setText(busyState);

	qDebug("DET High volt ctrl...............");

	//ui.detTCDWriteVoltageButton->clearFocus();

	detNumberDirector = 1; // forcing  - test statement

	switch (detNumberDirector)
	{
		case 1:
		{
			qDebug("DET High volt ctrl detNumberDirector = %x", detNumberDirector);// test

			readValue = ui.detVdcCtlSpinBox->value();
			DVC1D = readValue;

			qDebug("High Volt Ctl passed value %f", readValue);//valu);

//			temp_16 = ((readValue / 1000.0)*0xffff)>>1;
			iBIT = 1000.0 / 65535.0;
			temp_16 = (((readValue - 25) / iBIT)/2)-0x19;// Divide by 2 and subtract 25 to make result accurate ??

			qDebug("High Volt Ctl temp_16 bits %x", temp_16);

			device_addr = 0x10;

			buff[0] = 0x1a;//
			buff[1] = temp_16>>8;//Hi Byte
			buff[2] = temp_16 & 0x00ff;//LO Byte

			qDebug("High Volt buff{0} %x", buff[0]);
			qDebug("High Volt buff{1} %x", buff[1]);
			qDebug("High Volt buff{2} %x", buff[2]);

			fd = dci2c.init_i2c();
			dci2c.test_set_slave(fd, device_addr);//i2c_slaveAddr);//addr = 0x45;
			if (write(fd, buff, 3) != 3) {
					fprintf(stderr, "i2c_write_command: DID HV Error on write: %s\n",
					strerror(errno));
				}
			dci2c.close_device(fd);
			detHvSig();// read and display HV

//			i2c.delay(5000);

			detDID_I_read();

			break;
		}
		case 2://OK
		{/*
			qDebug("DET High volt ctrl detNumberDirector = %x", detNumberDirector);// test

			readValue = ui.detVdcCtlSpinBox->value();
			dVC2d = readValue;

			qDebug("High Volt Ctl passed value %f", readValue);//valu);

			iBIT = 24.0 / 65535.0;
			temp_16 = readValue / iBIT;

			qDebug("High Volt Ctl temp_16 bits %x", temp_16);

			device_addr = 0x1c;

			buff[0] = 0x1a;//
			buff[1] = temp_16>>8;//Hi Byte
			buff[2] = temp_16 & 0x00ff;//LO Byte

			qDebug("High Volt buff{0} %x", buff[0]);
			qDebug("High Volt buff{1} %x", buff[1]);
			qDebug("High Volt buff{2} %x", buff[2]);

			fd = i2c.init_i2c();
			i2c.test_set_slave(fd, device_addr);//i2c_slaveAddr);//addr = 0x45;
			if (write(fd, buff, 3) != 3) {
					fprintf(stderr, "i2c_write_command: DID HV Error on write: %s\n",
					strerror(errno));
				}
			i2c.close_device(fd);*/
			break;
		}
		default:
			break;
	}
	ui.busyLineEdit->setText(notBusyState);
	dci2c.delay(2000);
	ui.busyLineEdit->clear();
}

QString _590_DID_DIG::numIn(void)
{
	class numericInput Nin(this);// Crerate a dialog
	if (Nin.exec()) {
	}
	numericInput numkey;
	QString txt_dc;

	txt_dc = numkey.popupNumInReturn();

	return txt_dc;
}
QString _590_DID_DIG::numInPopUp(void)
{
	class numPopUp Nin(this);// Crerate a dialog
	if (Nin.exec()) {
	}
	numPopUp numkey;
	QString txt_dc;

	txt_dc = numkey.popupNumInReturn();

	return txt_dc;
}
QString _590_DID_DIG::numInPolPopUp(unsigned int target)
{
	class polPopUp Nin(this);// Crerate a dialog
	if (Nin.exec()) {
	}
	qDebug("_590 Target %x", target);
	polPopUp numkey;
	QString txt_dc;

	txt_dc = numkey.popupNumInReturn();

	return txt_dc;
}
QString _590_DID_DIG::numInTempPopUp(void)
{
	//class tempPopUp Nin(this);// Create a dialog
//	if (Nin.exec()) {}
//	tempPopUp numkey;

//	QString txt_dc;

//	txt_dc = numkey.popupNumInReturn();

	class polPopUp Nin(this);
		if (Nin.exec()) {
		}
		qDebug("numInTempPopUp fired!");

		polPopUp numkey;
		QString txt_dc;

		txt_dc = numkey.popupNumInReturn();

	return txt_dc;
}

void _590_DID_DIG::tempSetPoint(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

QString _590_DID_DIG::numInGainPopUp(void)
{
	class gainPopUp Nin(this);// Crerate a dialog
	if (Nin.exec()) {
	}
	gainPopUp numkey;
	QString txt_dc;

	txt_dc = numkey.popupNumInReturn();

	return txt_dc;
}
void _590_DID_DIG::deleteNumIn(QString txt){// for move baseline only

	double val3;
	bool okv[1];

	val3 = txt.toDouble(okv);
	qDebug("deleteNumIn Firing!");

	qDebug("numIn val3  = %f", val3);

	ui.detDIDOffSetBLSpinBox->setValue(val3);
	detMoveBaseline();
}
void _590_DID_DIG::deleteNumPop(QString txt){// for Change HV only

	double val3;
	bool okv[1];

	val3 = txt.toDouble(okv);

	qDebug("NumPop val3  = %f", val3);

	ui.detVdcCtlSpinBox->setValue(val3);
	detDID_V_Ctl();
}
void _590_DID_DIG::deletePolPop(QString txt){// for Change  polV only

	double val3;
	bool okv[1];

	val3 = txt.toDouble(okv);

	qDebug(" pol val3  = %f", val3);

	ui.didPolVCtlSpinBox->setValue(val3);
	detTCDPolarityfCtl();
}
void _590_DID_DIG::deleteGainPop(QString txt){// for Change gain only

	double val3;
	bool okv[1];

	val3 = txt.toDouble(okv);

	qDebug("gain val3  = %f", val3);

	ui.detGainSpinBox_2->setValue(val3);
	ui.detDidGainLCD->display(val3);
	detGain();
}
void _590_DID_DIG::pleaseWaitForIt(void)
{
	pleaseWait wait_dc(this);// Crerate a dialog
			if (wait_dc.exec()) {
				qDebug() << "IWait for Process to end)";

				dci2c.delay(10000);
				wait_dc.done(1);
			}
}

void _590_DID_DIG::configIO(unsigned int num)// OK
{
//	DetectorWidget detconf;//mem leak
//	MainWindow dci2c;
	__u8 buff[3];//__16
	__u8 port_addr;
	unsigned int i;
	int fd;
	unsigned int tempSid;

	num = 0;// added to satisfy warning

	detNumberDirector = 1; //num; //ui.detSelectSpinBox->value(); // hard coded to 1 for 2300

	switch (detNumberDirector)
	{
		case 1:
		{
//			qDebug("DET config detNumberDirector = %x", detNumberDirector);// test
			tempSid = i2c_slaveAddr;
			i2c_slaveAddr = 0x41;

			fd = dci2c.init_i2c();
			dci2c.test_set_slave(fd, i2c_slaveAddr);

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
			buff[1] = 0x55;
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
			buff[1] = 0x55;
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
			qDebug() << "Detector 1 7300 configured";
			i2c_slaveAddr = tempSid;
			dci2c.close_device(fd);

//			ui.det_I_CtlSpinBox->setValue(0.0); // remove for 2300
//			detTCD_I_Ctl();
			break;
		}
		case 2 :
		{
//			qDebug("DET config detNumberDirector = %x", detNumberDirector);// test
			tempSid = i2c_slaveAddr;
			i2c_slaveAddr = 0x44;

			fd = dci2c.init_i2c();
			dci2c.test_set_slave(fd, i2c_slaveAddr);

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
			buff[1] = 0x55;
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
			buff[1] = 0x55;
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
			qDebug() << "Detector 2 7300 configured";
			i2c_slaveAddr = tempSid;
			dci2c.close_device(fd);

//			ui.det_I_CtlSpinBox->setValue(0.0); removed for 2300
//			detTCD_I_Ctl();
			break;
		}
		default:
			break;
	}

///////////////////////////////////////////////////////////////////// DET 2


}
double _590_DID_DIG::FlowMethread(void){// ok

	busyState = "BUSY...";// 9-5-2014
	notBusyState = "DONE...";

	ui.busyLineEdit->setText(busyState);
//	QCursor crr;
//	crr.setPos(2, 2);

//	MainWindow dci2c;

	__u16 buff[3], temp_16;//__16
	__u8 buft[3];
	int fd;
	__u8 port_addr;
	double valu;
	double maxflow;

	maxflow = 70.0;

	buff[0] = 0x0000;
	buff[1] = 0x0000;
	buff[2] = 0x0000;
	buff[3] = 0x0000;

	buft[0] = 0x00;
	buft[1] = 0x00;

	port_addr = 0x33;// address for TCD Current read
	//////////////////////////////////////////////////// Write to set channel
//	buft[0] = 0x6d;// channel selection
	fd = dci2c.init_i2c();
	dci2c.test_set_slave(fd, port_addr);

	dci2c.i2c_read_reg2(fd, buff, 0x6b);
	dci2c.close_device(fd);

/*			qDebug("ImA Read buff0 %x", buff[0]);
	qDebug("H2 Flow Read buff1 %x", buff[1]);
	qDebug("H2 Flow Read buff2 %x", buff[2]);
	qDebug("H2 Flow Read buff3 %x", buff[3]);*/

	buft[0] = (buff[0] & 0x000F);// hi byte
	buft[1] = (buff[1] & 0x00ff);// lo byte
/*			qDebug("Read H2 Flow lo buft{1} %x", buft[1]);
	qDebug("Read H2 Flow hi buft{0} %x", buft[0]);*/
	///////////////////////////////////////////////////// Read 2 Bytes end

	temp_16 = buft[1];
//			qDebug("ImA temp_16 lo %x", temp_16);
	temp_16 =  temp_16 + (buft[0]<<8);

//			qDebug("ImA temp_16 %x", temp_16);
	valu = (temp_16 * 0.0012210012210012);//(5/4095)
	valu = ((valu / 5.0)*maxflow) + 4.75;

	ui.busyLineEdit->setText(notBusyState);
	dci2c.delay(2000);
	ui.busyLineEdit->clear();

//	qDebug("METH Flow %f", valu);
	return valu;
}
void _590_DID_DIG::detTCDPolarityfCtl(void){ // testing // good USED FOR 2300
//	QCursor crr;
//	crr.setPos(2, 2);
//	MainWindow detPol;dci2c
    char ar[] = "/dev/spi0cs1"; // Det 1 // changed from cs3 because of problem with emac 4"
    char br[] = "/dev/spi0cs1"; // Det 2
    char cr[] = "108001"; // Det 1 - Channel '0' positive - ain0 positive ain1 negative
    char dr[] = "108020"; // Det 1 - Channel '0' Negative - ain0 negative ain1 positive
    char er[] = "108001"; // Det 2 - Channel '0' positive - ain0 positive ain1 negative
    char fr[] = "108020"; // Det 2 - Channel '0' Negative - ain0 negative ain1 positive
    int numofbytes;

	busyState = "BUSY...";// 9-5-2014
	notBusyState = "DONE...";

	ui.busyLineEdit->setText(busyState);

    numofbytes = 3;

    detNumberDirector = 1; // added for 2300

	switch (detNumberDirector)
	{
		case 1:
		{

			if (ui.detPolarityEnableCheckBox->isChecked()){
		    	if(dci2c.setup_spi(ar) == -1){};// exit(EXIT_FAILURE);

		    	dci2c.transmit_spi(numofbytes,dr);

				dcpol1 = 1;
				qDebug() << "reversed ";
			}
		 	else{
		    	if(dci2c.setup_spi(ar) == -1){};// exit(EXIT_FAILURE);

		    	dci2c.transmit_spi(numofbytes,cr);

				qDebug() << "reversed ";
				dcpol1 = 0;
		 	}

			break;
		}
		case 2:
		{

			if (ui.detPolarityEnableCheckBox->isChecked()){
		    	if(dci2c.setup_spi(br) == -1){};// exit(EXIT_FAILURE);

		    	dci2c.transmit_spi(numofbytes,fr);

		    	dci2c.close_spi();
				dcpol2 = 1;
				qDebug() << "Current On ";
			}
		 	else{
		    	if(dci2c.setup_spi(br) == -1){};// exit(EXIT_FAILURE);

		    	dci2c.transmit_spi(numofbytes,er);

		 		qDebug() << "reversed ";
				dcpol2 = 0;
		 	}

			detTCD_I_Sig();
			detDIDSig();
			break;
		}
		default:
			break;
	}

	ui.busyLineEdit->setText(notBusyState);
	dci2c.delay(2000);
	ui.busyLineEdit->clear();
}
void _590_DID_DIG::detMoveBaseline(void){// Using this for 2300

//	MainWindow dci2c;//dcBaseline;
    __u8 hi_byte, lo_byte, buff[3];;
    int fd;
    double result;
    unsigned int hexHold, hexHoldOffset;

	busyState = "BUSY...";// 9-5-2014
	notBusyState = "DONE...";

	ui.busyLineEdit->setText(busyState);

    hexHoldOffset = 0x00;
    hexHold = 0x00;
    //ui.detTCDOffSetBLCurrentButton->clearFocus();
    detNumberDirector = 1;
    switch (detNumberDirector)
	{
		case 1:
		{
			qDebug("MOVE BASELINE........................");
			/////////////////////////////////////////////// get change and convert it
			    //result = ui.detDIDOffSetBLSpinBox->value() *-0.4;
			    dci2c.delay(500);
			    offSet1 = result;

			    if(result > 0){
			       	hexHoldOffset = ((result) / 5) * 32767;//
			       	hexHold = hexHoldGlobal - hexHoldOffset;
			    }else if(result < 0){
			       	hexHoldOffset = (-1) * ((result) / 5) * 32767;//
			       	hexHold = hexHoldGlobal + hexHoldOffset;
			    }

			    qDebug("result = %f", result);// test
			   	qDebug("result = %x", result);// test
			   	qDebug("hexHoldOffset = %x", hexHoldOffset);// test
			   	qDebug("hexHold = %x", hexHold);// test
			/////////////////////////////////////////////// make change

			    hi_byte = (hexHold & 0xff00) >> 8;
			    lo_byte = hexHold & 0x00ff;

			    printf("hi_byte = %x\n", hi_byte);
			    printf("lo_byte = %x\n", lo_byte);

			    fd = dci2c.init_i2c();
			    dci2c.test_set_slave(fd, 0x10);

			 	//* write register /
			 	buff[0] = 0x18;// channel
			 	buff[1] = hi_byte;//(__u8)(cmd >> 8);
			 	buff[2] = lo_byte;//(__u8)(cmd);

			 	if (write(fd, buff, 3) != 3) {
			 		fprintf(stderr, "i2c_write_cmd: error on write: %s\n", strerror(errno));
			// 		return -1;
			 	}
			 	dci2c.close_device(fd);//close(fd);// Close I2C fd
			 	//////////////////////////////////// I2C End
			 	dci2c.delay(500);
			 	detDIDSig();
			break;
		}
		case 2:
		{
//			/////////////////////////////////////////////// get change and convert it
//			    result = ui.detDIDOffSetBLSpinBox->value();
//			    offSet2 = result;
//
//			    if(result > 0){
//			       	hexHoldOffset = ((result) / 5) * 32767;//
//			       	hexHold = hexHoldGlobal - hexHoldOffset;
//			    }else if(result < 0){
//			       	hexHoldOffset = (-1) * ((result) / 5) * 32767;//
//			       	hexHold = hexHoldGlobal + hexHoldOffset;
//			    }
//
//
///*			   	qDebug("result = %x", result);// test
//			   	qDebug("hexHoldOffset = %x", hexHoldOffset);// test
//			   	qDebug("hexHold = %x", hexHold);// test*/
//			/////////////////////////////////////////////// make change
//
//			    hi_byte = (hexHold & 0xff00) >> 8;
//			    lo_byte = hexHold & 0x00ff;
//
///*			    printf("hi_byte = %x\n", hi_byte);
//			    printf("lo_byte = %x\n", lo_byte);*/
//
//			    fd = dci2c.init_i2c();
//			    dci2c.test_set_slave(fd, 0x1c);
//
//			 	//* write register /
//			 	buff[0] = 0x18;// channel
//			 	buff[1] = hi_byte;//(__u8)(cmd >> 8);
//			 	buff[2] = lo_byte;//(__u8)(cmd);
//
//			 	if (write(fd, buff, 3) != 3) {
//			 		fprintf(stderr, "i2c_write_cmd: error on write: %s\n", strerror(errno));
//			// 		return -1;
//			 	}
//			 	dci2c.close_device(fd);//close(fd);// Close I2C fd
//			 	//////////////////////////////////// I2C End
//			 	detTCD_I_Sig();
			break;
		}
		default:
			break;
	}
//	QCursor crr;
//	crr.setPos(2, 2);
	ui.busyLineEdit->setText(notBusyState);
	dci2c.delay(2000);
	ui.busyLineEdit->clear();
}

double _590_DID_DIG::FlowH2read(void){// ok

	busyState = "BUSY...";// 9-5-2014
	notBusyState = "DONE...";

	ui.busyLineEdit->setText(busyState);
//	QCursor crr;
//	crr.setPos(2, 2);

//	MainWindow dci2c;

	__u16 buff[3], temp_16;//__16
	__u8 buft[3];
	int fd;
	__u8 port_addr;
	double valu;
	double maxflow;

	maxflow = 100.0;

	buff[0] = 0x0000;
	buff[1] = 0x0000;
	buff[2] = 0x0000;
	buff[3] = 0x0000;

	buft[0] = 0x00;
	buft[1] = 0x00;

	port_addr = 0x33;// address for TCD Current read
	//////////////////////////////////////////////////// Write to set channel
//	buft[0] = 0x6F;// channel selection
	fd = dci2c.init_i2c();
	dci2c.test_set_slave(fd, port_addr);

	dci2c.i2c_read_reg2(fd, buff, 0x6d);
	dci2c.close_device(fd);

/*			qDebug("ImA Read buff0 %x", buff[0]);#include "mainwindow.h"
	qDebug("H2 Flow Read buff1 %x", buff[1]);
	qDebug("H2 Flow Read buff2 %x", buff[2]);
	qDebug("H2 Flow Read buff3 %x", buff[3]);*/

	buft[0] = (buff[0] & 0x000F);// hi byte
	buft[1] = (buff[1] & 0x00ff);// lo byte
/*			qDebug("Read H2 Flow lo buft{1} %x", buft[1]);
	qDebug("Read H2 Flow hi buft{0} %x", buft[0]);*/
	///////////////////////////////////////////////////// Read 2 Bytes end

	temp_16 = buft[1];
//			qDebug("H2 temp_16 lo %x", temp_16);
	temp_16 =  temp_16 + (buft[0]<<8);

//			qDebug("H2 temp_16 %x", temp_16);
	valu = (temp_16 * 0.0012210012210012);//(5/4095)
	valu = ((valu / 5.0)*maxflow) + 4.75;

	ui.busyLineEdit->setText(notBusyState);
	dci2c.delay(2000);
	ui.busyLineEdit->clear();

//	qDebug("FUEL Flow %f", valu);
	return valu;
}

void _590_DID_DIG::setSettings(void){
	qDebug("TIMER 1 .................................................START");
	completeProcess = "COMPLETE....";

	qDebug("SET SETTINGS..........................%d",Range);
	if (Range == 1){
		ui.R1->setChecked(1);
		ui.R2->setChecked(0);
		ui.R3->setChecked(0);
		ui.R4->setChecked(0);
		qDebug("SWITCH 1..........................%d",Range);
	}else if (Range == 2){
		ui.R1->setChecked(0);
		ui.R2->setChecked(1);
		ui.R3->setChecked(0);
		ui.R4->setChecked(0);
		qDebug("SWITCH 2..........................%d",Range);
	}else if (Range == 3){
		ui.R1->setChecked(0);
		ui.R2->setChecked(0);
		ui.R3->setChecked(1);
		ui.R4->setChecked(0);
		qDebug("SWITCH 3..........................%d",Range);
	}else if (Range == 4){
		ui.R1->setChecked(0);
		ui.R2->setChecked(0);
		ui.R3->setChecked(0);
		ui.R4->setChecked(1);
		qDebug("SWITCH 4..........................%d",Range);
	}

	if (dcGain1 == 0 && dcGain2 == 0){
		qDebug("Gain 1..........................%d, %d",dcGain1, dcGain2);
		ui.detGainSpinBox_2->setValue(1);
	}else if (dcGain1 == 1 && dcGain2 == 0){
		qDebug("Gain 2..........................%d, %d",dcGain1, dcGain2);
		ui.detGainSpinBox_2->setValue(2);
	}else if (dcGain1 == 0 && dcGain2 == 1){
		qDebug("Gain 3..........................%d, %d",dcGain1, dcGain2);
		ui.detGainSpinBox_2->setValue(3);
	}else if (dcGain1 == 1 && dcGain2 == 1){
		qDebug("Gain 4..........................%d, %d",dcGain1, dcGain2);
		ui.detGainSpinBox_2->setValue(4);
	}

	ui.didPolVCtlSpinBox->setValue(PolVolt + 20.0);

	ui.detVdcCtlSpinBox->setValue(DVC1D);

	detDIDSig();

	ui.busyLineEdit->setText(completeProcess);
	qDebug("TIMER 1 .................................................COMPLETE");
}
void _590_DID_DIG::saveDetSettings(void){
    QFile file("/root/detsettings.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return;

    QTextStream out(&file);//"The magic number is: "
//    out << ALARMACTIVE << "\n" << ALARM1ACTIVE << "\n"<< ALARM2ACTIVE << "\n" << ALARMHI1
//    		<< "\n" << ALARMLO1 << "\n" << ALARMHI2 << "\n" << ALARMLO2 << "\n";

    qDebug() << "ALARM SAVED";
}
void _590_DID_DIG::processDid_line(QByteArray line, unsigned int nex){
	bool ok;
	QString alData;//[line.size()];
	unsigned int dataResultInt;
	double dataResult;

	dataResultInt = 0;
	dataResult = 0.0;

	qDebug("NEX  = %d", nex);
/*	switch (nex){
		case 0:{
			 for (int i = 0; i < line.size(); ++i) {
			     if (line.at(i) >= '0' && line.at(i) <= '9')
			    	 alData[i] = line.at(i);
			     	 qDebug("data  = %x", line.at(i));
			 }
			 dataResultInt = alData.toUInt(&ok);
			 ALARM1ACTIVE = dataResultInt;
			 qDebug("to ALARM1ACTIVE = %d", dataResultInt);

			break;
		}
		case 1:{
			 for (int i = 0; i < line.size(); ++i) {
			     if (line.at(i) >= '0' && line.at(i) <= '9')
			    	 alData[i] = line.at(i);
			     	 qDebug("data  = %x", line.at(i));
			 }
			 dataResultInt = alData.toUInt(&ok);
			 ALARM2ACTIVE = dataResultInt;
			 qDebug("to ALARM2ACTIVE = %d", dataResultInt);
			break;
		}
		case 2:{
			 for (int i = 0; i < line.size(); ++i) {
			     if (line.at(i) >= '0' && line.at(i) <= '9')
			    	 alData[i] = line.at(i);
			     	 qDebug("data  = %x", line.at(i));
			 }
			 dataResultInt = alData.toUInt(&ok);
			 ALARMACTIVE = dataResultInt;
			 qDebug("to ALARMACTIVE = %d", dataResultInt);
			break;
		}
		case 3:{
			 for (int i = 0; i < line.size(); ++i) {
			     if (line.at(i) >= '0' && line.at(i) <= '9')
			    	 alData[i] = line.at(i);
			     	 qDebug("data  = %x", line.at(i));
			 }
			 dataResult = alData.toUInt(&ok);
			 ALARMHI1 = dataResult;
			 qDebug("to ALARMHI1 = %f", dataResult);
			break;
		}
		case 4:{
			 for (int i = 0; i < line.size(); ++i) {
			     if (line.at(i) >= '0' && line.at(i) <= '9')
			    	 alData[i] = line.at(i);
			     	 qDebug("data  = %x", line.at(i));
			 }
			 dataResult = alData.toDouble(&ok);
			 ALARMLO1 = dataResult;
			 qDebug("to ALARMLO1 = %f", dataResult);
			break;
		}
		case 5:{
			 for (int i = 0; i < line.size(); ++i) {
			     if (line.at(i) >= '0' && line.at(i) <= '9')
			    	 alData[i] = line.at(i);
			     	 qDebug("data  = %x", line.at(i));
			 }#include "numpopup.h"
			 dataResult = alData.toDouble(&ok);
			 ALARMHI2 = dataResult;
			 qDebug("to ALARMHI2 = %f", dataResult);
			break;
		}
		case 6:{
			ALARMLO2 = line.toDouble(&ok);
			 for (int i = 0; i < line.size(); ++i) {
			     if (line.at(i) >= '0' && line.at(i) <= '9')
			    	 alData[i] = line.at(i);
			     	 qDebug("data  = %x", line.at(i));
			 }
			 dataResult = alData.toDouble(&ok);
			 ALARMLO2 = dataResult;
			 qDebug("to ALARMLO2 = %f", dataResult);
			break;
		}
		default :{
			qDebug("FILE read default = %x", nex);
			break;
		}
	}*/
}
void _590_DID_DIG::getDidSettings(void){

	bool ok;
	unsigned int nex;

	nex = 0;

    QFile file("/root/detsettings.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    while (!file.atEnd()) {
    	QByteArray line = file.readLine();//
    	processDid_line(line, nex);
    	++nex;
    }
}
void _590_DID_DIG::detRead(void){
//	MainWindow dci2c;
	unsigned int tempSid;

	busyState = "BUSY...";// 9-5-2014
	notBusyState = "DONE...";

	ui.busyLineEdit->setText(busyState);

	//ui.detTCDReadButton->clearFocus();
//	ui.detTcd1LCD->display(0.0); // removed for 2300
	ui.detDIDOffSetBLSpinBox->setValue(0.0);
	ui.detTcdISigLCD->display(0.0);

	tempSid = 0;// added to satisfy warning

	switch (detNumberDirector)
	{
		case 1:
		{
//			qDebug() << "READING Det Values Start";
			tempSid = i2c_slaveAddr;// store current I2C Slave Id

//			 qDebug("DET detRead detNumberDirector = %x", detNumberDirector);// test

			i2c_slaveAddr = 0x41;
			if(i2c_slaveAddr == 0x41){// TCD 1
				if ((dcGain1 == 0x00) && (dcGain2 == 0x00)){
					ui.detGainSpinBox_2->setValue(1.0);
//					qDebug() << "Gain 1";
				}
				if ((dcGain1 == 0x01) && (dcGain2 == 0x00)){
					ui.detGainSpinBox_2->setValue(2.0);
//					qDebug() << "Gain 10";
				}
				if ((dcGain1 == 0x00) && (dcGain2 == 0x01)){
					ui.detGainSpinBox_2->setValue(3.0);
//					qDebug() << "Gain 100";
				}
				if ((dcGain1 == 0x01) && (dcGain2 == 0x01)){
					ui.detGainSpinBox_2->setValue(4.0);
//					qDebug() << "Gain 100";
				}
//				ui.detVdcCtlSpinBox->setValue(dVC1); // removed for 2300

//				ui.det_I_CtlSpinBox->setValue(dcI); removed for 2300

				if (dcOF == 1){
//					ui.detAmpEnableCheckBox->setChecked(1); removed for 2300
				}
				else{
//					ui.detAmpEnableCheckBox->setChecked(0); removed for 2300
					}
				//ui.detDIDOffSetBLSpinBox->setValue(offSet1);
				if (dcpol1 == 1){
					ui.detPolarityEnableCheckBox->setChecked(1);
				}else{
					ui.detPolarityEnableCheckBox->setChecked(0);
				}
			}
			break;
		}
		case 2:
		{
			i2c_slaveAddr = 0x44;
				if(i2c_slaveAddr == 0x44){// TCD 2
					if ((dcGain1_1 == 0x00) && (dcGain2_1 == 0x00)){
						ui.detGainSpinBox_2->setValue(1.0);
//						qDebug() << "Gain 1";
					}
					if ((dcGain1_1 == 0x01) && (dcGain2_1 == 0x00)){
						ui.detGainSpinBox_2->setValue(2.0);
//						qDebug() << "Gain 10";
					}
					if ((dcGain1_1 == 0x00) && (dcGain2_1 == 0x01)){
						ui.detGainSpinBox_2->setValue(3.0);
//						qDebug() << "Gain 100";
					}
					if ((dcGain1_1 == 0x01) && (dcGain2_1 == 0x01)){
						ui.detGainSpinBox_2->setValue(4.0);
//						qDebug() << "Gain 100";
					}
//					ui.detVdcCtlSpinBox->setValue(dVC2); removed for 2300

//					ui.det_I_CtlSpinBox->setValue(dcI2); removed for 2300

					if(dcOF2 == 1){
//						ui.detAmpEnableCheckBox->setChecked(1); removed for 2300
					}else{
//						ui.detAmpEnableCheckBox->setChecked(0); removed for 2300
					}
					//ui.detDIDOffSetBLSpinBox->setValue(offSet2);
					if (dcpol2 == 1){
						ui.detPolarityEnableCheckBox->setChecked(1);
					}else{
						ui.detPolarityEnableCheckBox->setChecked(0);
					}
				}
			break;
		}
		default:
		{
			break;
		}
	}
//	QCursor crr;
//	crr.setPos(2, 2);
	ui.busyLineEdit->setText(notBusyState);
	dci2c.delay(2000);
	ui.busyLineEdit->clear();
	i2c_slaveAddr = tempSid;
//	qDebug() << "READING Det Values END";
}
double _590_DID_DIG::FlowAirread(void){// ok

	busyState = "BUSY...";// 9-5-2014
	notBusyState = "DONE...";

	ui.busyLineEdit->setText(busyState);
//	QCursor crr;
//	crr.setPos(2, 2);

//	MainWindow dci2c;

	__u16 buff[3], temp_16;//__16
	__u8 buft[3];
	int fd;
	__u8 port_addr;
	double valu;
	double maxflow;

	maxflow = 350.0;

	buff[0] = 0x0000;
	buff[1] = 0x0000;
	buff[2] = 0x0000;
	buff[3] = 0x0000;

	buft[0] = 0x00;
	buft[1] = 0x00;

	port_addr = 0x33;// address for TCD Current read
	//////////////////////////////////////////////////// Write to set channel
//	buft[0] = 0x6b;// channel selection
	fd = dci2c.init_i2c();
	dci2c.test_set_slave(fd, port_addr);

	dci2c.i2c_read_reg2(fd, buff, 0x6f);
	dci2c.close_device(fd);

/*			qDebug("ImA Read buff0 %x", buff[0]);
	qDebug("H2 Flow Read buff1 %x", buff[1]);
	qDebug("H2 Flow Read buff2 %x", buff[2]);
	qDebug("H2 Flow Read buff3 %x", buff[3]);*/

	buft[0] = (buff[0] & 0x000F);// hi byte
	buft[1] = (buff[1] & 0x00ff);// lo byte
/*			qDebug("Read H2 Flow lo buft{1} %x", buft[1]);
	qDebug("Read H2 Flow hi buft{0} %x", buft[0]);*/
	///////////////////////////////////////////////////// Read 2 Bytes end

	temp_16 = buft[1];
//			qDebug("ImA temp_16 lo %x", temp_16);
	temp_16 =  temp_16 + (buft[0]<<8);

//			qDebug("ImA temp_16 %x", temp_16);
	valu = (temp_16 * 0.0012210012210012);//(5/4095)
	valu = ((valu / 5.0)*maxflow) + 4.75;

	ui.busyLineEdit->setText(notBusyState);
	dci2c.delay(2000);
	ui.busyLineEdit->clear();

//	qDebug("Air Flow %f", valu);
	return valu;
}

double _590_DID_DIG::FlowSampread(void){// ok

	busyState = "BUSY...";// 9-5-2014
	notBusyState = "DONE...";

	ui.busyLineEdit->setText(busyState);
//	QCursor crr;
//	crr.setPos(2, 2);

//	MainWindow dci2c;

	__u16 buff[3], temp_16;//__16
	__u8 buft[3];
	int fd;
	__u8 port_addr;
	double valu;
	double maxflow;

	maxflow = 70.0;

	buff[0] = 0x0000;
	buff[1] = 0x0000;
	buff[2] = 0x0000;
	buff[3] = 0x0000;

	buft[0] = 0x00;
	buft[1] = 0x00;

	port_addr = 0x33;// address for TCD Current read
	//////////////////////////////////////////////////// Write to set channel
//	buft[0] = 0x69;// channel selection
	fd = dci2c.init_i2c();
	dci2c.test_set_slave(fd, port_addr);

	dci2c.i2c_read_reg2(fd, buff, 0x69);
	dci2c.close_device(fd);

/*			qDebug("ImA Read buff0 %x", buff[0]);
	qDebug("H2 Flow Read buff1 %x", buff[1]);
	qDebug("H2 Flow Read buff2 %x", buff[2]);
	qDebug("H2 Flow Read buff3 %x", buff[3]);*/

	buft[0] = (buff[0] & 0x000F);// hi byte
	buft[1] = (buff[1] & 0x00ff);// lo byte
/*			qDebug("Read H2 Flow lo buft{1} %x", buft[1]);
	qDebug("Read H2 Flow hi buft{0} %x", buft[0]);*/
	///////////////////////////////////////////////////// Read 2 Bytes end

	temp_16 = buft[1];
//			qDebug("ImA temp_16 lo %x", temp_16);
	temp_16 =  temp_16 + (buft[0]<<8);

//			qDebug("ImA temp_16 %x", temp_16);
	valu = (temp_16 * 0.0012210012210012);//(5/4095)
	valu = ((valu / 5.0)*maxflow) + 4.75;

	ui.busyLineEdit->setText(notBusyState);
	dci2c.delay(2000);
	ui.busyLineEdit->clear();

//	qDebug("SAMP Flow %f", valu);
	return valu;
}

void _590_DID_DIG::powerOnInitSettings(void){

}
void _590_DID_DIG::polVoltMenu(void){

	/*
	 * Commented out
	QPalette palette17;
	QBrush brush2(QColor(0, 0, 0, 255));
	palette17.setBrush(QPalette::Active, QPalette::WindowText, brush2);
	QBrush brush28(QColor(242, 241, 240, 0));
	brush28.setStyle(Qt::SolidPattern);
	palette17.setBrush(QPalette::Active, QPalette::Button, brush28);
	QBrush brush29(QColor(255, 255, 255, 0));
	brush29.setStyle(Qt::SolidPattern);
	palette17.setBrush(QPalette::Active, QPalette::Light, brush29);
	QBrush brush30(QColor(248, 248, 247, 0));
	brush30.setStyle(Qt::SolidPattern);
	palette17.setBrush(QPalette::Active, QPalette::Midlight, brush30);
	QBrush brush31(QColor(121, 120, 120, 0));
	brush31.setStyle(Qt::SolidPattern);
	palette17.setBrush(QPalette::Active, QPalette::Dark, brush31);


	ui.detDIDPolButton->setPalette(palette17);
	*/

}
