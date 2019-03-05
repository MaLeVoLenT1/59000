#ifndef RAMPOVEN_CALIBRATION_ZERO_H
#define RAMPOVEN_CALIBRATION_ZERO_H

#include <QtGui/QDialog>
#include "ui_rampoven_calibration_zero.h"

class rampoven_Calibration_Zero : public QDialog
{
    Q_OBJECT

public:
    rampoven_Calibration_Zero(QWidget *parent = 0);
    ~rampoven_Calibration_Zero();
public slots:
	void WriteDataButton(void);
	void ReadDataButton(void);

private:
    Ui::rampoven_Calibration_ZeroClass ui;
};

#endif // RAMPOVEN_CALIBRATION_ZERO_H
