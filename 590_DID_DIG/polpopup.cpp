#include "polpopup.h"
#include <QString>
#include "_590_did_dig.h"

polPopUp::polPopUp(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);

	qDebug("polPopUp");
}

polPopUp::~polPopUp()
{

}
void polPopUp::num_1(void){
	QString vall1;
	vall1 = '1';
	ui.lineEdit->insert(vall1);
}
void polPopUp::num_2(void){
	QString vall1;
	vall1 = '2';
	ui.lineEdit->insert(vall1);
}
void polPopUp::num_3(void){
	QString vall1;
	vall1 = '3';
	ui.lineEdit->insert(vall1);
}
void polPopUp::num_4(void){
	QString vall1;
	vall1 = '4';
	ui.lineEdit->insert(vall1);
}
void polPopUp::num_5(void){
	QString vall1;
	vall1 = '5';
	ui.lineEdit->insert(vall1);
}
void polPopUp::num_6(void){
	QString vall1;
	vall1 = '6';
	ui.lineEdit->insert(vall1);
}
void polPopUp::num_7(void){
	QString vall1;
	vall1 = '7';
	ui.lineEdit->insert(vall1);
}
void polPopUp::num_8(void){
	QString vall1;
	vall1 = '8';
	ui.lineEdit->insert(vall1);
}
void polPopUp::num_9(void){
	QString vall1;
	vall1 = '9';
	ui.lineEdit->insert(vall1);
}
void polPopUp::num_0(void){
	QString vall1;
	vall1 = '0';
	ui.lineEdit->insert(vall1);
}
void polPopUp::num_minus(void){
	QString vall1;
	vall1 = '-';
	ui.lineEdit->insert(vall1);
}
void polPopUp::num_period(void){
	QString vall1;
	vall1 = '.';
	ui.lineEdit->insert(vall1);
}
void polPopUp::num_Clear(void){
//	QString vall1;
//	vall1 = '\b';
	ui.lineEdit->clear();//->insert(vall1);
}
// Copy this
void polPopUp::processNumIn(void){

	QString txt;
	qDebug(ui.lineEdit->text());
		if(ui.lineEdit->text() == NULL){
				qDebug("No Value Entered for Oven Temperature.");
			}
			else{
				txt = ui.lineEdit->text();

				((_590_DID_DIG*)(parent()))->ui.collumnTempLine->setText(txt);


				//xferToMain.setCollumnTemp(txt);
				xferToMain.SetModBusTemp("1", txt);
				qDebug("Setting Column Temperature.");
				//ui.lineEdit->clear();
			}

}
QString polPopUp::popupNumInReturn(void){
	QString txt;

	txt = ui.lineEdit->text();

	return txt;
}
