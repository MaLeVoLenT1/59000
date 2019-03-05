#ifndef INPUTPARAM_H
#define INPUTPARAM_H

#include <QtGui/QDialog>
#include "ui_inputparam.h"

class inputParam : public QDialog
{
    Q_OBJECT

public:
    inputParam(QWidget *parent = 0);
    ~inputParam();

public slots:
	void intype(double valu);
	void indebounce(double valu);
	void inbias(double valu);
	void lisll(double valu);
	void lishl(double valu);
	void spll(double valu);
	void sphl(double valu);
	void infilter(double valu);
	void WriteDataButton(void);
	void ReadROinputparameters(void);

private:
    Ui::inputParamClass ui;
};

#endif // INPUTPARAM_H
