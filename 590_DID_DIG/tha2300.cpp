#include "tha2300.h"
#include <errno.h>
#include <QDebug>
#include <QtGui>
#include <QAction>
#include <QProcess>
#include <QApplication>
#include <QKeyEvent>

#include <QFile>// added 6-17-2016

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

QString alarm1Display;
QString alarm2Display;


tha2300::tha2300(QWidget *parent)
    : QMainWindow(parent)
{
	ui.setupUi(this);
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(callMain_datalog()));

	displayStatusBusy();

	timer->start(60000);
}

tha2300::~tha2300()
{

}
// slots begin

void tha2300::callMain_datalog(void){
	qDebug() << "TIMER 1 MINUTE REACHED";
	if(DLOGCHECK == 1){// DATA LOGGER
		main_datalog();
	}
}
void tha2300::calibrat(void)
{
	calibrate cal1(this);// Create a dialog
	if (cal1.exec()) {
	}
}
void tha2300::outpt(void)
{
	output out1(this);// Create a dialog
	if (out1.exec()) {
	}
}
void tha2300::data(void)
{
	class data data1(this);// Crerate a dialog
	if (data1.exec()) {
	}
}
void tha2300::keyReleaseEvent(QKeyEvent *event)
{
	output op;
	QString noCal;
	QString measuretxt;

	noCal = "noCal";
	measuretxt = "Measure";

	switch (event->key()){
		case Qt::Key_F1:{// Calibrate
			thStopMe = 0;
			ui.thMeasureLineEdit->clear();
			qDebug() << "Released F1 Key Calibrate";
			ui.calButton->click();
			IN_CAL_MODE = 1;
			break;
		}
		case Qt::Key_F2:{// DATA
			thStopMe = 0;
			ui.thMeasureLineEdit->clear();
			qDebug() << "Released F2 Key Data";
			ui.dataButton->click();
//			crr.setPos(2, 2);
			break;
		}
		case Qt::Key_F3:{// OUTPUT
			thStopMe = 0;
			ui.thMeasureLineEdit->clear();
			qDebug() << "Released F3 Key Output";
			ui.outputButton->click();
//			crr.setPos(2, 2);
			break;
		}
		case Qt::Key_F4:{
//			crr.setPos(2, 2);
			thStopMe = 0;
			qDebug() << "Released F4 Key";
			break;
		}
		case Qt::Key_F5:{
//			crr.setPos(2, 2);
			thStopMe = 0;
			ui.thMeasureLineEdit->clear();
			qDebug() << "Released F5 Key";
			break;
		}
		case Qt::Key_F6:{
//			crr.setPos(2, 2);
			thStopMe = 0;
			ui.thMeasureLineEdit->clear();
			qDebug() << "Released F6 Key ()";
			break;
		}
		case Qt::Key_F7:{
//			crr.setPos(2, 2);
			thStopMe = 0;
			ui.thMeasureLineEdit->clear();
			qDebug() << "Released F7 Key ()";
			break;
		}
		case Qt::Key_F8:{
			thStopMe = 0;
			ui.thMeasureLineEdit->clear();
			qDebug() << "Released F8 Key ()";
			break;
		}
		case Qt::Key_F9:{
//			crr.setPos(2, 2);
			thStopMe = 0;
			ui.thMeasureLineEdit->clear();
			qDebug() << "Released F9 Key ()";
			break;
		}
		case Qt::Key_F10:{
//			crr.setPos(2, 2);
			thStopMe = 0;
			ui.thMeasureLineEdit->clear();
			qDebug() << "Released F10 Key ()";
			break;
		}
		case Qt::Key_Home:{
//			crr.setPos(2, 2);
			thStopMe = 0;
			ui.thMeasureLineEdit->clear();
			qDebug() << "Released Home Key (ZERO)";
			break;
		}
		case Qt::Key_End:
			thStopMe = 0;{
			ui.thMeasureLineEdit->clear();
//			crr.setPos(2, 2);
			qDebug() << "Released End Key (SPAN)";
			break;
		}
		case Qt::Key_Return:{
			qDebug() << "THA2300 Released ENTER Key ()";
			cStopMe = 0;// test statement remove

			if (thStopMe == 0) {//0
				thStopMe == 1;
				if (CALINDICATOR == 1) {
					ui.measureButton->click();
				}else{
					ui.mainDetSigLCD->display(noCal);
					ui.thMeasureLineEdit->clear();
				}
			}else{
				thStopMe = 0;
			}
//			crr.setPos(2, 2);
			break;
		}
		default:{//
			qDebug() << "Default";
			qDebug("Default %x", event->key());
			break;
		}
	}
}
void tha2300::killSampFuelMethFlow(void){
	th_stup.killFlowSafety();
}

void tha2300::displayStatusBusy(void){
	QString busyState;// 9-5-2014

	busyState = "BUSY...";// 9-5-2014

	ui.thStatusLineEdit->setText(busyState);
}
void tha2300::displayStatusDone(void){
	QString notBusyState;

	notBusyState = "DONE...";

	ui.thStatusLineEdit->setText(notBusyState);
}

void tha2300::alarmOutput(double Sample){
	__u8 buff[3];//__16
	int fd;
	unsigned int tempSid;

	alarm1Display = "A1";
	alarm2Display = "A2";

	tempSid = i2c_slaveAddr;// store current I2C Slave Id
	i2c_slaveAddr = 0x40;// Change to needed Id for input reading

/*	qDebug("a SAMPLE = %f", Sample);
	qDebug("a LOW 2 = %f", ALARMLO2);
	qDebug("a HI 2 = %f", ALARMHI2);
	qDebug("a LOW 1 = %f", ALARMLO1);
	qDebug("a HI 1 = %f", ALARMHI1);
	qDebug("a ACTIVATED = %x", ALARMACTIVE);*/

	if(ALARMACTIVE == 1){
//		qDebug("AMARMS ACTIVATED");
		if(ALARM2ACTIVE == 1){
			if((Sample <= ALARMLO2) || (Sample >= ALARMHI2)){
				ALARM2STATE = 1;
//				qDebug("setup 1 ALARM LO MA");
				 buff[0] = 0x31;// command for P18
				 buff[1] = 0x01;// Data to switch

				fd = th_i2c.init_i2c();
				th_i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
				if (write(fd, buff, 2) != 2) {
						fprintf(stderr, "i2c_write_command: Error on write: %s\n",
						strerror(errno));
					}
				th_i2c.close_device(fd);
				ui.thAlarmInd2LineEdit->setText(alarm2Display);
			}
			else{
				ALARM2STATE = 0;
//				qDebug("setup 0 ALARM LO MA");
				 buff[0] = 0x31;// command for P18
				 buff[1] = 0x00;// Data to switch

				fd = th_i2c.init_i2c();
				th_i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
				if (write(fd, buff, 2) != 2) {
						fprintf(stderr, "i2c_write_command: Error on write: %s\n",
						strerror(errno));
					}
				th_i2c.close_device(fd);
				ui.thAlarmInd2LineEdit->clear();
			}
		}else{
			ALARM2STATE = 0;
			// Clear alarm 2
			 buff[0] = 0x31;// command for P18
			 buff[1] = 0x00;// Data to switch

			fd = th_i2c.init_i2c();
			th_i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
			if (write(fd, buff, 2) != 2) {
					fprintf(stderr, "i2c_write_command: Error on write: %s\n",
					strerror(errno));
				}
			th_i2c.close_device(fd);
			ui.thAlarmInd2LineEdit->clear();
		}
		if(ALARM1ACTIVE == 1){
			if((Sample <= ALARMLO1) || (Sample >= ALARMHI1)){
				ALARM1STATE = 1;
//				qDebug("setup 1 ALARM Lo V");
				 buff[0] = 0x32;// command for P18
				 buff[1] = 0x01;// Data to switch

				fd = th_i2c.init_i2c();
				th_i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
				if (write(fd, buff, 2) != 2) {
						fprintf(stderr, "i2c_write_command: Error on write: %s\n",
						strerror(errno));
					}
				th_i2c.close_device(fd);
				ui.thAlarmInd1LineEdit->setText(alarm1Display);
			}
			else{
				ALARM1STATE = 0;
//				qDebug("setup 0 ALARM Lo V");
				 buff[0] = 0x32;// command for P18
				 buff[1] = 0x00;// Data to switch

				fd = th_i2c.init_i2c();
				th_i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
				if (write(fd, buff, 2) != 2) {
						fprintf(stderr, "i2c_write_command: Error on write: %s\n",
						strerror(errno));
					}
				th_i2c.close_device(fd);
				ui.thAlarmInd1LineEdit->clear();
			}
		}else{
			// Clear alarm 1
			ALARM1STATE = 0;
			 buff[0] = 0x32;// command for P18
			 buff[1] = 0x00;// Data to switch

			fd = th_i2c.init_i2c();
			th_i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
			if (write(fd, buff, 2) != 2) {
					fprintf(stderr, "i2c_write_command: Error on write: %s\n",
					strerror(errno));
				}
			th_i2c.close_device(fd);
			ui.thAlarmInd1LineEdit->clear();
		}
	}else{
		// clear all alarmscgLowCheckBox
		ALARM1STATE = 0;
		ALARM2STATE = 0;

		 buff[0] = 0x31;// command for P18
		 buff[1] = 0x00;// Data to switch

		fd = th_i2c.init_i2c();
		th_i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
		if (write(fd, buff, 2) != 2) {
				fprintf(stderr, "i2c_write_command: Error on write: %s\n",
				strerror(errno));
			}
		th_i2c.close_device(fd);
		ui.thAlarmInd2LineEdit->clear();

		/////////////////////////////
		 buff[0] = 0x32;// command for P18
		 buff[1] = 0x00;// Data to switch

		fd = th_i2c.init_i2c();
		th_i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
		if (write(fd, buff, 2) != 2) {
				fprintf(stderr, "i2c_write_command: Error on write: %s\n",
				strerror(errno));
			}
		th_i2c.close_device(fd);
		ui.thAlarmInd1LineEdit->clear();
	}
	i2c_slaveAddr = tempSid;
}
void tha2300::measure(void){
	cStopMe = 0;// stop if reading from Calibrate mode
	unsigned int d, s;
	double zerominus;

	zerominus = 1.02;//0.05;

	QString notCald;
	QString overRange;
	QString statusZero;
	QString statusSample;
	QString statusMeth;
	QString flameStatus;
	QString flameindOn;
	QString flameindOff;
	QString R1;
	QString R2;
	QString R3;
	QString R4;
	QString measuretxt;
	QString remotecalchk;
	QString busy;

	notCald = "NCAL";
	overRange = "OvRG";
	statusZero = "ZEROGAS";
	statusSample = "SAMPGAS";
	flameStatus = "FO";
	flameindOn = "FLAME ON";
	flameindOff = "FLAME OFF";
	R1 = "R1";
	R2 = "R2";
	R3 = "R3";
	R4 = "R4";
	measuretxt = "Measure";
	remotecalchk = "Remote Cal CHK";
	statusMeth = "SAMPGAS METH";
	busy = "PLEASE WAIT...";

	ui.thMeasureLineEdit->setText(measuretxt);
	if (FLAMEON == 1){
		ui.thFlameLineEdit->setText(flameindOn);
	}else{
		ui.thFlameLineEdit->setText(flameindOff);
		ui.thMeasureLineEdit->clear();
	}

	switch (Range){// make sure that the calibrated range is the same when started
		case 1:{
			ui.thRangeLineEdit->setText(R1);
			break;
		}
		case 2:{
			ui.thRangeLineEdit->setText(R2);
			break;
		}
		case 3:{
			ui.thRangeLineEdit->setText(R3);
			break;
		}
		case 4:{
			ui.thRangeLineEdit->setText(R4);
			break;
		}
		default:{
			ui.thRangeLineEdit->setText(R1);
			break;
		}
	}
	if (thStopMe == 0) {// if not running start else stop
		thStopMe = 1;
	}

	d = th_valvectrl.fidH2BypassRdInput();
	if(d == 0){// check Flame and control H2 shutoff solenoid
//		display message
		ui.thStatusLineEdit->setText(flameStatus);// FLAME is OUT
		ui.mainDetSigLCD->display(flameStatus);
		ui.thFlameLineEdit->setText(flameindOff);
		ui.thMeasureLineEdit->clear();
		thStopMe = 0;
		th_valvectrl.IO8b(); // not Rdy
		qDebug() <<"FLAME OUT";
	}else{// check flame and Calibration state
//		IO8a();//make ready
		if(vstate1 == 1){
			ui.thStatusLineEdit->setText(statusMeth);
		}else{
			ui.thStatusLineEdit->setText(statusSample);
		}
	}

	if(CALINDICATOR == 1){
		th_valvectrl.IO8a(); // Rdy
		ui.thStatusLineEdit->setText(busy);//Busy
		th_gas.sampValveCtl();// which to sample gas moved from above 9-10-15
		while(thStopMe){
			SAMPLE_VOLT = th_displaySig.detTCD_I_Sig();
//			qDebug(" Top - SAMPLE volt = %f", SAMPLE_VOLT);

			if (SAMPLE_VOLT >= 2.46){// range SAMPLE is a VOLTAGE NOT CONCENTRATION
//				qDebug("IF > 2.4 SAMPLE volt = %f", SAMPLE_VOLT);
				if (Range < 4){
					th_valvectrl.IO8b(); //not Rdy
					ui.thMeasureLineEdit->clear();
					Range = Range + 1;
//					qDebug("RANGE = %d", Range);
					SAMPLE_RESULT = 0.0;
					ui.mainDetSigLCD->display(SAMPLE_RESULT * ConcMultiplyer);
					th_displaySig.detRange();
					SAMPLE_RESULT = 0.0;
					ui.mainDetSigLCD->display(SAMPLE_RESULT * ConcMultiplyer);
					switch (Range){
						case 1:{
							switch (CAL_RANGE){//2 to 4 up
								case 1:{
									lcdMultiplyer = 1.0;
//									qDebug(" 11 lcdMultiplyer = %f", lcdMultiplyer);
									break;
								}
								case 2:{
									lcdMultiplyer = 0.1;
//									qDebug(" 12 lcdMultiplyer = %f", lcdMultiplyer);
									break;
								}
								case 3:{
									lcdMultiplyer = 0.01;
//									qDebug(" 13 lcdMultiplyer = %f", lcdMultiplyer);
									break;
								}
								case 4:{
									lcdMultiplyer = 0.001;
//									qDebug(" 14 lcdMultiplyer = %f", lcdMultiplyer);
									break;
								}
								default:{
									break;
								}
							}
							ConcMultiplyer = lcdMultiplyer;
							ui.thRangeLineEdit->setText(R1);
							break;
						}
						case 2:{
							switch (CAL_RANGE){
								case 1:{
									lcdMultiplyer = 10.0;
//									qDebug(" 21 lcdMultiplyer = %f", lcdMultiplyer);
									ZERO = ZERO_SAVE * 0.1;
									break;
								}
								case 2:{
									lcdMultiplyer = 1.0;
//									qDebug(" 22 lcdMultiplyer = %f", lcdMultiplyer);
									ZERO = ZERO_SAVE * 1.0;
//									th_displaySig.detTcdZeroCtl();// added 8-25-15 re-zero
									break;
								}
								case 3:{
									lcdMultiplyer = 0.1;
//									qDebug(" 23 lcdMultiplyer = %f", lcdMultiplyer);
									ZERO = ZERO_SAVE * 10.0;
									break;
								}
								case 4:{
									lcdMultiplyer = 0.01;
//									qDebug(" 24 lcdMultiplyer = %f", lcdMultiplyer);
									ZERO = ZERO_SAVE * 100.0;
									break;
								}
								default:{
									break;
								}
							}
							ConcMultiplyer = lcdMultiplyer;
							ui.thRangeLineEdit->setText(R2);
							break;
						}
						case 3:{
							switch (CAL_RANGE){
								case 1:{
									lcdMultiplyer = 100.0;
//									qDebug(" 31 lcdMultiplyer = %f", lcdMultiplyer);
									ZERO = ZERO_SAVE * 0.01;
									break;
								}
								case 2:{
									lcdMultiplyer = 10.0;
//									qDebug(" 32 lcdMultiplyer = %f", lcdMultiplyer);
									ZERO = ZERO_SAVE * 0.1;
									break;
								}
								case 3:{
									lcdMultiplyer = 1.0;
//									qDebug(" 33 lcdMultiplyer = %f", lcdMultiplyer);
									ZERO = ZERO_SAVE * 1.0;
									break;
								}
								case 4:{
									lcdMultiplyer = 0.1;
//									qDebug(" 34 lcdMultiplyer = %f", lcdMultiplyer);
									ZERO = ZERO_SAVE * 10.0;
									break;
								}
								default:{
									break;
								}
							}
							ConcMultiplyer = lcdMultiplyer;
							ui.thRangeLineEdit->setText(R3);
							break;
						}
						case 4:{
							switch (CAL_RANGE){
								case 1:{
									lcdMultiplyer = 1000.0;
//									qDebug(" 41 lcdMultiplyer = %f", lcdMultiplyer);
									ZERO = ZERO_SAVE * 0.001;
									break;
								}
								case 2:{
									lcdMultiplyer = 100.0;
//									qDebug(" 42 lcdMultiplyer = %f", lcdMultiplyer);
									ZERO = ZERO_SAVE * 0.01;
									break;
								}
								case 3:{
									lcdMultiplyer = 10.0;
//									qDebug(" 43 lcdMultiplyer = %f", lcdMultiplyer);
									ZERO = ZERO_SAVE * 0.1;
									break;
								}
								case 4:{
									lcdMultiplyer = 1.0;// today100.0
//									qDebug(" 44 lcdMultiplyer = %f", lcdMultiplyer);
									ZERO = ZERO_SAVE * 1.0;
									break;
								}
								default:{
									break;
								}
							}
							ConcMultiplyer = lcdMultiplyer;
							ui.thRangeLineEdit->setText(R4);
							break;
						}
						default:{
							break;
						}
					}
				}
				else{
					ui.mainDetSigLCD->display(overRange);// string
				}
				th_mw.delay(5000);// miss range switch spike
				SAMPLE_RESULT = 0.0;
				ui.mainDetSigLCD->display(SAMPLE_RESULT * ConcMultiplyer);
				th_valvectrl.IO8a(); // Rdy
				ui.thMeasureLineEdit->setText(measuretxt);
			}

			if (SAMPLE_VOLT < 0.25){// 3 to 1 only 0.04 0.004
//				qDebug("IF < 0.020 SAMPLE volt = %f", SAMPLE_VOLT);
				if (Range > 1){
					if (Range > CAL_RANGE){//(Range <= CAL_RANGE){
						Range = Range - 1;
						th_valvectrl.IO8b(); //not Rdy
						ui.thMeasureLineEdit->clear();

	//					qDebug("RANGE = %d", Range);
						SAMPLE_RESULT = 0.0;
						ui.mainDetSigLCD->display(SAMPLE_RESULT * ConcMultiplyer);
						th_displaySig.detRange();
						SAMPLE_RESULT = 0.0;
						ui.mainDetSigLCD->display(SAMPLE_RESULT * ConcMultiplyer);
						switch (Range){
							case 1:{
								switch (CAL_RANGE){
									case 1:{
										lcdMultiplyer = 1.0;
	//									qDebug(" 11 lcdMultiplyer = %f", lcdMultiplyer);
										ZERO = ZERO_SAVE * 1.0;
										break;
									}
									case 2:{//ok
										lcdMultiplyer = 0.1;
	//									qDebug(" 12 lcdMultiplyer = %f", lcdMultiplyer);
										ZERO = ZERO_SAVE * 10.0;
	//									th_displaySig.detTcdZeroCtl();// added 8-25-15 Re-zero
										break;
									}
									case 3:{
										lcdMultiplyer = 0.01;
	//									qDebug(" 13 lcdMultiplyer = %f", lcdMultiplyer);
										ZERO = ZERO_SAVE * 100.0;
										break;
									}
									case 4:{
										lcdMultiplyer = 0.001;
	//									qDebug(" 14 lcdMultiplyer = %f", lcdMultiplyer);
										ZERO = ZERO_SAVE * 1000.0;
										break;
									}
									default:{
										break;
									}
								}
								ConcMultiplyer = lcdMultiplyer;
								ui.thRangeLineEdit->setText(R1);
								break;
							}
							case 2:{
								switch (CAL_RANGE){
									case 1:{
										lcdMultiplyer = 10.0;
	//									qDebug(" 21 lcdMultiplyer = %f", lcdMultiplyer);
										ZERO = ZERO_SAVE * 10.0;
										break;
									}
									case 2:{//ok
										lcdMultiplyer = 1.0;//today
	//									qDebug(" 22 lcdMultiplyer = %f", lcdMultiplyer);
										ZERO = ZERO_SAVE * 1.0;
										break;
									}
									case 3:{
										lcdMultiplyer = 0.1;
	//									qDebug(" 23 lcdMultiplyer = %f", lcdMultiplyer);
										ZERO = ZERO_SAVE * 10.0;
										break;
										}
									case 4:{
										lcdMultiplyer = 0.01;
	//									qDebug(" 24 lcdMultiplyer = %f", lcdMultiplyer);
										ZERO = ZERO_SAVE * 100.0;
										break;
									}
									default:{
										break;
									}
								}
								ConcMultiplyer = lcdMultiplyer;
								ui.thRangeLineEdit->setText(R2);
								break;
							}
							case 3:{
								switch (CAL_RANGE){
									case 1:{
										lcdMultiplyer = 100.0;
	//									qDebug(" 31 lcdMultiplyer = %f", lcdMultiplyer);
										ZERO = ZERO_SAVE * 0.01;
										break;
									}
									case 2:{//ok
										lcdMultiplyer = 10.0;
	//									qDebug(" 32 lcdMultiplyer = %f", lcdMultiplyer);
										ZERO = ZERO_SAVE * 0.1;
										break;
									}
									case 3:{
										lcdMultiplyer = 1.0;//today
	//									qDebug(" 33 lcdMultiplyer = %f", lcdMultiplyer);
										ZERO = ZERO_SAVE * 1.0;
										break;
									}
									case 4:{
										lcdMultiplyer = 0.1;
	//									qDebug(" 34 lcdMultiplyer = %f", lcdMultiplyer);
										ZERO = ZERO_SAVE * 10.0;
										break;
									}
									default:{
										break;
									}
								}
								ConcMultiplyer = lcdMultiplyer;
								ui.thRangeLineEdit->setText(R3);
								break;
							}
							case 4:{
								switch (CAL_RANGE){
									case 1:{
										//lcdMultiplyer = 1000.0;
	//									qDebug(" 41 lcdMultiplyer = %f", lcdMultiplyer);
										//ZERO = ZERO_SAVE * 1000.0;
										break;
									}
									case 2:{
										//lcdMultiplyer = 100.0;
	//									qDebug(" 42 lcdMultiplyer = %f", lcdMultiplyer);
										//ZERO = ZERO_SAVE * 100.0;
										break;
									}
									case 3:{
										//lcdMultiplyer = 10.0;
	//									qDebug(" 43 lcdMultiplyer = %f", lcdMultiplyer);
										//ZERO = ZERO_SAVE * 10.0;
										break;
									}
									case 4:{
										//lcdMultiplyer = 1.0;
	//									qDebug(" 44 lcdMultiplyer = %f", lcdMultiplyer);
										//ZERO = ZERO_SAVE * 1.0;
										break;
									}
									default:{
										break;
									}
								}
								ConcMultiplyer = lcdMultiplyer;
								ui.thRangeLineEdit->setText(R4);
								break;
							}
							default:{
								break;
							}
						}
						ConcMultiplyer = lcdMultiplyer;
					}// end of if for ranging down to R1 "Hi"
					else{
						Range = CAL_RANGE;// go no lower than the calibrated range
					}
				}
				else{
//					ui.mainDetSigLCD->display(overRange);// string
				}
				th_mw.delay(5000);// miss range switch spike
				SAMPLE_RESULT = 0.0;
				ui.mainDetSigLCD->display(SAMPLE_RESULT * ConcMultiplyer);
				th_valvectrl.IO8a(); // Rdy
				ui.thMeasureLineEdit->setText(measuretxt);
			}

			qDebug("RANGE = %d", Range);
			qDebug("M SPAN = %f", SPAN);
			qDebug("M ZERO = %f", ZERO);
			qDebug("M SAMPLE = %f", SAMPLE_VOLT);


			SAMPLE_RESULT = ((SAMPLE_VOLT - ZERO)/(SPAN - ZERO)) * CONC;
			qDebug(" Sample Result = %f", SAMPLE_RESULT);
			qDebug(" Result ConcMultiplyer = %f", ConcMultiplyer);
			alarmOutput(SAMPLE_RESULT * ConcMultiplyer);
			th_otpt.current4to20mAOutput(SAMPLE_RESULT * ConcMultiplyer);
//			if(rs232out.lookatCommCheckbox() == 1){
			sendSerial_3();
//			}
			qDebug("M Sample Result = %f", SAMPLE_RESULT * ConcMultiplyer);

			ui.mainDetSigLCD->display(SAMPLE_RESULT * ConcMultiplyer);
			th_mw.delay(500);//test statement for displaying

			// statement causes the display to state "FO" SO temporally disable with hi values
			if (Range  == 1){
				zerominus = 1.125;//0.125;
			}
			else{
				zerominus = 1.0125;//0.0125;
			}

			s = th_valvectrl.fidH2BypassRdInput();
			if((s == 0) || (SAMPLE_VOLT < ZERO - zerominus)){// check Flame and control H2 shutoff solenoid
		//		display message
				ui.thStatusLineEdit->setText(flameStatus);
				ui.mainDetSigLCD->display(flameStatus);
				ui.thFlameLineEdit->setText(flameindOff);
				ui.thMeasureLineEdit->clear();
				thStopMe = 0;
				qDebug() <<"FLAME OUT Checked";
			}else{
				if(vstate1 == 1){
					ui.thStatusLineEdit->setText(statusMeth);
				}else{
					ui.thStatusLineEdit->setText(statusSample);
				}
				ui.thMeasureLineEdit->setText(measuretxt);
				ui.thFlameLineEdit->setText(flameindOn);
			}
			ui.thStatusLineEdit->setText(remotecalchk);
			ui.thMeasureLineEdit->clear();
			th_cal.remoteCal();
			if(vstate1 == 1){
				ui.thStatusLineEdit->setText(statusMeth);
			}else{
				ui.thStatusLineEdit->setText(statusSample);
			}
			ui.thMeasureLineEdit->setText(measuretxt);
		}// end of while loop
		ui.thMeasureLineEdit->clear();// if drop out of while loop measure if ended
		th_valvectrl.IO8b(); // not Rdy
	}
	else{
		ui.mainDetSigLCD->display(notCald);
		qDebug() <<"TH MAIN NOT CAL";
		ui.thMeasureLineEdit->clear();
		th_valvectrl.IO8b(); // not Rdy
	}
}

void tha2300::sendSerial_3(void){
	MainWindow mw;
	QString program = "/opt/Gow-Mac/bin/tha2300/./serialc3";///root/./serialc3";//cat /tmp/serdat.txt > /dev/ttyS3";///opt/Gow-Mac/bin/tha2300/./serialc3";//
	QString program2 = "rm /tmp/serdat.txt";
	QStringList arguments;
	QStringList arguments2;

	arguments << "";

    QFile file("/tmp/serdat.txt");

    if (!file.open(QIODevice::Append | QIODevice::Text))//WriteOnly
        return;

    QTextStream out(&file);

	out << SAMPLE_RESULT;
	out << '\r';
	out << '\n';

	qDebug() << "Wrote FILE";

    file.close();

	QProcess *myProcess = new QProcess(this);
	myProcess->start(program);
	myProcess->waitForFinished();

	QProcess *myProcess2 = new QProcess(this);
	myProcess2->start(program2);
	myProcess2->waitForFinished();
}
