#include "voltagenumpopup.h"
#include <QString>

voltageNumPopUp::voltageNumPopUp(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);
	//qDebug("Voltage Popup");
}

voltageNumPopUp::~voltageNumPopUp()
{

}

void voltageNumPopUp::num_1(void){
	QString vall1;
	vall1 = '1';
	ui.lineEdit->insert(vall1);
}
void voltageNumPopUp::num_2(void){
	QString vall1;
	vall1 = '2';
	ui.lineEdit->insert(vall1);
}
void voltageNumPopUp::num_3(void){
	QString vall1;
	vall1 = '3';
	ui.lineEdit->insert(vall1);
}
void voltageNumPopUp::num_4(void){
	QString vall1;
	vall1 = '4';
	ui.lineEdit->insert(vall1);
}
void voltageNumPopUp::num_5(void){
	QString vall1;
	vall1 = '5';
	ui.lineEdit->insert(vall1);
}
void voltageNumPopUp::num_6(void){
	QString vall1;
	vall1 = '6';
	ui.lineEdit->insert(vall1);
}
void voltageNumPopUp::num_7(void){
	QString vall1;
	vall1 = '7';
	ui.lineEdit->insert(vall1);
}
void voltageNumPopUp::num_8(void){
	QString vall1;
	vall1 = '8';
	ui.lineEdit->insert(vall1);
}
void voltageNumPopUp::num_9(void){
	QString vall1;
	vall1 = '9';
	ui.lineEdit->insert(vall1);
}
void voltageNumPopUp::num_0(void){
	QString vall1;
	vall1 = '0';
	ui.lineEdit->insert(vall1);
}
void voltageNumPopUp::num_minus(void){
	QString vall1;
	vall1 = '-';
	ui.lineEdit->insert(vall1);
}
void voltageNumPopUp::num_period(void){
	QString vall1;
	vall1 = '.';
	ui.lineEdit->insert(vall1);
}
void voltageNumPopUp::num_clear(void){
//	QString vall1;
//	vall1 = '\b';
	ui.lineEdit->clear();//->insert(vall1);
}
void voltageNumPopUp::processNumIn(void){
	QString val1;
	QString txt;
	if(ui.lineEdit->text() == NULL){
		qDebug("No Value Entered");
	}
	else{
		txt = ui.lineEdit->text();
		ui.lineEdit->clear();
		transfer.deleteVoltageNumPop(txt);
		qDebug("Sending Voltage.");
	}


}
QString voltageNumPopUp::popupNumInReturn(void){
	QString txt;

	txt = ui.lineEdit->text();

	return txt;
}
