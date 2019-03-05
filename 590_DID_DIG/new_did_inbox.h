#ifndef NEW_DID_INBOX_H
#define NEW_DID_INBOX_H

#include <QtGui/QMainWindow>
#include "ui_new_did_inbox.h"

#include "calibrate.h"
#include "output.h"

#include "outputgainctrl.h"
#include "valves.h"

#include "detconfigure.h"
#include "poweroffmessage.h"

class NEW_DID_INBOX : public QMainWindow
{
    Q_OBJECT

public:
    NEW_DID_INBOX(QWidget *parent = 0);
    ~NEW_DID_INBOX();
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

public slots:

	void calibrat(void);
	void outpt(void);
	void data(void);
	void detcfg(void);
	void oGainCtrl(void);
//	void keyReleaseEvent(QKeyEvent *e);
//	void alarmOutput(double Sample);
	void measure(void);
	void displayStatusBusy(void);
	void displayStatusDone(void);
	void killSampFuelMethFlow(void);
	void callMain_datalog(void);
	void sendSerial_3(void);
	void callViewSigs(void);
	void initSettings(void);
	void shutdownNow(void);
	void shutDwnMsg(void);

private:
    Ui::NEW_DID_INBOXClass ui;
};

#endif // NEW_DID_INBOX_H
