#ifndef POWEROFFMSG_H
#define POWEROFFMSG_H

#include <QtGui/QWidget>
#include "ui_poweroffmsg.h"

class poweroffmsg : public QWidget
{
    Q_OBJECT

public:
    poweroffmsg(QWidget *parent = 0);
    ~poweroffmsg();

private:
    Ui::poweroffmsgClass ui;
};

#endif // POWEROFFMSG_H
