#include "calibrate.h"

#include <QApplication>
#include <QKeyEvent>
#include <errno.h>

#include "outputgainctrl.h"

bool cStopMe;
bool cRemoteCalIndicator;

extern double ZERO;// Raw zero voltage
extern double ZERO_SAVE;
extern double SPAN;// raw span voltage
extern double SAMPLE;// measured sample voltage
extern double CONC;// SPAN Concentration
extern double RAW_SPAN;// RAW_SPAN = SPAN - ZERO
extern double SAMPLE_RESULT;// calculated result
extern unsigned int Range;

extern bool CALINDICATOR;
extern unsigned int CAL_RANGE;
extern bool IN_CAL_MODE;
extern unsigned int i2c_slaveAddr;
extern bool thStopMe;
extern bool FLAMEON;
extern double lcdMultiplyer;
extern double ConcMultiplyer;

extern double SAMPLE_FLOW;
extern double temp_SAMP_FLOW;

calibrate::calibrate(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);

	IN_CAL_MODE = 1;
	thStopMe = 0;// stop measuring
	ui.calSpanlcdNumber->display(CONC);
	calvc.IO8b(); // not Rdy

	switch (Range){// make sure that the calibrated range is the same when started
		case 1:{
			ui.cgHiCheckBox->setChecked(1);
			ui.cgMidCheckBox->setChecked(0);
			ui.cgLowCheckBox->setChecked(0);
			ui.cgMinCheckBox->setChecked(0);
			break;
		}
		case 2:{
			ui.cgHiCheckBox->setChecked(0);
			ui.cgMidCheckBox->setChecked(1);
			ui.cgLowCheckBox->setChecked(0);
			ui.cgMinCheckBox->setChecked(0);
			break;
		}
		case 3:{
			ui.cgHiCheckBox->setChecked(0);
			ui.cgMidCheckBox->setChecked(0);
			ui.cgLowCheckBox->setChecked(1);
			ui.cgMinCheckBox->setChecked(0);
			break;
		}
		case 4:{
			ui.cgHiCheckBox->setChecked(0);
			ui.cgMidCheckBox->setChecked(0);
			ui.cgLowCheckBox->setChecked(0);
			ui.cgMinCheckBox->setChecked(1);
			break;
		}
		default:{
			ui.cgHiCheckBox->setChecked(1);
			ui.cgMidCheckBox->setChecked(0);
			ui.cgLowCheckBox->setChecked(0);
			ui.cgMinCheckBox->setChecked(0);
			break;
		}
	}
}

calibrate::~calibrate()
{
	IN_CAL_MODE = 0;
	cStopMe = 0;
	thStopMe = 1;// get ready to start restart measuring
	cRemoteCalIndicator = ui.rmcalCheckBox->isChecked();//cRemoteCalIndicator
}
void calibrate::keyReleaseEvent(QKeyEvent *event)
{
//	QCursor crr;

	switch (event->key()){
		case Qt::Key_F1:{// ZERO
			cStopMe = 0;
			ui.zeroButton->click();
//			crr.setPos(2, 2);
			qDebug() << "Released F1 Key";
			break;
		}
		case Qt::Key_F2:{// SPAN
			ui.spanButton->click();
//			crr.setPos(2, 2);
			cStopMe = 0;
			qDebug() << "Released F2 Key";
			break;
		}
		case Qt::Key_F3:{// TEST READ
//			crr.setPos(2, 2);
			qDebug() << "Released F3 Key";
			if (cStopMe == 0) {
				readSignal();
			}else{
				cStopMe = 0;
			}
//			ui.testReadButton->click();
			break;
		}
		case Qt::Key_F4:{
			ui.rmcalCheckBox->toggle();
//			crr.setPos(2, 2);
			cStopMe = 0;
			qDebug() << "Released F4 Key";
			break;
		}
		case Qt::Key_F5:{
//			crr.setPos(2, 2);
			cStopMe = 0;
			qDebug() << "Released F5 Key";
			break;
		}
		case Qt::Key_F6:{
//			crr.setPos(2, 2);
			cStopMe = 0;
			qDebug() << "Released F6 Key ()";
			break;
		}
		case Qt::Key_F7:{
//			crr.setPos(2, 2);
			cStopMe = 0;
			qDebug() << "Released F7 Key ()";
			break;
		}
		case Qt::Key_F8:{
//			crr.setPos(2, 2);
			cStopMe = 0;
			qDebug() << "Released F8 Key ()";
			break;
		}
		case Qt::Key_F9:{
//			crr.setPos(2, 2);
			cStopMe = 0;
			qDebug() << "Released F9 Key ()";
			break;
		}
		case Qt::Key_F10:{
//			crr.setPos(2, 2);
			cStopMe = 0;
			qDebug() << "Released F10 Key ()";
			break;
		}
		case Qt::Key_Return:{
//			crr.setPos(2, 2);
			cStopMe = 0;
			qDebug() << "Calibrate Released ENTER Key ()";
			ui.endButton->click();
			break;
		}
		case Qt::Key_Home:{
			qDebug() << "Released Home Key (ZERO)";
//			crr.setPos(2, 2);
			cStopMe = 0;
			ui.zeroButton->click();
			break;
		}
		case Qt::Key_End:{
//			crr.setPos(2, 2);
			cStopMe = 0;
			cStopMe = 0;
			qDebug() << "Released End Key (SPAN)";
			ui.spanButton->click();
			break;
		}
		default:{//
			qDebug("Default %x", event->key());
			break;
		}
	}
}

void calibrate::readSignal(void){
	QString busyState;
	QString doneState;
	busyState = "BUSY READ";
	doneState = "READ DONE...";
	ui.busyLineEdit->setText(busyState);

	double temp;

	if (cStopMe == 0) {
		cStopMe = 1;

		while(cStopMe == 1){
			if(cStopMe == 0){// if stopped in middle clear value
				temp = 0.0;
			}else{
				temp = caldisplaySig.detTCD_I_Sig();///123.456;//readSig.detTCD_I_Sig();
				cali2c.delay(500);/// test statement
				ui.calDetSigLCD->display(temp);
			}
		}
	}else if (cStopMe == 1){
		cStopMe = 0;
	}
	ui.busyLineEdit->setText(doneState);
}
void calibrate::zero(void)
{
	cStopMe = 0;
	QString busyState;
	busyState = "BUSY ZERO";
	ui.busyLineEdit->setText(busyState);
	ui.cZerocheckBox->setChecked(1);
	ui.cSpanCheckBox->setChecked(0);

	QString doneState;
	QString noFlame;
	QString measuring;

	unsigned int i, z, v;
	unsigned int a;
	double temp[20];
	double valu;
	double average;

	doneState = "ZERO DONE...";
	noFlame = "nFL";
	measuring = "Z-Measuring";

	average = 0.0;
	i = 0;
	z = 0;

	a = calvc.fidH2BypassRdInput();
	if(a == 1){// check Flame and control H2 shutoff solenoid
		qDebug() <<" CAL SPAN CALIBRATION FLAME Checked - ok";
	}else{
		ui.calDetSigLCD->display(noFlame);
		ui.busyLineEdit->setText(noFlame);
	}

	if (FLAMEON == 1) {
		qDebug("t cal ZERO FLOW Reset %f", temp_SAMP_FLOW);
		qDebug("s cal ZERO FLOW Reset %f", SAMPLE_FLOW);
		calgas.zeroValveCtl();

		for (v=0;v<10;++v){//each rev is approx 2.16 sec 0 = 21.6 MAKE USER DEFINED VARIABLE
			cali2c.delay(12000);
			valu = caldisplaySig.detTCD_I_Sig();
			ui.calDetSigLCD->display(valu);
		}// Wait about 5 min.
			cali2c.delay(60000);// need minimum 2 minute
			cali2c.delay(60000);
			ui.busyLineEdit->setText(measuring);

		for(i=0; i<20; ++i){//10
			temp[i] = caldisplaySig.detTCD_I_Sig();
			ui.calDetSigLCD->display(temp[i]);
		//		qDebug("C temp ZERO = %f", temp[i]);
			cali2c.delay(1000);
		}
		for(z=0; z<20; ++z){//10
			average = average + temp[z];
		}
		//	qDebug("C Sum  ZERO = %f", average);
		ZERO = average / 20.0;//10
		ZERO_SAVE = ZERO;// store value for range control

		ui.calDetSigLCD->display(ZERO);
		cali2c.delay(500);// added for displaying
		//	qDebug("C END ZERO = %f", ZERO);
	}else{
		ui.calDetSigLCD->display(noFlame);
	}

	ui.busyLineEdit->setText(doneState);
}

void calibrate::span(void)
{
	cStopMe = 0;
	QString busyState;
	busyState = "BUSY SPAN";
	ui.busyLineEdit->setText(busyState);
	ui.cZerocheckBox->setChecked(0);
	ui.cSpanCheckBox->setChecked(1);

	qDebug("SPAN ROUTINE ENTERED");

	QString doneState;
	QString spanState;
	QString noFlame;
	QString measuring;
	QString clearSpan;

	int v;
	unsigned int i, z;
	unsigned int a, b;
	double temp[20];
	double valu;
	double average;

	doneState = "SPAN DONE...";
	spanState = "NVSPAN";
	noFlame = "nFL";
	measuring = "SP-Measuring";
	clearSpan = "Clearing Span";

	CAL_RANGE = Range;

	a = calvc.fidH2BypassRdInput();
	if(a == 1){// check Flame and control H2 shutoff solenoid
		qDebug() <<" CAL SPAN CALIBRATION FLAME Checked - ok";
	}else{
		ui.calDetSigLCD->display(noFlame);
		ui.busyLineEdit->setText(noFlame);
	}

	if (FLAMEON == 1) {
		calgas.spanValveCtl();

		for (v=0;v<10;++v){//each rev is approx 2.16 MAKE USER DEFINED VARIABLE
			cali2c.delay(12000);
			valu = caldisplaySig.detTCD_I_Sig();
			ui.calDetSigLCD->display(valu);
		}
		cali2c.delay(60000);// need minimum 2 minute
		cali2c.delay(60000);
		ui.busyLineEdit->setText(measuring);

		average = 0.0;
		i = 0;
		z = 0;

		for(i=0; i<20; ++i){//10
			temp[i] = caldisplaySig.detTCD_I_Sig();
			ui.calDetSigLCD->display(temp[i]);
			cali2c.delay(1000);
		}
		//	qDebug("C temp SPAN = %f", temp[i]);
		for(z=0; z<20; ++z){//10
			average = average + temp[z];
		}
		//	qDebug("C SUM SPAN = %f", SPAN);
		SPAN = (average / 20.0);// - ZERO;10
		ui.calDetSigLCD->display(SPAN);
		//	qDebug("C END SPAN = %f", SPAN);

		if((ui.CalSpanConcSpinBox->value() > 0.0) || (ui.calSpanlcdNumber->value() > 0.0)){// make sure  to set concentration to > 0 and position
			CALINDICATOR = 1;

			b = calvc.fidH2BypassRdInput();
			if(b == 1){// check Flame and control H2 shutoff solenoid
				calgas.zeroValveCtl();// Change to Zero GAs before going to measure sample
				ui.busyLineEdit->setText(clearSpan);
				cali2c.delay(60000);// wait for span gas to clear out before going to measure
				cali2c.delay(60000);//need minimum 2 minute wait for zero gas to purge through
		//		display message
				qDebug() <<" CAL SPAN CALIBRATION FLAME Checked - mk rdy";
			}else{
				calvc.IO8b();// make not ready
				ui.calDetSigLCD->display(noFlame);
				ui.CalSpanConcSpinBox->setValue(0.0);
			}

			if (ui.CalSpanConcSpinBox->value() == 0.0){// check for new value
				ui.calSpanlcdNumber->display(CONC);
				cali2c.delay(500);
			}else{
				CONC = ui.CalSpanConcSpinBox->value();
				ui.calSpanlcdNumber->display(CONC);
				cali2c.delay(500);
			}
			ui.busyLineEdit->setText(doneState);
//			qDebug("C SPAN = %f", SPAN);
//			qDebug("C ZERO = %f", ZERO);
//			qDebug("C CONC = %f", CONC);
		}
		else{
			ui.busyLineEdit->setText(spanState);
			CALINDICATOR = 0;
			calvc.IO8b();// make not ready
		}
	}else{
		ui.calDetSigLCD->display(noFlame);
	}
}
void calibrate::calRangeHi(void){

	QString busyState;
	QString doneState;
	busyState = "Range R1 BUSY";
	doneState = "Range R1 END";
	ui.busyLineEdit->setText(busyState);
	OutputGainCtrl cgc;
	cgc.outputRange1();
	ui.cgHiCheckBox->setChecked(1);
	ui.cgMidCheckBox->setChecked(0);
	ui.cgLowCheckBox->setChecked(0);
	ui.cgMinCheckBox->setChecked(0);
	lcdMultiplyer = 1.0;
	ConcMultiplyer = 1.0;
	ui.busyLineEdit->setText(doneState);
}
void calibrate::calRangeMid(void){

	QString busyState;
	QString doneState;
	busyState = "Range R2 BUSY";
	doneState = "Range R2 END";
	ui.busyLineEdit->setText(busyState);
	OutputGainCtrl cgc;
	cgc.outputRange2();
	ui.cgHiCheckBox->setChecked(0);
	ui.cgMidCheckBox->setChecked(1);
	ui.cgLowCheckBox->setChecked(0);
	ui.cgMinCheckBox->setChecked(0);
	lcdMultiplyer = 1.0;
	ConcMultiplyer = 1.0;
	ui.busyLineEdit->setText(doneState);
}
void calibrate::calRangeLo(void){

	QString busyState;
	QString doneState;
	busyState = "Range R3 BUSY";
	doneState = "Range R3 END";
	ui.busyLineEdit->setText(busyState);
	OutputGainCtrl cgc;
	cgc.outputRange3();
	ui.cgHiCheckBox->setChecked(0);
	ui.cgMidCheckBox->setChecked(0);
	ui.cgLowCheckBox->setChecked(1);
	ui.cgMinCheckBox->setChecked(0);
	lcdMultiplyer = 1.0;
	ConcMultiplyer = 1.0;
	ui.busyLineEdit->setText(doneState);
}
void calibrate::calRangeMin(void){

	QString busyState;
	QString doneState;
	busyState = "Range R4 BUSY";
	doneState = "Range R4 END";
	ui.busyLineEdit->setText(busyState);
	OutputGainCtrl cgc;
	cgc.outputRange4();
	ui.cgHiCheckBox->setChecked(0);
	ui.cgMidCheckBox->setChecked(0);
	ui.cgLowCheckBox->setChecked(0);
	ui.cgMinCheckBox->setChecked(1);
	lcdMultiplyer = 1.0;
	ConcMultiplyer = 1.0;
	ui.busyLineEdit->setText(doneState);
}
void calibrate::calZero(void){
	cStopMe = 0;// Stop read may need a delay
	QString busyState;
	QString doneState;

	busyState = "HW ZERO BUSY";
	doneState = "HW ZERO END";
	ui.busyLineEdit->setText(busyState);
	ui.calDetSigLCD->display(0.0);// clear the display to 0.0
	detConfigure setRange;
	ui.calDetSigLCD->display(setRange.detDIDZeroCtl());
	ui.busyLineEdit->setText(doneState);
}

void calibrate::remoteCal(void)
{
	QString busyState;
	QString doneState;
	busyState = "RM-CAL BUSY";
	doneState = "RM-CAL END";
	__u8 buft[3], buff[3];
	int fd;
	__u8 port_addr;
	unsigned int tempSid;

	port_addr = 0x34;// address for H3 Bypass read P21

	tempSid = i2c_slaveAddr;// store current I2C Slave Id
	i2c_slaveAddr = 0x40;// Change to needed Id for input reading

	fd = cali2c.init_i2c();// open device
	cali2c.test_set_slave(fd, i2c_slaveAddr);
	buft[0] = port_addr;
	if (write(fd, buft, 2) != 2) {
			fprintf(stderr, "i2c_write_command: 0x09 0x0a Error on write: %s\n",
			strerror(errno));
	}
	cali2c.i2c_read_reg(fd, buff, port_addr);// Read in4 port (pin) 21 for Cal ind Status
	qDebug("Remote Cal  in4 REMOTE CAL STATUS buff[0] = %x", buff[0]);

	cali2c.close_device(fd);


	if (buff[0] == 0) {
		cRemoteCalIndicator = ui.rmcalCheckBox->isChecked();//cRemoteCalIndicator
		qDebug("Remote Cal  checked?? = %x", cRemoteCalIndicator);

		qDebug("C IN REMOTE CALIBTATION");
		ui.calDetSigLCD->display(0.0);// clear the display to 0.0
		lcdMultiplyer = 1.0;
		ConcMultiplyer = 1.0;
		calvc.IO8b();// make not ready
		Range = CAL_RANGE;
		caldisplaySig.detRange();
		qDebug("RC Switch to Zero GAS");
		calgas.zeroValveCtl();
		cali2c.delay(60000);
		cali2c.delay(60000);
		cali2c.delay(60000);
		cali2c.delay(60000);
		qDebug("RC ZERO Routine Start");
		zero();
		qDebug("RC Switch to Span GAS");
		calgas.spanValveCtl();
		cali2c.delay(60000);
		cali2c.delay(60000);
		cali2c.delay(60000);
		cali2c.delay(60000);
		qDebug("RC SPAN Routine Start");
		span();
		qDebug("C REMOTE CALIBTATION END");
		CALINDICATOR = 1;
		calgas.sampValveCtl();// switch back to sample gas
		calvc.IO8a();// make ready
	}

	i2c_slaveAddr = tempSid;
}
