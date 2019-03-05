#ifndef RAMPOVEN_COMM_H
#define RAMPOVEN_COMM_H

#include <QtGui/QDialog>
#include "ui_rampoven_comm.h"

class Rampoven_comm : public QDialog
{
    Q_OBJECT

public:
    Rampoven_comm(QWidget *parent = 0);
    ~Rampoven_comm();

public slots:
	void commProtocol(double valu);
	void commID(double valu);
	void baudrate(double valu);
	void parity(double valu);
	void Ieeeregordering(double valu);
	void ReadROCommParameters(void);
private:
    Ui::Rampoven_commClass ui;
};

#endif // RAMPOVEN_COMM_H
