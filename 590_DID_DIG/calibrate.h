#ifndef CALIBRATE_H
#define CALIBRATE_H

#include <QtGui/QDialog>
#include "ui_calibrate.h"
#include "detconfigure.h"
#include "valves.h"

class calibrate : public QDialog
{
    Q_OBJECT

public:
    calibrate(QWidget *parent = 0);
    ~calibrate();
    detConfigure caldisplaySig;
    MainWindow cali2c;
	valveControl calvc;
	Valves calgas;

public slots:
	void readSignal(void);
    void zero(void);
    void span(void);
    void remoteCal(void);
	void keyReleaseEvent(QKeyEvent *e);
	void calRangeHi(void);
	void calRangeMid(void);
	void calRangeLo(void);
	void calRangeMin(void);
	void calZero(void);

private:
    Ui::calibrateClass ui;
};

#endif // CALIBRATE_H
