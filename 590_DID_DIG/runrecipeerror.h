#ifndef RUNRECIPEERROR_H
#define RUNRECIPEERROR_H

#include <QtGui/QDialog>
#include "ui_runrecipeerror.h"

class runRecipeerror : public QDialog
{
    Q_OBJECT

public:
    runRecipeerror(QWidget *parent = 0);
    ~runRecipeerror();

private:
    Ui::runRecipeerrorClass ui;
};

#endif // RUNRECIPEERROR_H
