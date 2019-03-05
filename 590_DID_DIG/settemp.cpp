#include "settemp.h"
//#include "mainwindow.h"
#include <QKeyEvent>
#include <QDebug>
#include <QtGui>
#include <QtCore>
#include <string>     // std::string, std::stod

bool stStopMe;

extern double DETTEMP;
extern double SAMPTEMP;
extern double METHTEMP;
extern double COLTEMP;

setTemp::setTemp(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);

	ui.tempdetector->setValue(DETTEMP);
	ui.tempSampTee->setValue(SAMPTEMP);
	ui.tempMeth->setValue(METHTEMP);
	ui.tempcolumn->setValue(COLTEMP);
}

setTemp::~setTemp()
{
	stStopMe = 0;
}

void setTemp::processTemp_line(QByteArray line, unsigned int nex){
	char *k;
	int l_size;
	l_size = line.size();
	char alData[l_size];// = "";
//	QString alData;//[line.size()];
	qDebug("Set Temp Process Line #  = %d", line.size());
//	alData.resize(line.size());
	unsigned int dataResultInt;
	double dataResult;dataResultInt = std::strtod(alData,&k);

	dataResultInt = 0;
	dataResult = 0.0;

	qDebug("NEX  = %d", nex);
	switch (nex){
		case 0:{
			 for (int i = 0; i < (line.size()-1); ++i) {
			     if (line.at(i) >= '0' && line.at(i) <= '9')
			    	 alData[i] = line.at(i);
			     	 qDebug("data  = %x", line.at(i));
			 }
			 dataResultInt = std::strtod(alData,&k);//dataResultInt = alData.toUInt(&ok);
			 DETTEMP = dataResultInt;
			 qDebug("to DET = %d", dataResultInt);

			break;
		}
		case 1:{
			 for (int i = 0; i < (line.size()-1); ++i) {
			     if (line.at(i) >= '0' && line.at(i) <= '9')
			    	 alData[i] = line.at(i);
			     	 qDebug("data  = %x", line.at(i));
			 }
			 dataResultInt = std::strtod(alData,&k);//dataResultInt = alData.toUInt(&ok);
			 SAMPTEMP = dataResultInt;
			 qDebug("to SAMP Tee = %d", dataResultInt);
			break;
		}
		case 2:{
			 for (int i = 0; i < (line.size()-1); ++i) {
			     if (line.at(i) >= '0' && line.at(i) <= '9')
			    	 alData[i] = line.at(i);
			     	 qDebug("data  = %x", line.at(i));
			 }
			 dataResultInt = std::strtod(alData,&k);//dataResultInt = alData.toUInt(&ok);
			 METHTEMP = dataResultInt;
			 qDebug("to Meth = %d", dataResultInt);
			break;
		}
		case 3:{
			 for (int i = 0; i < (line.size()-1); ++i) {
			     if (line.at(i) >= '0' && line.at(i) <= '9')
			    	 alData[i] = line.at(i);
			     	 qDebug("data  = %x", line.at(i));
			 }
			 dataResultInt = std::strtod(alData,&k);//dataResult = alData.toUInt(&ok);
			 COLTEMP = dataResult;
			 qDebug("to Col = %f", dataResult);
			break;
		}
		default :{
			qDebug("FILE read default = %x", nex);
			break;
		}
	}
}
void setTemp::saveTemp(void){
    QFile file("/root/tempout.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return;

    QTextStream out(&file);//"The magic number is: "
    out << DETTEMP << "\n" << SAMPTEMP << "\n"<< METHTEMP << "\n" << COLTEMP << "\n";
    file.close();
    qDebug() << "Temps SAVED";
}
void setTemp::getTemp(void){
	unsigned int nex;

	nex = 0;

    QFile file("/root/tempout.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    while (!file.atEnd()) {
    QByteArray line = file.readLine();//
    	processTemp_line(line, nex);
    	++nex;
    }
    file.close();
}

void setTemp::keyReleaseEvent(QKeyEvent *event)
{
	QString busyState;
	QString notBusyState;
	QCursor crr;
	busyState = "BUSY";
	notBusyState = "DONE";

	switch (event->key()){
	case Qt::Key_F1:{
		stStopMe = 0;
		qDebug() << "Released F1 Key";
		break;
	}
	case Qt::Key_F2:{
		stStopMe = 0;
		qDebug() << "Released F2 Key";
		break;
	}
	case Qt::Key_F3:{
		stStopMe = 0;
		qDebug() << "Released F3 Key";
		break;
	}
	case Qt::Key_F4:{
		ui.busyLineEdit->setText(busyState);
		stStopMe = 0;
		saveTemp();
		writeTemp();
		ui.busyLineEdit->setText(notBusyState);
		qDebug() << "Released F4 Key config";
		break;
	}
	case Qt::Key_F5:{
		stStopMe = 0;
		qDebug() << "Released F5 Key (DET 1)";
		break;
	}
	case Qt::Key_F6:{
		stStopMe = 0;
		qDebug() << "Released F6 Key (Oven)";
		break;
	}
	case Qt::Key_F7:{
		stStopMe = 0;
		qDebug() << "Released F7 Key (Flow)";
		break;
	}
	case Qt::Key_F8:{
		stStopMe = 0;
		qDebug() << "Released F8 Key (Det 2)";
		break;
	}
	case Qt::Key_F9:{
		stStopMe = 0;
		qDebug() << "Released F9 Key (Valve)";
		break;
	}
	case Qt::Key_F10:{
		stStopMe = 0;
		qDebug() << "Released F10 Key (Inj Port)";
		break;
	}
	case Qt::Key_Return:{
		qDebug() << "Released ENTER Key ()";
		stStopMe = 0;
		saveTemp();
		writeTemp();
		crr.setPos(2, 2);
		ui.settempEnterButton->click();
		break;
	}
	default:{//
		break;
	}
}
}
void setTemp::readTemp(void){
//	MainWindow mw;
	int addr;
	double valu;

	addr = 0;
	stStopMe = 1;

	qDebug() << "Reading temp from setTemp dialog";
//	QCoreApplication::processEvents( QEventLoop::AllEvents, 100 );

	while(stStopMe){// wait for close button or ENTER to stop
		valu = mw.readRecipeValue(0x01, addr);
		ui.actualdetector->display(valu);
//		qDebug() << "Reading det 1 temp";
		valu = mw.readRecipeValue(0x02, addr);
		ui.actualmeth->display(valu);
//		qDebug() << "Reading Samp tee 2 temp";
		valu = mw.readRecipeValue(0x03, addr);
		ui.actualaux->display(valu);
//		qDebug() << "Reading Meth 3 temp";
		valu = mw.readRecipeValue(0x04, addr);
		ui.actualcolumn->display(valu);
//		qDebug() << "Reading col 4 temp";
		QCoreApplication::processEvents( QEventLoop::AllEvents, 100 );
	}
}
void setTemp::writeTemp(void){

//	MainWindow mw;

	DETTEMP = ui.tempdetector->value();
	SAMPTEMP = ui.tempSampTee->value();
	METHTEMP = ui.tempMeth->value();
	COLTEMP = ui.tempcolumn->value();

	setDetTemp(DETTEMP);
	mw.delay(333);
	setSampTeeTemp(SAMPTEMP);
	mw.delay(333);
	setMethTemp(METHTEMP);
	mw.delay(333);
	setColTemp(COLTEMP);
}

void setTemp::setDetTemp(double temp){
//	MainWindow mw;

	mw.writeTempSetpoint(1, temp);
	qDebug() << "Write det 1 temp";
}
void setTemp::setSampTeeTemp(double temp){
//	MainWindow mw;

	mw.writeTempSetpoint(2, temp);
	qDebug() << "Write Samp tee 2 temp";
}
void setTemp::setMethTemp(double temp){
//	MainWindow mw;

	mw.writeTempSetpoint(3, temp);
	qDebug() << "Write Meth 3 temp";
}
void setTemp::setColTemp(double temp){
//	MainWindow mw;

	mw.writeTempSetpoint(4, temp);
	qDebug() << "Write col 4 temp";
}
