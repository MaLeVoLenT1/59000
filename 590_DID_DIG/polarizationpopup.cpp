#include "polarizationpopup.h"

PolarizationPopUp::PolarizationPopUp(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);
	qDebug("Polarization Pop-Up Init");
}

PolarizationPopUp::~PolarizationPopUp()
{

}
void PolarizationPopUp::num_1(void){
	QString vall1;
	vall1 = '1';
	ui.lineEdit->insert(vall1);
}
void PolarizationPopUp::num_2(void){
	QString vall1;
	vall1 = '2';
	ui.lineEdit->insert(vall1);
}
void PolarizationPopUp::num_3(void){
	QString vall1;
	vall1 = '3';
	ui.lineEdit->insert(vall1);
}
void PolarizationPopUp::num_4(void){
	QString vall1;
	vall1 = '4';
	ui.lineEdit->insert(vall1);
}
void PolarizationPopUp::num_5(void){
	QString vall1;
	vall1 = '5';
	ui.lineEdit->insert(vall1);
}
void PolarizationPopUp::num_6(void){
	QString vall1;
	vall1 = '6';
	ui.lineEdit->insert(vall1);
}
void PolarizationPopUp::num_7(void){
	QString vall1;
	vall1 = '7';
	ui.lineEdit->insert(vall1);
}
void PolarizationPopUp::num_8(void){
	QString vall1;
	vall1 = '8';
	ui.lineEdit->insert(vall1);
}
void PolarizationPopUp::num_9(void){
	QString vall1;
	vall1 = '9';
	ui.lineEdit->insert(vall1);
}
void PolarizationPopUp::num_0(void){
	QString vall1;
	vall1 = '0';
	ui.lineEdit->insert(vall1);
}
void PolarizationPopUp::num_minus(void){
	QString vall1;
	vall1 = '-';
	ui.lineEdit->insert(vall1);
}
void PolarizationPopUp::num_period(void){
	QString vall1;
	vall1 = '.';
	ui.lineEdit->insert(vall1);
}
void PolarizationPopUp::num_clear(void){
//	QString vall1;
//	vall1 = '\b';
	ui.lineEdit->clear();//->insert(vall1);
}
void PolarizationPopUp::processNumIn(void){
	QString val1;
	QString txt;
	qDebug("Processing Polarization Voltage");

	if(ui.lineEdit->text() == NULL){
			qDebug("No Value Entered for Polarization Voltage.");
		}
		else{
			txt = ui.lineEdit->text();
			ui.lineEdit->clear();
			transfer.passPolarization(txt);
			qDebug("Sending Polarization Voltage.");
		}



	txt = ui.lineEdit->text();
	//
}
QString PolarizationPopUp::popupNumInReturn(void){
	QString txt;

	txt = ui.lineEdit->text();

	return txt;
}
