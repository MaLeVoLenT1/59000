#ifndef OUTPUTGAINCTRL_H
#define OUTPUTGAINCTRL_H

#include <QtGui/QDialog>
#include "ui_outputgainctrl.h"

class OutputGainCtrl : public QDialog
{
    Q_OBJECT

public:
    OutputGainCtrl(QWidget *parent = 0);
    ~OutputGainCtrl();

public slots:
	void outputRange1(void);
	void outputRange2(void);
	void outputRange3(void);
	void outputRange4(void);
	void dwConfig(void);
	void keyReleaseEvent(QKeyEvent *e);

private:
    Ui::OutputGainCtrlClass ui;
};

#endif // OUTPUTGAINCTRL_H
