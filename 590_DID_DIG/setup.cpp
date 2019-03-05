#include "setup.h"
#include "settemp.h"
#include "mainwindow.h"
#include "valvecontrol.h"
#include "valves.h"
#include "detconfigure.h"
#include "output.h"
#include <QDebug>
#include <QFile>
#include <errno.h>
#include <QKeyEvent>
#include <string>     // std::string, std::stod

double SETUP402RANGE;

extern double C;

extern double CURRENTRANGE;
extern double ALARMLO2;
extern double ALARMHI2;
extern double ALARMLO1;
extern double ALARMHI1;

extern bool ALARMACTIVE;
extern bool ALARM1ACTIVE;
extern bool ALARM2ACTIVE;
extern bool FLAMEON;

extern double SAMPLE_FLOW;
extern double FUEL_FLOW;
extern double ZERO_FLOW;
extern double AIR_FLOW;
extern 	double temp_ZERO_FLOW;
extern 	double temp_SAMP_FLOW;

extern unsigned int i2c_slaveAddr;

setup::setup(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);

	ui.spAlarmL1lcdNumber->display(ALARMLO1);
	ui.spAlarmH1lcdNumber->display(ALARMHI1);
	ui.spAlarmL2lcdNumber->display(ALARMLO2);
	ui.spAlarmH2lcdNumber->display(ALARMHI2);

	ui.alarm1EnableCheckBox->setChecked(ALARM1ACTIVE);
	ui.alarm2EnableCheckBox->setChecked(ALARM2ACTIVE);
	ui.enableAlarmCheckBox->setChecked(ALARMACTIVE);

	ui.alh1SpinBox->setValue(ALARMHI1);
	ui.all1SpinBox->setValue(ALARMLO1);
	ui.alh2SpinBox->setValue(ALARMHI2);
	ui.all2SpinBox->setValue(ALARMLO2);

	ui.airFlowSpinBox->setValue(AIR_FLOW);
	ui.fuelFlowSpinBox->setValue(FUEL_FLOW);
	ui.sampFlowSpinBox->setValue(SAMPLE_FLOW);
	ui.methFlowSpinBox->setValue(ZERO_FLOW);
}

setup::~setup()
{

}
void setup::processAlarm_line(QByteArray line, unsigned int nex){
	bool ok;
	char *k;
	int l_size;
	l_size = line.size();
	char alData[l_size];// = "";
	qDebug("Setup Alarm Process Line #  = %d", line.size());
	unsigned int dataResultInt;
	double dataResult;

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
			 dataResultInt = std::strtod(alData,&k);
			 ALARM1ACTIVE = dataResultInt;
			 qDebug("to ALARM1ACTIVE = %d", dataResultInt);

			break;
		}
		case 1:{
			 for (int i = 0; i < (line.size()-1); ++i) {
			     if (line.at(i) >= '0' && line.at(i) <= '9')
			    	 alData[i] = line.at(i);
			     	 qDebug("data  = %x", line.at(i));
			 }
			 dataResultInt = std::strtod(alData,&k);
			 ALARM2ACTIVE = dataResultInt;
			 qDebug("to ALARM2ACTIVE = %d", dataResultInt);
			break;
		}
		case 2:{
			 for (int i = 0; i < (line.size()-1); ++i) {
			     if (line.at(i) >= '0' && line.at(i) <= '9')
			    	 alData[i] = line.at(i);
			     	 qDebug("data  = %x", line.at(i));
			 }
			 dataResultInt = std::strtod(alData,&k);
			 ALARMACTIVE = dataResultInt;
			 qDebug("to ALARMACTIVE = %d", dataResultInt);
			break;
		}
		case 3:{
			 for (int i = 0; i < (line.size()-1); ++i) {
			     if (line.at(i) >= '0' && line.at(i) <= '9')
			    	 alData[i] = line.at(i);
			     	 qDebug("data  = %x", line.at(i));
			 }
			 dataResult = std::strtod(alData,&k);
			 ALARMHI1 = dataResult;
			 qDebug("to ALARMHI1 = %f", dataResult);
			break;
		}
		case 4:{
			 for (int i = 0; i < (line.size()-1); ++i) {
			     if (line.at(i) >= '0' && line.at(i) <= '9')
			    	 alData[i] = line.at(i);
			     	 qDebug("data  = %x", line.at(i));
			 }
			 dataResult = std::strtod(alData,&k);
			 ALARMLO1 = dataResult;
			 qDebug("to ALARMLO1 = %f", dataResult);
			break;
		}
		case 5:{
			 for (int i = 0; i < (line.size()-1); ++i) {
			     if (line.at(i) >= '0' && line.at(i) <= '9')
			    	 alData[i] = line.at(i);
			     	 qDebug("data  = %x", line.at(i));
			 }
			 dataResult = std::strtod(alData,&k);
			 ALARMHI2 = dataResult;
			 qDebug("to ALARMHI2 = %f", dataResult);
			break;
		}
		case 6:{
			ALARMLO2 = line.toDouble(&ok);
			 for (int i = 0; i < (line.size()-1); ++i) {
			     if (line.at(i) >= '0' && line.at(i) <= '9')
			    	 alData[i] = line.at(i);
			     	 qDebug("data  = %x", line.at(i));
			 }
			 dataResult = std::strtod(alData,&k);
			 ALARMLO2 = dataResult;
			 qDebug("to ALARMLO2 = %f", dataResult);
			break;
		}
		default :{
			qDebug("FILE read default = %x", nex);
			break;
		}
	}

/*	qDebug("FILE ALARM 2 LOW CONC = %f", ALARMLO2);
	qDebug("FILE ALARM 2 HI CONC = %f", ALARMHI2);
	qDebug("FILE ALARM 1 LOW CONC = %f", ALARMLO1);
	qDebug("FILE ALARM 1 HI CONC = %f", ALARMHI1);
	qDebug("FILE ACTIVATED = %x", ALARMACTIVE);
	qDebug("FILE ALARM1ACTIVE = %x", ALARM1ACTIVE);
	qDebug("FILE ALARM2ACTIVE = %x", ALARM2ACTIVE);*/
}
void setup::getAlarm(void){// close file

//	bool ok;
	unsigned int nex;

	nex = 0;

    QFile file("/root/alarmout.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    while (!file.atEnd()) {
    QByteArray line = file.readLine();//
    	processAlarm_line(line, nex);
    	++nex;
    }
    file.close();
}
void setup::saveAlarm(void){// close file
    QFile file("/root/alarmout.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return;

    QTextStream out(&file);//"The magic number is: "
    out << ALARMACTIVE << "\n" << ALARM1ACTIVE << "\n"<< ALARM2ACTIVE << "\n" << ALARMHI1
    		<< "\n" << ALARMLO1 << "\n" << ALARMHI2 << "\n" << ALARMLO2 << "\n";
    file.close();
    qDebug() << "ALARM SAVED";
}
void setup::processGas_line(QByteArray line, unsigned int nex){
//	bool ok;
	char *k;
	int l_size;
	l_size = line.size();
	char alData[l_size];// = "";
	qDebug("Gas Process Line #  = %d", line.size());
//	QString alData;//[line.size()];
//	alData.resize(line.size());
	unsigned int dataResultInt;
	double dataResult;

	dataResultInt = 0;
	dataResult = 0.0;

	qDebug("NEX  = %d", nex);
	switch (nex){
		case 0:{
			 for (int i = 0; i < (line.size()); ++i) {
			     if (line.at(i) >= '0' && line.at(i) <= '9'){
			    	 alData[i] = line.at(i);
//			     	 qDebug("Line  = %x", line.at(i));
			     	qDebug("data  = %x", alData[i]);//.toFloat());
			     }

			 }
			 dataResult = std::strtod(alData,&k);
			 FUEL_FLOW = dataResult;
			 qDebug("to FUEL FLOW = %f", dataResult);

			break;
		}
		case 1:{
			 for (int i = 0; i < (line.size()); ++i) {
			     if (line.at(i) >= '0' && line.at(i) <= '9')
			    	 alData[i] = line.at(i);
			     	 qDebug("data  = %x", line.at(i));
			 }
			 dataResult = std::strtod(alData,&k);
			 AIR_FLOW = dataResult;
			 qDebug("to AIR FLOW = %f", dataResult);
			break;
		}
		case 2:{
			 for (int i = 0; i < (line.size()); ++i) {
			     if (line.at(i) >= '0' && line.at(i) <= '9')
			    	 alData[i] = line.at(i);
			     	 qDebug("data  = %x", line.at(i));
			 }
			 dataResult = std::strtod(alData,&k);
			 ZERO_FLOW = dataResult;
			 qDebug("to ZERO FLOW = %f", dataResult);
			break;
		}
		case 3:{
			 for (int i = 0; i < (line.size()); ++i) {
			     if (line.at(i) >= '0' && line.at(i) <= '9')
			    	 alData[i] = line.at(i);
			     	 qDebug("data  = %x", line.at(i));
			 }
			 dataResult = std::strtod(alData,&k);
			 SAMPLE_FLOW = dataResult;
			 qDebug("to SAMPLE FLOW = %f", dataResult);
			break;
		}
		case 4:{
			 for (int i = 0; i < (line.size()); ++i) {
			     if (line.at(i) >= '0' && line.at(i) <= '9')
			    	 alData[i] = line.at(i);
			     	 qDebug("data  = %x", line.at(i));
			 }
			 dataResult = std::strtod(alData,&k);
			 CURRENTRANGE = dataResult;
			 qDebug("to 4-20mA Range = %f", dataResult);
			break;
		}
		default :{
			qDebug("FILE read default = %x", nex);
			break;
		}
	}
}
void setup::saveGas(void){// close file
    QFile file("/root/flowout.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return;

    QTextStream out(&file);//"The magic number is: "
    out << FUEL_FLOW << "\n" << AIR_FLOW << "\n"<< ZERO_FLOW << "\n" << SAMPLE_FLOW << "\n"
    		<< SETUP402RANGE << "\n";//CURRENTRANGE
    file.close();
    qDebug() << "FLOWS SAVED";
}
void setup::getGas(void){// close file
	unsigned int nex;

	nex = 0;

    QFile file("/root/flowout.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    while (!file.atEnd()) {
    QByteArray line = file.readLine();//
    	processGas_line(line, nex);
    	++nex;
    }
    file.close();
}
void setup::keyReleaseEvent(QKeyEvent *event)
{
	QCursor crr;
	QString busyState;
	QString notBusyState;

	busyState = "BUSY";
	notBusyState = "DONE";


	switch (event->key()){
		case Qt::Key_F1:{// setup
			qDebug() << "Released F1 Key TEMP CONFIG";
			crr.setPos(2, 2);
			break;
		}
		case Qt::Key_F2:{// valves
			qDebug() << "Released F2 Key SET TEMP";
			crr.setPos(2, 2);
			ui.setTempButton->click();
			break;
		}
		case Qt::Key_F3:{// gain
			qDebug() << "Released F3 Key IGNITE";
			crr.setPos(2, 2);
			ui.setupIgniteButton->click();
			break;
		}
		case Qt::Key_F4:{
			crr.setPos(2, 2);
			ui.subusyLineEdit->setText(busyState);
			qDebug() << "Released F4 Key SET FLOWS - CONFIG";
			//////////////////////// SET FLOWS
			checkFlame();
			setH2Flow();
			setSampFlow();
			setAirFlow();
			setCH4Flow();
			ui.subusyLineEdit->setText(notBusyState);
			ui.subusyLineEdit->clear();
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
			ui.subusyLineEdit->setText(busyState);
			readAlarmOutput();
			ui.subusyLineEdit->setText(notBusyState);
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
void setup::sTsetTemp(void)
{
	setTemp st(this);// Crerate a dialog
			if (st.exec()) {
				qDebug() << "GOT IN set temp Button";
			}
}

void setup::readAlarmOutput(void){
	ALARMLO2 = ui.all2SpinBox->value();
	ALARMHI2 = ui.alh2SpinBox->value();

	ALARMLO1 = ui.all1SpinBox->value();
	ALARMHI1 = ui.alh1SpinBox->value();

	ALARMACTIVE = ui.enableAlarmCheckBox->isChecked();
	ALARM1ACTIVE = ui.alarm1EnableCheckBox->isChecked();
	ALARM2ACTIVE = ui.alarm2EnableCheckBox->isChecked();

	saveAlarm();

	SAMPLE_FLOW = ui.sampFlowSpinBox->value();
	FUEL_FLOW = ui.fuelFlowSpinBox->value();
	ZERO_FLOW = ui.methFlowSpinBox->value();
	AIR_FLOW = ui.airFlowSpinBox->value();

	saveGas();
}

void setup::setH2Flow(void){
	MainWindow i2c;
	detConfigure dc;
	__u8 buff[3];//__16
	unsigned int temp_16;
	double maxFlow;
	int fd;
	__u8 device_addr;
	QString busyState;// 9-5-2014
	QString notBusyState;

	busyState = "BUSY";// 9-5-2014
	notBusyState = "DONE";
	maxFlow = 100.0;

    ui.subusyLineEdit->setText(busyState);

    FUEL_FLOW = ui.fuelFlowSpinBox->value();


   device_addr = 0x13;

   temp_16 = (FUEL_FLOW / maxFlow) * 0xffff;

   buff[0] = 0x1A;//
   buff[1] = temp_16>>8;// upper bits
   buff[2] = temp_16 & 0x00ff;// lower 8 bits

/*   qDebug("FUEL buff{0} %x", buff[0]);
   qDebug("FUEL buff{1} %x", buff[1]);
   qDebug("FUEL buff{2} %x", buff[2]);*/

   fd = i2c.init_i2c();
   i2c.test_set_slave(fd, device_addr);//i2c_slaveAddr);
   if (write(fd, buff, 3) != 3) {
   fprintf(stderr, "i2c_write_command: I ctrl Error on write: %s\n",
   strerror(errno));
   }
   i2c.close_device(fd);

   qDebug() << "SET FUEL FLOW";

   i2c.delay(4000);// delay before read

   ui.spH2FlowlcdNumber->display(dc.FlowH2read());
}
void setup::setCH4Flow(void){
	MainWindow i2c;
	detConfigure dc;
	__u8 buff[3];//__16
	unsigned int temp_16;
	double maxFlow;
	int fd;

	__u8 device_addr;
	QString busyState;// 9-5-2014
	QString notBusyState;

	busyState = "BUSY";// 9-5-2014
	notBusyState = "DONE";
	maxFlow = 70.0;

    ui.subusyLineEdit->setText(busyState);

    ZERO_FLOW = ui.methFlowSpinBox->value();


   device_addr = 0x13;

   temp_16 = (ZERO_FLOW / maxFlow) * 0xffff;

   buff[0] = 0x19;//METH
   buff[1] = temp_16>>8;// upper bits
   buff[2] = temp_16 & 0x00ff;// lower 8 bits

/*   qDebug("METH buff{0} %x", buff[0]);
   qDebug("METH buff{1} %x", buff[1]);
   qDebug("METH buff{2} %x", buff[2]);*/

   fd = i2c.init_i2c();
   i2c.test_set_slave(fd, device_addr);//i2c_slaveAddr);
   if (write(fd, buff, 3) != 3) {
   fprintf(stderr, "i2c_write_command: I ctrl Error on write: %s\n",
   strerror(errno));
   }
   i2c.close_device(fd);

   qDebug() << "SET METH FLOW";

   i2c.delay(4000);// delay before read
   ui.spMethFlowlcdNumber->display(dc.FlowMethread());
}
void setup::setAirFlow(void){
	MainWindow i2c;
	detConfigure dc;
	__u8 buff[3];//__16
	unsigned int temp_16;
	double maxFlow;
	int fd;
	__u8 device_addr;
	QString busyState;
	QString notBusyState;

	maxFlow = 350.0;

	busyState = "BUSY...";
	notBusyState = "DONE...";

    ui.subusyLineEdit->setText(busyState);

    AIR_FLOW = ui.airFlowSpinBox->value();

   device_addr = 0x13;

   temp_16 = (AIR_FLOW / maxFlow) * 0xffff;

   buff[0] = 0x1B;
   buff[1] = temp_16>>8;
   buff[2] = temp_16 & 0x00ff;

/*   qDebug("air buff{0} %x", buff[0]);
   qDebug("air buff{1} %x", buff[1]);
   qDebug("air buff{2} %x", buff[2]);*/

   fd = i2c.init_i2c();
   i2c.test_set_slave(fd, device_addr);
   if (write(fd, buff, 3) != 3) {
   fprintf(stderr, "i2c_write_command: I ctrl Error on write: %s\n",
   strerror(errno));
   }
   i2c.close_device(fd);

   qDebug() << "Air";

   i2c.delay(4000);// delay before read
   ui.spAirFlowlcdNumber->display(dc.FlowAirread());
}
void setup::setSampToZero(void){
	MainWindow i2c;

	i2c.delay(200);
	temp_SAMP_FLOW = ui.sampFlowSpinBox->value();
	i2c.delay(200);
	qDebug("SAVED SPINBOX VALUE SET %f", temp_SAMP_FLOW);
	ui.sampFlowSpinBox->setValue(0.0);
	i2c.delay(200);
}
void setup::resetSamp(void){
	MainWindow i2c;

	i2c.delay(200);
	qDebug("SAVED SPINBOX VALUE RESET %f", temp_SAMP_FLOW);
	ui.sampFlowSpinBox->setValue(temp_SAMP_FLOW);
	i2c.delay(200);
	SAMPLE_FLOW = temp_SAMP_FLOW;
	i2c.delay(200);
	qDebug("SAVED SAMPLE_FLOW SPINBOX VALUE RESET %f", SAMPLE_FLOW);
}
void setup::setSampFlow(void){
	MainWindow i2c;
	detConfigure dc;
	__u8 buff[3];
	unsigned int temp_16;
	double maxFlow;
	int fd;
	__u8 device_addr;
	QString busyState;
	QString notBusyState;

	maxFlow = 70.0;

	busyState = "BUSY...";
	notBusyState = "DONE...";

    ui.subusyLineEdit->setText(busyState);

    SAMPLE_FLOW = ui.sampFlowSpinBox->value();
    qDebug("SAMPLE FLOW setting %f", SAMPLE_FLOW);

   device_addr = 0x13;

   temp_16 = (SAMPLE_FLOW / maxFlow) * 0xffff;

   buff[0] = 0x18;//
   buff[1] = temp_16>>8;// upper bits
   buff[2] = temp_16 & 0x00ff;// lower 8 bits

/*   qDebug("Sample buff{0} %x", buff[0]);
   qDebug("Sample buff{1} %x", buff[1]);
   qDebug("Sample buff{2} %x", buff[2]);*/

   fd = i2c.init_i2c();
   i2c.test_set_slave(fd, device_addr);//i2c_slaveAddr);
   if (write(fd, buff, 3) != 3) {
   fprintf(stderr, "i2c_write_command: I ctrl Error on write: %s\n",
   strerror(errno));
   }
   i2c.close_device(fd);
   qDebug() << "Sample";
   i2c.delay(4000);// delay before read
   ui.spSampFlowlcdNumber->display(dc.FlowSampread());
}
void setup::setPolVolt(void){
	MainWindow i2c;
	__u8 buff[3];
	unsigned int temp_16;
	double polvolt;
	int fd;
	__u8 device_addr;
	QString busyState;
	QString notBusyState;

	busyState = "BUSY...";
	notBusyState = "DONE...";

	ui.subusyLineEdit->setText(busyState);

    polvolt = 160.0 - 20.0;//ui.didPolVCtlSpinBox->value();

   device_addr = 0x10;

   temp_16 = (polvolt / 500) * 0xffff;
   buff[0] = 0x19;//
   buff[1] = temp_16>>8;// upper bits
   buff[2] = temp_16 & 0x00ff;// lower 8 bits

/*   qDebug("POL Volt buff{0} %x", buff[0]);
   qDebug("POL Volt buff{1} %x", buff[1]);
   qDebug("POL Volt buff{2} %x", buff[2]);*/

   fd = i2c.init_i2c();
   i2c.test_set_slave(fd, device_addr);//i2c_slaveAddr);
   if (write(fd, buff, 3) != 3) {
   fprintf(stderr, "i2c_write_command: I ctrl Error on write: %s\n",
   strerror(errno));
   }
   i2c.close_device(fd);

   qDebug() << "SET POL VOLT";
   ui.subusyLineEdit->setText(notBusyState);
   i2c.delay(2000);
   ui.subusyLineEdit->clear();
}
void setup::igniteDet(void){
	QString busyState;// 9-5-2014
	QString notBusyState;
	busyState = "BUSY";// 9-5-2014
	notBusyState = "DONE";
    ui.subusyLineEdit->setText(busyState);
    ui.suFlameLineEdit->clear();

	Valves vlvs;
	valveControl igniteFid;
	detConfigure cfg;

    vlvs.zeroValveCtl();

	MainWindow i2c;
 	QCursor crr;
	__u8 buff[3];//__16
	unsigned int temp_16;
	double maxFlow;
	int fd;
	__u8 device_addr;

	QString flameindOn;
	QString flameindOff;
	crr.setPos(2, 2);



	flameindOn = "FLAME ON";
	flameindOff = "FLAME OFF";


	//////////////////////// SET FLOWS

    qDebug() << "IGNITER ON!!!!!!";
    igniteFid.IO5a();// H2 solenoid ON RELAY 4 from main PCB TEMP

//    i2c.delay(200);// wait
//    igniteFid.IO12a();//Sample
    i2c.delay(200);// wait
    igniteFid.IO13a();//Zero
	i2c.delay(5000);// wait for 5 sec

	ui.fuelFlowSpinBox->setValue(FUEL_FLOW);
 	setH2Flow();
 	ui.sampFlowSpinBox->setValue(SAMPLE_FLOW);
	setSampFlow();
	ui.methFlowSpinBox->setValue(ZERO_FLOW);
	setCH4Flow();
	ui.airFlowSpinBox->setValue(AIR_FLOW);// added 9-4-15
	setAirFlow();

    i2c.delay(5000);// wait for 5 sec
    igniteFid.IO11a(); // set ignite relay

///////////////////////////////////////////////// Boost Fuel

    maxFlow = 100.0;
    FUEL_FLOW = ui.fuelFlowSpinBox->value() + 10.0;


   device_addr = 0x13;

   temp_16 = (FUEL_FLOW / maxFlow) * 0xffff;

   buff[0] = 0x1A;//
   buff[1] = temp_16>>8;// upper bits
   buff[2] = temp_16 & 0x00ff;// lower 8 bits

/*   qDebug("FUEL buff{0} %x", buff[0]);
   qDebug("FUEL buff{1} %x", buff[1]);
   qDebug("FUEL buff{2} %x", buff[2]);*/

   fd = i2c.init_i2c();
   i2c.test_set_slave(fd, device_addr);//i2c_slaveAddr);
   if (write(fd, buff, 3) != 3) {
   fprintf(stderr, "i2c_write_command: I ctrl Error on write: %s\n",
   strerror(errno));
   }
   i2c.close_device(fd);

   qDebug() << "BOOST FUEL FLOW";

   /////////////////////////////////////////// Drop Air
	maxFlow = 350.0;

   AIR_FLOW = ui.airFlowSpinBox->value() - 20.0;

  device_addr = 0x13;

  temp_16 = (AIR_FLOW / maxFlow) * 0xffff;

  buff[0] = 0x1B;
  buff[1] = temp_16>>8;
  buff[2] = temp_16 & 0x00ff;

/*  qDebug("air buff{0} %x", buff[0]);
  qDebug("air buff{1} %x", buff[1]);
  qDebug("air buff{2} %x", buff[2]);*/

  fd = i2c.init_i2c();
  i2c.test_set_slave(fd, device_addr);
  if (write(fd, buff, 3) != 3) {
  fprintf(stderr, "i2c_write_command: I ctrl Error on write: %s\n",
  strerror(errno));
  }
  i2c.close_device(fd);

  qDebug() << " Drop Air";

  i2c.delay(60000);// wait for 1 minute
  i2c.delay(60000);// wait for 1 minute

  igniteFid.IO11b(); // Reset ignite relay
  qDebug() << "IGNITER OFF";
//////////////////////////////////////////////// Return flow rates to normal

  /////////////////////////////////////////// Air
	maxFlow = 350.0;

   AIR_FLOW = ui.airFlowSpinBox->value();

  device_addr = 0x13;

  temp_16 = (AIR_FLOW / maxFlow) * 0xffff;

  buff[0] = 0x1B;
  buff[1] = temp_16>>8;
  buff[2] = temp_16 & 0x00ff;

/*  qDebug("air buff{0} %x", buff[0]);
  qDebug("air buff{1} %x", buff[1]);
  qDebug("air buff{2} %x", buff[2]);*/

  fd = i2c.init_i2c();
  i2c.test_set_slave(fd, device_addr);
  if (write(fd, buff, 3) != 3) {
  fprintf(stderr, "i2c_write_command: I ctrl Error on write: %s\n",
  strerror(errno));
  }
  i2c.close_device(fd);

  qDebug() << "Air";
  /////////////////////////////////////////////////  Fuel
  	  maxFlow = 100.0;
      FUEL_FLOW = ui.fuelFlowSpinBox->value();


     device_addr = 0x13;

     temp_16 = (FUEL_FLOW / maxFlow) * 0xffff;

     buff[0] = 0x1A;//
     buff[1] = temp_16>>8;// upper bits
     buff[2] = temp_16 & 0x00ff;// lower 8 bits

/*     qDebug("FUEL buff{0} %x", buff[0]);
     qDebug("FUEL buff{1} %x", buff[1]);
     qDebug("FUEL buff{2} %x", buff[2]);*/

     fd = i2c.init_i2c();
     i2c.test_set_slave(fd, device_addr);//i2c_slaveAddr);
     if (write(fd, buff, 3) != 3) {
     fprintf(stderr, "i2c_write_command: I ctrl Error on write: %s\n",
     strerror(errno));
     }
     i2c.close_device(fd);

     qDebug() << "FUEL FLOW";

     i2c.delay(60000);// wait for fuel mix to reach threshold- slow heat rise

     checkFlame();

 	if (FLAMEON == 1){
// 		igniteFid.IO6a();// indicator on
 		ui.spH2FlowlcdNumber->display(cfg.FlowH2read());// show flow if lit
 		i2c.delay(5000);
 		cfg.detDIDZeroCtl();
 		ui.suFlameLineEdit->setText(flameindOn);
 		qDebug() << "IGNITE FLAME ON";
 	}else{
 		ui.suFlameLineEdit->setText(flameindOff);
 		qDebug() << "IGNITE FLAME OFF";
// 		igniteFid.IO6b();// indicator off

 		ui.fuelFlowSpinBox->setValue(0.0);
 		setH2Flow();
 		ui.sampFlowSpinBox->setValue(0.0);
		setSampFlow();
		ui.methFlowSpinBox->setValue(0.0);
		setCH4Flow();//ZERO_FLOW
 	}

 	ui.subusyLineEdit->setText(notBusyState);
//    i2c.delay(2000);
//    ui.subusyLineEdit->clear();
}
bool setup::checkFlame(void){// Read flame state - After Ignition Sequence Duplicate function o not need
	valveControl chkFlame;
	detConfigure displaySig;
	MainWindow i2c;

	QString busyState;
	QString notBusyState;
	QString flameindOn;
	QString flameindOff;

//	double samp;
	bool stateF;

	busyState = "BUSY";
	notBusyState = "FL DONE";
	flameindOn = "FLAME ON";
	flameindOff = "FLAME OFF";

    ui.subusyLineEdit->setText(busyState);

    ///////////////////////////////////// READ FID SIGNAL
//    samp = displaySig.detTCD_I_Sig();
    ///////////////////////////////////// READ T/C
    stateF = chkFlame.fidH2BypassRdInput();

    if((stateF == 1)){// Flame is oFF BYpass is ON
//    	FLAMEON = 1;
    	qDebug("Check FLAME STATE On 1 = %x", FLAMEON);
    	ui.suFlameLineEdit->setText(flameindOn);
    	displaySig.FlowH2read();
//    	IO8a();// make ready
    }
    else{// Flame is ON BYpass is OFF
//    	FLAMEON = 0;
    	qDebug("Check FLAME STATE OFF 0 = %x", FLAMEON);
    	ui.suFlameLineEdit->setText(flameindOff);

    }

    ui.subusyLineEdit->setText(notBusyState);
    i2c.delay(2000);
    ui.subusyLineEdit->clear();

    return FLAMEON;
}
void setup::killFlowSafety(void){

	valveControl igniteFid;

	igniteFid.IO6b();// indicator off

 	ui.fuelFlowSpinBox->setValue(0.0);
 	FUEL_FLOW = 0.0;
 	setH2Flow();
 	ui.sampFlowSpinBox->setValue(0.0);
 	SAMPLE_FLOW = 0.0;
	setSampFlow();
	ui.methFlowSpinBox->setValue(0.0);
	ZERO_FLOW = 0.0;
	setCH4Flow();//ZERO_FLOW
}
