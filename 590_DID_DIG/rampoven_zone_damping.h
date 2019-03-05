#ifndef RAMPOVEN_ZONE_DAMPING_H
#define RAMPOVEN_ZONE_DAMPING_H

#include <QtGui/QDialog>
#include "ui_rampoven_zone_damping.h"

class rampoven_Zone_Damping : public QDialog
{
    Q_OBJECT

public:
    rampoven_Zone_Damping(QWidget *parent = 0);
    ~rampoven_Zone_Damping();

public slots:
	void WriteDataButton(void);
	void ReadDataButton(void);
	void autoTuneStartButton(void);
	void readAutotuneStatus(int recipe_state);
protected:
	void keyReleaseEvent(QKeyEvent *event);
private:
    Ui::rampoven_Zone_DampingClass ui;
};

#endif // RAMPOVEN_ZONE_DAMPING_H
