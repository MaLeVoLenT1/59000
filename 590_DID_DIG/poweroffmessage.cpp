#include "poweroffmessage.h"
#include "_590_did_dig.h"

poweroffmessage::poweroffmessage(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);
}

poweroffmessage::~poweroffmessage()
{

}
void poweroffmessage::powerOff(void){
	_590_DID_DIG pofm;
	pofm.shutdownNow();
}
