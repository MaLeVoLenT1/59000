#ifndef RAMPOVEN_H
#define RAMPOVEN_H

#include <QtGui/QWidget>
#include "ui_rampoven.h"

class RampOven : public QWidget
{
    Q_OBJECT

signals:
//    void sendRampParameters(void);

public slots:
    void sendRampParameters(void);

public:
    RampOven(QWidget *parent = 0);
    ~RampOven();

private:
    Ui::RampOvenClass ui;
};

#endif // RAMPOVEN_H
