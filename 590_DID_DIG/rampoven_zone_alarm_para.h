#ifndef RAMPOVEN_ZONE_ALARM_PARA_H
#define RAMPOVEN_ZONE_ALARM_PARA_H

#include <QtGui/QDialog>
#include "ui_rampoven_zone_alarm_para.h"

class rampoven_Zone_Alarm_para : public QDialog
{
    Q_OBJECT

public:
    rampoven_Zone_Alarm_para(QWidget *parent = 0);
    ~rampoven_Zone_Alarm_para();
public slots:
	void WriteDataButton(void);
	void ReadDataButton(void);

private:
    Ui::rampoven_Zone_Alarm_paraClass ui;
};

#endif // RAMPOVEN_ZONE_ALARM_PARA_H
