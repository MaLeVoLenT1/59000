#include "outputgainctrl.h"
#include "detconfigure.h"
#include "detectorwidget.h"
#include "_590_did_dig.h"
#include <QDebug>
#include <QKeyEvent>

bool opgcHi;
bool opgcMid;
bool opgcLo;
bool opgcMin;
extern unsigned int Range;//
extern unsigned int CAL_RANGE;
extern bool CALINDICATOR;;
extern bool IN_CAL_MODE;
extern double ZERO;

OutputGainCtrl::OutputGainCtrl(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);

	ui.ogHiCheckBox->setChecked(opgcHi);
	ui.ogMidCheckBox->setChecked(opgcMid);
	ui.ogLowCheckBox->setChecked(opgcLo);
	ui.ogMinCheckBox->setChecked(opgcMin);
}

OutputGainCtrl::~OutputGainCtrl()
{

}
void OutputGainCtrl::keyReleaseEvent(QKeyEvent *event)
{
////	QCursor crr;
//
//	switch (event->key()){
//		case Qt::Key_F1:{
////			crr.setPos(2, 2);
//			qDebug() << "Released F1 Key";
//			break;
//		}
//		case Qt::Key_F2:{// SPAN
////			crr.setPos(2, 2);
//			qDebug() << "Released F2 Key";
//			break;
//		}
//		case Qt::Key_F3:{// TEST READ
//			crr.setPos(2, 2);
//			qDebug() << "Released F3 Key";
//			break;
//		}
//		case Qt::Key_F4:{
//			crr.setPos(2, 2);
//			qDebug() << "Released F4 Key";
//			ui.ogDetConfigButton->click();
//			break;
//		}
//		case Qt::Key_F5:{
//			crr.setPos(2, 2);
//			qDebug() << "Released F5 Key";
//			break;
//		}
//		case Qt::Key_F6:{
//			crr.setPos(2, 2);
//			qDebug() << "Released F6 Key ()";
//			break;
//		}
//		case Qt::Key_F7:{
//			crr.setPos(2, 2);
//			qDebug() << "Released F7 Key ()";
//			break;
//		}
//		case Qt::Key_F8:{
//			crr.setPos(2, 2);
//			qDebug() << "Released F8 Key ()";
//			break;
//		}
//		case Qt::Key_F9:{
//			crr.setPos(2, 2);
//			qDebug() << "Released F9 Key ()";
//			break;
//		}
//		case Qt::Key_F10:{
//			crr.setPos(2, 2);
//			qDebug() << "Released F10 Key ()";
//			break;
//		}
//		case Qt::Key_Return:{
//			crr.setPos(2, 2);
//			qDebug() << "Released ENTER Key ()";
//			ui.endButton->click();
//			break;
//		}
//		case Qt::Key_Home:{
//			crr.setPos(2, 2);
//			qDebug() << "Released Home Key";
//			break;
//		}
//		case Qt::Key_End:{
//			qDebug() << "Released End Key";
//			break;
//		}
//		default:{//
//			break;
//		}
//	}
}
void OutputGainCtrl::outputRange1(void)// 0x3a hi
{
	QCursor crr;
	crr.setPos(2, 2);
	QString Busy;
	QString Done;
	Busy = "BUSY";
	Done = "DONE";
	ui.ogcStatusLineEdit->setText(Busy);

	detConfigure setRange;
	_590_DID_DIG th;
	Range = 1;
	ui.ogHiCheckBox->setChecked(1);
	ui.ogMidCheckBox->setChecked(0);
	ui.ogLowCheckBox->setChecked(0);
	ui.ogMinCheckBox->setChecked(0);
	setRange.detRange();
	opgcHi = 1;
	opgcMid = 0;
	opgcLo = 0;
	opgcMin = 0;
	ui.ogcStatusLineEdit->setText(Done);
}
void OutputGainCtrl::outputRange2(void) // 0x3b mid
{
	QCursor crr;
	crr.setPos(2, 2);
	QString Busy;
	QString Done;
	Busy = "BUSY";
	Done = "DONE";
	ui.ogcStatusLineEdit->setText(Busy);
	detConfigure setRange;

	Range = 2;
	ui.ogHiCheckBox->setChecked(0);
	ui.ogMidCheckBox->setChecked(1);
	ui.ogLowCheckBox->setChecked(0);
	ui.ogMinCheckBox->setChecked(0);
	setRange.detRange();
	opgcHi = 0;
	opgcMid = 1;
	opgcLo = 0;
	opgcMin = 0;
	ui.ogcStatusLineEdit->setText(Done);
}
void OutputGainCtrl::outputRange3(void) // 0x3c low
{
	QCursor crr;
	crr.setPos(2, 2);
	QString Busy;
	QString Done;
	Busy = "BUSY";
	Done = "DONE";
	ui.ogcStatusLineEdit->setText(Busy);
	detConfigure setRange;

	Range = 3;
	ui.ogHiCheckBox->setChecked(0);
	ui.ogMidCheckBox->setChecked(0);
	ui.ogLowCheckBox->setChecked(1);
	ui.ogMinCheckBox->setChecked(0);
	setRange.detRange();
	opgcHi = 0;
	opgcMid = 0;
	opgcLo = 1;
	opgcMin = 0;
	ui.ogcStatusLineEdit->setText(Done);
}
void OutputGainCtrl::outputRange4(void) // 0x3d min
{
	QCursor crr;
	crr.setPos(2, 2);
	QString Busy;
	QString Done;
	Busy = "BUSY";
	Done = "DONE";
	ui.ogcStatusLineEdit->setText(Busy);
	detConfigure setRange;

	Range = 4;
	ui.ogHiCheckBox->setChecked(0);
	ui.ogMidCheckBox->setChecked(0);
	ui.ogLowCheckBox->setChecked(0);
	ui.ogMinCheckBox->setChecked(1);
	setRange.detRange();
	opgcHi = 0;
	opgcMid = 0;
	opgcLo = 0;
	opgcMin = 1;
	ui.ogcStatusLineEdit->setText(Done);
}
void OutputGainCtrl::dwConfig(void)
{
	detConfigure dwConfigDet(this);// Crerate a dialog
			if (dwConfigDet.exec()) {
				qDebug() << "GOT IN Det Config Button";
			}
}
