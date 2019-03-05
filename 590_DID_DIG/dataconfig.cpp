#include "dataconfig.h"
#include <QDebug>
#include <QFile>
#include <errno.h>
#include <QKeyEvent>
#include <QDateTime>

extern double CURRENTRANGE;
extern double ALARMLO2;
extern double ALARMHI2;
extern double ALARMLO1;
extern double ALARMHI1;

extern bool ALARMACTIVE;
extern bool ALARM1ACTIVE;
extern bool ALARM2ACTIVE;

dataConfig::dataConfig(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);
}

dataConfig::~dataConfig()
{

}
void dataConfig::setSystemDateTime(void){
	ui.datacfClockSpinBox->dateTime();
}
void dataConfig::processDatalog_line(QByteArray line, unsigned int nex){
	bool ok;
	QString alData;//[line.size()];
	unsigned int dataResultInt;
	double dataResult;

	dataResultInt = 0;
	dataResult = 0.0;

	qDebug("NEX  = %d", nex);
	switch (nex){
		case 0:{
			 for (int i = 0; i < line.size(); ++i) {
			     if (line.at(i) >= '0' && line.at(i) <= '9')
			    	 alData[i] = line.at(i);
			     	 qDebug("data  = %x", line.at(i));
			 }
			 dataResultInt = alData.toUInt(&ok);
			 ALARM1ACTIVE = dataResultInt;
			 qDebug("to ALARM1ACTIVE = %d", dataResultInt);

			break;
		}
		case 1:{
			 for (int i = 0; i < line.size(); ++i) {
			     if (line.at(i) >= '0' && line.at(i) <= '9')
			    	 alData[i] = line.at(i);
			     	 qDebug("data  = %x", line.at(i));
			 }
			 dataResultInt = alData.toUInt(&ok);
			 ALARM2ACTIVE = dataResultInt;
			 qDebug("to ALARM2ACTIVE = %d", dataResultInt);
			break;
		}
		case 2:{
			 for (int i = 0; i < line.size(); ++i) {
			     if (line.at(i) >= '0' && line.at(i) <= '9')
			    	 alData[i] = line.at(i);
			     	 qDebug("data  = %x", line.at(i));
			 }
			 dataResultInt = alData.toUInt(&ok);
			 ALARMACTIVE = dataResultInt;
			 qDebug("to ALARMACTIVE = %d", dataResultInt);
			break;
		}
		case 3:{
			 for (int i = 0; i < line.size(); ++i) {
			     if (line.at(i) >= '0' && line.at(i) <= '9')
			    	 alData[i] = line.at(i);
			     	 qDebug("data  = %x", line.at(i));
			 }
			 dataResult = alData.toUInt(&ok);
			 ALARMHI1 = dataResult;
			 qDebug("to ALARMHI1 = %f", dataResult);
			break;
		}
		case 4:{
			 for (int i = 0; i < line.size(); ++i) {
			     if (line.at(i) >= '0' && line.at(i) <= '9')
			    	 alData[i] = line.at(i);
			     	 qDebug("data  = %x", line.at(i));
			 }
			 dataResult = alData.toDouble(&ok);
			 ALARMLO1 = dataResult;
			 qDebug("to ALARMLO1 = %f", dataResult);
			break;
		}
		case 5:{
			 for (int i = 0; i < line.size(); ++i) {
			     if (line.at(i) >= '0' && line.at(i) <= '9')
			    	 alData[i] = line.at(i);
			     	 qDebug("data  = %x", line.at(i));
			 }
			 dataResult = alData.toDouble(&ok);
			 ALARMHI2 = dataResult;
			 qDebug("to ALARMHI2 = %f", dataResult);
			break;
		}
		case 6:{
			ALARMLO2 = line.toDouble(&ok);
			 for (int i = 0; i < line.size(); ++i) {
			     if (line.at(i) >= '0' && line.at(i) <= '9')
			    	 alData[i] = line.at(i);
			     	 qDebug("data  = %x", line.at(i));
			 }
			 dataResult = alData.toDouble(&ok);
			 ALARMLO2 = dataResult;
			 qDebug("to ALARMLO2 = %f", dataResult);
			break;
		}
		default :{
			qDebug("FILE read default = %x", nex);
			break;
		}
	}
}
void dataConfig::getDatalog(void){

	bool ok;
	unsigned int nex;

	nex = 0;

    QFile file("/root/dataout.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    while (!file.atEnd()) {
    QByteArray line = file.readLine();//
    	processDatalog_line(line, nex);
    	++nex;
    }
}
void dataConfig::saveDatalog(void){
    QFile file("/root/dataout.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return;

    QTextStream out(&file);//"The magic number is: "
    out << ALARMACTIVE << "\n" << ALARM1ACTIVE << "\n"<< ALARM2ACTIVE << "\n" << ALARMHI1
    		<< "\n" << ALARMLO1 << "\n" << ALARMHI2 << "\n" << ALARMLO2 << "\n";

    qDebug() << "ALARM SAVED";
}
void dataConfig::keyReleaseEvent(QKeyEvent *event)
{
	QCursor crr;
	QString busyState;
	QString notBusyState;

	busyState = "BUSY";
	notBusyState = "DONE";


	switch (event->key()){
		case Qt::Key_F1:{// setup
			qDebug() << "Released F1 Key";
			crr.setPos(2, 2);
			break;
		}
		case Qt::Key_F2:{// valves
			qDebug() << "Released F2 Key";
			crr.setPos(2, 2);
			break;
		}
		case Qt::Key_F3:{// gain
			qDebug() << "Released F3 Key";
			crr.setPos(2, 2);
			break;
		}
		case Qt::Key_F4:{
			crr.setPos(2, 2);
			ui.busyLineEdit->setText(busyState);
			qDebug() << "Released F4 Key";
			saveDatalog();
			ui.busyLineEdit->setText(notBusyState);
			ui.busyLineEdit->clear();
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
			crr.setPos(2, 2);
			break;
		}
		case Qt::Key_F9:{
			qDebug() << "Released F9 Key ()";
			crr.setPos(2, 2);
			break;
		}
		case Qt::Key_F10:{
				qDebug() << "Released F10 Key ()";
				crr.setPos(2, 2);
				break;
			}
		case Qt::Key_Return:{
			crr.setPos(2, 2);
			qDebug() << "Released ENTER Key ()";
			ui.busyLineEdit->setText(busyState);
			ui.busyLineEdit->setText(notBusyState);
			ui.dlEnterButton->click();
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
