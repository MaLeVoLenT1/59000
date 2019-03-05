#ifndef RAMPMONITOR_H
#define RAMPMONITOR_H

#include <QtGui/QDialog>
#include "ui_rampmonitor.h"

class rampMonitor : public QDialog
{
    Q_OBJECT

public:
    rampMonitor(QWidget *parent = 0);
    ~rampMonitor();

public slots:
	void monitorRun(void);
	void monitorabort(void);
    int read_recipeStatus(int recipe_state);
    void slotTimeout(int monSec);
    void waitForTgr(void);

protected:
	void keyPressEvent(QKeyEvent * e);/////////////   06/20/2014
    void keyReleaseEvent(QKeyEvent *e);/////////////   06/19/2014

private:
    Ui::rampMonitorClass ui;
};

#endif // RAMPMONITOR_H
