#include "valves.h"
#include "setup.h"
#include <QDebug>
#include <QKeyEvent>

extern bool vstate1;
extern bool vstate2;
extern bool vstate3;
extern bool vstate4;
extern bool vstate5;
extern bool vstate6;

extern double SAMPLE_FLOW;
extern 	double temp_SAMP_FLOW;
extern double ZERO_FLOW;

Valves::Valves(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);

	ui.vSampleCheckBox->setChecked(vstate4);
	ui.vZeroCheckBox->setChecked(vstate5);
	ui.vSpanCheckBox->setChecked(vstate6);

	ui.vValve1CheckBox->setChecked(vstate1);
	ui.vValve2CheckBox->setChecked(vstate2);
	ui.vValve3CheckBox->setChecked(vstate3);
}

Valves::~Valves()
{

}

////////////////////////////////////////////////////// Sample bank : span, zero, sample manifold
void Valves::sampValveCtl(void){
	QCursor crr;
	crr.setPos(2, 2);
	MainWindow i2c;
	setup sp_flow;
	QString vGasL;
	QString Valve;
	QString vGasR;
	QString vDone;

	vGasL = "Busy.... Lowering Sample Flow";
	vGasR = "Busy.... Raising Sample Flow";
	Valve = "Busy.... Changing Valve";
	vDone = "Done";

	ui.busyLineEdit->setText(vGasL);

	temp_SAMP_FLOW = SAMPLE_FLOW;

	sp_flow.setSampToZero();// set spin box to zero

	sp_flow.setSampFlow();
	i2c.delay(10000);

	ui.busyLineEdit->setText(Valve);

	svalve.IO13b();
	ui.vZeroCheckBox->setChecked(0);
	svalve.IO14b();
	ui.vSpanCheckBox->setChecked(0);
	svalve.IO12a();
	ui.vSampleCheckBox->setChecked(1);
	vstate5 = 0;
	vstate6 = 0;
	vstate4 = 1;

	svalve.IO11a(); // set ignite relay
	i2c.delay(20000);
	svalve.IO11b(); // set ignite relay

	SAMPLE_FLOW = temp_SAMP_FLOW;
	ui.busyLineEdit->setText(vGasR);
	sp_flow.resetSamp();
	qDebug(" V SAMPLE FLOW Reset %f", temp_SAMP_FLOW);
	sp_flow.setSampFlow();

	ui.busyLineEdit->setText(vDone);
}

void Valves::zeroValveCtl(void){
	QCursor crr;
	crr.setPos(2, 2);
	MainWindow i2c;
	setup sp_flow;
	QString vGasL;
	QString Valve;
	QString vGasR;
	QString vDone;

	vGasL = "Busy.... Lowering Sample Flow";
	vGasR = "Busy.... Raising Sample Flow";
	Valve = "Busy.... Changing Valve";
	vDone = "Done";

	ui.busyLineEdit->setText(vGasL);
	qDebug("vt cal ZERO FLOW Reset %f", temp_SAMP_FLOW);
	qDebug("vs cal ZERO FLOW Reset %f", SAMPLE_FLOW);
	temp_SAMP_FLOW = SAMPLE_FLOW;

	sp_flow.setSampToZero();// set spin box to zero

	sp_flow.setSampFlow();// pulling from spinbox
	i2c.delay(10000);

	ui.busyLineEdit->setText(Valve);

	svalve.IO12b();
	ui.vSampleCheckBox->setChecked(0);
	svalve.IO14b();
	ui.vSpanCheckBox->setChecked(0);
	svalve.IO13a();
	ui.vZeroCheckBox->setChecked(1);
	vstate4 = 0;
	vstate6 = 0;
	vstate5 = 1;

	svalve.IO11a(); // set ignite relay
	i2c.delay(20000);
	svalve.IO11b(); // set ignite relay

	SAMPLE_FLOW = temp_SAMP_FLOW;// not using
	ui.busyLineEdit->setText(vGasR);

	sp_flow.resetSamp();// reset spinbox
	qDebug("ZERO FLOW Reset %f", temp_SAMP_FLOW);
	sp_flow.setSampFlow();

	ui.busyLineEdit->setText(vDone);
}

void Valves::spanValveCtl(void){
	QCursor crr;
	crr.setPos(2, 2);
	MainWindow i2c;
	setup sp_flow;
	QString vGasL;
	QString Valve;
	QString vGasR;
	QString vDone;

	vGasL = "Busy.... Lowering Sample Flow";
	vGasR = "Busy.... Raising Sample Flow";
	Valve = "Busy.... Changing Valve";
	vDone = "Done";

	ui.busyLineEdit->setText(vGasL);

	temp_SAMP_FLOW = SAMPLE_FLOW;

	sp_flow.setSampToZero();// set spin box to zero

	sp_flow.setSampFlow();
	i2c.delay(10000);

	ui.busyLineEdit->setText(Valve);

	svalve.IO12b();
	ui.vSampleCheckBox->setChecked(0);
	svalve.IO13b();
	ui.vZeroCheckBox->setChecked(0);
	svalve.IO14a();
	ui.vSpanCheckBox->setChecked(1);
	vstate4 = 0;
	vstate5 = 0;
	vstate6 = 1;

	svalve.IO11a(); // set ignite relay
	i2c.delay(20000);
	svalve.IO11b(); // set ignite relay

	SAMPLE_FLOW = temp_SAMP_FLOW;
	ui.busyLineEdit->setText(vGasR);

	sp_flow.resetSamp();
	qDebug("SPAN FLOW Reset %f", temp_SAMP_FLOW);
	sp_flow.setSampFlow();

	ui.busyLineEdit->setText(vDone);
}

//////////////////////////////////////////////////// GSV Control from main board slaveAddressID 0x40
void Valves::gsValve1(void){
	QCursor crr;
	crr.setPos(2, 2);

	if (vstate1 == 0){
		svalve.IO20a();
		vstate1 = 1;
		ui.vValve1CheckBox->setChecked(1);
	}else if (vstate1 ==1){
		svalve.IO20b();
		vstate1 = 0;
		ui.vValve1CheckBox->setChecked(0);
	}
}
void Valves::gsValve2(void){
	QCursor crr;
	crr.setPos(2, 2);

	if (vstate2 == 0){
		svalve.IO19a();
		vstate2 = 1;
		ui.vValve2CheckBox->setChecked(1);
	}else if (vstate2 ==1){
		svalve.IO19b();
		vstate2 = 0;
		ui.vValve2CheckBox->setChecked(0);
	}
}
void Valves::gsValve3(void){
	QCursor crr;
	crr.setPos(2, 2);

	if (vstate3 == 0){
		svalve.IO18a();
		vstate3 = 1;
		ui.vValve3CheckBox->setChecked(1);
	}else if (vstate3 ==1){
		svalve.IO18b();
		vstate3 =0;
		ui.vValve3CheckBox->setChecked(0);
	}
}
void Valves::keyReleaseEvent(QKeyEvent *event)
{
	QCursor crr;

	switch (event->key()){
		case Qt::Key_F1:{
			qDebug() << "Released F1 Key";
			crr.setPos(2, 2);
			break;
		}
		case Qt::Key_F2:{
			qDebug() << "Released F2 Key";
			crr.setPos(2, 2);
			break;
		}
		case Qt::Key_F3:{
			qDebug() << "Released F3 Key";
			crr.setPos(2, 2);
			break;
		}
		case Qt::Key_F4:{
			crr.setPos(2, 2);
			qDebug() << "Released F4 Key";
			break;
		}
		case Qt::Key_F5:{
			qDebug() << "Released F5 Key";
			crr.setPos(2, 2);
			break;
		}
		case Qt::Key_F6:{
			qDebug() << "Released F6 Key ()";
			crr.setPos(2, 2);
			break;
		}
		case Qt::Key_F7:{
			qDebug() << "Released F7 Key ()";
			break;
		}
		case Qt::Key_F8:{
			qDebug() << "Released F8 Key ()";
//			crr.setPos(2, 2);
			break;
		}
		case Qt::Key_F9:{
			qDebug() << "Released F9 Key ()";
//			crr.setPos(2, 2);
			break;
		}
		case Qt::Key_F10:{
				qDebug() << "Released F10 Key ()";
//				crr.setPos(2, 2);
				break;
			}
		case Qt::Key_Return:{
			crr.setPos(2, 2);
			qDebug() << "Released ENTER Key ()";
			ui.endButton->click();
			break;
		}
		default:{
			qDebug() << "Default";
			qDebug("DEfault %x", event->key());
			crr.setPos(2, 2);
			break;
		}
	}
}
