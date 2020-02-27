#ifndef _590_DID_DIG_H
#define _590_DID_DIG_H

#include <QtGui/QMainWindow>
#include "ui__590_did_dig.h"

#include "calibrate.h"
#include "output.h"

#include "outputgainctrl.h"
#include "valves.h"

#include "detconfigure.h"
#include "poweroffmessage.h"

//Added by Dione.
#include "numericinput.h"
#include "temppopup.h"
#include "gainpopup.h"
#include "polpopup.h"
#include "pleasewait.h"
#include "numpopup.h"
#include "polarizepopup.h"
#include "voltagenumpopup.h"
#include "ovenwidget.h"
#include <string>

class _590_DID_DIG : public QMainWindow
{
    Q_OBJECT

public:
    _590_DID_DIG(QWidget *parent = 0);
    ~_590_DID_DIG();

    //    detConfigure th_displaySig;
    //    detConfigure NDB_detcfg;
        detConfigure dc;
    //    MainWindow th_mw;
    //    calibrate th_cal;
        setup th_stup;
    //    output th_otpt;
    //    valveControl th_valvectrl;
    //    OutputGainCtrl th_ogctrl;
    //    Valves th_gas;
        MainWindow th_i2c;
        QString alarm1Display;
        QString alarm2Display;
        QString busyState;
        QString notBusyState;

    // Added By Dione.
        MainWindow dci2c;
        MainWindow vc_i2c;
        QString completeProcess;

    // Moved UI from Private to Public by Dione.
        Ui::_590_DID_DIGClass ui;

public slots:

	void calibrat(void);
	void outpt(void);
	void data(void);
	//void detcfg(void);
	void oGainCtrl(void);
//	void keyReleaseEvent(QKeyEvent *e);
//	void alarmOutput(double Sample);
	//void measure(void);
	void displayStatusBusy(void);
	void displayStatusDone(void);
	void killSampFuelMethFlow(void);
	void callMain_datalog(void);
	//void sendSerial_3(void);
	void callViewSigs(void);
	void initSettings(void);
	void shutdownNow(void);
	void shutDwnMsg(void);

	// Added by Dione.
	void detRange(void);
	void detGain(void);
	void detDIDIgnite(void);
		double detDID_I_read(void);
		double detHvSig(void);
	//void detIgn(void);
	void detPolSet(void);
		double detPolSig(void);
	double detDIDSig(void);
	double detTCD_I_Sig(void);
	void detDID_I_Ctl(void);
	void detDID_I_OnOffCtl(void);
	//void detDID_V_Ctl(void);
	void configIO(unsigned int num);
	void detRead(void);
	void pleaseWaitForIt(void);
	//void detMoveBaseline(void);
	void detTCDPolarityfCtl(void);
	double FlowH2read(void);
	double FlowAirread(void);
	double FlowSampread(void);
	double FlowMethread(void);
	QString numIn(void);
	QString numInPopUp(void);
	void setTempLabel(QString txt, int OvenType);
	QString numInPolarizationPopUp(void);
	QString numInVoltagePopUp(void);
	QString numInTempPopUp(void);
	//QString numInPolPopUp(unsigned int target);
	void tempSetPoint(int _t1, int _t2);
	QString numInGainPopUp(void);
	//void deleteNumIn(QString);
	void deleteNumPop(QString txt);
	void deleteGainPop(QString txt);
	void externalValves(void);
	//void powerOnInitSettings(void);
	void setSettings(void);
	void saveDetSettings(void);
	//void processDid_line(QByteArray line, unsigned int nex);
	void processDid_line(unsigned int nex);
	void getDidSettings(void);
	void setSettings2(void);
	int getRange(void);
	//void calltempUpdates(void);

	// Valve One
	void IO20b(void);
	void IO20a(void);
	void activateValve1(void);

	// Valve Two
	void IO19a(void);
	void IO19b(void);
	void activateValve2(void);

	// Valve Three
	void IO18a(void);
	void IO18b(void);
	void activateValve3(void);

	// Valve Four
	void IO17a(void);
	void IO17b(void);
	void activateValve4(void);

	// POL Volt delete.
	void deletePolPop(QString txt);

	double detDIDZeroCtl(void);

	void fireOvenCommands(void);


private:

};

#endif // _590_DID_DIG_H
