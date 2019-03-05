#ifndef OUTPUT_H
#define OUTPUT_H

#include <QtGui/QDialog>
#include "ui_output.h"
#include "data.h" // added for mem leak main wibdow h included
#include "setup.h"
#include "detconfigure.h"// added for mem leak

class output : public QDialog
{
    Q_OBJECT

public:
    output(QWidget *parent = 0);
    ~output();
	setup sup;
	MainWindow opi2c;
	detConfigure opreadSig;

public slots:
	void setup_1(void);
	void oValvesCtrl(void);
	void oGainCtrl(void);
	void oreadSignal(void);
	void keyReleaseEvent(QKeyEvent *e);
	void current4to20mAOutput(double Sample);
private:
    Ui::outputClass ui;
};

#endif // OUTPUT_H
