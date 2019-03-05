#ifndef PLEASEWAIT_H
#define PLEASEWAIT_H

#include <QtGui/QDialog>
#include "ui_pleasewait.h"

class pleaseWait : public QDialog
{
    Q_OBJECT

public:
    pleaseWait(QWidget *parent = 0);
    ~pleaseWait();

private:
    Ui::pleaseWaitClass ui;
};

#endif // PLEASEWAIT_H
