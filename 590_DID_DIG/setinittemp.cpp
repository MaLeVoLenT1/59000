#include "setinittemp.h"
#include "mainwindow.h"
#include "rampmonitor.h"
#include "event_io.h"
#include "ovencontrol.h"
#include <QDebug>
#include <QApplication>
#include <QKeyEvent>

bool stopMe;
extern bool openCloseState;// for oven vent door
extern unsigned int i2c_slaveAddr;

setinittemp::setinittemp(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);

	//	connect(ui.closeButton, SIGNAL(clicked()),this, SLOT(test_slotwtrj2(void)));// test remove (works)
//	connect(ui.closeButton->click(), SIGNAL(clicked()), this, SLOT(stopMePlease()));
}

setinittemp::~setinittemp()
{
	OvenControl oc;
	oc.resetZone();// set to 0
}
void setinittemp::stopMePlease(void){
	stopMe = 0;
}
void setinittemp::keyReleaseEvent(QKeyEvent *event)
{
		switch (event->key()){
		case Qt::Key_F1:{
			ui.writeIniTempButton->click();
			qDebug() << "Released F1 Key";
			break;
		}
		case Qt::Key_F2:{
			qDebug() << "Released F2 Key";
			break;
		}
		case Qt::Key_F3:{
			stopMe = 0;
			ui.closeButton->click();
			qDebug() << "Released F3 Key";
			break;
		}
		case Qt::Key_F4:{
			ui.initTempReadButton->click();
			qDebug() << "Released F4 Key";
			break;
		}
		case Qt::Key_F5:{
			qDebug() << "Released F5 Key (DET 1)";
//			ui->partStack->setCurrentWidget(currentWidgetList[1]);
			break;
		}
		case Qt::Key_F6:{
			qDebug() << "Released F6 Key (Oven)";
//			ui->partStack->setCurrentWidget(currentWidgetList[0]);
			break;
		}
		case Qt::Key_F7:{
//			owReadFl.owReadFlow();
			qDebug() << "Released F7 Key (Flow)";
			break;
		}
		case Qt::Key_F8:{
			qDebug() << "Released F8 Key (Det 2)";
//			ui->partStack->setCurrentWidget(currentWidgetList[2]);
			break;
		}
		case Qt::Key_F9:{
//			owValves.owValveControl();
			qDebug() << "Released F9 Key (Valve)";
			break;
		}
		case Qt::Key_F10:{
			qDebug() << "Released F10 Key (Inj Port)";
//			ui->partStack->setCurrentWidget(currentWidgetList[3]);
			break;
		}
		default:{//
			break;
		}
	}
}
void setinittemp::write_init_temp(void)//(double valu)// Set Global Slave ID
{
	MainWindow writeEM;
	int addr;
	double valu;
	int target_valu, current_valu;

	valu = ui.rampInitTempSpinBox->value();
	addr = 1;// PV Temp to Ram and Rom

	writeEM.writeRecipeSetpoint(i2c_slaveAddr, addr, valu);
	writeEM.delay(50);
	target_valu = writeEM.readRecipeValue(i2c_slaveAddr, 16);
	writeEM.delay(50);
	current_valu = writeEM.readRecipeValue(i2c_slaveAddr, 0);
	if((current_valu < target_valu)){
		// close vent
		if(openCloseState == 1){
			writeEM.closeVent();
		}
	}
	if((current_valu > target_valu)){
			// open vent
		if(openCloseState == 0){
			writeEM.openVent();
		}
	}
}
void setinittemp::readInitTemp(void){// periodic display of "0"
	MainWindow readEM;
	event_io setRdy;

	int addr;
	unsigned int tempSid;
	double valu;

	addr = 0;
	stopMe = 1;
	tempSid = i2c_slaveAddr;
	i2c_slaveAddr = 0x40;
	setRdy.IO8b(); // not Rdy
	i2c_slaveAddr = tempSid;
	qDebug() << "Set not Rdy read init temp";
	while(stopMe){// wait for close button or ENTER to stop
		checkVentState();
		readEM.delay(50);
		valu = readEM.readRecipeValue(i2c_slaveAddr, addr);
		ui.rmInitTemplcdNumber->display(valu);
		qDebug() << "Reading init temp";
	}
}
bool setinittemp::checkVentState(void){
	MainWindow ovenState;
	event_io setRdy;

	bool state;
	int target_valu, current_valu;
	unsigned int tempSid;

	target_valu = ovenState.readRecipeValue(i2c_slaveAddr, 1);
	ovenState.delay(50);
	current_valu = ovenState.readRecipeValue(i2c_slaveAddr, 0);
	ovenState.delay(50);
	if((openCloseState == 1) && (current_valu <= target_valu + 2) && (current_valu >= target_valu - 2)){
		// close door
		qDebug("cSet p = %d", target_valu);
		qDebug("cAct = %d", current_valu);
		ovenState.closeVent();
		qDebug() << "vent closed after cooling";
		stopMePlease();// 9-11-14
	}
	if((current_valu <= target_valu + 2) && (current_valu >= target_valu - 2)){
		/*tempSid = i2c_slaveAddr;
		i2c_slaveAddr = 0x40;
		setRdy.IO8a(); // Rdy
		i2c_slaveAddr = tempSid;*/
	}else {
		tempSid = i2c_slaveAddr;
		i2c_slaveAddr = 0x40;
		setRdy.IO8b(); // Not Rdy
		i2c_slaveAddr = tempSid;
	}
	if(openCloseState == 1){
		state = 1;
		//ovenState.closeVent();
	}
	if(openCloseState == 0){
		state = 0;
		//ovenState.openVent();
	}

	return state;
}
