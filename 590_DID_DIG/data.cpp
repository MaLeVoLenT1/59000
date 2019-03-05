#include "data.h"
#include "dataconfig.h"
#include <QDebug>
#include <QDateTime>
#include <QDate>
#include <QTime>
#include <QFile>
#include <errno.h>
#include <QKeyEvent>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <QKeyEvent>

unsigned int FILE_CNT = 0;

extern double CURRENTRANGE;
extern double ALARMLO2;
extern double ALARMHI2;
extern double ALARMLO1;
extern double ALARMHI1;

extern bool ALARMACTIVE;
extern bool ALARM1ACTIVE;
extern bool ALARM2ACTIVE;
extern bool ALARM1STATE;
extern bool ALARM2STATE;
extern bool READY;

extern int HOUR;
extern int MINUTE;
extern int SECONDS;
extern int MILISECONDS;
extern int MONTH;
extern int DAY;
extern int YEAR;
extern bool DLOGCHECK;
extern double SAMPLE_RESULT;// calculated result


data::data(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);

	ui.datacfClockSpinBox->setDateTime(QDateTime::currentDateTime());
	ui.dlogCheckBox->setChecked(DLOGCHECK);

	QDate dat = QDate::currentDate();
	QTime tim = QTime::currentTime();

	HOUR = tim.hour();
	MINUTE = tim.minute();
	SECONDS = tim.second();
	MONTH = dat.month();
	DAY = dat.dayOfWeek();
	YEAR = dat.year();
}

data::~data()
{
}
void data::keyReleaseEvent(QKeyEvent *event)
{

	switch (event->key()){
		case Qt::Key_F1:{// Calibrate
			qDebug() << "Released F1 Key CHECK DATALOG";
			ui.dlogCheckBox->toggle();
//			crr.setPos(2, 2);
			break;
		}
		case Qt::Key_F2:{
			qDebug() << "Released F2 Key CHECK TO SET DATE AND TIME";
			ui.dataconfigTimeCheckBox->toggle();
//			crr.setPos(2, 2);
			break;
		}
		case Qt::Key_F3:{
			qDebug() << "Released F3 Key";
//			crr.setPos(2, 2);
			break;
		}
		case Qt::Key_F4:{
//			crr.setPos(2, 2);
			qDebug() << "Released F4 Key Configure";
			ui.dataConfigButton->click();
			break;
		}
		case Qt::Key_F5:{
//			crr.setPos(2, 2);
			qDebug() << "Released F5 Key";
			break;
		}
		case Qt::Key_F6:{
//			crr.setPos(2, 2);
			qDebug() << "Released F6 Key ()";
			break;
		}
		case Qt::Key_F7:{
//			crr.setPos(2, 2);
			qDebug() << "Released F7 Key ()";
			break;
		}
		case Qt::Key_F8:{
			qDebug() << "Released F8 Key ()";
			break;
		}
		case Qt::Key_F9:{
//			crr.setPos(2, 2);
			qDebug() << "Released F9 Key ()";
			break;
		}
		case Qt::Key_F10:{
//			crr.setPos(2, 2);
			qDebug() << "Released F10 Key ()";
			break;
		}
		case Qt::Key_Home:{
//			crr.setPos(2, 2);
			qDebug() << "Released Home Key ()";
			break;
		}
		case Qt::Key_End:{
//			crr.setPos(2, 2);
			qDebug() << "Released End Key ()";
			break;
		}
		case Qt::Key_Return:{
			qDebug() << "Released ENTER Key ()";
			ui.endButton->click();
//			crr.setPos(2, 2);
			break;
		}
		default:{//
			qDebug() << "Default";
			qDebug("Default %x", event->key());
			break;
		}
	}
}
void data::dlConfig(void)
{
	dataConfig dlcfg(this);// Crerate a dialog
			if (dlcfg.exec()) {
				qDebug() << "GOT IN Data Logger Config Button";
			}
}
void data::setSystemDateTime(void){
	QDateTime ndt;
	QString command;
	QString command1;

	char dbuf[64];

	HOUR = ui.dHourSpinBox->value();
	MINUTE = ui.dMinuteSpinBox->value();
	SECONDS = ui.dSecondsSpinBox->value();
	MILISECONDS = ui.dMiliSecSpinBox->value();
	MONTH = ui.dMonthSpinBox->value();
	DAY = ui.dDaySpinBox->value();
	YEAR = ui.dYearSpinBox->value();


////////////////////////////////////////////////////////////////

	if (ui.dataconfigTimeCheckBox->isChecked() == 1) {
		sprintf(dbuf, "/bin/date -s %04d.%02d.%02d-%02d:%02d:%02d", YEAR, MONTH, DAY, HOUR, MINUTE, SECONDS);
		system(dbuf);
		system("hwclock -w");///bin/hwclock -w

		ndt = QDateTime::currentDateTime();
		ui.datacfClockSpinBox->setDateTime(ndt);
	}

	DLOGCHECK = ui.dlogCheckBox->isChecked();
}
void data::processDatalog_line(QByteArray line, unsigned int nex){
	bool ok;
	QString alData;
	qDebug("DATA Process Line #  = %d", line.size());
	alData.resize(line.size());

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
void data::getDatalog(void){// close file

//	bool ok;
	unsigned int nex;

	nex = 0;

    QFile file("/media/sda1/dataout.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    while (!file.atEnd()) {
    QByteArray line = file.readLine();
    	processDatalog_line(line, nex);
    	++nex;
    }
    file.close();
}
void data::saveDatalog(void){

	QDate cdat = QDate::currentDate();
	QTime ctim = QTime::currentTime();

	HOUR = ctim.hour();
	MINUTE = ctim.minute();
	SECONDS = ctim.second();
	MONTH = cdat.month();
	DAY = cdat.day();//dayOfWeek();
	YEAR = cdat.year();

    QFile file("/media/sda1/dataout.txt");
    if (!file.open(QIODevice::Append | QIODevice::Text))//WriteOnly
        return;

    QTextStream out(&file);

    if (file.size() > 1000000){

    	FILE_CNT++;
    	QString newfilename;
    	newfilename = "/media/sda1/dat."+ FILE_CNT;

    	qDebug("Too big File  = %lld", file.size());
    	out << endl;
    	out << ",,,,,,File Over 1 Megabyte. File Stored";
    	file.rename(newfilename);
    }
    else{
    	out << endl;
    	out << MONTH << ":" << DAY << ":"<< YEAR << "," << HOUR
    			<< ":" << MINUTE << ":" << SECONDS << "," << ALARM1STATE << "," << ALARM2STATE
    			<< "," << READY << "," << SAMPLE_RESULT << ",";

    	qDebug() << "Wrote FILE";
    }

    file.close();
}
