#include <QApplication>
#include <QKeyEvent>
#include <QTime>
#include "rampmonitor.h"
#include "modbus.h"
#include "modbus-private.h"
#include "qextserialenumerator.h"
#include <QtGui>
#include <QAction>
#include <errno.h>

#include <stdio.h>
#include <stdlib.h>
#include "mainwindow.h"
#include "part.h"
#include "detectorwidget.h"
#include <QProcess>
#include <QDebug>
#include "ovencontrol.h"
#include "event_io.h"
#include "readflow.h"
#include "valvecontrol.h"
#include "waitfortrigger.h"
#include <QTimeEdit>
#include <QString>
//#include "keypress.h" slotTimeout
int abortMode;
extern bool openCloseState;
extern unsigned int i2c_slaveAddr;
extern bool stopMeFlow;
extern bool TRIGGER;
extern bool stopRead;
#define DT 1
// 100
rampMonitor::rampMonitor(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);
}

rampMonitor::~rampMonitor()
{
	abortMode = 0;// for monitor running to stop 9-16-2014
}

void rampMonitor::keyPressEvent(QKeyEvent *event) // F1 Key = first blank key to left
{
	rampMonitor rmVenttst;

		switch (event->key()){
		case Qt::Key_F1:{
			qDebug() << " RM Pressed F1 Key";
//			rampMonitor::monitorabort();
			break;
		}
		case Qt::Key_F2:{
//			closeVent();//test
			qDebug() << " RM Pressed F2 Key";
			break;
		}
		case Qt::Key_F3:{
//			openVent();
			qDebug() << " RM Pressed F3 Key";
			break;
		}
		case Qt::Key_F4:{
			qDebug() << " RM Pressed F4 Key";
			break;
		}
		case Qt::Key_F5:{
			qDebug() << " RM Pressed F5 Key";
			break;
		}
		case Qt::Key_F6:{
			qDebug() << " RM Pressed F6 Key";
			break;
		}
		case Qt::Key_F7:{
			qDebug() << " RM Pressed F7 Key";
			break;
		}
		case Qt::Key_F8:{
			qDebug() << " RM Pressed F8 Key";
			break;
		}
		case Qt::Key_F9:{
			qDebug() << " RM Pressed F9 Key";
			break;
		}
		case Qt::Key_F10:{
			qDebug() << " RM Pressed F10 Key";
			break;
		}
		default:{//
			break;
		}
    }
}
void rampMonitor::keyReleaseEvent(QKeyEvent *event)
{
	readFlow rmReadFl;
	valveControl owValves;

	switch (event->key()){
		case Qt::Key_F1:{
			ui.startrunButton->click();
			qDebug() << "Released F1 Key";
			break;
		}
		case Qt::Key_F2:{
			ui.closeButton->click();
			qDebug() << "Released F2 Key";
			break;
		}
		case Qt::Key_F3:{
			ui.cancelrunButton->click();
			qDebug() << "Released F3 Key";
			break;
		}
		case Qt::Key_F4:{
			rampMonitor::monitorabort();
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
		case Qt::Key_F7:{// Read Flow
			qDebug() << "Released F7 Key (Flow) RM";
			break;
		}
		case Qt::Key_F8:{
			qDebug() << "Released F8 Key (Det 2)";
//			ui->partStack->setCurrentWidget(currentWidgetList[2]);
			break;
		}
		case Qt::Key_F9:{
//			owValves.;
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

int rampMonitor::read_recipeStatus(int recipe_state)
{
	MainWindow mw_rs;
	int slaveID;
	QString statusmw;

	slaveID = 1;

	switch (recipe_state){
		case 0:{// done
			ui.recipeStatelcdNumber->display(recipe_state);//display("done");
			statusmw = "DONE";
			ui.lineEdit->setText(statusmw);
			break;
		}
		case 1:{// aborted
			ui.recipeStatelcdNumber->display(recipe_state);//display("aborted");
			statusmw = "ABORTED";
			ui.lineEdit->setText(statusmw);
			break;
		}
		case 2:{// error: empty recipe
			ui.recipeStatelcdNumber->display(recipe_state);//display("error: empty recipe");
			statusmw = "EMPTY METHOD";
			ui.lineEdit->setText(statusmw);
			break;
		}
		case 3:{// error: no deviation
			ui.recipeStatelcdNumber->display(recipe_state);//display("error: no deviation");
			statusmw = "error: no deviation";
			ui.lineEdit->setText(statusmw);
			break;
		}
		case 4:{// recipe on hold
			ui.recipeStatelcdNumber->display(recipe_state);//display("recipe on hold");
			statusmw = "METHOD HOLD";
			ui.lineEdit->setText(statusmw);
			break;
		}
		case 5:{// ramping
			ui.recipeStatelcdNumber->display(recipe_state);//display("ramping");
			statusmw = "RAMPING";
			ui.lineEdit->setText(statusmw);
			break;
		}
		case 6:{// soaking
			ui.recipeStatelcdNumber->display(recipe_state);//display("soaking");
			statusmw = "HOLDING";
			ui.lineEdit->setText(statusmw);
			break;
		}
		case 7:{// ramp holdback
			ui.recipeStatelcdNumber->display(recipe_state);//display("ramp hold back");
			statusmw = "RAMP HOLDBACK";
			ui.lineEdit->setText(statusmw);
			break;
		}
		case 8:{// soak hold back
			ui.recipeStatelcdNumber->display(recipe_state);//display("soak hold back");
			statusmw = "SOAK HOLDBACK";
			ui.lineEdit->setText(statusmw);
			break;
		}
		case 9:{// soak hold back
			ui.recipeStatelcdNumber->display(-1);//display("soak hold back");
			statusmw = "NOT READY";
			ui.lineEdit->setText(statusmw);
			break;
		}
		default:{//
			break;
		}
	}
	return recipe_state;
}

void rampMonitor::waitForTgr(void)
{
	waitForTrigger tgr(this);// Crerate a dialog
			if (tgr.exec()) {
				valveControl wt;
				wt.testRdInput();
			}
}
//timeEdit->setTime(...); //set initial time
//QTimer timer;
//timer.start(1000); //timer will emit timeout() every second
//connect(&timer, SIGNAL(timeout()), this, SLOT(slotTimeout()));

void rampMonitor::slotTimeout(int monSec)
{
	int temp;
	temp = monSec;
	//    QTime time = timeEdit->time().addSecs(1);//(-1);
    QTime time = ui.monTimeCntEdit->time().addSecs(1);
    ui.monTimeCntEdit->setTime(time);
//    timeEdit->setTime(time);

//    if (time == QTime(0, 0));
        //time is zero, show message box
}
void rampMonitor::monitorRun(void)
{
	MainWindow mw_monitor;
	event_io mw_event;
	valveControl mw_wait;
	QTimer timer;
	QTime time, newT, oldT;
	QString statusmw, statusrdy;

	int current_valu, target_valu, processbar_percent, recycly_num;
	int slaveID;
	int crs; // current recipe segment
	int recipe_state;
	int cycleCounter;
	bool flag_Case0, openCLose;
	unsigned int tempSid, ventCnt;
	int intermediate1, intermediate2, opMode;
//	double setp, act;

	openCLose = 1;
	ventCnt = 0;

	slaveID = 0x01;// always 0x01 for oven
	cycleCounter = 0;
	flag_Case0 = 1;
	ventCnt = 1;
	crs = 0;//9-17-2014

	mw_monitor.changeSerialPort(2);//
	mw_monitor.delay(2000);// wait for msecs
	opMode = mw_monitor.readRetry(slaveID, 4004);//readRecipeValue(slaveID, 4004);
	if (opMode == 5){// is current recipe mode run?
		mw_monitor.delay(1000);// wait for msecs
		time.start();// Starts with the current system time
		oldT = time;
//		qDebug() << "monitor if ramp is set";
		recycly_num = 1 + mw_monitor.readRetry(slaveID, 4046);//(mw_monitor.readRecipeValue(slaveID, 4046));
		mw_monitor.delay(DT);// wait for msecs

		recipe_state = mw_monitor.readRetry(slaveID, 4092);//mw_monitor.readRecipeValue(slaveID, 4092);//read_recipeStatus();//
		read_recipeStatus(recipe_state);
		ui.recipeStatelcdNumber->display(recipe_state);
		ui.lcdNumber_numofcycles->display(recycly_num);

		while (recipe_state >= 0){//while current recipe state is not aborted or done 2
		 	time.restart();//restarts and returns the time since the initial start - shown as current hh:mm:ss
			//newT = time.addSecs(1);
		 	newT = time;
		 	ui.montimeEdit->setTime(newT);//print it

		 	mw_monitor.delay(DT);// wait for msecs
		 	abortMode = mw_monitor.readRetry(slaveID, 4092);//mw_monitor.readRecipeValue(slaveID, 4092);
			if (abortMode == 0){// if run is done or Global abortMode is changed to 0

				mw_monitor.delay(DT);// wait for msecs
				mw_monitor.writeRecipeSetpoint(slaveID, 4004, 3);//mode For normal operation
				// make sure oven get back to initial temp
//				qDebug() << "making sure initial set temp is met";
				mw_monitor.delay(10000);// delay 10 seconds before temp read
				current_valu = mw_monitor.readRetry(slaveID, 0);//mw_monitor.readRecipeValue(slaveID, 0);
//				qDebug("#1 Current Value, %d", current_valu);
				ui.lcdNumber_currentrsm->display(current_valu);
				mw_monitor.delay(DT);// wait for msecs

				intermediate1 = mw_monitor.readRetry(slaveID, 1);//mw_monitor.readRecipeValue(slaveID, 1);
				if(current_valu > (intermediate1 - 10)){
					mw_monitor.delay(DT);// wait for msecs
					mw_monitor.openVent();
//					qDebug() << " >-10";
//					qDebug("Current Value, %d", current_valu);
				}
				mw_monitor.delay(DT);// wait for msecs

				intermediate1 = mw_monitor.readRetry(slaveID, 1);//mw_monitor.readRecipeValue(slaveID, 1);
				if(current_valu < (intermediate1 + 10)){
					mw_monitor.delay(DT);// wait for msecs
					mw_monitor.closeVent();
//					qDebug() << " <+10";
//					qDebug("Current Value, %d", current_valu);
				}
				mw_monitor.delay(DT);// wait for msecs

				intermediate1 = mw_monitor.readRetry(slaveID, 1);//mw_monitor.readRecipeValue(slaveID, 1);// target
				if (current_valu < (intermediate1-2) || current_valu > (intermediate1+2)){
					mw_monitor.delay(DT);// wait for msecs

					intermediate1 = mw_monitor.readRetry(slaveID, 16);//mw_monitor.readRecipeValue(slaveID, 16);// initial temp not target temp ??
					mw_monitor.delay(DT);// wait for msecs
					intermediate2 = mw_monitor.readRetry(slaveID, 0);//mw_monitor.readRecipeValue(slaveID, 0);// Current Temp

					while (intermediate1 < (intermediate2 - 2) || intermediate1 > (intermediate2 + 2)){
						mw_monitor.delay(DT);// wait for msecs
						current_valu = mw_monitor.readRetry(slaveID, 0);//mw_monitor.readRecipeValue(slaveID, 0);
//						qDebug() << "Waiting for init Temp to be within +/-2.......";
						ui.lcdNumber_currentrsm->display(current_valu);
//						qDebug("Current Value, %d", current_valu);
						mw_monitor.delay(DT);

						intermediate1 = mw_monitor.readRetry(slaveID, 16);//mw_monitor.readRecipeValue(slaveID, 16);// initial temp
						mw_monitor.delay(DT);// wait for msecs
						intermediate2 = mw_monitor.readRetry(slaveID, 0);//mw_monitor.readRecipeValue(slaveID, 0);// Current Temp
						qApp->processEvents();// stop and check for any events to be processed - added 7/27/2014 test
					}
//					qDebug() << " DONE Waiting";
					tempSid = i2c_slaveAddr;
					i2c_slaveAddr = 0x40;
					mw_event.IO8b(); // Not RDY
					statusrdy = "NOT READY";
					ui.readyLineEdit->setText(statusrdy);
					i2c_slaveAddr = tempSid;
				}

				if(openCloseState == 1){// make sure that the door is closed after reaching initial temp
					mw_monitor.closeVent();
				}
				if(openCloseState == 0){

				}
				tempSid = i2c_slaveAddr;
				i2c_slaveAddr = 0x40;
				mw_event.IO8b(); // Rdy
				statusrdy = "READY";
				ui.readyLineEdit->setText(statusrdy);
				i2c_slaveAddr = tempSid;
			}
			// make sure vent door is correct for all states
			if (openCLose == 1){///////////////////////////////////////////////9/14/2014 door right state
				///WRONG NOW needs to change with change in level
				target_valu = mw_monitor.readRetry(slaveID, crs+16);//mw_monitor.readRecipeValue(slaveID, 1);//16 this should be current temp not initial temp
				mw_monitor.delay(DT);// wait for msecs
				current_valu = mw_monitor.readRetry(slaveID, 0);//mw_monitor.readRecipeValue(slaveID, 0);
				mw_monitor.delay(DT);// wait for msecs
				if ((target_valu >= current_valu) && (openCloseState == 1)){
					// close door
//					setp = mw_monitor.readRecipeValue(slaveID, 16);// Target value
					mw_monitor.delay(DT);// wait for msecs
//					act = mw_monitor.readRecipeValue(slaveID, 0);
//					qDebug("cSet p = %f", setp);
//					qDebug("cAct = %f", act);
					mw_monitor.closeVent();
				}
				if((target_valu < current_valu) && (openCloseState == 0)){
					// open door
//					setp = mw_monitor.readRecipeValue(slaveID, 16);
//					mw_monitor.delay(50);// wait for msecs
//					act = mw_monitor.readRecipeValue(slaveID, 0);
					mw_monitor.delay(DT);// wait for msecs
//					qDebug("0Set p = %f", setp);
//					qDebug("0Act = %f", act);
					mw_monitor.openVent();
				}
				openCLose = 0;//9-14-2014
			}

			if(recipe_state > 0){
				crs = mw_monitor.readRetry(slaveID, 4093);//mw_monitor.readRecipeValue(slaveID, 4093); // get current recipe segment 0 to 8
				mw_monitor.delay(DT);// wait for msecs
			}else{
				crs = 8;
			}

//			qDebug("case number is  %d", crs);
			switch (crs){
			case 0:{

				// reset for next cycle
			 	if(ventCnt != 1 && openCLose == 0){
			 		ventCnt = 1;
			 		openCLose = 1;
			 	}/////////////////// display process 1 				cycleCounter++;
//				qDebug() << "case 0";
				current_valu = mw_monitor.readRetry(slaveID, 0);//mw_monitor.readRecipeValue(slaveID, 0);
				mw_monitor.delay(DT);// wait for msecs
				target_valu = mw_monitor.readRetry(slaveID, 16);//mw_monitor.readRecipeValue(slaveID, 16);
				if(target_valu < current_valu){
					processbar_percent = 100 * target_valu / current_valu;
				}else{
					processbar_percent = 100 * current_valu / target_valu;
				}

				ui.mon_progressBar_1->setValue(processbar_percent);
				ui.lcdNumber_currentrsm->display(current_valu);
				ui.lcdNumber_targetrsm->display(target_valu);
				ui.lcdNumber_ramplevelrsm->display(crs+1);

				recipe_state = mw_monitor.readRetry(slaveID, 4092);//mw_monitor.readRecipeValue(slaveID, 4092);
				read_recipeStatus(recipe_state);//
				ui.recipeStatelcdNumber->display(recipe_state);

				if (flag_Case0 == 1){
					cycleCounter++;
					flag_Case0 = 0;
					processbar_percent = 0;// clear all Status bars
					ui.mon_progressBar_1->setValue(processbar_percent);
					ui.mon_progressBar_2->setValue(processbar_percent);
					ui.mon_progressBar_3->setValue(processbar_percent);
					ui.mon_progressBar_4->setValue(processbar_percent);
					ui.mon_progressBar_5->setValue(processbar_percent);
					ui.mon_progressBar_6->setValue(processbar_percent);
					ui.mon_progressBar_7->setValue(processbar_percent);
					ui.mon_progressBar_8->setValue(processbar_percent);
					ui.lcdNumber_rampcyclersm->display(cycleCounter);

					tempSid = i2c_slaveAddr;
					i2c_slaveAddr = 0x40;
					mw_event.IO8b(); // Rdy
					statusrdy = "NOT READY";
					ui.readyLineEdit->setText(statusrdy);
					i2c_slaveAddr = tempSid;

					mw_monitor.delay(1000);// wait for 2 seconds before starting and setting ready

					tempSid = i2c_slaveAddr;
					i2c_slaveAddr = 0x40;
					mw_event.IO8a(); // Rdy
					statusrdy = "READY";
					ui.readyLineEdit->setText(statusrdy);
					i2c_slaveAddr = tempSid;

					if(TRIGGER == 1){
						mw_monitor.writeRecipeSetpoint(slaveID, 4004, 6);// For hold operation
//						qDebug("Inloop Trigger = %d", TRIGGER);
						statusrdy = "Waiting For TRG";
						ui.readyLineEdit->setText(statusrdy);
						mw_wait.testRdInput();
						statusrdy = "READY";
						ui.readyLineEdit->setText(statusrdy);
						//waitForTgr();
						mw_monitor.delay(DT);// wait for msecs
						mw_monitor.writeRecipeSetpoint(slaveID, 4004, 5);// For recipe / resume operation
						mw_monitor.delay(DT);// wait for msecs
					}
				}

////////////////////////////////////////////////////////////////////////// CHeck to see if cool enough
				mw_monitor.delay(DT);// wait for msecs
				target_valu = mw_monitor.readRetry(slaveID, 16);//mw_monitor.readRecipeValue(slaveID, 16);
				mw_monitor.delay(DT);// wait for msecs
				current_valu = mw_monitor.readRetry(slaveID, 0);//mw_monitor.readRecipeValue(slaveID, 0);
// if cooling close vent when close
				if((openCloseState == 1) && (current_valu <= target_valu + 2) && (current_valu >= target_valu - 2)){//+-5
					// close door
//					qDebug("cSet p = %d", target_valu);
//					qDebug("cAct = %d", current_valu);
					mw_monitor.closeVent();
//					qDebug() << "vent closed after cooling";
				}
//				qDebug() << "case 0";
//				qDebug("Cycle number is  %d", cycleCounter);
//				qDebug("recycly_num number is  %d", recycly_num);
				break;
			}
			case 1:{
				/////////////////// display process 2
//				qDebug() << "case 1";
				if (ventCnt == 1 && openCLose == 0){
					openCLose = 1;
					ventCnt = 2;
//					qDebug("ventcnt = %d", ventCnt);
				}
				current_valu = mw_monitor.readRetry(slaveID, 0);//mw_monitor.readRecipeValue(slaveID, 0);
				mw_monitor.delay(DT);// wait for msecs
				target_valu = mw_monitor.readRetry(slaveID, 17);//mw_monitor.readRecipeValue(slaveID, 17);
				if(target_valu < current_valu){
					processbar_percent = 100 * target_valu / current_valu;
				}else{
					processbar_percent = 100 * current_valu / target_valu;
				}

				ui.mon_progressBar_2->setValue(processbar_percent);
				ui.lcdNumber_currentrsm->display(current_valu);
				ui.lcdNumber_targetrsm->display(target_valu);
				ui.lcdNumber_rampcyclersm->display(cycleCounter);
				ui.lcdNumber_ramplevelrsm->display(crs+1);
				mw_monitor.delay(DT);// wait for msecs
				recipe_state = mw_monitor.readRecipeValue(slaveID, 4092);
				ui.recipeStatelcdNumber->display(recipe_state);
				read_recipeStatus(recipe_state);//

				flag_Case0 = 1;
				mw_monitor.delay(DT);// wait for msecs

// if cooling close vent when close
				if((openCloseState == 1) && (current_valu <= target_valu + 2) && (current_valu >= target_valu - 2)){
					// close door
//					qDebug("cSet p = %d", target_valu);
//					qDebug("cAct = %d", current_valu);
					mw_monitor.closeVent();
//					qDebug() << "vent closed after cooling";
				}
				break;
			}
			case 2:{
				/////////////////// display process 3
//				qDebug() << "case 2";
				if (ventCnt == 2 && openCLose == 0){
					openCLose = 1;
					ventCnt = 3;
//					qDebug("ventcnt = %d", ventCnt);
				}
				current_valu = mw_monitor.readRetry(slaveID, 0);//mw_monitor.readRetry(slaveID, 0);//mw_monitor.readRecipeValue(slaveID, 0);
				mw_monitor.delay(DT);// wait for msecs
				target_valu = mw_monitor.readRetry(slaveID, 18);//mw_monitor.readRetry(slaveID, 18);//mw_monitor.readRecipeValue(slaveID, 18);
				if(target_valu < current_valu){
					processbar_percent = 100 * target_valu / current_valu;
				}else{
					processbar_percent = 100 * current_valu / target_valu;
				}

				ui.mon_progressBar_3->setValue(processbar_percent);
				ui.lcdNumber_currentrsm->display(current_valu);
				ui.lcdNumber_targetrsm->display(target_valu);
				ui.lcdNumber_rampcyclersm->display(cycleCounter);
				ui.lcdNumber_ramplevelrsm->display(crs+1);

				mw_monitor.delay(DT);// wait for msecs
				recipe_state = mw_monitor.readRetry(slaveID, 4092);//mw_monitor.readRetry(slaveID, 4092);//mw_monitor.readRecipeValue(slaveID, 4092);
				ui.recipeStatelcdNumber->display(recipe_state);
				read_recipeStatus(recipe_state);//
// if cooling close vent when close
				if((openCloseState == 1) && (current_valu <= target_valu + 2) && (current_valu >= target_valu - 2)){
					// close door
//					qDebug("cSet p = %d", target_valu);
//					qDebug("cAct = %d", current_valu);
					mw_monitor.closeVent();
//					qDebug() << "vent closed after cooling";
				}
				break;
			}
			case 3:{
				/////////////////// display process 4
//				qDebug() << "case 3";
				if (ventCnt == 3 && openCLose == 0){
					openCLose = 1;
					ventCnt = 4;
//					qDebug("ventcnt = %d", ventCnt);
				}
				current_valu = mw_monitor.readRetry(slaveID, 0);//mw_monitor.readRecipeValue(slaveID, 0);
				mw_monitor.delay(DT);// wait for msecs
				target_valu = mw_monitor.readRetry(slaveID, 19);//mw_monitor.readRecipeValue(slaveID, 19);
				if(target_valu < current_valu){
					processbar_percent = 100 * target_valu / current_valu;
				}else{
					processbar_percent = 100 * current_valu / target_valu;
				}

				ui.mon_progressBar_4->setValue(processbar_percent);
				ui.lcdNumber_currentrsm->display(current_valu);
				ui.lcdNumber_targetrsm->display(target_valu);
				ui.lcdNumber_rampcyclersm->display(cycleCounter);
				ui.lcdNumber_ramplevelrsm->display(crs+1);

				mw_monitor.delay(DT);// wait for msecs
				recipe_state = mw_monitor.readRetry(slaveID, 4092);//mw_monitor.readRecipeValue(slaveID, 4092);
				ui.recipeStatelcdNumber->display(recipe_state);
				read_recipeStatus(recipe_state);//

// if cooling close vent when close
				if((openCloseState == 1) && (current_valu <= target_valu + 2) && (current_valu >= target_valu - 2)){
					// close door
//					qDebug("cSet p = %d", target_valu);
//					qDebug("cAct = %d", current_valu);
					mw_monitor.closeVent();
//					qDebug() << "vent closed after cooling";
				}
				break;
			}
			case 4:{
				/////////////////// display process 5
//				qDebug() << "case 4";
				if (ventCnt == 4 && openCLose == 0){
					openCLose = 1;
					ventCnt = 5;
//					qDebug("ventcnt = %d", ventCnt);
				}
				current_valu = mw_monitor.readRetry(slaveID, 0);//mw_monitor.readRecipeValue(slaveID, 0);
				mw_monitor.delay(DT);// wait for msecs
				target_valu = mw_monitor.readRetry(slaveID, 20);//mw_monitor.readRecipeValue(slaveID, 20);
				if(target_valu < current_valu){
					processbar_percent = 100 * target_valu / current_valu;
				}else{
					processbar_percent = 100 * current_valu / target_valu;
				}

				ui.mon_progressBar_5->setValue(processbar_percent);
				ui.lcdNumber_currentrsm->display(current_valu);
				ui.lcdNumber_targetrsm->display(target_valu);
				ui.lcdNumber_rampcyclersm->display(cycleCounter);
				ui.lcdNumber_ramplevelrsm->display(crs+1);

				mw_monitor.delay(DT);// wait for msecs
				recipe_state = mw_monitor.readRetry(slaveID, 4092);//mw_monitor.readRecipeValue(slaveID, 4092);
				ui.recipeStatelcdNumber->display(recipe_state);
				read_recipeStatus(recipe_state);//
				mw_monitor.delay(DT);// wait for msecs

				// if cooling close vent when close
				if((openCloseState == 1) && (current_valu <= target_valu + 2) && (current_valu >= target_valu - 2)){
					// close door
//					qDebug("cSet p = %d", target_valu);
//					qDebug("cAct = %d", current_valu);
					mw_monitor.closeVent();
//					qDebug() << "vent closed after cooling";
				}
				break;
			}
			case 5:{
				/////////////////// display process 6
//				qDebug() << "case 5";
				if (ventCnt == 5 && openCLose == 0){
					openCLose = 1;
					ventCnt = 6;
//					qDebug("ventcnt = %d", ventCnt);
				}
				current_valu = mw_monitor.readRetry(slaveID, 0);//mw_monitor.readRecipeValue(slaveID, 0);
				mw_monitor.delay(DT);// wait for msecs
				target_valu = mw_monitor.readRetry(slaveID, 21);//mw_monitor.readRecipeValue(slaveID, 21);
				if(target_valu < current_valu){
					processbar_percent = 100 * target_valu / current_valu;
				}else{
					processbar_percent = 100 * current_valu / target_valu;
				}

				ui.mon_progressBar_6->setValue(processbar_percent);
				ui.lcdNumber_currentrsm->display(current_valu);
				ui.lcdNumber_targetrsm->display(target_valu);
				ui.lcdNumber_rampcyclersm->display(cycleCounter);
				ui.lcdNumber_ramplevelrsm->display(crs+1);

				mw_monitor.delay(DT);// wait for msecs
				recipe_state = mw_monitor.readRetry(slaveID, 4092);//mw_monitor.readRecipeValue(slaveID, 4092);
				ui.recipeStatelcdNumber->display(recipe_state);
				read_recipeStatus(recipe_state);//
				mw_monitor.delay(DT);// wait for msecs

				// if cooling close vent when close
				if((openCloseState == 1) && (current_valu <= target_valu + 2) && (current_valu >= target_valu - 2)){
					// close door
//					qDebug("cSet p = %d", target_valu);
//					qDebug("cAct = %d", current_valu);
					mw_monitor.closeVent();
//					qDebug() << "vent closed after cooling";
				}
				break;
			}
			case 6:{
				/////////////////// display process 7
//				qDebug() << "case 6";
				if (ventCnt == 6 && openCLose == 0){
					openCLose = 1;
					ventCnt = 7;
//					qDebug("ventcnt = %d", ventCnt);
				}
				current_valu = mw_monitor.readRetry(slaveID, 0);//mw_monitor.readRecipeValue(slaveID, 0);
				mw_monitor.delay(DT);// wait for msecs
				target_valu = mw_monitor.readRetry(slaveID, 22);//mw_monitor.readRecipeValue(slaveID, 22);
				if(target_valu < current_valu){
					processbar_percent = 100 * target_valu / current_valu;
				}else{
					processbar_percent = 100 * current_valu / target_valu;
				}

				ui.mon_progressBar_7->setValue(processbar_percent);
				ui.lcdNumber_currentrsm->display(current_valu);
				ui.lcdNumber_targetrsm->display(target_valu);
				ui.lcdNumber_rampcyclersm->display(cycleCounter);
				ui.lcdNumber_ramplevelrsm->display(crs+1);

				mw_monitor.delay(DT);// wait for msecs
				recipe_state = mw_monitor.readRetry(slaveID, 4092);//mw_monitor.readRecipeValue(slaveID, 4092);
				ui.recipeStatelcdNumber->display(recipe_state);
				read_recipeStatus(recipe_state);//
				mw_monitor.delay(DT);// wait for msecs

				// if cooling close vent when close
				if((openCloseState == 1) && (current_valu <= target_valu + 2) && (current_valu >= target_valu - 2)){
					// close door
//					qDebug("cSet p = %d", target_valu);
//					qDebug("cAct = %d", current_valu);
					mw_monitor.closeVent();
//					qDebug() << "vent closed after cooling";
				}
				break;
			}
			case 7:{
				/////////////////// display process 8
//				qDebug() << "case 7";
				if (ventCnt == 7 && openCLose == 0){
					openCLose = 1;
					ventCnt = 8;
//					qDebug("ventcnt = %d", ventCnt);
				}
				current_valu = mw_monitor.readRetry(slaveID, 0);//mw_monitor.readRecipeValue(slaveID, 0);
				mw_monitor.delay(DT);// wait for msecs
				target_valu = mw_monitor.readRetry(slaveID, 23);//mw_monitor.readRecipeValue(slaveID, 23);
				if(target_valu < current_valu){
					processbar_percent = 100 * target_valu / current_valu;
				}else{
					processbar_percent = 100 * current_valu / target_valu;
				}
				mw_monitor.delay(DT);// wait for msecs
				ui.mon_progressBar_8->setValue(processbar_percent);
				ui.lcdNumber_currentrsm->display(current_valu);
				ui.lcdNumber_targetrsm->display(target_valu);
				ui.lcdNumber_rampcyclersm->display(cycleCounter);
				ui.lcdNumber_ramplevelrsm->display(crs+1);

				mw_monitor.delay(DT);// wait for msecs
				recipe_state = mw_monitor.readRetry(slaveID, 4092);//mw_monitor.readRecipeValue(slaveID, 4092);
				ui.recipeStatelcdNumber->display(recipe_state);
				read_recipeStatus(recipe_state);//
				mw_monitor.delay(DT);// wait for msecs

				// if cooling close vent when close
				if((openCloseState == 1) && (current_valu <= target_valu + 2) && (current_valu >= target_valu - 2)){
					// close door
//					qDebug("cSet p = %d", target_valu);
//					qDebug("cAct = %d", current_valu);
					mw_monitor.closeVent();
//					qDebug() << "vent closed after cooling";
				}
				break;
			}
			case 8 : {
				/////////////////// display process 0

				recipe_state = -1;
				ui.recipeStatelcdNumber->display(recipe_state);
				current_valu = 0;
				target_valu = 0;
				processbar_percent = 0;
				ui.mon_progressBar_1->setValue(processbar_percent);
				ui.mon_progressBar_2->setValue(processbar_percent);
				ui.mon_progressBar_3->setValue(processbar_percent);
				ui.mon_progressBar_4->setValue(processbar_percent);
				ui.mon_progressBar_5->setValue(processbar_percent);
				ui.mon_progressBar_6->setValue(processbar_percent);
				ui.mon_progressBar_7->setValue(processbar_percent);
				ui.mon_progressBar_8->setValue(processbar_percent);
				ui.lcdNumber_rampcyclersm->display(cycleCounter);
				ui.lcdNumber_currentrsm->display(current_valu);
				ui.lcdNumber_targetrsm->display(target_valu);

				target_valu = mw_monitor.readRetry(slaveID, 1);//mw_monitor.readRecipeValue(slaveID, 1);
				mw_monitor.delay(DT);// wait for msecs
				mw_monitor.writeRecipeSetpoint(slaveID, 1, target_valu);// back to initial temp

				break;
			}
			default:{

				break;
			}
			}// if

		qApp->processEvents();// stop and check for any events to be processed
		}// while outer
	}// if
	mw_monitor.delay(1000);// wait for msecs
	current_valu = mw_monitor.readRetry(slaveID, 0);//mw_monitor.readRecipeValue(slaveID, 0);// update display 1 last time
	mw_monitor.delay(1000);// wait for msecs
	ui.lcdNumber_currentrsm->display(current_valu);
}
void rampMonitor::monitorabort(void)
{
	MainWindow mw_abort;
	event_io mw_event;
	QString statusrdy;
	int slaveID, addr;
	double recipeSP;//, target_valu;
	unsigned int tempSid;
    int currentTemp, setpoint;

	slaveID = 1;
	addr = 4012; //recipe option
	recipeSP = 0;// disable multi-step ramp
	stopRead = 0;// for wait for trigger located in valvecontrol//
	abortMode = 0;// for monitor running to stop

	mw_abort.writeRecipeSetpoint(slaveID, addr, recipeSP);
	mw_abort.delay(50);
	addr = 4046; //recycle number
	recipeSP = 0;// default no repeat
	mw_abort.writeRecipeSetpoint(slaveID, addr, recipeSP);

	addr = 4004; //Operating mode
	recipeSP = 3;// Set to normal
	mw_abort.delay(50);
	mw_abort.writeRecipeSetpoint(slaveID, addr, recipeSP);
	mw_abort.delay(50);// wait for msecs

//////////////////////////////////////////////////////////////// Check temp for vent
    if(slaveID == 1){
        currentTemp = mw_abort.readRetry(slaveID, 0);//readRecipeValue(slaveID, 0);
        mw_abort.delay(50);// wait for msecs
        setpoint = mw_abort.readRetry(slaveID, 1);//readRecipeValue(slaveID, 1);

        if(currentTemp > setpoint + 2){
			if(openCloseState == 0){
				mw_abort.openVent();
				openCloseState = 1;
			}
        }else if(currentTemp < setpoint - 2){
    			if(openCloseState == 1){
    				mw_abort.closeVent();
    				openCloseState = 0;
    			}
        }
    }

/*	target_valu = mw_abort.readRecipeValue(1, 1);// read init temp
	mw_abort.delay(50);
	ui.lcdNumber_targetrsm->display(target_valu);//9-11-14*/

	tempSid = i2c_slaveAddr;
	i2c_slaveAddr = 0x40;
	mw_event.IO8b(); // Rdy
	statusrdy = "NOT READY";
	ui.readyLineEdit->setText(statusrdy);
	i2c_slaveAddr = tempSid;
////////////////////////////////////////////////////////////////// Check temp for vent End
}
