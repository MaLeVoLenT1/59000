#ifndef VALVECONTROL_H
#define VALVECONTROL_H

#include <QtGui/QDialog>
#include "ui_valvecontrol.h"
//#include "mainwindow.h"
#include "data.h"// added because it has mainwindow.h in it- no other conflicts
#include "setup.h"

class valveControl : public QDialog
{
    Q_OBJECT

public:
    valveControl(QWidget *parent = 0);
    ~valveControl();
    MainWindow vc_i2c;
    setup stup;

public slots:
	void remoteCalTrigger(void);
	void testRdInput(void);
	unsigned int fidH2BypassRdInput(void);
	void configIO(void);

	////////////////// GS Valves
	void IO5a(void);
	void IO5b(void);
	void IO6a(void);
	void IO6b(void);
	void IO7a(void);
	void IO7b(void);
	////////////////// ready
	void IO8a(void);
	void IO8b(void);
	////////////////// IGNITE
	void IO11a(void);
	void IO11b(void);
	//////////////////Valve 1 to 8
	//////////////////// AUX - samp / zero / span ctrl
	void IO12a(void);
	void IO12b(void);
	void IO13a(void);
	void IO13b(void);
	void IO14a(void);
	void IO14b(void);
	////////////////////
	void IO15a(void);
	void IO15b(void);
	void IO16a(void);
	void IO16b(void);
	void IO17a(void);
	void IO17b(void);
	void IO18a(void);
	void IO18b(void);
	void IO19a(void);
	void IO19b(void);
	void IO20a(void);
	void IO20b(void);
	void readValveState(void);
	////////////////// VAlves end
private:
    Ui::valveControlClass ui;
//    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *e);/////////////   06/19/2014
};

#endif // VALVECONTROL_H
