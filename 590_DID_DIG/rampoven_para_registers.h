#ifndef RAMPOVEN_PARA_REGISTERS_H
#define RAMPOVEN_PARA_REGISTERS_H

#include <QtGui/QDialog>
#include "ui_rampoven_para_registers.h"

class rampoven_para_registers : public QDialog
{
    Q_OBJECT

public:
    rampoven_para_registers(QWidget *parent = 0);
    ~rampoven_para_registers();
public slots:
	void WriteDataButton(void);
	void ReadDataButton(void);

private:
    Ui::rampoven_para_registersClass ui;
};

#endif // RAMPOVEN_PARA_REGISTERS_H
