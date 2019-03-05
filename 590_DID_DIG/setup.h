#ifndef SETUP_H
#define SETUP_H

#include <QtGui/QDialog>
#include "ui_setup.h"

class setup : public QDialog
{
    Q_OBJECT

public:
    setup(QWidget *parent = 0);
    ~setup();
public slots:
	void setH2Flow(void);
	void setCH4Flow(void);
	void setAirFlow(void);
	void setSampFlow(void);
	void setPolVolt(void);
	void igniteDet(void);
	void sTsetTemp(void);
//	void alarmOutput(double Sample);
	void readAlarmOutput(void);
	bool checkFlame(void);
	void keyReleaseEvent(QKeyEvent *e);
	void saveAlarm(void);
	void getAlarm(void);
	void processAlarm_line(QByteArray line, unsigned int nex);
	void processGas_line(QByteArray line, unsigned int nex);
	void saveGas(void);
	void getGas(void);
	void killFlowSafety(void);
	void setSampToZero(void);
	void resetSamp(void);

private:
    Ui::setupClass ui;
};

#endif // SETUP_H
