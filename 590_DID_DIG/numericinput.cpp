#include "numericinput.h"
#include <QString>

numericInput::numericInput(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);
}

numericInput::~numericInput()
{

}
void numericInput::num_1(void){
	QString vall1;
	vall1 = '1';
	ui.lineEdit->insert(vall1);
}
void numericInput::num_2(void){
	QString vall1;
	vall1 = '2';
	ui.lineEdit->insert(vall1);
}
void numericInput::num_3(void){
	QString vall1;
	vall1 = '3';
	ui.lineEdit->insert(vall1);
	qDebug("numericInput");
}
void numericInput::num_4(void){
	QString vall1;
	vall1 = '4';
	ui.lineEdit->insert(vall1);
	qDebug("numericInput");
}
void numericInput::num_5(void){
	QString vall1;
	vall1 = '5';
	ui.lineEdit->insert(vall1);
}
void numericInput::num_6(void){
	QString vall1;
	vall1 = '6';
	ui.lineEdit->insert(vall1);
}
void numericInput::num_7(void){
	QString vall1;
	vall1 = '7';
	ui.lineEdit->insert(vall1);
}
void numericInput::num_8(void){
	QString vall1;
	vall1 = '8';
	ui.lineEdit->insert(vall1);
}
void numericInput::num_9(void){
	QString vall1;
	vall1 = '9';
	ui.lineEdit->insert(vall1);
}
void numericInput::num_0(void){
	QString vall1;
	vall1 = '0';
	ui.lineEdit->insert(vall1);
}
void numericInput::num_minus(void){
	QString vall1;
	vall1 = '-';
	ui.lineEdit->insert(vall1);
	qDebug("numericInput");
}
void numericInput::num_period(void){
	QString vall1;
	vall1 = '.';
	ui.lineEdit->insert(vall1);
	qDebug("numericInput");
}
void numericInput::num_Clear(void){
//	QString vall1;
//	vall1 = '\b';
	ui.lineEdit->clear();//->insert(vall1);
	qDebug("numericInput");
}
void numericInput::processNumIn(void){
	QString val1;
	QString txt;

	txt = ui.lineEdit->text();
	transfer.deleteNumIn(txt);//
	qDebug("numericInput");

	//transfer.detDIDOffSetBLSpinBox->setValue(val2);

//	this->close();
}
QString numericInput::popupNumInReturn(void){
	QString txt;

	txt = ui.lineEdit->text();

	qDebug("numericInput");

	return txt;
}
