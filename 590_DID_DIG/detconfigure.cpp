#include "detconfigure.h"
#include "detectorwidget.h"
#include "numericinput.h"
#include "numpopup.h"
#include "gainpopup.h"
#include "polpopup.h"
#include <stdlib.h>
#include <QApplication>
#include <QKeyEvent>
#include <QString>
#include <stdio.h>

#include "i2c--dev.h"
#include "pleasewait.h"
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/ioctl.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <QtGui>
#include <QtCore>//

#include <stdint.h>
#include <unistd.h>
//#include <fcntl.h>
#include <math.h>
#include <sys/ioctl.h>
#include <linux/types.h>
#include "ad7176-spi.h"
#include "iio-utils.h"
#include "constants.h"
/*//////////////////////////////////////////////////////////////////////////fcccccc
#include <errno.h>
#include <QDebug>
#include <QAction>
#include <QProcess>
#include <QFile>// added 6-17-2016

#include <linux/spi/spidev.h>
////////////////////////////////////////////////////////////////////*/

extern unsigned int DIDhexHoldGlobal;
extern unsigned int DIDhexHoldGlobal2;
extern double updateRateSetup;
extern double updateRateSetup2;

bool stopDisplayAll;
bool DID_ONOFFCTRL;
extern bool IGNITE_DID1;
bool IGNITE_DID2;
bool stopWhileDID; // didconfig
// for storing the set gain while on. off will default to 1
int DID1rng, DID2rng;
double dVC1d, dcId, offSet1d, dVC2d, dcI2d, offSet2d; // TCD1 Voltage
extern bool stopViewS;;
extern bool dcGain1, dcGain2, dcGain1_1, dcGain2_1, dcOF, dcOF2, dcpol1, dcpol2;
//char ar[15] = "/dev/spi0cs3";// ar[] changed from cs3 because of problem with emac 4"
char ar[15] = "/dev/spidev1.3"; // for the new screen
char br[5] = "44";//br[]
double tcdResult[10];
extern unsigned int hexHoldGlobal;
double DISPLAYREAD;
double dVC1, dcI, offSet1, dVC2, dcI2, offSet2; // TCD1 Voltage
extern unsigned int Range;
double polvolt;
extern unsigned int i2c_slaveAddr;
extern unsigned int detNumberDirector;// used to select detector for processing - Temporary find another way

extern void deviceClose8100(int fd);
//#define EPRINT(args...) fprintf(stderr, ##args)

//#define MAX_LENGTH 64

//static uint8_t bits = 8;
//static uint32_t speed = 500000;

//#define FOREVER()  for(;;)

//#define SPI_DEVICE      "/dev/spidev1.3"
//#define SPI_DEVICE_1      "/dev/spidev1.2"

detConfigure::detConfigure(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);

	QTimer *timer1 = new QTimer(this);
	timer1->start(updateRateSetup);
	connect(timer1, SIGNAL(timeout()), this, SLOT(setSettings()));

	QTimer *timer2 = new QTimer(this);
	timer2->start(updateRateSetup2);
	connect(timer2, SIGNAL(timeout()), this, SLOT(setSettings2()));

	//qDebug() << "DETECTORCONFIG SETTINGS......................................................";
}

detConfigure::~detConfigure()
{

}

/*int detConfigure::transfer(uint8_t *tx, uint8_t *rx, int size)
{
	int ret;
    int fd;

    struct spi_ioc_transfer tr = {
        tr.tx_buf = (unsigned long)tx,
        tr.rx_buf = (unsigned long)rx,
        tr.len = size,
        tr.delay_usecs = 0,
        tr.speed_hz = speed,
        tr.bits_per_word = bits,
    };

//    fd = open(SPI_DEVICE, O_RDWR);
    ret = ioctl(fd, SPI_IOC_MESSAGE(1), &tr);
    close(fd);
    printf("Transfer end\n");

    return ret;
}*/

/*char detConfigure::spi_init_5900(void)//bool
{
        int ret = 0;
        int fd;

    uint8_t statMsg[] = {0x02, 0x00, 0x40};
    uint8_t rx[3] = {0,};
    uint8_t mode = 0;

//    fd = open(SPI_DEVICE, O_RDWR);

        if (fd < 0)
        return FALSE;

     // spi mode /
    ret = ioctl(fd, SPI_IOC_WR_MODE, &mode);
        if (ret == -1)
        return FALSE;

    ret = ioctl(fd, SPI_IOC_RD_MODE, &mode);
        if (ret == -1)
        return FALSE;

     // bits per word /
        ret = ioctl(fd, SPI_IOC_WR_BITS_PER_WORD, &bits);
        if (ret == -1)
        return FALSE;

        ret = ioctl(fd, SPI_IOC_RD_BITS_PER_WORD, &bits);
        if (ret == -1)
        return FALSE;

     // max speed hz /
        ret = ioctl(fd, SPI_IOC_WR_MAX_SPEED_HZ, &speed);
        if (ret == -1)
        return FALSE;

        ret = ioctl(fd, SPI_IOC_RD_MAX_SPEED_HZ, &speed);
        if (ret == -1)
        return FALSE;
    close(fd);

    // Enable appending of status to data read /
    ret = transfer(statMsg,rx,3);

    if (ret < 1)
        return FALSE;

    printf("init end ok\n");
    return TRUE;
}*/

/*char detConfigure::checkADCID(void)
{
    int ret;
    uint8_t idMsg[] = {0x47, 0x00, 0x00};
    uint8_t rx[3] = {0,};
    ret = transfer(idMsg,rx,3);

    if (ret < 1)
        return FALSE;

//    // ID is 0x0C 0x94 /
    if ( rx[1] == 12 && rx[2] == 148 )
        return TRUE;

    return FALSE;
}*/

/*int detConfigure::setChannel(int channel, char swap)// bool swap
{
    int ret;
    uint8_t rx[6] = {0,};

    // Format [ch addr] [enable] [order] /
   uint8_t chanMsg[] = {0x10, 0x00, 0x01, 0x11, 0x00, 0x43};

    if (channel == 0)
    {
        chanMsg[1] = 0x80;
        chanMsg[4] = 0x00;
    }
    else if (channel == 1)
    {
        chanMsg[1] = 0x00;
        chanMsg[4] = 0x80;
    }

    if (swap)
    {
        chanMsg[2] = 0x20;
        chanMsg[5] = 0x62;
    }

    ret = transfer(chanMsg,rx,6);
    return ret;
}*/

/*int detConfigure::read7176ADC(void)
{
    int ret;
    int value;
    int sum = 0;
    uint8_t rx[5] = {0,};
    uint8_t readMsg[] = {0x44, 0x00, 0x00, 0x00, 0x00};
    // sleep for 50ms /
    usleep(50000);

    int i=0;
    for (i=0; i<10; i++)
    {
        ret = transfer(readMsg,rx,5);
        if (ret < 5)
            return 0;

        value = (rx[1] << 16) + (rx[2] << 8) + rx[3];
        sum += value;
    }
    value = sum/10;

    printf("value = %x\n",value);
    return value;
}*/

/*int detConfigure::zeroADC(void)
{
//    char* dev_dir_name;
    int countAdj = 0;
//    int curCounts = 0;
    int reading = read7176ADC();
    int tries = 0;
    double voltage = (reading * (2.5/8388607)) - 2.5;
//    asprintf(&dev_dir_name, "%siio:device%d", IIO_DIR, POL_AMP_DAC_DEV);

    while ((fabs(voltage) > .005) && tries < 100)
    {
        countAdj = fabs(voltage * (65535/5) * .4);
//        curCounts = read_sysfs_posint(FRONT_ZERO,dev_dir_name) + countAdj;
//        write_sysfs_int(FRONT_ZERO,dev_dir_name, curCounts);
        reading = read7176ADC();
        voltage = reading * (2.5/8388607) -2.5;
        tries++;

       // qDebug() << "adjust" << countAdj;
      //  qDebug() << "cur counts" << curCounts;
      //  qDebug() << "read" << reading;
       // qDebug() << "volt" << voltage;
    }

    if (tries == 100)
        return 1;

    return 0;
}*/

void detConfigure::setSettings2(void){
	//qDebug("TIMER 2 .................................................START");
	completeProcess = "COMPLETE...2";

	detDIDSig();
	//qDebug("DID SIGNAL READ");
	detDID_I_read();

	ui.busyLineEdit->setText(completeProcess);
}
void detConfigure::setSettings(void){
	//qDebug("TIMER 1 .................................................START");
	completeProcess = "COMPLETE....";

	//qDebug("SET SETTINGS..........................%d",Range);
	if (Range == 1){
		ui.R1->setChecked(1);
		ui.R2->setChecked(0);
		ui.R3->setChecked(0);
		ui.R4->setChecked(0);
		//qDebug("SWITCH 1..........................%d",Range);
	}else if (Range == 2){
		ui.R1->setChecked(0);
		ui.R2->setChecked(1);
		ui.R3->setChecked(0);
		ui.R4->setChecked(0);
		//qDebug("SWITCH 2..........................%d",Range);
	}else if (Range == 3){
		ui.R1->setChecked(0);
		ui.R2->setChecked(0);
		ui.R3->setChecked(1);
		ui.R4->setChecked(0);
		//qDebug("SWITCH 3..........................%d",Range);
	}else if (Range == 4){
		ui.R1->setChecked(0);
		ui.R2->setChecked(0);
		ui.R3->setChecked(0);
		ui.R4->setChecked(1);
		//qDebug("SWITCH 4..........................%d",Range);
	}

	if (dcGain1 == 0 && dcGain2 == 0){
		//qDebug("Gain 1..........................%d, %d",dcGain1, dcGain2);
		ui.detGainSpinBox_2->setValue(1);
	}else if (dcGain1 == 1 && dcGain2 == 0){
		//qDebug("Gain 2..........................%d, %d",dcGain1, dcGain2);
		ui.detGainSpinBox_2->setValue(2);
	}else if (dcGain1 == 0 && dcGain2 == 1){
		//qDebug("Gain 3..........................%d, %d",dcGain1, dcGain2);
		ui.detGainSpinBox_2->setValue(3);
	}else if (dcGain1 == 1 && dcGain2 == 1){
		//qDebug("Gain 4..........................%d, %d",dcGain1, dcGain2);
		ui.detGainSpinBox_2->setValue(4);
	}

	ui.didPolVCtlSpinBox->setValue(polvolt + 20.0);

	ui.detVdcCtlSpinBox->setValue(dVC1d);

	detDIDSig();

	ui.busyLineEdit->setText(completeProcess);
	//qDebug("TIMER 1 .................................................COMPLETE");
}
void detConfigure::saveDetSettings(void){
    QFile file("/root/detsettings.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return;

    QTextStream out(&file);//"The magic number is: "
//    out << ALARMACTIVE << "\n" << ALARM1ACTIVE << "\n"<< ALARM2ACTIVE << "\n" << ALARMHI1
//    		<< "\n" << ALARMLO1 << "\n" << ALARMHI2 << "\n" << ALARMLO2 << "\n";

    qDebug() << "ALARM SAVED";
}
void detConfigure::processDid_line(QByteArray line, unsigned int nex){
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
void detConfigure::getDidSettings(void){

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
void detConfigure::powerOnInitSettings(void){

}
void detConfigure::keyReleaseEvent(QKeyEvent *event)
{
//	switch (event->key()){
//		case Qt::Key_F1:{
////			crr.setPos(2, 2);
//			ui.detTCDWriteButton->click();
//			qDebug() << "Released F1 Key";
//			break;
//	}
//		case Qt::Key_F2:{
////			crr.setPos(2, 2);
//			ui.detTCDReadButton->click();
//			qDebug() << "Released F2 Key";
//			break;
//		}
//		case Qt::Key_F3:{
////			crr.setPos(2, 2);
//			ui.detOkButton->click();
//			qDebug() << "Released F3 Key";
//			break;
//		}
//		case Qt::Key_F4:{
////			crr.setPos(2, 2);
//			qDebug() << "Released F4 Key";
//			break;
//		}
//		case Qt::Key_F5:{
////			crr.setPos(2, 2);
//			qDebug() << "Released F5 Key";
//			break;
//		}
//		case Qt::Key_F6:{
////			crr.setPos(2, 2);
//			qDebug() << "Released F6 Key"completeProcess;
//			break;
//		}
//		case Qt::Key_F7:{
////			crr.setPos(2, 2);
//			qDebug() << "Released F7 Key";
//			break;
//		}
//		case Qt::Key_F8:{
////			crr.setPos(2, 2);
//			qDebug() << "Released F8 Key";
//			break;
//		}
//		case Qt::Key_F9:{
////			crr.setPos(2, 2);
//			qDebug() << "Released F9 Key";
//			break;
//		}
//		case Qt::Key_F10:{
////			crr.setPos(2, 2);
//			qDebug() << "Released F10 Key";
//			break;
//		}
//		case Qt::Key_Return:{
//			qDebug() << "Released ENTER Key ()";
////			crr.setPos(2, 2);
//			ui.detOkButton->click();
//			break;
//		}
//		default:{//
//			qDebug() << "Default";
////			crr.setPos(2, 2);
//			break;
//		}
//	}
}
QString detConfigure::numIn(void)
{
	class numericInput Nin(this);// Crerate a dialog
	if (Nin.exec()) {
	}
	numericInput numkey;
	QString txt_dc;

	txt_dc = numkey.popupNumInReturn();
	qDebug("detConfigure");

	return txt_dc;
}
QString detConfigure::numInPopUp(void)
{
	class numPopUp Nin(this);// Crerate a dialog
	if (Nin.exec()) {
	}
	numPopUp numkey;
	QString txt_dc;

	txt_dc = numkey.popupNumInReturn();
	qDebug("detConfigure numInPopUp Fired.");

	return txt_dc;
}
QString detConfigure::numInPolPopUp(void)
{
	class polPopUp Nin(this);// Crerate a dialog
	if (Nin.exec()) {
	}
	polPopUp numkey;
	QString txt_dc;

	txt_dc = numkey.popupNumInReturn();
	qDebug("detConfigure");

	return txt_dc;
}
QString detConfigure::numInGainPopUp(void)
{
	class gainPopUp Nin(this);// Crerate a dialog
	if (Nin.exec()) {
	}
	gainPopUp numkey;
	QString txt_dc;

	txt_dc = numkey.popupNumInReturn();
	qDebug("detConfigure");

	return txt_dc;
}
void detConfigure::deleteNumIn(QString txt){// for move baseline only

	double val3;
	bool okv[1];

	val3 = txt.toDouble(okv);

	qDebug("detConfigure deleteMunIn val3  = %f", val3);

	ui.detDIDOffSetBLSpinBox->setValue(val3);
	detMoveBaseline();
}

// Attempting to set high value
/*
QString detConfigure::numInVoltagePopUp(void){
	class numPopUp Nin(this);// Crerate a dialog
		if (Nin.exec()) {
		}
		numPopUp numkey;
		QString txt_dc;

		txt_dc = numkey.popupNumInReturn();

		qDebug("detConfigure");




	//ui.detDidHvLCD ->setValue(txt_dc);
	//ui.detDidHvLCD ->value();
	qDebug("Trying to set Voltage to %f", txt_dc.toDouble());
	ui.detDidHvLCD->display(txt_dc);
	detDID_V_Ctl();


}*/



void detConfigure::deleteNumPop(QString txt){// for Change HV only

	double val3;
	bool okv[1];
	int tempVar;

	val3 = txt.toDouble(okv);

	qDebug("detConfigure deleteNuMPop val3  = %f", val3);
	tempVar = txt.toInt();

	qDebug() << "********OVEN TEMP SET TO: %d" << tempVar;
	dci2c.writeTempSetpoint(2,tempVar);

	//detDID_V_Ctl();
}

void detConfigure::deleteVoltageNumPop(QString txt){
		double val3;
		//bool okv[1];
		int tempVar;

		val3 = txt.toDouble();

		qDebug("detConfigure deleteVoltageNuMPop val3  = %f", val3);
		qDebug() << "Setting Voltage to: %d" << val3;
		voltageSET(val3);
		//detDID_V_Ctl();
}

void detConfigure::passPolarization(QString txt){
		double val3;
		int tempVar;
		val3 = txt.toDouble();
		qDebug("detConfigure Passing Polarization of val3  = %f", val3);
		qDebug() << "Setting Polarization Voltage to: %d" << val3;
		polarizationSET(val3);
		//detDID_V_Ctl();
}


void detConfigure::deletePolPop(QString txt){// for Change  polV only

	double val3;
	bool okv[1];
	int tempVar;

	val3 = txt.toDouble(okv);

	qDebug("detConfigure delete PolPop val3  = %f", val3);

	//ui.didPolVCtlSpinBox->setValue(val3);

	tempVar = txt.toInt();
	qDebug() << "OVEN TEMP SET TO: %d" << tempVar;
	//ui.column_temp_box->display(txt_dc.toInt());
	dci2c.writeTempSetpoint(1,tempVar);


	//detTCDPolarityfCtl();
}
void detConfigure::deleteGainPop(QString txt){// for Change gain only

	double val3;
	bool okv[1];

	val3 = txt.toDouble(okv);

	qDebug("deleteGainPop from detConfigure is firing");
	qDebug("detConfigure deleteGainPop val3  = %f", val3);

	ui.detGainSpinBox_2->setValue(val3);
	ui.detDidGainLCD->display(val3);
	detGain();
}
void detConfigure::pleaseWaitForIt(void)
{
	pleaseWait wait_dc(this);// Crerate a dialog
			if (wait_dc.exec()) {
				qDebug() << "IWait for Process to end)";

				dci2c.delay(10000);
				wait_dc.done(1);
			}
}

void detConfigure::configIO(unsigned int num)// OK
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

void detConfigure::detRange(void){//(double valu){// For electrometer // USED for 2300
//	QCursor crr;
//	crr.setPos(2, 2);
//	MainWindow dci2c;
	__u8 buff[3];//__16
	int fd;
	__u8 port_addr;
//	int value_int;

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

QString detConfigure::callGainAdjust(void){
	qDebug("popUp Firing for Gain.");



	class gainPopUp Nin(this);// Crerate a dialog
		if (Nin.exec()) {
		}
		gainPopUp numkey;
		QString txt_dc;

		txt_dc = numkey.popupNumInReturn();
		//ui.detGainSpinBox_2->setValue(txt_dc);
		qDebug("detConfigure");
		ui.detDidGainLCD->display(txt_dc);
		detGain();

		return txt_dc;
}

void detConfigure::detGain(void){//(double valu){// good USED FOR 2300
//	MainWindow dci2c;
	__u8 buff[3];//__16
	int fd;
	__u8 port_addr;
	int value_int;
	double readValu;

	busyState = "BUSY...";// 9-5-2014
	notBusyState = "DONE...";

	ui.busyLineEdit->setText(busyState);

	qDebug("detconfigure detGain firing");

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

//void detConfigure::detAux(void){
/*	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;
	double valu;
	__u8 port_addr;

	switch (detNumberDirector)
	{
		case 1:
		{
			valu = ui.detAuxSpinBox->value();
			port_addr = 0x41;

			 buff[0] = 0x2c;// command for P12
			 buff[1] = 0x01;// Data to switch

			fd = i2c.init_i2c();
			i2c.test_set_slave(fd, port_addr);//i2c_slaveAddr);//addr = 0x45;
			if (write(fd, buff, 2) != 2) {
					fprintf(stderr, "i2c_write_command: Error on write: %s\n",
					strerror(errno));
				}
			i2c.close_device(fd);
			break;
		}
		case 2:
		{
			valu = ui.detAuxSpinBox->value();
			port_addr = 0x44;

			 buff[0] = 0x2c;// command for P12
			 buff[1] = 0x01;// Data to switch

			fd = i2c.init_i2c();
			i2c.test_set_slave(fd, port_addr);//i2c_slaveAddr);//addr = 0x45;
			if (write(fd, buff, 2) != 2) {
					fprintf(stderr, "i2c_write_command: Error on write: %s\n",
					strerror(errno));
				}
			i2c.close_device(fd);
			break;
		}
		default:
			break;
	}*/
//}
void detConfigure::detDIDIgnite(void){// OK USED for DID Only
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
			dVC1d = readValue;

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
void detConfigure::detIgn(void){
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
void detConfigure::polarizationSET(double voltage){
	__u8 buff[3];
	unsigned int temp_16;
	int fd;
	__u8 device_addr;
	busyState = "BUSY...";// 9-5-2014
	notBusyState = "DONE...";
	//detNumberDirector = 1; // forcing  - test statement

	//ui.busyLineEdit->setText(busyState);

	qDebug("(det) Polarization Voltage set....................");

	polvolt = voltage - 10.0;

	device_addr = 0x10;

	temp_16 = (polvolt / 500) * 0xffff;

	buff[0] = 0x19;//
	buff[1] = temp_16>>8;// upper bits
	buff[2] = temp_16 & 0x00ff;// lower 8 bits

	qDebug("DID POL Volt buff{0} %x", buff[0]);
	qDebug("DID POL Volt buff{1} %x", buff[1]);
	qDebug("DID POL Volt buff{2} %x", buff[2]);

	fd = dci2c.init_i2c();
	dci2c.test_set_slave(fd, device_addr);//i2c_slaveAddr);

	if (write(fd, buff, 3) != 3) {
		fprintf(stderr, "i2c_write_command (polarizationSET): I ctrl Error on write: %s\n",
		strerror(errno));
	}

	dci2c.close_device(fd);

	detPolSig();

	qDebug() << "DID SET POL VOLT";

}


void detConfigure::detPolSet(void){// Used for DID and FID

//	MainWindow i2c;
//	QCursor crr;
//	crr.setPos(1,1);

	__u8 buff[3];//__16
	unsigned int temp_16;
//	double iBIT, readValue;
	int fd;
	__u8 device_addr;

	busyState = "BUSY...";// 9-5-2014
	notBusyState = "DONE...";

	detNumberDirector = 1; // forcing  - test statement

	ui.busyLineEdit->setText(busyState);

	qDebug("(det) Polarization Voltage set....................");

	polvolt = ui.didPolVCtlSpinBox->value() - 20.0;

	device_addr = 0x10;

	temp_16 = (polvolt / 500) * 0xffff;

	buff[0] = 0x19;//
	buff[1] = temp_16>>8;// upper bits
	buff[2] = temp_16 & 0x00ff;// lower 8 bits

	//				qDebug("DID POL Volt buff{0} %x", buff[0]);
	//				qDebug("DID POL Volt buff{1} %x", buff[1]);
	//				qDebug("DID POL Volt buff{2} %x", buff[2]);

	fd = dci2c.init_i2c();
	dci2c.test_set_slave(fd, device_addr);//i2c_slaveAddr);

	if (write(fd, buff, 3) != 3) {
		fprintf(stderr, "i2c_write_command: I ctrl Error on write: %s\n",strerror(errno));
	}
	dci2c.close_device(fd);
	detPolSig();
	//				qDebug() << "DID SET POL VOLT";

	ui.busyLineEdit->setText(notBusyState);
	dci2c.delay(2000);
	ui.busyLineEdit->clear();
}

double detConfigure::detPolSig(void){
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

			qDebug("Detecting Polarization.....");

			detNumberDirector = 1; // forcing  - test statement
			port_addr = 0x61;// address for flow DID PV

			tempSid = i2c_slaveAddr;// store current I2C Slave Id
			i2c_slaveAddr = 0x35;// Change to needed Id for Flow reading

			fd = dci2c.init_i2c();// open device
			dci2c.test_set_slave(fd, i2c_slaveAddr);
			buff[0] = port_addr;// command for P4-7
			if (write(fd, buff, 1) != 1) {
					fprintf(stderr, "Error: on detHvSig()",
					strerror(errno));
			}

			for(i=0;i<2;++i){
				buff[0] = port_addr;// command for P4-7
				if (read(fd, buff, 2) != 2) {
					fprintf(stderr, "Error: on detHvSig() 2", strerror(errno));
				}
			}


			buft[1] = buff[0]>>8;
			buft[0] = buff[0] & 0x00ff;

			//qDebug("buff[0] = %x", buff[0]);

			//qDebug("hi Byte buft[0] = %x", buft[0]);
			//qDebug("lo Byte buft[1] = %x", buft[1]);

			temp_16 = (buft[0] & 0x0F);
			//qDebug("mask hi Byte = %x", temp_16);

			temp_16 = temp_16<<8;
			//qDebug("shift hi Byte = %x", temp_16);

			temp_16 = temp_16 + buft[1];
			//qDebug("Add hi & Lo Byte = %x", temp_16);

			t_16 = temp_16;// move to double

			valu1 = ((t_16 / 4096) * 5.0);    // % voltage of max voltage;
			//qDebug("VALU1 = %f", valu1);
			valu = valu1 * 100.0;//((valu1 - 0.5) / 0.1 )  * 5.0;

			dci2c.close_device(fd);
			i2c_slaveAddr = tempSid;

			//ui.detDidPolVLCD->display(valu);
			ui.busyLineEdit->setText(notBusyState);
			return valu;
}
double detConfigure::detDID_I_read(void){// ok USED FOR DID ONLY
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
			i2c_slaveAddr = 0x35;// Change to needed Id for Flow reading 0x35

			fd = dci2c.init_i2c();// open device
			dci2c.test_set_slave(fd, i2c_slaveAddr);
			buff[0] = port_addr;// command for P4-7
			if (write(fd, buff, 1) != 1) {
					fprintf(stderr, "ERROR detconfigure.cpp: detDID_I_read() not working \n",
					strerror(errno));
			}

			for(i=0;i<2;++i){
				buff[0] = port_addr;// command for P4-7
				if (read(fd, buff, 2) != 2) {
						fprintf(stderr, "ERROR detconfigure.cpp: detDID_I_read() not working 2 \n",
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
			valu = valu1 * 10.0;// Multiply to make read 6.45mA instead of 0.645//((valu1 - 0.5) / 0.1 )  * 5.0;

//			qDebug("DISCHARGE CURRENT = %f", valu);
//			i2c.delay(500);

			dci2c.close_device(fd);
			i2c_slaveAddr = tempSid;

			ui.detDid1LCD->display(valu / 2.0);

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

	return valu / 2.0;
}

void detConfigure::detDID_I_OnOffCtl(void){//(int valu){// turn on or off current amp --- OK
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
			DID_ONOFFCTRL = 0;// added wtr
			if (DID_ONOFFCTRL == 0){//ui.detAmpEnableCheckBox->isChecked()){
//				ui.detAmpEnableCheckBox->click();
				buff[0] = 0x2E;// command for P14
				buff[1] = 0x01;// Data to switch
				fd = dci2c.init_i2c();
				qDebug() << "Test before setSlave Address";
				dci2c.test_set_slave(fd, device_addr);//i2c_slaveAddr);
				qDebug() << "Test after setSlave Address";
			 	if (write(fd, buff, 2) != 2) {
						fprintf(stderr, "i2c_write_command: On Off I Error on write: %s\n",
						strerror(errno));
					}
//			 	dcOFd = 1;
			 	//qDebug() << "Power Supply On ";
			 	//////////////////////////////// Added Fixed Voltage setting for DID / FID
//					qDebug("DET DID FIX ctrl Voltage detNumberDirector = %x", detNumberDirector);// test

				device_addr = 0x10;

				buff[0] = 0x1b;//
				buff[1] = 0xe3;//temp_16>>8;//Hi Byte
				buff[2] = 0x10;//temp_16 & 0x00ff;//LO Byte

				//qDebug("Fixed Current buff{0} %x", buff[0]);
				//qDebug("Fixed Current buff{1} %x", buff[1]);
				//qDebug("Fixed Current buff{2} %x", buff[2]);

				fd = dci2c.init_i2c();
				qDebug() << "Test before setSlave Address second";
				dci2c.test_set_slave(fd, device_addr);//i2c_slaveAddr);//addr = 0x45;
				qDebug() << "Test after setSlave Address second";
				if (write(fd, buff, 3) != 3) {
						fprintf(stderr, "i2c_write_command: DID HV Error on write: %s\n",
						strerror(errno));
					}
				dci2c.close_device(fd);
				DID_ONOFFCTRL = 1;
				/////////////////////////////// END ADD*/
			}
		 	else{
					/*if (DID_ONOFFCTRL == 1) {// removed wtr
//						ui.detAmpEnableCheckBox->click();
						buff[0] = 0x2E;// command for P14
						buff[1] = 0x00;// Data to switch
						fd = dci2c.init_i2c();
						dci2c.test_set_slave(fd, device_addr);//i2c_slaveAddr);
						if (write(fd, buff, 2) != 2) {
							fprintf(stderr, "i2c_write_command: On Off I Error on write: %s\n",
									strerror(errno));
						}
						//qDebug() << "Power Supply Off OFF ";
//						dcOFd = 0;
						DID_ONOFFCTRL = 0;
					}*/
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
void detConfigure::detDID_I_Ctl(void){//(double valu){// ok
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

	//qDebug("DET before case current ctrl detNumberDirector = %x", detNumberDirector);// test

	switch (detNumberDirector)
	{
		case 1:
		{// No Current control when DID or FID as firts detector
			//qDebug("DET current ctrl detNumberDirector = %x", detNumberDirector);// test

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

			//qDebug("ImA Ctl passed temp bits after %x", temp);
			device_addr = 0x10;

			buff[0] = 0x1b;//
			buff[1] = temp>>8;// upper bits
			buff[2] = temp & 0x00ff;// lower 8 bits

			//qDebug("ImA buff{0} %x", buff[0]);
			//qDebug("ImA buff{1} %x", buff[1]);
			//qDebug("ImA buff{2} %x", buff[2]);

			fd = dci2c.init_i2c();
			dci2c.test_set_slave(fd, device_addr);//i2c_slaveAddr);
			if (write(fd, buff, 3) != 3) {
					fprintf(stderr, "i2c_write_command: I ctrl Error on write: %s\n",
					strerror(errno));
				}
			dci2c.close_device(fd);
//			detDID_I_read();
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
double detConfigure::detHvSig(void){
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

	//qDebug("DET High volt Sig............");

	detNumberDirector = 1; // forcing  - test statement

	switch (detNumberDirector)
	{
		case 1://DID 1
		{
			port_addr = 0x63;// address for DID HV

			tempSid = i2c_slaveAddr;// store current I2C Slave Id
			i2c_slaveAddr = 0x35;// Change to needed Id for Flow reading 0x35
			// i2c_slaveAddr = 0x33; // old

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

			//qDebug("buff[0] = %x", buff[0]);

			qDebug("[ReadHV] hi Byte buft[0] = %x", buft[0]);
			qDebug("[ReadHV] lo Byte buft[1] = %x", buft[1]);

			temp_16 = (buft[0] & 0x0F);
			//qDebug("mask hi Byte = %x", temp_16);

			temp_16 = temp_16<<8;
			//qDebug("shift hi Byte = %x", temp_16);

			temp_16 = temp_16 + buft[1];
			//qDebug("Add hi & Lo Byte = %x", temp_16);

			t_16 = temp_16;// move to double

			valu1 = ((t_16 / 4095) * 5.0);    // % voltage of max voltage;
			valu = valu1 * 2.0 * 100.0;//((valu1 - 0.5) / 0.1valu )  * 5.0;


			qDebug("READ DISCHARGE Voltage = %f", valu);

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
//void detConfigure::detDIDSig(void){// Not used - Used TCD Signal read function SPI CS3 A/D
/*	MainWindow i2c;

	__u16 buff[3], temp_16, valu;//__16
	__u8 buft[3];
	int fd;
	__u8 port_addr;

	detNumberDirector = 1; // added for 2300
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
				fprintf(stderr, "i2c_rea
				d_reg2: Error on read: %s\n",
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
//}
double detConfigure::detDIDSig(void){//ok - used for DID / FID- OK

    double result, ADC_OFFSET;
    double resultDsply;
    double didResult[10];
    unsigned int i, t, avgTop;


	busyState = "BUSY...";// 9-5-2014
	notBusyState = "DONE...";

	ui.busyLineEdit->setText(busyState);

	//qDebug("DID SIG  DISPLAY...........................");

	detNumberDirector = 1; // forcing  - test statement

	switch (detNumberDirector)
	{
		case 1:
		{
//		    char ar[] = "/dev/spidev1.3"; // This is for the new Panel
			//char ar[] = "/dev/spi0cs3";		// This is for the old Panel
//		    char br[] = "44";
		    avgTop = 10.0;

		    //ui.detSigReadButton->clearFocus();

/*		    i = 0;
		    for (i = 0; i < avgTop; ++i){
		    	if(dci2c.setup_spi(ar) == -1){};// exit(EXIT_FAILURE);

		    	didResult[i] = dci2c.getSig_spi(4,br);

		    	dci2c.close_spi();
		    }

		    t = 0;
		    result = 0.0;
		    for (t = 0; t < avgTop; t++){
		    	result = result + didResult[t];
		    }*/

		    ///////////////////////////////////////////////////////////////////////
//		    spi_init_5900();//spi_init();
//		    setChannel(0,TRUE);
//		    read7176ADC();
		    usleep(48000);// 20 Hz approximate
//		    ADC_OFFSET = read7176ADC() * (2.5/8388607) -2.5;
		    printf("AT A/D = %f\n",ADC_OFFSET);
		    printf("AT POST = %f\n",(ADC_OFFSET/0.4));
		    result = ADC_OFFSET;
		    ///////////////////////////////////////////////////////////////////////
		    result = result / avgTop;

			//qDebug("DID Read Signal Result = %f", result);

			   if (result >= 2.5){
				   resultDsply = result - 2.5;
				   //qDebug("(>= 2.5) DID ResultDsply - 2.5 = %f", resultDsply);
			   }
			   else if(result < 2.5 && result > 0){
				   resultDsply = (result - 2.5);
				   //qDebug("(< 2.5) DID ResultDsply - 2.5 = %f", resultDsply);
			   }else if (result < 0.0){
				   resultDsply = (result + 2.5) * (-1);
				   //qDebug("(< 0) DID ResultDsply + 2.5 = %f", resultDsply);
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
double detConfigure::detTCD_I_Sig(void){// Ok // good USED FOR 2300 reads any det sig from A/D "Voltage"

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
		    g = dci2c.setup_spi(ar);
//g = 0;//remove
		    i = 0;
		    if(g == -1){
		    	//qDebug("SETUP SPI FAILURE = %d", g);
		    }else{// exit(EXIT_FAILURE);
//		    	qDebug("SETUP SPI Collecting = %d", g);
			    for (i = 0; i < avgTop; ++i){
			    	tcdResult[i] = dci2c.getSig_spi(4,br);
			    }
			    dci2c.close_spi();// close when done
		    }


		    t = 0;
		    result = 0.0;
		    for (t = 0; t < avgTop; t++){
		    	result = result + tcdResult[t];
		    }
		    result = result / (avgTop * 1.0);

			//qDebug("Signal Result = %f", result);
//			resultDsply = 0.0;// added 8-13-15 for test//

			   if (result >= 2.5){
				   resultDsply = result - 2.5;// result = 2.5 to 5.0 => 0 to 2.5
				   //qDebug("Result Dsply - 2.5 = %f", resultDsply);
			   }
			   else if (result <= 0.0 && result >= -2.5){
				   resultDsply = (result + 2.5) * (-1);// 0.0 to -2.5 => 0 to -2.5
				   //qDebug("Result Dsply + 2.5 = %f", resultDsply);
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

//void detConfigure::detTCD_I_read(void){// ok
////	QCursor crr;
////	crr.setPos(2, 2);
////	MainWindow dci2c;
//
//	__u16 buff[3], temp_16;//__16
//	__u8 buft[3];
//	int fd;
//	__u8 port_addr;
//	double valu;
//	QString busyState;// 9-5-2014
//	QString notBusyState;
//
//	busyState = "BUSY...";// 9-5-2014
//	notBusyState = "DONE...";
//
//	ui.busyLineEdit->setText(busyState);
//
//	buff[0] = 0x0000;
//	buff[1] = 0x0000;
//	buff[2] = 0x0000;
//	buff[3] = 0x0000;
//
//	buft[0] = 0x00;
//	buft[1] = 0x00;
//
//	switch (detNumberDirector)
//	{
//		case 1:
//		{
//			//ui.detTCDCurrentReadButton->clearFocus();
////			qDebug("DET Current Read detNumberDirector = %x", detNumberDirector);// test
//
//			port_addr = 0x33;// address for TCD Current read
//			//////////////////////////////////////////////////// Write to set channel
//			buft[0] = 0x67;// channel selection
//			fd = dci2c.init_i2c();
//			dci2c.test_set_slave(fd, port_addr);
//
//		//i2c_read_reg2(int fd, __u16 *val, __u8 reg)
//
//			dci2c.i2c_read_reg2(fd, buff, 0x67);
//			dci2c.close_device(fd);
//
///*			qDebug("ImA Read buff0 %x", buff[0]);
//			qDebug("ImA Read buff1 %x", buff[1]);
//			qDebug("ImA Read buff2 %x", buff[2]);
//			qDebug("ImA Read buff3 %x", buff[3]);*/
//
//			buft[0] = (buff[0] & 0x000F);// hi byte
//			buft[1] = (buff[1] & 0x00ff);// lo byte
///*			qDebug("Read ImA lo buft{1} %x", buft[1]);
//			qDebug("Read ImA hi buft{0} %x", buft[0]);*/
//			///////////////////////////////////////////////////// Read 2 Bytes end
//
//			temp_16 = buft[1];
////			qDebug("ImA temp_16 lo %x", temp_16);
//			temp_16 =  temp_16 + (buft[0]<<8);
//
////			qDebug("ImA temp_16 %x", temp_16);
//			valu = (temp_16 * 0.12503052503053);//0.001220703125);// (num of bits) * (5/2^12)
//
////			ui.detTcd1LCD->display(valu);// removed for 2300
//			break;
//		}
//		case 2:
//		{
//			//ui.detTCDCurrentReadButton->clearFocus();
////			qDebug("DET Current Read detNumberDirector = %x", detNumberDirector);// test
//
//			port_addr = 0x33;// address for TCD Current read
//			//////////////////////////////////////////////////// Write to set channel
//			buft[0] = 0x6d;// channel selection
//			fd = dci2c.init_i2c();
//			dci2c.test_set_slave(fd, port_addr);
//
//		//i2c_read_reg2(int fd, __u16 *val, __u8 reg)
//
//			dci2c.i2c_read_reg2(fd, buff, 0x6d);
//			dci2c.close_device(fd);
//
///*			qDebug("ImA 2 Read buff0 %x", buff[0]);
//			qDebug("ImA 2 Read buff1 %x", buff[1]);
//			qDebug("ImA 2 Read buff2 %x", buff[2]);
//			qDebug("ImA 2 Read buff3 %x", buff[3]);*/
//
//			buft[0] = (buff[0] & 0x000F);// hi byte
//			buft[1] = (buff[1] & 0x00ff);// lo byte
///*			qDebug("Read 2 ImA lo buft{1} %x", buft[1]);
//			qDebug("Read 2 ImA hi buft{0} %x", buft[0]);*/
//			///////////////////////////////////////////////////// Read 2 Bytes end
//
//			temp_16 = buft[1];
////			qDebug("ImA 2 temp_16 lo %x", temp_16);
//			temp_16 =  temp_16 + (buft[0]<<8);
//
////			qDebug("ImA 2 temp_16 %x", temp_16);
//			valu = (temp_16 * 0.12503052503053);//0.001220703125);// (num of bits) * (5/2^12)
//
////			ui.detTcd1LCD->display(valu);// removed for 2300
//			break;
//		}
//		default:
//			break;
//	}
//
//	ui.busyLineEdit->setText(notBusyState);
//	dci2c.delay(2000);
//	ui.busyLineEdit->clear();
//}

double detConfigure::FlowH2read(void){// ok

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

double detConfigure::FlowAirread(void){// ok

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

double detConfigure::FlowSampread(void){// ok

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

double detConfigure::FlowMethread(void){// ok

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

//void detConfigure::detTCD_I_OnOffCtl(void){//(int valu){// turn on or off current amp --- OK
////	MainWindow dci2c;
//	__u8 buff[3];//__16
//	int fd;
//	__u8 device_addr;
//	QString busyState;// 9-5-2014
//	QString notBusyState;
//
//	busyState = "BUSY...";// 9-5-2014
//	notBusyState = "DONE...";
//
//	ui.busyLineEdit->setText(busyState);
//
//	switch (detNumberDirector)
//	{
//		case 1:
//		{
//			//ui.detTCDOnOffButton->clearFocus();
////			qDebug("DET on/off detNumberDirector = %x", detNumberDirector);// test
//
//			device_addr = 0x41;
//
//			if (device_addr == 1){//(ui.detAmpEnableCheckBox->isChecked()){// removed for 2300
//
//		//		ui.detAmpEnableCheckBox->click();
//
//					buff[0] = 0x2E;// command for P14
//					buff[1] = 0x01;// Data to switch
//					fd = dci2c.init_i2c();
//				 	dci2c.test_set_slave(fd, device_addr);//i2c_slaveAddr);
//				 	if (write(fd, buff, 2) != 2) {
//							fprintf(stderr, "i2c_write_command: On Off I Error on write: %s\n",
//							strerror(errno));
//						}
//				 	dcOF = 1;
//				 	qDebug() << "Current On ";
//			}
//		 	else{
//		// 			ui.detAmpEnableCheckBox->click();
//
//
//				buff[0] = 0x2E;// command for P14
//				buff[1] = 0x00;// Data to switch
//				fd = dci2c.init_i2c();
//				dci2c.test_set_slave(fd, device_addr);//i2c_slaveAddr);
//				if (write(fd, buff, 2) != 2) {
//					fprintf(stderr, "i2c_write_command: On Off I Error on write: %s\n",
//					strerror(errno));
//				}
//				qDebug() << "Current OFF ";
//				dcOF = 0;
//		 	}
//		// 			qDebug("ImA On / Off passed valu %d", valu);
//
//			dci2c.close_device(fd);
//			detTCD_I_read();
//			break;
//		}
//		case 2://OK
//		{
//			//ui.detTCDOnOffButton->clearFocus();
////			qDebug("DET on/off detNumberDirector = %x", detNumberDirector);// test OK
//
//			device_addr = 0x44;
//
//			if (device_addr == 1){//(ui.detAmpEnableCheckBox->isChecked()){ removed for 2300
//
//		//		ui.detAmpEnableCheckBox->click();
//
//					buff[0] = 0x2E;// command for P14
//					buff[1] = 0x01;// Data to switch
//					fd = dci2c.init_i2c();
//				 	dci2c.test_set_slave(fd, device_addr);//i2c_slaveAddr);
//				 	if (write(fd, buff, 2) != 2) {
//							fprintf(stderr, "i2c_write_command: On Off I Error on write: %s\n",
//							strerror(errno));
//						}
//				 	dcOF2 = 1;
//				 	qDebug() << "Current On ";
//			}
//		 	else{
//		// 			ui.detAmpEnableCheckBox->click();
//
//
//				buff[0] = 0x2E;// command for P14
//				buff[1] = 0x00;// Data to switch
//				fd = dci2c.init_i2c();
//				dci2c.test_set_slave(fd, device_addr);//i2c_slaveAddr);
//				if (write(fd, buff, 2) != 2) {
//					fprintf(stderr, "i2c_write_command: On Off I Error on write: %s\n",
//					strerror(errno));
//				}
//				qDebug() << "Current OFF ";
//				dcOF2 = 0;
//		 	}
//		// 			qDebug("ImA On / Off passed valu %d", valu);
//
//			dci2c.close_device(fd);
//			detTCD_I_read();
//			break;
//		}
//		default:
//			break;
//	}
////	QCursor crr;
////	crr.setPos(2, 2);
//	ui.busyLineEdit->setText(notBusyState);
//	dci2c.delay(2000);
//	ui.busyLineEdit->clear();
//}

void detConfigure::detTCDPolarityfCtl(void){ // testing // good USED FOR 2300
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
				//qDebug() << "reversed ";
			}
		 	else{
		    	if(dci2c.setup_spi(ar) == -1){};// exit(EXIT_FAILURE);

		    	dci2c.transmit_spi(numofbytes,cr);

				//qDebug() << "reversed ";
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
				//qDebug() << "Current On ";
			}
		 	else{
		    	if(dci2c.setup_spi(br) == -1){};// exit(EXIT_FAILURE);

		    	dci2c.transmit_spi(numofbytes,er);

		 		//qDebug() << "reversed ";
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

//void detConfigure::detTCD_I_Ctl(void){//(double valu){// ok
//	__u8 buff[3];//__16
//	unsigned int temp_16, temp;
//	double iBIT, readValu;
//	int fd;
//	__u8 device_addr;
//	QString busyState;// 9-5-2014
//	QString notBusyState;
//
//	busyState = "BUSY...";// 9-5-2014
//	notBusyState = "DONE...";
//
//	ui.busyLineEdit->setText(busyState);
//
//	//ui.detTCDOnOffButton->clearFocus();
////	qDebug("DET before case current ctrl detNumberDirector = %x", detNumberDirector);// test
//
//	switch (detNumberDirector)
//	{
//		case 1:
//		{
////			qDebug("DET current ctrl detNumberDirector = %x", detNumberDirector);// test
//
////			readValu = ui.det_I_CtlSpinBox->value(); // removed for 2300
////			dcI = readValu;
//			readValu = 1.0;// added to satisfy warning
//
////			qDebug("ImA Ctl passed value %f", readValu);//valu);
//
//			iBIT = 350.0 / 65535.0;// calculate current per bit for 16 bits of data What is max current
//			temp_16 = readValu / iBIT;// calculate num of bits
////			qDebug("ImA Ctl passed temp_16 bits before %x", temp_16);
//			temp = 0xffff - temp_16;
////			qDebug("ImA Ctl passed temp bits before %x", temp);
//
//			if (temp > 0xFC16){//64534 FC16
//				temp = 0xFC16;
//			}
//			if (temp < 0xDEA8){
//					temp = 0xDEA8;//57000
//				}
////			qDebug("ImA Ctl passed temp bits after %x", temp);
//			device_addr = 0x10;
//
//			buff[0] = 0x1b;//
//			buff[1] = temp>>8;// upper bits
//			buff[2] = temp & 0x00ff;// lower 8 bits
//
///*			qDebug("ImA buff{0} %x", buff[0]);
//			qDebug("ImA buff{1} %x", buff[1]);
//			qDebug("ImA buff{2} %x", buff[2]);*/
//
//			fd = dci2c.init_i2c();
//			dci2c.test_set_slave(fd, device_addr);//i2c_slaveAddr);
//			if (write(fd, buff, 3) != 3) {
//					fprintf(stderr, "i2c_write_command: I ctrl Error on write: %s\n",
//					strerror(errno));
//				}
//			dci2c.close_device(fd);
//			detTCD_I_read();
//			break;
//		}
//		case 2://OK
//		{
////			qDebug("DET current ctrl detNumberDirector = %x", detNumberDirector);// test
//
////			readValu = ui.det_I_CtlSpinBox->value(); // removed for 2300
//			readValu = 1.0;//added to satisfy warning
//			dcI2 = readValu;
//
////			qDebug("ImA Ctl passed value %f", readValu);//valu);
//
//			iBIT = 350.0 / 65535.0;// calculate current per bit for 16 bits of data What is max current
//			temp_16 = readValu / iBIT;// calculate num of bits
////			qDebug("ImA Ctl passed temp_16 bits before %x", temp_16);
//			temp = 0xffff - temp_16;
////			qDebug("ImA Ctl passed temp bits before %x", temp);
//
//			if (temp > 0xFC16){//64534 FC16
//				temp = 0xFC16;
//			}
//			if (temp < 0xDEA8){
//					temp = 0xDEA8;//57000
//				}
////			qDebug("ImA Ctl passed temp bits after %x", temp);
//			device_addr = 0x1c;
//
//			buff[0] = 0x1b;//
//			buff[1] = temp>>8;// upper bits
//			buff[2] = temp & 0x00ff;// lower 8 bits
//
///*			qDebug("ImA buff{0} %x", buff[0]);
//			qDebug("ImA buff{1} %x", buff[1]);
//			qDebug("ImA buff{2} %x", buff[2]);*/
//
//			fd = dci2c.init_i2c();
//			dci2c.test_set_slave(fd, device_addr);//i2c_slaveAddr);
//			if (write(fd, buff, 3) != 3) {
//					fprintf(stderr, "i2c_write_command: I ctrl Error on write: %s\n",
//					strerror(errno));
//				}
//			dci2c.close_device(fd);
//			detTCD_I_read();
//			break;
//		}
//		default:
//			break;
//	}
////	QCursor crr;
////	crr.setPos(2, 2);
//	ui.busyLineEdit->setText(notBusyState);
//	dci2c.delay(2000);
//	ui.busyLineEdit->clear();
//}
//void detConfigure::detTCD_V_Ctl(void){//(double valu){// ok
////	MainWindow dci2c;
//	__u8 buff[3];//__16
//	unsigned int temp_16;
//	double iBIT, readValue;
//	int fd;
//	__u8 device_addr;
//	QString busyState;// 9-5-2014
//	QString notBusyState;
//
//	busyState = "BUSY...";// 9-5-2014
//	notBusyState = "DONE...";
//
//	ui.busyLineEdit->setText(busyState);
//
//	//ui.detTCDWriteVoltageButton->clearFocus();
//
//	switch (detNumberDirector)
//	{
//		case 1:
//		{
////			qDebug("DET volt ctrl detNumberDirector = %x", detNumberDirector);// test
//
////			readValue = ui.detVdcCtlSpinBox->value();// removed for 2300
//
//			readValue = 1.0; //added to satisfy warning
//			dVC1 = readValue;
//
////			qDebug("Volt Ctl passed value %f", readValue);//valu);
//
//			iBIT = 24.0 / 65535.0;
//			temp_16 = readValue / iBIT;
//
////			qDebug("Volt Ctl temp_16 bits %x", temp_16);
//
//			device_addr = 0x10;
//
//			buff[0] = 0x1a;//
//			buff[1] = temp_16>>8;//Hi Byte
//			buff[2] = temp_16 & 0x00ff;//LO Byte
//
////			double detConfigure::detTCD_I_Sig(void){
///*			qDebug("Volt buff{0} %x", buff[0]);
//			qDebug("Volt buff{1} %x", buff[1]);
//			qDebug("Volt buff{2} %x", buff[2]);*/
//
//			fd = dci2c.init_i2c();
//			dci2c.test_set_slave(fd, device_addr);//i2c_slaveAddr);//addr = 0x45;
//			if (write(fd, buff, 3) != 3) {
//					fprintf(stderr, "i2c_write_command: TCD V Error on write: %s\n",
//					strerror(errno));
//				}
//			dci2c.close_device(fd);
//			break;
//		}
//		case 2://OK
//		{
////			qDebug("DET volt ctrl detNumberDirector = %x", detNumberDirector);// test
//
////			readValue = ui.detVdcCtlSpinBox->value();// removed for 2300
//
//			readValue = 1.0; //added to satisfy warning
//			dVC2 = readValue;
//
////			qDebug("Volt Ctl passed value %f", readValue);//valu);
//
//			iBIT = 24.0 / 65535.0;
//			temp_16 = readValue / iBIT;
//
////			qDebug("Volt Ctl temp_16 bits %x", temp_16);
//
//			device_addr = 0x1c;
//
//			buff[0] = 0x1a;//
//			buff[1] = temp_16>>8;//Hi Byte
//			buff[2] = temp_16 & 0x00ff;//LO Byte
//
///*			qDebug("Volt buff{0} %x", buff[0]);
//			qDebug("Volt buff{1} %x", buff[1]);
//			qDebug("Volt buff{2} %x", buff[2]);*/
//
//			fd = dci2c.init_i2c();
//			dci2c.test_set_slave(fd, device_addr);//i2c_slaveAddr);//addr = 0x45;
//			if (write(fd, buff, 3) != 3) {
//					fprintf(stderr, "i2c_write_command: TCD V Error on write: %s\n",
//					strerror(errno));
//				}
//			dci2c.close_device(fd);
//			break;
//		}
//		default:
//			break;
//	}
////	QCursor crr;
////	crr.setPos(2, 2);
//	ui.busyLineEdit->setText(notBusyState);
//	dci2c.delay(2000);
//	ui.busyLineEdit->clear();
//}

void detConfigure::detMoveBaseline(void){// Using this for 2300

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
			//qDebug("MOVE BASELINE........................");
			/////////////////////////////////////////////// get change and convert it
			    result = ui.detDIDOffSetBLSpinBox->value() *-0.4;
			    dci2c.delay(500);
			    offSet1 = result;

			    if(result > 0){
			       	hexHoldOffset = ((result) / 5) * 32767;//
			       	hexHold = hexHoldGlobal - hexHoldOffset;
			    }else if(result < 0){
			       	hexHoldOffset = (-1) * ((result) / 5) * 32767;//
			       	hexHold = hexHoldGlobal + hexHoldOffset;
			    }

			    //qDebug("result = %f", result);// test
			   	//qDebug("result = %x", result);// test
			   	//qDebug("hexHoldOffset = %x", hexHoldOffset);// test
			   	//qDebug("hexHold = %x", hexHold);// test
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

double detConfigure::detDIDZeroCtl(void){// OK

//	MainWindow dcZero;
    __u8 hi_byte, lo_byte, buff[3];;
//    int i;
    int fd;
    double result, sig;
    unsigned int hexHold;// i2c_result;
    //char ar[] = "/dev/spi0cs3";//////////// Changed from a spi0cs3 because of problem with 4" EMAC
    char ar[] = "/dev/spidev1.3"; // for the new screen
    char br[] = "44";
    //char cr[] = "/dev/spi0cs3";
    char cr[] = "/dev/spidev1.3";
    char dr[] = "44";

	busyState = "BUSY...";// 9-5-2014
	notBusyState = "DONE...";

	ui.busyLineEdit->setText(busyState);

    //ui.detTCDZeroButton->clearFocus();
	detNumberDirector = 1; // added for 2300
	switch (detNumberDirector)
	{
		case 1:
		{
		    //qDebug("DET detDIDZeroCtl .........................");// test

		    // remove any offset by writing a 0 value - i2cset 0 0x10 0x18 0x7f 0xff
		       ///////////////////////////////////// Send I2C to frontend

		       hi_byte = 0x7f; // with 5 volt ref so it will be set to 2.5
		       lo_byte = 0xff;

/*		       printf("hi_byte = %x\n", hi_byte);
		       printf("lo_byte = %x\n", lo_byte);*/


		       fd = dci2c.init_i2c();
		       dci2c.delay(333);// added after speeding up mainwindow 7-23-2015

		       dci2c.test_set_slave(fd, 0x10);

		    	//* write register /
		    	buff[0] = 0x18;// channel
		    	buff[1] = hi_byte;//(__u8)(cmd >> 8);
		    	buff[2] = lo_byte;//(__u8)(cmd);

		    	if (write(fd, buff, 3) != 3) {
		    		fprintf(stderr, "i2c_write_cmd: error on write: %s\n", strerror(errno));
		//    		return -1;
		    	}
		    	dci2c.delay(333);// added after speeding up mainwindow 7-23-2015
		    	dci2c.close_device(fd);//close(fd);// Close I2C fd
		    	//////////////////////////////////// I2C End

		    	// read offset

		    	dci2c.delay(333);// added after speeding up mainwindow 7-23-2015
			if(dci2c.setup_spi(ar) == -1){qDebug() << "Second step SPI - Zero Failure";}// exit(EXIT_FAILURE);
		//	qDebug() << "First step SPI";
			dci2c.delay(333);// added after speeding up mainwindow 7-23-2015

			result = dci2c.getSig_spi(4,br);
		//	qDebug() << "Second step SPI";
			dci2c.delay(333);// added after speeding up mainwindow 7-23-2015

			dci2c.close_spi();

			   if (result > 2.5){
				   result = result - 2.5;
				   //qDebug("Result - 2.5 = %f", result);
			   }
			   else{
				   result = (result + 2.5) * (-1);
				   //qDebug("Result + 2.5 = %f", result);
			   }

			hexHold = 32767 + ((result) / 5.0) * 32767;//

			hexHoldGlobal = hexHold; // used for baseline shift

			//qDebug("Used to zero - hexHold Result = %x", hexHold);

			// write value to bring to 0 (2.5) i2cset 0 0x10 0x18 byte1 byte2 /u8

		    hi_byte = (hexHold & 0xff00) >> 8;
		    lo_byte = hexHold & 0x00ff;

/*		    printf("hi_byte = %x\n", hi_byte);
		    printf("lo_byte = %x\n", lo_byte);*/


		    fd = dci2c.init_i2c();
		    dci2c.delay(333);// added after speeding up mainwindow 7-23-2015

		    dci2c.test_set_slave(fd, 0x10);
		    dci2c.delay(333);// added after speeding up mainwindow 7-23-2015

		 	//* write register /
		 	buff[0] = 0x18;// channel
		 	buff[1] = hi_byte;//(__u8)(cmd >> 8);
		 	buff[2] = lo_byte;//(__u8)(cmd);

		 	if (write(fd, buff, 3) != 3) {
		 		fprintf(stderr, "i2c_write_cmd: error on write: %s\n", strerror(errno));
		// 		return -1;
		 	}
		 	dci2c.delay(333);// added after speeding up mainwindow 7-23-2015

		 	dci2c.close_device(fd);//close(fd);// Close I2C fd
		 	dci2c.delay(333);// added after speeding up mainwindow 7-23-2015
		 	//////////////////////////////////// I2C End
//		 	sig = detTCD_I_Sig();
//		 	sig = detDIDSig();
		 	ui.detDIDOffSetBLSpinBox->setValue(0.0);//clear();
		 	sig = detDIDSig();
			break;
		}
		case 2:
		{
//		    qDebug("DET detTcdZeroCtl detNumberDirector = %x", detNumberDirector);// test

		    // remove any offset by writing a 0 value - i2cset 0 0x10 0x18 0x7f 0xff
		       ///////////////////////////////////// Send I2C to frontend

		       hi_byte = 0x7f; // with 5 volt ref so it will be set to 2.5
		       lo_byte = 0xff;

/*		       printf("hi_byte = %x\n", hi_byte);
		       printf("lo_byte = %x\n", lo_byte);*/


		       fd = dci2c.init_i2c();
		       dci2c.test_set_slave(fd, 0x1c);

		    	//* write register /
		    	buff[0] = 0x18;// channel
		    	buff[1] = hi_byte;//(__u8)(cmd >> 8);
		    	buff[2] = lo_byte;//(__u8)(cmd);

		    	if (write(fd, buff, 3) != 3) {
		    		fprintf(stderr, "i2c_write_cmd: error on write: %s\n", strerror(errno));
		//    		return -1;
		    	}
		    	dci2c.close_device(fd);//close(fd);// Close I2C fd
		    	//////////////////////////////////// I2C End

		    	// read offset

			if(dci2c.setup_spi(cr) == -1){qDebug() << "Second step SPI - Zero Failure";}// exit(EXIT_FAILURE);
		//	qDebug() << "First step SPI";

			result = dci2c.getSig_spi(4,dr);
		//	qDebug() << "Second step SPI";

			dci2c.close_spi();

			   if (result > 2.5){
				   result = result - 2.5;
//				   qDebug("Result - 2.5 = %f", result);
			   }
			   else{
				   result = (result + 2.5) * (-1);
//				   qDebug("Result + 2.5 = %f", result);
			   }

			hexHold = 32767 + ((result) / 5.0) * 32767;//

			hexHoldGlobal = hexHold; // used for baseline shift

//			qDebug("Used to zero - hexHold Result = %x", hexHold);

			// write value to bring to 0 (2.5) i2cset 0 0x10 0x18 byte1 byte2 /u8

		    hi_byte = (hexHold & 0xff00) >> 8;
		    lo_byte = hexHold & 0x00ff;

/*		    printf("hi_byte = %x\n", hi_byte);
		    printf("lo_byte = %x\n", lo_byte);*/


		    fd = dci2c.init_i2c();
		    dci2c.test_set_slave(fd, 0x1c);

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
		 	sig = detTCD_I_Sig();
		 	ui.detDIDOffSetBLSpinBox->setValue(0.0);//clear();
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
	return sig;
}
//void detConfigure::detWrite(void){
//	pleaseWait detCfg;
////	MainWindow dci2c;
//	QString busyState;// 9-5-2014
//	QString notBusyState;
//
//	busyState = "BUSY...";// 9-5-2014
//	notBusyState = "DONE...";
//
//	ui.busyLineEdit->setText(busyState);
//
//	//ui.detTCDWriteButton->clearFocus();
//	switch (detNumberDirector)
//	{
//		case 1:
//		{
////			 qDebug("DET detWrite detNumberDirector = %x", detNumberDirector);// test
//
//		//	pleaseWaitForIt();
//			detTCD_I_Ctl();// dummy number valu is pulled from the spinboxx
//			detTCD_I_read();
//			detTCD_V_Ctl();
//			detGain();
//			break;
//		}
//		case 2:
//		{
////			 qDebug("DET detWrite detNumberDirector = %x", detNumberDirector);// test
//
//		//	pleaseWaitForIt();
//			detTCD_I_Ctl();// dummy number valu is pulled from the spinboxx
//			detTCD_I_read();
//			detTCD_V_Ctl();
//			detGain();
//			break;
//		}
//		default:
//			break;
//	}
//	ui.busyLineEdit->setText(notBusyState);
//	dci2c.delay(2000);
//	ui.busyLineEdit->clear();
//}
void detConfigure::detRead(void){
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
				ui.detDIDOffSetBLSpinBox->setValue(offSet1);
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
					ui.detDIDOffSetBLSpinBox->setValue(offSet2);
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
void detConfigure::voltageSET(double voltage){//(double valu){// ok
	__u8 buff[3];//__16
	unsigned int temp_16;
	double iBIT;
	int fd;
	__u8 device_addr;
	busyState = "BUSY...";
	notBusyState = "DONE...";
	ui.busyLineEdit->setText(busyState);
	detNumberDirector = 1; // forcing  - test statement

	switch (detNumberDirector)
	{
		case 1:
		{

			qDebug("Setting Voltage value  = %f", voltage);
			dVC1d = voltage;

			iBIT = 1000.0 / 65535.0;
			temp_16 = (((voltage) / iBIT));//(((voltage - 25) / iBIT)/2)-0x19;// Divide by 2 and subtract 25 to make result accurate ??

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

			dci2c.delay(500);
			detHvSig();// read and display HV
			//dci2c.delay(500);
			//detDID_I_read();

			break;
		}
		case 2://OK
		{
			break;
		}
		default:
			break;
	}
	ui.busyLineEdit->setText(notBusyState);
	dci2c.delay(2000);
	ui.busyLineEdit->clear();
}


void detConfigure::detDID_V_Ctl(void){//(double valu){// ok
	qDebug("detDID_V_Ctl firing from detConfigure. ");
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

	//qDebug("DET High volt ctrl...............");

	//ui.detTCDWriteVoltageButton->clearFocus();

	detNumberDirector = 1; // forcing  - test statement

	switch (detNumberDirector)
	{
		case 1:
		{
			//qDebug("DET High volt ctrl detNumberDirector = %x", detNumberDirector);// test

			readValue = ui.detVdcCtlSpinBox->value();


			qDebug("(det) detDID_V_Ctl Value  = %f", readValue);
			dVC1d = readValue;

			//qDebug("High Volt Ctl passed value %f", readValue);//valu);

//			temp_16 = ((readValue / 1000.0)*0xffff)>>1;
			iBIT = 1000.0 / 65535.0;
			temp_16 = (((readValue - 25) / iBIT)/2)-0x19;// Divide by 2 and subtract 25 to make result accurate ??

			//qDebug("High Volt Ctl temp_16 bits %x", temp_16);

			device_addr = 0x10;

			buff[0] = 0x1a;//
			buff[1] = temp_16>>8;//Hi Byte
			buff[2] = temp_16 & 0x00ff;//LO Byte

			//qDebug("High Volt buff{0} %x", buff[0]);
			//qDebug("High Volt buff{1} %x", buff[1]);
			//qDebug("High Volt buff{2} %x", buff[2]);

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
//void detConfigure::detOn_1(void){

/*	if(ui.detOnOffCheckBox_1->isChecked()){
		QString program ="/root/spi_test_wr /dev/spi0cs3 4 44 &";//
		QProcess *detProcess = new QProcess(this);
		detProcess->start(program);
//		detProcess->waitForFinished();
	}else{

//			QProcess *detProcess;
//			detProcess->close();
	}*/
//}
//void detConfigure::detOff_1(void){
//	QProcess *detProcess;
//	detProcess->close();
//}
//void detConfigure::detOn_2(void){

/*	if(ui.detOnOffCheckBox_1->isChecked()){
//		QProcess *detProcess;
//		detProcess->close();
	}else{
		QString program = "/root/spi_test_wr /dev/spi0cs3 4 44 &";//
		QProcess *detProcess = new QProcess(this);
		detProcess->start(program);
//		detProcess->waitForFinished();
	}*/
//}
//void detConfigure::detOff_2(void){
//	QProcess *detProcess;
//	detProcess->close();
//}
//void detConfigure::detGrabDetNum (void){
//	detNumberDirector = ui.detSelectSpinBox->value();// removed for 2300 deleted the spin box
//}
