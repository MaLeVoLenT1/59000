#ifndef THA2300_H
#define THA2300_H

#include <QtGui/QMainWindow>
#include "ui_tha2300.h"
#include "calibrate.h"
#include "output.h"
//#include "detconfigure.h"
//#include "mainwindow.h" out for test vc
#include "outputgainctrl.h"
#include "valves.h"
//#include "setup.h"
//#include "data.h"//has mainwindow_h added for mem leak issue
//#include "valvecontrol.h" removed because of valves.h

class tha2300 : public QMainWindow
{
    Q_OBJECT

public:
    tha2300(QWidget *parent = 0);
    ~tha2300();
    detConfigure th_displaySig;
    MainWindow th_mw;
    calibrate th_cal;
    setup th_stup;
    output th_otpt;
    valveControl th_valvectrl;
    OutputGainCtrl th_ogctrl;
    Valves th_gas;
    MainWindow th_i2c;

public slots:

	void calibrat(void);
	void outpt(void);
	void data(void);
	void keyReleaseEvent(QKeyEvent *e);
	void alarmOutput(double Sample);
	void measure(void);
	void displayStatusBusy(void);
	void displayStatusDone(void);
	void killSampFuelMethFlow(void);
	void callMain_datalog(void);
	void sendSerial_3(void);

private:
    Ui::tha2300Class ui;
};

#endif // THA2300_H
