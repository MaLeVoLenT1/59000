#ifndef RAMPOVEN_ZONE_CONTROL_H
#define RAMPOVEN_ZONE_CONTROL_H



#include <QtGui/QDialog>
#include "ui_rampoven_zone_control.h"

class rampoven_zone_control : public QDialog
{
    Q_OBJECT

public:
    rampoven_zone_control(QWidget *parent = 0);
    ~rampoven_zone_control();

public slots:
	void WriteDataButton(void);
	void ReadDataButton(void);


private:
    Ui::rampoven_zone_controlClass ui;
};

#endif // RAMPOVEN_ZONE_CONTROL_H
