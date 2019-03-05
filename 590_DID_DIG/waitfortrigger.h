#ifndef WAITFORTRIGGER_H
#define WAITFORTRIGGER_H

#include <QtGui/QDialog>
#include "ui_waitfortrigger.h"

class waitForTrigger : public QDialog
{
    Q_OBJECT

public:
    waitForTrigger(QWidget *parent = 0);
    ~waitForTrigger();

private:
    Ui::waitForTriggerClass ui;
};

#endif // WAITFORTRIGGER_H
