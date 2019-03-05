#ifndef READPRESSURE_H
#define READPRESSURE_H

#include <QtGui/QDialog>
#include "ui_readpressure.h"

class readPressure : public QDialog
{
    Q_OBJECT

public:
    readPressure(QWidget *parent = 0);
    ~readPressure();

public slots:
	void pressureConfig(void);
	void pressureMeter(void);

protected:
	void keyReleaseEvent(QKeyEvent *event);

private:
    Ui::readPressureClass ui;
};

#endif // READPRESSURE_H
