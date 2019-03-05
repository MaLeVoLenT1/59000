#include "gainpopup.h"
#include <QString>

gainPopUp::gainPopUp(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);

	qDebug("gainPopUp");
}

gainPopUp::~gainPopUp()
{

}
void gainPopUp::num_1(void){
	QString vall1;
	vall1 = '1';
	ui.lineEdit->insert(vall1);
}
void gainPopUp::num_2(void){
	QString vall1;
	vall1 = '2';
	ui.lineEdit->insert(vall1);
}
void gainPopUp::num_3(void){
	QString vall1;
	vall1 = '3';
	ui.lineEdit->insert(vall1);
}
void gainPopUp::num_4(void){
	QString vall1;
	vall1 = '4';
	ui.lineEdit->insert(vall1);
}
void gainPopUp::num_5(void){
	QString vall1;
	vall1 = '5';
	ui.lineEdit->insert(vall1);
}
void gainPopUp::num_6(void){
	QString vall1;
	vall1 = '6';
	ui.lineEdit->insert(vall1);
}
void gainPopUp::num_7(void){
	QString vall1;
	vall1 = '7';
	ui.lineEdit->insert(vall1);
}
void gainPopUp::num_8(void){
	QString vall1;
	vall1 = '8';
	ui.lineEdit->insert(vall1);
}
void gainPopUp::num_9(void){
	QString vall1;
	vall1 = '9';
	ui.lineEdit->insert(vall1);
}
void gainPopUp::num_0(void){
	QString vall1;
	vall1 = '0';
	ui.lineEdit->insert(vall1);
}
void gainPopUp::num_minus(void){
	QString vall1;
	vall1 = '-';
	ui.lineEdit->insert(vall1);
}
void gainPopUp::num_period(void){
	QString vall1;
	vall1 = '.';
	ui.lineEdit->insert(vall1);
}
void gainPopUp::num_Clear(void){
//	QString vall1;
//	vall1 = '\b';
	ui.lineEdit->clear();//->insert(vall1);
}
void gainPopUp::processNumIn(void){
	QString val1;
	QString txt;

	txt = ui.lineEdit->text();
	transfer.deleteGainPop(txt);//
}
QString gainPopUp::popupNumInReturn(void){
	QString txt;

	txt = ui.lineEdit->text();

	return txt;
}
