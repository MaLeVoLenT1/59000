#ifndef RAMPOVEN_REGISTERS_H
#define RAMPOVEN_REGISTERS_H

#include <QtGui/QDialog>
#include "ui_rampoven_registers.h"

class rampoven_Registers : public QDialog
{
    Q_OBJECT

public:
    rampoven_Registers(QWidget *parent = 0);
    ~rampoven_Registers();
public slots:
	void WriteDataButton(void);
	void ReadDataButton(void);

private:
    Ui::rampoven_RegistersClass ui;
};

#endif // RAMPOVEN_REGISTERS_H
