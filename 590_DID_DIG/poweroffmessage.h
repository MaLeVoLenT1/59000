#ifndef POWEROFFMESSAGE_H
#define POWEROFFMESSAGE_H

#include <QtGui/QDialog>
#include "ui_poweroffmessage.h"
#include "new_did_inbox.h"

class poweroffmessage : public QDialog
{
    Q_OBJECT

public:
    poweroffmessage(QWidget *parent = 0);
    ~poweroffmessage();

public slots:
	void powerOff(void);

private:
    Ui::poweroffmessageClass ui;
};

#endif // POWEROFFMESSAGE_H
