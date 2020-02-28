#include "numpopup.h"
#include <QString>
#include "_590_did_dig.h"

numPopUp::numPopUp(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);

	qDebug("numPopUp");
}

numPopUp::~numPopUp()
{

}
void numPopUp::num_1(void){
	QString vall1;
	vall1 = '1';
	ui.lineEdit->insert(vall1);
}
void numPopUp::num_2(void){
	QString vall1;
	vall1 = '2';
	ui.lineEdit->insert(vall1);
}
void numPopUp::num_3(void){
	QString vall1;
	vall1 = '3';
	ui.lineEdit->insert(vall1);
}
void numPopUp::num_4(void){
	QString vall1;
	vall1 = '4';
	ui.lineEdit->insert(vall1);
}
void numPopUp::num_5(void){
	QString vall1;
	vall1 = '5';
	ui.lineEdit->insert(vall1);
}
void numPopUp::num_6(void){
	QString vall1;
	vall1 = '6';
	ui.lineEdit->insert(vall1);
}
void numPopUp::num_7(void){
	QString vall1;
	vall1 = '7';
	ui.lineEdit->insert(vall1);
}
void numPopUp::num_8(void){
	QString vall1;
	vall1 = '8';
	ui.lineEdit->insert(vall1);
}
void numPopUp::num_9(void){
	QString vall1;
	vall1 = '9';
	ui.lineEdit->insert(vall1);
}
void numPopUp::num_0(void){
	QString vall1;
	vall1 = '0';
	ui.lineEdit->insert(vall1);
}
void numPopUp::num_minus(void){
	QString vall1;
	vall1 = '-';
	ui.lineEdit->insert(vall1);
}
void numPopUp::num_period(void){
	QString vall1;
	vall1 = '.';
	ui.lineEdit->insert(vall1);
}
void numPopUp::num_clear(void){
//	QString vall1;
//	vall1 = '\b';
	ui.lineEdit->clear();//->insert(vall1);
}
// Copy this
void numPopUp::processNumIn(void){
	QString val1;
	QString txt;

	//qDebug("Processing Polarization Voltage");
	if(ui.lineEdit->text() == NULL){
			qDebug("No Value Entered for Detector Temperature.");
		}
		else{
			txt = ui.lineEdit->text();

			((_590_DID_DIG*)(parent()))->ui.detectorTempLine->setText(txt);


			//xferToMain.setDetectorTemp(txt);
			xferToMain.SetModBusTemp("2", txt);
			qDebug("Setting Detector Temperature.");
			//ui.lineEdit->clear();
		}

}
QString numPopUp::popupNumInReturn(void){
	QString txt;

	txt = ui.lineEdit->text();

	return txt;
}
