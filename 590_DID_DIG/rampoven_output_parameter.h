#ifndef RAMPOVEN_OUTPUT_PARAMETER_H
#define RAMPOVEN_OUTPUT_PARAMETER_H

#include <QtGui/QDialog>
#include "ui_rampoven_output_parameter.h"

class rampoven_output_parameter : public QDialog
{
    Q_OBJECT

public:
    rampoven_output_parameter(QWidget *parent = 0);
    ~rampoven_output_parameter();

public slots:


	void ReadROOutputparameters(void);
	void WritesData(void);

private:
    Ui::rampoven_output_parameterClass ui;
};

#endif // RAMPOVEN_OUTPUT_PARAMETER_H
