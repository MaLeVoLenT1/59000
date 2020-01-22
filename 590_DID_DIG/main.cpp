#include "_590_did_dig.h"

#include <QtGui>
#include <QApplication>

#include <QtGui/QApplication>
#include "mainwindow.h"
#include "ovencontrol.h"
#include "valvecontrol.h"
#include "event_io.h"
#include "readflow.h"
#include "detconfigure.h"
#include "calibrate.h"
#include "setup.h"
#include "outputgainctrl.h"
#include "settemp.h"
#include <errno.h>
#include <QDebug>
#include <QProcess>
#include <QTimer>
#include <QThread>
#include <qtconcurrentrun.h>
#include <QFuture>
#include "unistd.h"
#include "stdlib.h"
#include "fcntl.h"
#include "stdio.h"
#include "valves.h"

#include "iio-utils.h"

extern unsigned int i2c_slaveAddr;
extern bool FLAMEON;

unsigned int hexHoldGlobal;// for writing baseline offset
unsigned int i2c_slaveAddr;
bool openCloseState;// for oven vent door
bool TRIGGER;
unsigned int detNumberDirector;// used to select detector for processing - Temporary find another way
double ZERO;
double ZERO_SAVE;
double SPAN;
double SAMPLE_VOLT;
double CONC;
double RAW_SPAN;
double SAMPLE_RESULT;
double CURRENTRANGE;

double SAMPLE_FLOW;
double temp_SAMP_FLOW;
double FUEL_FLOW;
double ZERO_FLOW;
double temp_ZERO_FLOW;
double AIR_FLOW;

double ALARMLO2;
double ALARMHI2;
double ALARMLO1;
double ALARMHI1;

bool ALARMACTIVE;
bool ALARM1ACTIVE;
bool ALARM2ACTIVE;
bool ALARM1STATE;
bool ALARM2STATE;

bool vstate1;
bool vstate2;
bool vstate3;
bool vstate4;
bool vstate5;
bool vstate6;

int HOUR;
int MINUTE;
int SECONDS;
int MILISECONDS;
int MONTH;
int DAY;
int YEAR;
bool DLOGCHECK;
bool READY;
bool IGNITE_DID1;
double updateRate = 750;
double updateRateSetup = 60000;
double updateRateSetup2 = 2000;
double DETTEMP;
double SAMPTEMP;
double METHTEMP;
double COLTEMP;
extern double lcdMultiplyer;
extern double ConcMultiplyer;
unsigned int Range;
extern bool dcGain1;
extern bool dcGain2;
extern double polvolt;
extern double dVC1d;

void deviceClose8100(int fd);

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    _590_DID_DIG w;
    w.show();

    valveControl mw_valveConfig;
    setup stup;
    detConfigure detConfig;
    OutputGainCtrl oprc;

   // unsigned int tempSid;

	w.displayStatusBusy();

    qDebug() << "Config valve - MAIN start in main";
    mw_valveConfig.configIO();
    qDebug() << "Config valve - MAIN END in main";

	detConfig.configIO(1);
	qDebug() << "Config IO - MAIN END in main";

	Range = 4;
	dcGain2 = 1;
	dcGain2 = 0;
	polvolt = 140;
	dVC1d = 525;

	IGNITE_DID1 = 0;
	lcdMultiplyer = 1.0;
	ConcMultiplyer = 1.0;

	stup.setPolVolt();// set pol volt to 160 removed wtr

	qDebug() << "Starting Test";
	detConfig.detDID_I_OnOffCtl();
	qDebug() << "Starting Test second";
	detConfig.detDID_I_Ctl();// Turn DID current control for the HV Voltage setting Full on
	qDebug() << "Starting Test third";
	oprc.outputRange4();
	detConfig.powerOnInitSettings();// Get Last Used Settings from disk

//	w.spi_init_5900();//spi_init();
//	w.setChannel(0,TRUE);

	qDebug() << "End of main";
	w.displayStatusDone();
    return a.exec();
}
void deviceClose8100(int fd){
	int treturn;

	treturn = close(fd);
}
void main_datalog(void){
	data NEW_DID_INBOX;

	NEW_DID_INBOX.saveDatalog();
}
