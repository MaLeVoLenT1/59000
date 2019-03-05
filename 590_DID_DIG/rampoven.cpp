#include "rampoven.h"
#include "ovenwidget.h"

RampOven::RampOven(QWidget *parent)
    : QWidget(parent)
{
	ui.setupUi(this);

	//connect(ui->ovenRampTempRadio, SIGNAL(toggled(bool)),this,SLOT(rampTempEnabler(bool)));
//	connect(ui->zoneApplyButton, SIGNAL(clicked()), this, SLOT(sendRampParameters());
}

RampOven::~RampOven()
{

}

void RampOven::sendRampParameters(void)
{

}
