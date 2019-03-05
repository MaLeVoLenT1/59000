#ifndef VALVES_H
#define VALVES_H

#include <QtGui/QDialog>
#include "ui_valves.h"
#include "valvecontrol.h"
//#include <QKeyEvent>

class Valves : public QDialog
{
    Q_OBJECT

public:
    Valves(QWidget *parent = 0);
    ~Valves();
    valveControl svalve;
//    QCursor crr;

public slots:
	void sampValveCtl(void);//(bool vstate);
	void zeroValveCtl(void);//(bool vstate);
	void spanValveCtl(void);//(bool vstate);
	void gsValve1(void);
	void gsValve2(void);
	void gsValve3(void);
	void keyReleaseEvent(QKeyEvent *event);
private:
    Ui::ValvesClass ui;
};

#endif // VALVES_H
