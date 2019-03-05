#ifndef RAMPOVEN_CAL_ZERO_H
#define RAMPOVEN_CAL_ZERO_H

#include <QtGui/QDialog>
#include "ui_rampoven_cal_zero.h"

class rampoven_cal_zero : public QDialog
{
    Q_OBJECT

public:
    rampoven_cal_zero(QWidget *parent = 0);
    ~rampoven_cal_zero();

public slots:
	void WriteDataButton(void);
	void ReadDataButton(void);

private:
    Ui::rampoven_cal_zeroClass ui;
};

#endif // RAMPOVEN_CAL_ZERO_H
