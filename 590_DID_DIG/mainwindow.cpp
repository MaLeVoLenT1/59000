#include <QtGui>
#include <QAction>
#include <errno.h>
#include <QDebug>
#include <QTextStream> // Added 2/21/2020 by Dione.
#include "valvecontrol.h"
#include "configuredialog.h"
#include "configuredialog2.h"
#include "passworddialog.h"
#include "detectorwidget.h"
#include <QApplication>
#include <QKeyEvent>
#include "ui_mainwindow.h"
#include "modbus.h"
#include "modbus-private.h"
#include "qextserialenumerator.h"
#include "ovencontrol.h"
#include "ui_ovencontrol.h"
#include "objectmgmt.h"// 1/8/14 added to take care of declarations
#include "readflow.h"
#include "event_io.h"
#include "qlistwidget.h"
#include "qtablewidget.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h> ///8-28-2014
#include "i2c--dev.h" /* header from lm-sensors project */
#include <stdio.h>
#include <sys/ioctl.h>
#include <string.h>
#include <unistd.h>
#include <QProcess>
#include <QTime>
#include <QTimer>
#include <QFile>
#include <QIODevice>

/////////////////////////////////////// spi
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include <asm/types.h>
#include "spi_char.h"
////////////////////// file operations
#include <iostream>
#include <fstream>
#include "rampmonitor.h"
#include "readflow.h"
#include "modbus-rtu.h"

using namespace std;
///////////////////// file operations end

#define EPRINT(args...) fprintf(stderr, ##args)

#define MAX_LENGTH 64
#define MDT 1
static int file_des = 0;
static char is_initialized = FALSE;
static __u8 miso[MAX_LENGTH];
static __u8 mosi[MAX_LENGTH];
/////////////////////////////////////// spi end
extern bool TRIGGER;
extern unsigned int i2c_slaveAddr;
unsigned int value_1;
unsigned int value_2;
unsigned int value_3;
unsigned int value_4;
extern bool openCloseState;// for oven vent door
extern MainWindow* globalMainWin;
extern bool stopMeFlow;
extern unsigned int detNumberDirector;// used to select detector for processing - Temporary find another way
extern void deviceClose8100(int fd);

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),//7-31-2015 removed for test memory leak
    m_modbus( NULL )//,7-31-2015 removed for test memory leak
{

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
	delete m_modbus;
    delete ui;
}

// Dione QFile Read/Write Functions (2/21/2020)
/*
 *  Uses QFile and QTextStream
 *  - Takes in a Filename for Read. Returns the data from File.
 *  - Takes in the Filename for Write and the Contents to write. */

QString MainWindow::readFromFile(QString Filename){
	QFile file(QCoreApplication::applicationDirPath() + Filename);
	//QFile file(Filename);

	if (!file.open(QIODevice::ReadOnly)){
	    qDebug() << "Failed to open file:" << file.fileName() << "Error:" << file.errorString();
	}
	else{
		QTextStream in(&file);
		QString myText = in.readAll();
	    qDebug() << myText;
	}

	if(!file.open(QFile::ReadOnly | QFile::Text))
	{
		qDebug() << " Could not open the file for reading";
	    QString errorMessage = "Could not open the file for reading";
	    return errorMessage;
	}

	QTextStream in(&file);
	QString myText = in.readAll();
	qDebug() << myText;

	file.close();
	return myText;
}

void MainWindow::writeToFile(QString Filename, QString Content){
	QFile file(QCoreApplication::applicationDirPath() + Filename);
	// Trying to open in WriteOnly and Text mode
	if(!file.open(QFile::WriteOnly | QFile::Text))
	{
	    qDebug() << " Could not open file for writing";
	    return;
	}
	// a QTextStream on the left
	// and data types (including QString) on the right
	QTextStream out(&file);
	out << Content;
	file.flush();
	file.close();
}

void MainWindow::dtlog(void){
//	data::saveDatalog();
}
void MainWindow::displayStatusBusy(void){
	QString busyState;// 9-5-2014

	busyState = "BUSY...";// 9-5-2014

	ui->busyLineEdit->setText(busyState);
}
void MainWindow::displayStatusDone(void){
	QString notBusyState;

	notBusyState = "DONE...";

	ui->busyLineEdit->setText(notBusyState);
}
void MainWindow::delay( int millisecondsToWait )
{
    QTime dieTime = QTime::currentTime().addMSecs( millisecondsToWait );
    while( QTime::currentTime() < dieTime )
    {
        QCoreApplication::processEvents( QEventLoop::AllEvents, 100 );
    }
}
void MainWindow::externalValvesOn(void){
    QString program = "/root/./eventwatch";
    QStringList arguments;
    arguments << "";
    QProcess *myProcess = new QProcess(this);
    myProcess->start(program);
    ui->extValveOffCheckBox->setChecked(0);
    ui->extValveOnCheckBox->setChecked(1);
//    delete myProcess;// added for test 07-20-2015
}
void MainWindow::externalValvesOff(void){
    QString program = "killall eventwatch";
    QStringList arguments;
    arguments << "";

    QProcess *myProcess1 = new QProcess();
    myProcess1->start(program);//, arguments);
    ui->extValveOffCheckBox->setChecked(1);// internal
    ui->extValveOnCheckBox->setChecked(0);
  //  delete myProcess1;// added for test 07-20-2015
}
//**************** BEGIN MainWindow SLOTS ******************

void MainWindow::testMainSlot(int a, int b)//01/12/14
{
	//qDebug() << "Test Main SLOT entered";
	a = 1;
	b = 2;
}
void MainWindow::listViewActivated(const QModelIndex &index)
{
    int i = index.row();
    emit this->listViewActiveRow(i);
}

// Begin CONFIGURATION code
void MainWindow::newConfiguration() // MODAL implementation
{
    ConfigureDialog configDialog(this);
    configDialog.setObjectMngr(objectMngr);
    objectMngr->holdOldParts();

    if (configDialog.exec())
    {
        //qDebug() << "Config Dialog \"ACCEPTED\" ";

        objectMngr->deleteOldParts();

        for (int i=0; i<(currentWidgetList.count()-1); i++)
        {
            ui->partStack->removeWidget(currentWidgetList[i]);
        }
        while (!currentPartList.isEmpty()) {
            currentPartList.removeFirst();
            currentWidgetList.removeFirst();
        };
        while (!partNameList.isEmpty()) {
            partNameList.removeFirst();
            }

        currentPartList = objectMngr->getPartList();
        currentWidgetList = objectMngr->getWidgetList();
        if (!currentPartList.isEmpty()) {
            for (int i = 0; i < currentPartList.count(); i++)
            {
                partNameList << currentPartList[i]->getName();
                ui->partStack->insertWidget(i,currentWidgetList[i]);
            }
            m_partNameModel->setStringList(partNameList);
        }
        else {
            QMessageBox::warning(this, "Invalid Configuration", "Configuration failed");
        };
    }
    else
    {
        //qDebug() << "Config Dialog \"REJECTED\" ";

        objectMngr->deleteNewParts();

        QMessageBox::warning(this, "Configuration Failed", "WARNING: New configuration cancelled prematurely, please try again or load another configuration");

    };
}
void MainWindow::modifyConfiguration()
{
    //qDebug() << "Modify Configuration SLOT entered";

}
void MainWindow::loadConfiguration()
{
    //qDebug() << "Load Configuration SLOT entered";

}
void MainWindow::saveConfiguration()
{
    //qDebug() << "Save Configuration SLOT entered";

}
void MainWindow::closePrep()
{
    for (int i=1; i<=4; i++) {// was 8 so as to handle 2 full temp controllers. made 4 for current instrument
        writeTempSetpoint(i, 0);
    }

    this->close();

}

//****************** END MainWindow SLOTS ************************



// ALL of the following MODBUS slots are modified from the project
// contained in the folder "qmodbus_v2" which is a working version
// of the QModBus project: http://qmodbus.sourceforge.net/

//************ BEGIN Modbus Communication FUNCTIONS **************
static inline QString embracedString( const QString & s )
{
        return s.section( '(', 1 ).section( ')', 0, 0 );
}
//************* END Modbus Communication FUNCTIONS ***************

//*********** BEGIN Modbus Communication SLOTS *******************
void MainWindow::changeSerialPort( int temp)
{
//////////////////////////////////////////////////////////////////////// added for test
	QSettings s;
	int portIndex = 0;
    int i = 0;
    int test;
    int portNum = 1;

    test = temp;

    foreach( QextPortInfo port, QextSerialEnumerator::getPorts() )
    {
            if( port.friendName == s.value( "serialinterface" ) )
            {
                    portIndex = i;
            }
            ++i;
    }
////////////////////////////////////////////////////////////////////////
        QList<QextPortInfo> ports = QextSerialEnumerator::getPorts();
        if( !ports.isEmpty() )
        {

#ifdef Q_OS_WIN32
                //const int iface = 0;
        		const int iface = portNum;//added wtr not called anyway 2 for emac, 4 for bbrs485
                const QString port = embracedString( ports[iface].friendName ) +
                                                                        ":";
#else
                //const int iface = 1;
                const int iface = portNum;// USB 4;2 emac - change name in qxternal.cpp ttyS2 for emac, ttyUSB0 for bbrs483
                const QString port = ports[iface].physName;
#endif

                if( m_modbus )
                {
                        modbus_close( m_modbus );
                        modbus_free( m_modbus );
//                        qDebug() << "Serial Port Modbus closed and freed";
                }
//                qDebug() << "Set up a modbus connection";
                // setup RTU communication with Baud=9600, Parity bit=NONE, Data Bits=8, & Stop Bits=1
                m_modbus = modbus_new_rtu( port.toAscii().constData(),
                               9600, 'N', 8, 1);
                //ow_m_modbus = m_modbus;
                /*ow_m_modbus = modbus_new_rtu( port.toAscii().constData(),
                                              9600, 'N', 8, 1);// for OW functions 1/8/14*/
//                delay(50);// 4 to 50 9-15-2014
                if( modbus_connect( m_modbus ) == -1 )
                {
                        QMessageBox::critical( this, tr( "Connection failed" ),
                                tr( "Could not connect serial port!" ) );
                }
        }
        else
        {
                QMessageBox::critical( this, tr( "No serial port found" ),
                                tr( "Could not find any serial port "
                                                "on this computer!" ) );// 9-11-14
        }

}

void MainWindow::writeTempSetpoint(int slaveID, int tempSP)// write to epprom and ram
{
changeSerialPort(1);// 2/10/2020 Changed to 0 from 2. Dione
delay(200);
        if( m_modbus == NULL )
        {
            qDebug() << "WHOOPS! Write Temp Setpoint";
                return;
        }
        //qDebug() << "into Write Temp Setpoint.....*******............*******";
        int addr;// = 1;removed and added the statement below const wtr
        int num = 1;

        addr = 1;// write to epprom and ram
/*        uint8_t dest[1024];
        uint16_t * dest16 = (uint16_t *) dest;// uncommented wtr 1-21-13

        memset( dest, 0, 1024 );*/

        qApp->processEvents();// stop and check for any events to be processed - added 7/27/2014 test

        int ret = -1;
        bool writeAccess = false;

        // https://github.com/stephane/libmodbus/blob/master/doc/modbus_set_slave.txt
        modbus_set_slave( m_modbus, slaveID );
        delay(MDT);


        // This method I cant find. In the newest documentation.
        modbus_rtu_set_echohw_mode(m_modbus, 0x01);// added 8/27/2014 wtr for test
        delay(MDT);

        // https://github.com/stephane/libmodbus/blob/master/doc/modbus_write_register.txt
        ret = modbus_write_register( m_modbus, addr, tempSP);
        delay(MDT);
        writeAccess = true;
        num = 1;

//        modbus_close(m_modbus);
//        modbus_free(m_modbus);
////////////////////////////////////////////////////////////////////// cONTROL Oven Vent Door ????

        // compapre set point to actual
        // if setpoint is less than actual +/- 2C then open vent to cool
        // once within +/- 2C close vent

        int currentTemp, setpoint;

        if(slaveID == 1){


            currentTemp = readRecipeValue(slaveID, 0);
//            qDebug("currentTemp = %x", currentTemp);// test
            delay(MDT);
            setpoint = readRecipeValue(slaveID, 1);
//            qDebug("setpoint = %x", setpoint);// test
            delay(MDT);
//            qDebug("OPEN/CLOSE VAR Before = %x", openCloseState);// test
            if((currentTemp > setpoint) && (openCloseState == 0)){//+1
    			if(openCloseState == 0){
    				openVent();
    				openCloseState = 1;// make sure
//    				qDebug("OPEN/CLOSE VAR After open = %x", openCloseState);// test
    			}
            }else if((currentTemp < setpoint) && (openCloseState == 1)){//-1
        			if(openCloseState == 1){
        				closeVent();
        				openCloseState = 0;// make sure
//        				qDebug("OPEN/CLOSE VAR After Close = %x", openCloseState);// test
        			}
            }
        }
////////////////////////////////////////////////////////////////////// Control Oven vent door end

        if( ret == num  )
        {
                if( writeAccess )
                {
//                    qDebug() << "Isothermal temperature setpoint successful WRITE EEPROM and Ram";
                }
        }
        else//m_modbus?
        {
                if( ret < 0 )
                {
                        if(
#ifdef WIN32
                                        errno == WSAETIMEDOUT ||
#endif
                                        errno == EIO
                                                                                                                                        )
                        {
                                QMessageBox::critical( this, tr( "I/O error" ),
                                        tr( "I/O error: did not receive any data from slave." ) );
                        }
                        else
                        {
                        	qDebug() << "FIX Error Condition - Write Temp Setpoint";
/*                        	 QMessageBox::critical( this, tr( "Protocol error" ),
                                        tr( "Slave threw exception \"%1\" or "
                                               "function not implemented." ).
                                                                arg( modbus_strerror( errno ) ) );//9-11-14*/
                        }
                }
                else
                {
                        QMessageBox::critical( this, tr( "Protocol error" ),
                                tr( "Number of registers returned does not "
                                        "match number of registers "
                                		       "requested!" ) );
                }
        }
modbus_close(m_modbus);
}
void MainWindow::writeRecipeSetpoint(int slaveID, int addr, double recipeSP)
{
	changeSerialPort(1);// 2/10/2020 Changed to 0 from 2. Dione
	delay(200);
		if( m_modbus == NULL )
        {
            qDebug() << "WHOOPS!  write Recipe Setpoint";
                return;
        }

        int num = 1;
        uint8_t dest[32];// 1024// added 8-26-2014
//7-28-2015        uint16_t * dest16 = (uint16_t *) dest;// uncommented wtr 1-21-13 - / added 8-26-2014

        memset( dest, 0, 32 );// 1024// added 8-26-2014

        int ret = -1;
        bool writeAccess = false;
        delay(MDT);
        modbus_set_slave( m_modbus, slaveID );
        delay(MDT);
        modbus_rtu_set_echohw_mode(m_modbus, 0x01);// added 8/27/2014 wtr for test
        delay(MDT);

        ret = modbus_write_register( m_modbus, addr, recipeSP);
        writeAccess = true;
        num = 1;

//        modbus_close(m_modbus);
//        modbus_free(m_modbus);


        if( ret == num  )
        {
                if( writeAccess )
                {
//                    qDebug() << "Recipe successful WRITE";
                }
        }
        else//m_modbus?
        {
                if( ret < 0 )
                {
                        if(
#ifdef WIN32
                                        errno == WSAETIMEDOUT ||
#endif
                                        errno == EIO
                                                                                                                                        )
                        {
                                QMessageBox::critical( this, tr( "I/O error" ),
                                        tr( "I/O error: did not receive any data from slave." ) );
                        }
                        else
                        {
                        	qDebug() << "FIX Error Condition - Write Recipe Setpoint";
/*                        	QMessageBox::critical( this, tr( "Protocol error" ),
                                        tr( "Slave threw exception \"%1\" or "
                                                "function not implemented." ).
                                                                arg( modbus_strerror( errno ) ) );// 9-11-14*/
                        }
                }
                else
                {
                        QMessageBox::critical( this, tr( "Protocol error" ),
                                tr( "Number of registers returned does not "
                                        "match number of registers "
                                                        "requested!" ) );
                }
        }
        modbus_close(m_modbus);
}
// ReadTrueValue made by Dione 5/13/2019
int MainWindow::readTrueValue(int slaveID){
	changeSerialPort(1);// 2/10/2020 Changed to 0 from 2. Dione

	delay(200);

	if( m_modbus == NULL ){
	   qDebug() << "WHOOPS!";
	   return 0;
	}

	int tempPV = 999;
	const int addr = 0;
	int num;
	int ret = -1;

	num = 1;
	uint8_t dest[32];// 1024
	uint16_t * dest16 = (uint16_t *) dest;//wtr removed 1-21-13 for test was removed above

	memset( dest, 0, 32 );//1024

	bool is16Bit = false;
	modbus_set_slave( m_modbus, slaveID );

	modbus_rtu_set_echohw_mode(m_modbus, 0x01);

	ret = modbus_read_registers( m_modbus, addr, num, dest16 );
	is16Bit = true;

	if( ret == num  ){

	   for( int i = 0; i < num; ++i ){
	       int data = is16Bit ? dest16[i] : dest[i];
	       tempPV = data;
	   }


	}
	else{
	   if( ret < 0 ){
	       if(
	    		   #ifdef WIN32
	                                        errno == WSAETIMEDOUT ||
					#endif
	                                        errno == EIO
	                                                                                                                                        )
	                        {
	                                QMessageBox::critical( this, tr( "I/O error" ),
	                                        tr( "I/O error: did not receive any data from slave." ) );
	                        }
	                        else
	                        {
	                        	qDebug() << "FIX Error Condition - Read Temp value";
	/*                        		QMessageBox::critical( this, tr( "Protocol error" ),
	                                        tr( "Slave threw exception \"%1\" or "
	                                                "function not implemented." ).
	                                                                arg( modbus_strerror( errno ) ) );//9-11-14*/
	                        }
	                }
	                else
	                {
	                        QMessageBox::critical( this, tr( "Protocol error" ),
	                                tr( "Number of registers returned does not "
	                                        "match number of registers "
	                                                        "requested!" ) );
	                }
	        }


	qDebug() << "readTrueValue() Finished.";
	    return tempPV;

}
void MainWindow::readTempValue(int slaveID)// Read temp process value from ram addr 0
{
	changeSerialPort(1);// 2/10/2020 Changed to 0 from 2. Dione
	delay(200);
		if( m_modbus == NULL )
        {
            qDebug() << "WHOOPS!";
                return;
        }

        int tempPV = 999;
        const int addr = 0;
        int num;
        int ret = -1;

        num = 1;
        uint8_t dest[32];// 1024
        uint16_t * dest16 = (uint16_t *) dest;//wtr removed 1-21-13 for test was removed above

        memset( dest, 0, 32 );//1024

        bool is16Bit = false;
 //     bool writeAccess = false;
//        delay(MDT);
        modbus_set_slave( m_modbus, slaveID );
//        delay(MDT);
        modbus_rtu_set_echohw_mode(m_modbus, 0x01);
//        delay(MDT);
        ret = modbus_read_registers( m_modbus, addr, num, dest16 );
        is16Bit = true;

//        modbus_close(m_modbus);
//        modbus_free(m_modbus);

//        ret = num;//wtr test so as to see what data comes across 1/30/2013 - 8/29/2014 trying out
        if( ret == num  )
        {
            for( int i = 0; i < num; ++i )
            {
                    int data = is16Bit ? dest16[i] : dest[i];
                    tempPV = data;
            }
//            qDebug() << "Ram temperature process value successful READ";
        }
        else
        {
                if( ret < 0 )
                {
                        if(
#ifdef WIN32
                                        errno == WSAETIMEDOUT ||
#endif
                                        errno == EIO
                                                                                                                                        )
                        {
                                QMessageBox::critical( this, tr( "I/O error" ),
                                        tr( "I/O error: did not receive any data from slave." ) );
                        }
                        else
                        {
                        	qDebug() << "FIX Error Condition - Read Temp value";
/*                        		QMessageBox::critical( this, tr( "Protocol error" ),
                                        tr( "Slave threw exception \"%1\" or "
                                                "function not implemented." ).
                                                                arg( modbus_strerror( errno ) ) );//9-11-14*/
                        }
                }
                else
                {
                        QMessageBox::critical( this, tr( "Protocol error" ),
                                tr( "Number of registers returned does not "
                                        "match number of registers "
                                                        "requested!" ) );
                }
        }


    emit tempProcessValue(slaveID, tempPV);//6-11-14 need
}

int MainWindow::readRecipeValue(int slaveID, int addr)//const int addr - read only parameter with const
{
	unsigned int tempSID;// 9-18-2014
	changeSerialPort(1);// 2/10/2020 Changed to 0 from 2. Dione
	delay(200);
	tempSID = slaveID;

		if( m_modbus == NULL )
        {
            qDebug() << "WHOOPS!  read Recipe Value";
            return 0;
        }

        int regPV = -1;
        int num;
        int ret = -1;

        num = 1;
        uint8_t dest[32];//1024
        uint16_t * dest16 = (uint16_t *) dest;

        memset( dest, 0, 32 );// 1024

        bool is16Bit = false;
 //     bool writeAccess = false;
//        delay(MDT);
        modbus_set_slave( m_modbus, slaveID );
//        delay(MDT);
//        modbus_set_debug(m_modbus, 1);
//        delay(MDT);
        modbus_rtu_set_echohw_mode(m_modbus, 0x01);// set to 0 for BBrs485 1 for emac onboard
//        delay(MDT);
        ret = modbus_read_registers( m_modbus, addr, num, dest16 );
        is16Bit = true;

//9-17-2014        ret = num;//wtr test so as to see what data comes across 1/30/2013 - removed to match readTempValue()
        if( ret == num  )
        {
            for( int i = 0; i < num; ++i )
            {
                    int data = is16Bit ? dest16[i] : dest[i];
                    regPV = data;
            }
//            qDebug() << "Recipe process value successful READ";
        }
        else
        {
                if( ret < 0 )
                {
                        if(
#ifdef WIN32
                                        errno == WSAETIMEDOUT ||
#endif
                                        errno == EIO
                                                                                                                                        )
                        {
                                QMessageBox::critical( this, tr( "I/O error" ),
                                        tr( "I/O error: did not receive any data from slave." ) );
                        }
                        else
                        {
                        	qDebug() << "FIX Error Condition - Read Recipe Value";
/*                        	QMessageBox::critical( this, tr( "Protocol error" ),
                                        tr( "Slave threw exception \"%1\" or "
                                                "function not implemented." ).
                                                                arg( modbus_strerror( errno ) ) );//9-11-14*/
                        }
                }
                else
                {
                        QMessageBox::critical( this, tr( "Protocol error" ),
                                tr( "Number of registers returned does not "
                                        "match number of registers "
                                                        "requested!" ) );
                }
        }

        modbus_close(m_modbus);// was out during bb rs485 test
//        modbus_free(m_modbus);
//    emit tempProcessValue(slaveID, regPV);//
    return regPV;
}

int MainWindow::readRetry(int slaveID, int addr)
{
	int retry;
	int valu;
	unsigned int i;

	retry = readRecipeValue(slaveID, addr);

	while(retry == -1)
	{
		qDebug() << "READ FAILED!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
		delay(50);
		for(i=0; i<10; ++i){// possible flushing ?????
			retry = readRecipeValue(slaveID, addr);
			delay(50);
		}
	}
	valu = retry;

	return valu;
}
//************ END Modbus Communication SLOTS *******************


//*************** BEGIN MainWindow SLOTovenConfigS ************************
void MainWindow::on_loginLogoutButton_clicked()
{
    if(!m_superUser)
    {

        PasswordDialog passwordDialog(this);

        if (passwordDialog.exec())
        {
            loginSuperUser();
        }
        else
        {
            logoutSuperUser();
            QMessageBox::warning(this, "Incorrect Password",
                                 "LOGIN FAILED: Incorrect Password");
        };
    }
    else
    {
        logoutSuperUser();
    };
}

void MainWindow::loginSuperUser()
{
	ui->loginLogoutButton->setText("LO&GOUT");
    m_superUser = true;
    newConfigurationAction->setEnabled(true);
    saveConfigurationAction->setEnabled(true);
}

void MainWindow::logoutSuperUser()
{
	ui->loginLogoutButton->setText("LO&GIN");
    m_superUser = false;
    newConfigurationAction->setEnabled(false);
    saveConfigurationAction->setEnabled(false);
}

//*************** END MainWindow SLOTS ************************


//*************** BEGIN MainWindow formatting FUNCTIONS (called only once) ************************
void MainWindow::createActions()
{

    newConfigurationAction = new QAction(tr("NEW Configuration"), this);
//    newConfigurationAction->setIcon(QIcon(":/images/new.png"));
    newConfigurationAction->setShortcut(tr("Ctrl+N"));
    newConfigurationAction->setStatusTip(tr(" New configuration for hardware and communications"));
    connect(newConfigurationAction, SIGNAL(triggered()),this,SLOT(newConfiguration()));

    modifyConfigurationAction = new QAction(tr("MODIFY Configuration"), this);
//    newConfigurationAction->setIcon(QIcon(":/images/configure-3.png"));
    modifyConfigurationAction->setShortcut(tr("Ctrl+M"));
    modifyConfigurationAction->setStatusTip(tr("Modify current configuration for hardware alterations"));
    connect(modifyConfigurationAction, SIGNAL(triggered()),this,SLOT(modifyConfiguration()));

    loadConfigurationAction = new QAction(tr("LOAD Configuration"), this);
//    newConfigurationAction->setIcon(QIcon(":/images/open.png"));
    loadConfigurationAction->setShortcut(tr("Ctrl+L"));
    loadConfigurationAction->setStatusTip(tr("Load a file and set as current configuration"));
    connect(loadConfigurationAction, SIGNAL(triggered()),this,SLOT(loadConfiguration()));

    saveConfigurationAction = new QAction(tr("SAVE Configuration"), this);
//    newConfigurationAction->setIcon(QIcon(":/images/save.png"));
    saveConfigurationAction->setShortcut(tr("Ctrl+S"));
    saveConfigurationAction->setStatusTip(tr("Save a new or modified configuration for later use"));
    connect(saveConfigurationAction, SIGNAL(triggered()),this,SLOT(saveConfiguration()));

    exitAction = new QAction(tr("E&xit"), this);
    exitAction->setShortcut(tr("Ctrl+Q"));
    exitAction->setStatusTip(tr("Exit the application"));
//    connect(exitAction, SIGNAL(triggered()), this, SLOT(close()));
    connect(exitAction, SIGNAL(triggered()), this, SLOT(closePrep()));

}

void MainWindow::createMenus()
{
    fileMenu = menuBar()->addMenu(tr("&File"));
    fileMenu->addAction(newConfigurationAction);
    fileMenu->addAction(modifyConfigurationAction);
    fileMenu->addAction(loadConfigurationAction);
    fileMenu->addAction(saveConfigurationAction);
    fileMenu->addSeparator();
    fileMenu->addAction(exitAction);

}

void MainWindow::createToolBars()
{
    fileToolBar = addToolBar(tr("&File"));
    fileToolBar->addAction(newConfigurationAction);
    fileToolBar->addAction(modifyConfigurationAction);
    fileToolBar->addAction(loadConfigurationAction);
    fileToolBar->addAction(saveConfigurationAction);
}

void MainWindow::createStatusBar()
{

}

void MainWindow::readSettings()
{

}

void MainWindow::writeSettings()
{

}

bool MainWindow::loadFile(const QString &fileName)
{
	QString test;

	test = fileName;
    return false;
}

bool MainWindow::saveFile(const QString &fileName)
{
	QString test;

	test = fileName;
    return false;
}

/*int* MainWindow::readZoneRegParameters(modbus_t *ctx, int addr, int nb, uint16_t *dest)//double*
{
	int slaveID = 1;// change to suit 2 control devices

	if( m_modbus == NULL )
    {
        qDebug() << "WHOOPS!";
            return 0;// added 0 to satisfy reurn. Check on valid return values
    }

    int tempPV[1024] = {0};//double
//		        const int addr = 0;
    int num;
    int ret = -1;

    num = nb;
//    uint8_t dest[1024];
    uint16_t * dest16 = (uint16_t *) dest;//wtr removed 1-21-13 for test was removed above

    memset( dest, 0, 1024 );

    bool is16Bit = false;
//    bool writeAccess = false;

    modbus_set_slave( m_modbus, slaveID );
    delay(50);
    modbus_rtu_get_echohw_mode(m_modbus);
    delay(50);
    ret = modbus_read_registers( m_modbus, addr, num, dest16 );
    is16Bit = true;

    if( ret == num  )
    {
        for( int i = 0; i < num; ++i )
        {
                int data = is16Bit ? dest16[i] : dest[i];
                tempPV[i] = data;
        }
//        qDebug() << "Zone Register value successful READ";
    }
    else
    {
            if( ret < 0 )
            {
                    if(
#ifdef WIN32
                                    errno == WSAETIMEDOUT ||
#endif
                                    errno == EIO
		                                                                                                                                        )
                    {
                            QMessageBox::critical( this, tr( "I/O error" ),
                                    tr( "I/O error: did not receive any data from slave." ) );
                    }
                    else
                    {
                    	qDebug() << "FIX Error Condition - Read Zone REG Param";
//                    	QMessageBox::critical( this, tr( "Protocol error" ),
//                                    tr( "Slave threw exception \"%1\" or "
//                                            "function not implemented." ).
//                                                            arg( modbus_strerror( errno ) ) );//9-11-14
                    }
            }
            else
            {
                    QMessageBox::critical( this, tr( "Protocol error" ),
                            tr( "Number of registers returned does not "
                                    "match number of registers "
                                                    "requested!" ) );
            }
    }

//		    emit tempProcessValue(slaveID, tempPV);//??//6-11-14
    return tempPV;// added 0 to satisfy reurn. Check on valid return values
}*/

/*void MainWindow::ReadZoneRampSoakParameters(void)//( m_modbus, slaveID )
{
	int i;// slaveID is temporary - pass this variable when Funct is verified
	double valu;
	double* recipe_option;
	double* ss_ramp_time;
	double* termination_state;
	double* recycle_number;
	double* ramp_times;
	double* ramp_edoublevents;
	double* soak_levels;
	double* soak_times;
	double* soak_events;
	uint16_t *dest;
	float holdback;
	double resume_from_pf;//bool
	double* test_read;

    qDebug() << "GOT IN!!! ReadZoneRampSoakParameters";

//	uint16_t * dest16 = (uint16_t *) dest;
//    memset( dest, 0, 1024 );

//    recipe_option = MainWindow::readZoneRegParameters(m_modbus, 0x4012, 0x01, dest);// recipe option
//    valu = dest[1];
//    test_read = MainWindow::readZoneRegParameters(m_modbus, 0x00, 0x05, dest);
//    valu = test_read[1];
//    ui.recipeOptionSpinBox->setValue(valu);


/*    ss_ramp_time = MainWindow::readZoneRegParameters(m_modbus0, 0x4013, 0x01, dest);// ss_ramp_time
    valu = dest[1];
    valu = ss_ramp_time[1];
//    ui.singleStepRampTimeSpinBox->setValue(valu);

    termination_state = MainWindow::readZoneRegParameters(m_modbus0, 0x4047, 0x01, dest);//termination_state
    valu = dest[1];
//    valu = termination_state[1];
    ui.terminationStateSpinBox->setValue(valu);

    recycle_number = MainWindow::readZoneRegParameters(m_modbus0, 0x4046, 0x01, dest);//recycle_number
    valu = dest[1];
//    valu = recycle_number[1];
    ui.recycleNumberSpinBox->setValue(valu);

    ramp_times = MainWindow::readZoneRegParameters(m_modbus0, 0x4014, 0x08, dest);//ramp_times
    ui.rampTime1SpinBox->setValue(dest[0]);
    ui.rampTime2SpinBox->setValue(dest[1]);
    ui.rampTime3SpinBox->setValue(dest[2]);
    ui.rampTime4SpinBox->setValue(dest[3]);
    ui.rampTime5SpinBox->setValue(dest[4]);
    ui.rampTime6SpinBox->setValue(dest[5]);
    ui.rampTime7SpinBox->setValue(dest[6]);
    ui.rampTime8SpinBox->setValue(dest[7]);

    ramp_events =  OvenControl::readZoneRegParameters(m_modbus0, 0x4023, 0x08, dest);//ramp_times
    ui.ovenSetRampE1SpinBox->setValue(dest[0]);
    ui.ovenSetRampE2SpinBox->setValue(dest[1]);
    ui.ovenSetRampE3SpinBox->setValue(dest[2]);
    ui.ovenSetRampE4SpinBox->setValue(dest[3]);
    ui.ovenSetRampE5SpinBox->setValue(dest[4]);
    ui.ovenSetRampE6SpinBox->setValue(dest[5]);
    ui.ovenSetRampE7SpinBox->setValue(dest[6]);
    ui.ovenSetRampE8SpinBox->setValue(dest[7]);

    soak_levels = OvenControl::readZoneRegParameters(m_modbus0, 0x16, 0x08, dest);//soak_levels
    ui.ovenSetSoakL1SpinBox->setValue(dest[0]);
    ui.ovenSetSoakL2SpinBox->setValue(dest[1]);
    ui.ovenSetSoakL3SpinBox->setValue(de#include "modbus.h"st[2]);
    ui.ovenSetSoakL4SpinBox->setValue(dest[3]);
    ui.ovenSetSoakL5SpinBox->setValue(dest[4]);
    ui.ovenSetSoakL6SpinBox->setValue(dest[5]);
    ui.ovenSetSoakL7SpinBox->setValue(dest[6]);
    ui.ovenSetSoakL8SpinBox->setValue(dest[70]);

    soak_times = OvenControl::readZoneRegParameters(m_modbus0, 0x4030, 0x08, dest);//soak_times
    ui.ovenSetSoakT1SpinBox->setValue(dest[0]);
    ui.ovenSetSoakT2SpinBox->setValue(dest[1]);
    ui.ovenSetSoakT3SpinBox->setValue(dest[2]);
    ui.ovenSetSoakT4SpinBox->setValue(dest[3]);
    ui.ovenSetSoakT5SpinBox->setValue(dest[4]);
    ui.ovenSetSoakT6SpinBox->setValue(dest[50]);
    ui.ovenSetSoakT7SpinBox->setValue(dest[6]);
    ui.ovenSetSoakT8SpinBox->setValue(dest[7]);

    soak_events = OvenControl::readZoneRegParameters(m_modbus0, 0x4038, 0x08, dest);//soak_events
    ui.ovenSetSoakE1SpinBox->setValue(dest[0]);
    ui.ovenSetSoakE2SpinBox->setValue(dest[1]);
    ui.ovenSetSoakE3SpinBox->setValue(dest[2]);
    ui.ovenSetSoakE4SpinBox->setValue(dest[3]);
    ui.ovenSetSoakE5SpinBox->setValue(dest[4]);
    ui.ovenSetSoakE6SpinBox->setValue(dest[5]);
    ui.ovenSetSoakE7SpinBox->setValue(dest[6]);
    ui.ovenSetSoakE8SpinBox->setValue(dest[7]);

    OvenControl::readZoneRegParameters(m_modbus0, 0x24, 0x01, dest);//holdback
    ui.holdBackSpinBox->setValue(dest[0]);

    OvenControl::readZoneRegParameters(m_modbus0, 0x4048, 0x01, dest);//resume_from_pf
//    resume_from_pf = ui.resumepowerfailureCheckBox->checkState();
    ui.resumepowerfailureCheckBox->setCheckState(dest[0]);////

    qDebug() << "END!!! ReadZoneRampSoakParameters";

}*/

void MainWindow::sendRampParameters(void)
{
	qDebug() << "GOT IN!!! Send OVEN PARAMETERS";
}

void MainWindow::ZoneRampSoakParameters(void)// Note read in parameters first. Then change and send
{
//	int i;
//	double recipe_option;
//	double ss_ramp_time;
//	double holdback;
//	double termination_state;
//	double recycle_number;
//	double resume_from_pf;
//	double* ramp_times;
//	double* ramp_events;
//	double* soak_levels;
//	double* soak_times;
//	double* soak_events;

	qDebug() << "GOT IN!!! ZoneRampSoakParameters";

//	recipe_option = OvenControl::recipeOptionsValue();
	//ss_ramp_time = OvenControl::ss_ramp_timeValue();
	//holdback = OvenControl::holdbackValue();
	//termination_state = OvenControl::termination_stateValue();
	//recycle_number = OvenControl::recycle_numberValue();
	//resume_from_pf = OvenControl::resume_from_pfValue();
}

/*void MainWindow::writeZoneRegParameters(modbus_t *ctx, int addr, int nb, uint16_t *dest)//double*
{

}*/
//////////////////////////////////////// I2C////////////////////////BEGIN
int MainWindow::init_i2c(void)
{
	int fd;
	if ((fd = open("/dev/i2c-0", O_RDWR)) < 0) {
		fprintf(stderr, "Unable to open /dev/i2c-0: %s\n", strerror(errno));
		exit(EXIT_FAILURE);
	}
	return fd;
}

/* i2c read/write functions */

/****************************************************************************
 * NOTE:
 * SMBus is a subset of i2c. Many devices use only this subset of i2c. Linux
 * provides many SMBus functions that can be used to communicate using SMBus.
 * If the i2c device connected uses only the SMBus subset of i2c, it is
 * recommended that these functions are used. See the function inlines in
 * the i2c-dev.h file and the documentation from the Linux kernel included
 * in the docs directory of this project folder. Because nothing is known
 * about the attached device, this test code uses simple i2c read()/write()
 * calls to communicate with the device. Please use the smbus commands if
 * possible.
 ***************************************************************************/

/**
 * function to set the slave address of the i2c device. This only needs to be
 * done to initialize the address and then each time that a new device is
 * addressed.
 * @note this is the lower 7 bits of the devices slave address
 * @param fd the file descriptor of the open i2c device
 * @param addr the slave address to set
 * @return -1 on error 0 on success
 */
int MainWindow::i2c_set_slave(int fd, int addr)//inline
{
	if (ioctl(fd, I2C_SLAVE, addr) < 0) {
		fprintf(stderr, "i2c_set_addr: Error on ioctl: %s\n",
				strerror(errno));
		return -1;
	}
	return 0;
}

/**
 * function to write one byte to the i2c device. This should be changed to
 * use the SMBus functions if possible.
 * @param fd the open file descriptor of the i2c device
 * @param data the byte to write to the device
 * @return -1 on failure 0 on success
 */
int MainWindow::i2c_write_byte(int fd, __u8 byte)//inline
{
	if (write(fd, &byte, 1) != 1) {
		fprintf(stderr, "i2c_write_byte: Error on write: %s\n", strerror(errno));
		return -1;
	}
//	printf("i2c_write_byte: WROTE BYTE");
	return 0;
}

/**
 * function to write a byte to a specific register in the device. This
 * should be changed to use the SMBus functions if possible.
 * @param fd the open file descriptor for the i2c device
 * @param reg the register to write to
 * @param cmd the data to write to the device
 * @return -1 on failure 0 on success
 */
int MainWindow::i2c_write_cmd(int fd, __u8 reg, __u8 cmd)//inline
{
	__u8 buff[2];

	buff[0] = reg;
	buff[1] = cmd;

	if (write(fd, buff, 2) != 2) {
		fprintf(stderr, "i2c_write_command: Error on write: %s\n",
				strerror(errno));
		return -1;
	}
	return 0;
}

/**
 * function to read a byte from the i2c device. This should be changed
 * to use the SMBus commands if possible.
 * @param fd the open file descriptor for the i2c device
 * @param val a pointer to the location to store the data
 * @return -1 on failure 0 on success
 */
int MainWindow::i2c_read_byte(int fd, __u8 *val)//inline
{
//	init_i2c();// added for test
	if (read(fd, val, 1) != 1) {//= 4
		fprintf(stderr, "i2c_read_byte: Error on read: %s\n", strerror(errno));
		return -1;
	}
	return 0;
}
/**
 * function to read a byte from the i2c device. This should be changed
 * to use the SMBus commands if possible.
 * @param fd the open file descriptor for the i2c device
 * @param val a pointer to the location to svoid on_temperaturectrl_clicked()tore the data
 * @return -1 on failure 0 on success
 */
int MainWindow::i2c_read_byte4(int fd, __u8 *val)//inline
{
	unsigned int vall[4];// test
	unsigned int a, b, c, d;
	//	init_i2c();// added for test
	if (read(fd, val, 4) != 1) {
		fprintf(stderr, "i2c_read_byte: Error on read: %s\n", strerror(errno));
		return -1;
	}
	a = vall[0];
	b = vall[1];
	c = vall[2];
	d = vall[3];
//	qDebug()<< "a" <<  a;
//	qDebug()<< "b" <<  b;
//	qDebug()<< "c" <<  c;
//	qDebug()<< "d" <<  d;
	val = val+ 1;// dummy statement to break on
	return 0;
}

/**
 * function to read the value at a given register in the i2c device.
 * This should be changed to use SMBus calls if possible. Currently
 * works by writing the register followed by reading the next byte.
 * @param fd the file descriptor of the open i2c device
 * @param val the memory to store data in
 * @param reg the register to read from
 * @return -1 on failure 0 on success
 */
int MainWindow::i2c_read_reg(int fd, __u8 *val, __u8 reg)//inline
{
	// write register //
	if (i2c_write_byte(fd, reg) == -1)
		return -1;
	// read the value at reg //
	if (i2c_read_byte(fd, val) == -1)
		return -1;

	return 0;
}

/**
 * function to read two bytes from the given register. Should be
 * changed to use SMBus commands if possible.
 * @param fd the open file descriptor for the i2c device
 * @param val the memory location to store data at
 * @param reg the register to read from
 * @return -1 on failure 0 on success
 */
int MainWindow::i2c_read_reg2(int fd, __u16 *val, __u8 reg)
{
	MainWindow i2c;
	__u8 b;

	/* write register */
	if (i2c.i2c_write_byte(fd, reg) == -1)
		return -1;
	/* read byte 1
	 * (note we could also read 2 bytes at a time -- 16-bit devices may need it) */
	if (i2c.i2c_read_byte(fd, &b) == -1)
		return -1;
	/* shift and read byte 2 */
	*val = ((__u16)b) << 8;
	if (i2c.i2c_read_byte(fd, &b) == -1)
		return -1;
	/* set value */
	*val += b;

	return 0;


//	__u8 b;

	// write register /
//	if (i2c.i2c_write_byte(fd, reg) == -1)//(fd, reg)
//		return -1;

/*	if (read(fd, val, 2) != 2) {
		fprintf(stderr, "i2c_read_byte: Error on read: %s\n", strerror(errno));
		return -1;
	}*/
	// read byte 1
	 // (note we could also read 2 bytes at a time -- 16-bit devices may need it) /
//	if (i2c.i2c_read_byte(fd, &b) == -1){//(fd, &b)
//		return -1;
//	}
//	qDebug("i2c byte 1 = %x", b);
	// shift and read byte 2 /
//	qDebug("i2c byte 2 = %x", b);
//	*val = ((__u16)b) << 8;
//	qDebug("i2c byte 2 = %x", val);
//	if (i2c.i2c_read_byte(fd, &b) == -1){//(fd, &b) == -1)
//		return -1;
//	}
//	qDebug("i2c byte = %x", b);
	// set value /
//	*val += b;

//	return 0;*/
}

/**
 * function to read FOUR bytes from the given register. Should be
 * changed to use SMBus commands if possible.
 * @param fd the open file descriptor for the i2c device
 * @param val the memory location to store data at
 * @param reg the register to read from
 * @return -1 on failure 0 on success
 */
int MainWindow::i2c_read_reg4(int fd, __u16 *val, __u8 reg)//int MainWindow::i2c_read_reg4(int fd, __u16 *val, __u8 reg)
{
	MainWindow i2c;
//	__u8 b = 0;
//	__u16 w1 = 0;
//	__u16 w2 = 0;
//	double ww;

	// write register /
	if (i2c.i2c_write_byte(fd, reg) == -1)//(fd, reg)
		return -1;
//	printf("\nCalling i2c_set_slave(%d, 0x%X)\n", fd, i2c.i2c_slaveAddr);
//	if (i2c.i2c_set_slave(fd, i2c.i2c_slaveAddr) == -1)//(fd, addr)
//		printf("i2c_set_slave failed\n");
//	else
//		printf("i2c_set_slave reports success\n");
	// read byte 1
	// * (note we could also read 2 bytes at a time -- 16-bit devices may need it) /
//	if (i2c_read_byte4(val) == -1)//(fd, &b)
//		return -1;
	if (read(fd, val, 4) != 1) {
			fprintf(stderr, "i2c_read_byte: Error on read: %s\n", strerror(errno));
			return -1;
		}
	// shift and read byte 2 //
	//w1 = ((__u16)b) << 8; //*val =
//	if (i2c_read_byte(&b) == -1)//(fd, &b) == -1)
		//return -1;
	//w1 += b;

	// read byte 3
	 // (note we could also read 2 bytes at a time -- 16-bit devices may need it) /
//	if (i2c_read_byte(&b) == -1)//(fd, &b)
//		return -1;
	// shift and read byte 4 /
//	w2 = ((__u16)b) << 8;
//	if (i2c_read_byte(&b) == -1)//(fd, &b) == -1)
//		return -1;
//	w2 += b;

	//ww = ((__u16)w1) <<8;
	//ww += w2;
//	readval = b;

//	*val = ww;

	return 0;
}

/**
 * function to write 2 bytes to a register in the device. This should be
 * changed to use the SMBus commands if possible.
 * @param fd the open file descriptor for the i2c device
 * @param reg the register to write to
 * @param cmd the data to write
 * @return -1 on failure 0 on success
 */
int MainWindow::i2c_write_cmd2(int fd, __u8 reg, __u16 cmd)
{
	__u8 buff[3];

	// write register /
	buff[0] = reg;
	buff[1] = (__u8)(cmd >> 8);
	buff[2] = (__u8)(cmd);

	if (write(fd, buff, 3) != 3) {
		fprintf(stderr, "i2c_write_cmd: error on write: %s\n", strerror(errno));
		return -1;
	}
	return 0;
}

/* Testing interface */

int MainWindow::close_device(int fd)//menu(int fd)
{
//	MainWindow i2c;// removed for leak
	deviceClose8100(fd);

/*	if (i2c.close() < 0){
		fprintf(stderr, "Unable to close /dev/i2c-0: %s\n", strerror(errno));
		exit(EXIT_FAILURE);;
	}///removed for mem leak test*/

	return 0;
}

void MainWindow::test_set_slave(int fd, unsigned int adr)//(int fd) 8-11-15
{
//	MainWindow i2c;
	//int addr;
//	printf("\nEnter the slave address (in hex): ");
	//scanf("%X", &addr);
//	printf("\nCalling i2c_set_slave(%d, 0x%X)\n", fd, adr);
	if (i2c_set_slave(fd, adr) == -1)
		printf("i2c_set_slave failed\n");
//	else
//		printf("i2c_set_slave reports success\n");
}

void MainWindow::test_write_byte(int fd)
{
//	MainWindow i2c;8-11-15
	int cmd;
	int reg;

	printf("\nEnter a byte to write (in hex): ");
	scanf("%X", &cmd);
	printf("Enter a register value to write (in hex): ");
	scanf("%X", &reg);
	printf("\nCalling i2c_write_cmd(%d, 0x%X, 0x%X)\n", fd, reg, cmd);

	if (i2c_write_cmd(fd, (__u8)reg, (__u8)cmd) == -1)
		printf("i2c_write_cmd failed\n");
//	else
//		printf("i2c_write_cmd reports success\n");
}

void MainWindow::test_write_int(int fd)
{
//	MainWindow i2c;8-11-15
	int cmd;
	int reg;

//	printf("\nEnter a 2 byte number to write (in hex): ");
//	scanf("%X", &cmd);
//	printf("Enter a register value to write (in hex): ");
//	scanf("%X", &reg);
	cmd = value_3;
	reg = value_1;
//	printf("\nCalling i2c_write_cmd2(%d, 0x%X, 0x%X)\n", fd, reg, cmd);

	if (i2c_write_cmd2(fd, (__u8)reg, (__u16)cmd) == -1)
		printf("i2c_write_cmd2 failed\n");
//	else
//		printf("i2c_write_cmd2 reports success\n");
}

void MainWindow::test_read_byte(int fd)
{
//	MainWindow i2c;8-11-15
	int val = 0;
	int reg;

	reg = value_1;

//	printf("\nEnter a register value to read from (in hex): ");
//	scanf("%X", &reg);
//	printf("\nCalling i2c_read_reg(%d, (__u8 *)&val, 0x%X)\n", fd, reg);

	if (i2c_read_reg(fd, (__u8 *)&val, reg) == -1)
		printf("i2c_read_reg failed\n");
//	else
//		printf("i2c_read_reg reports success\nRead value 0x%X\n", val);
}

/*void MainWindow::test_read_int(int fd)
{
	MainWindow i2c;
	int val;
	int reg;

	reg = value_1;

//	printf("\nEnter a register value to read from (in hex): ");
	//scanf("%X", &reg);
//	printf("\nCalling i2c_read_reg2(%d, &val, 0x%X)\n", fd, reg);

	if (i2c.i2c_read_reg2(fd, (__u16 *)&val, reg) == -1)
		printf("i2c_read_reg2 failed\n");
//	else
//		printf("i2c_read_reg2 reports success\nRead value 0x%X\n", val);
	value_3 = val;
}*/

void MainWindow::openVent(void)
{
	int dataVent;
	__u8 buff[3];//__16
	__u8 port_addr;
	unsigned int i;
	int fd;

	i2c_slaveAddr = 0x40;

//////////////////////////////////////////////////////////////////////////////
	dataVent = 1;
	fd = init_i2c();
	test_set_slave(fd, i2c_slaveAddr);

	port_addr = 0x2e;
	buff[0] = port_addr;
	buff[1] = dataVent;
	if (write(fd, buff, 2) != 2) {
		fprintf(stderr, "i2c_write_command: vent 1 direction Error on write: %s\n",
		strerror(errno));
	}
//	close_device(fd);// add back 8-27-2014 to take care of open files
/////////////////////////////////////////////////////////////////////////////
	port_addr = 0x2f; //
	i = 0;
	for (i=0; i<255; i++){// make top count a settable variable later

//		fd = init_i2c();// add back 8-27-2014 to take care of open files
//		test_set_slave(fd, i2c_slaveAddr);

		dataVent = 0;
		buff[0] = port_addr;
		buff[1] = dataVent;
		if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: vent lo toggle Error on write: %s\n",
			strerror(errno));
		}
		delay(3);
//		qDebug() << "delay done open";
		dataVent = 1;
		buff[0] = port_addr;
		buff[1] = dataVent;
		if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: vent hi toggle Error on write: %s\n",
			strerror(errno));
		}
		delay(3);
//		close_device(fd);// add back 8-27-2014 to take care of open files
	}
	close_device(fd);// make sure// removed 8-27-2014 to take care of open files
	i2c_slaveAddr = 0x01;
	openCloseState = 1;
//	qDebug("OPEN Vent = %x", openCloseState);// test
}
void MainWindow::closeVent(void)
{
	int dataVent;
	__u8 buff[3];//__16
	__u8 port_addr;
	unsigned int i;
	int fd;

	i2c_slaveAddr = 0x40;

//////////////////////////////////////////////////////////////////////////////
	dataVent = 0;
	fd = init_i2c();
	test_set_slave(fd, i2c_slaveAddr);

	port_addr = 0x2e;
	buff[0] = port_addr;
	buff[1] = dataVent;
	if (write(fd, buff, 2) != 2) {
		fprintf(stderr, "i2c_write_command: vent 0 direction Error on write: %s\n",
		strerror(errno));
	}
//	close_device(fd);// add back 8-27-2014 to take care of open files
/////////////////////////////////////////////////////////////////////////////
	i = 256;
	port_addr = 0x2f; //
	for (i=256; i<513; i++){// make top count a setable variable later

//		fd = init_i2c();// add back 8-27-2014 to take care of open files
//		test_set_slave(fd, i2c_slaveAddr);

		dataVent = 0;
		buff[0] = port_addr;
		buff[1] = dataVent;
		if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: vent lo toggle Error on write: %s\n",
			strerror(errno));
		}
		delay(3);
//		qDebug() << "delay done close";
		dataVent = 1;
		buff[0] = port_addr;
		buff[1] = dataVent;
		if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: vent hi toggle Error on write: %s\n",
			strerror(errno));
		}
		delay(3);
//		close_device(fd);// add back 8-27-2014 to take care of open files
	}
	close_device(fd);// make sure// removed 8-27-2014 to take care of open files
	i2c_slaveAddr = 0x01;
	openCloseState = 0;
//	qDebug("Close Vent = %x", openCloseState);// test
}

/*void MainWindow::test_read_byte_4(int fd,__u8 *val, __u8 reg)// needs to be fixed
{
	MainWindow i2c;

//	printf("\nEnter a register value to read from (in hex): ");
//	scanf("%X", &reg);
//	printf("\nCalling i2c_read_reg_4(%d, (__u8 *)&val, 0x%X)\n", fd, reg);

//	if (i2c.i2c_read_reg4(fd, (__u8*)val, reg) == -1)
//		printf("i2c_read_reg_4 failed\n");
//	else
//		printf("i2c_read_reg_4 reports success\nRead value 0x%X\n", val);
}*/

// EOF
/*void MainWindow::on_max7300ioButton_clicked()
{
	event_io dialog(this);
	dialog.exec();
}*/
/*void MainWindow::on_configioButton_clicked()//added
{
	// Used to stub test//

	//AddDialog dialog(this); removed
	//dialog.exec(); removed and changed to the below

	bool convertOK = 0;
	//int proc_pass_fail = 0;

//	AddDialog dialog(this);
//	if (dialog.exec()) {
//	QString name = dialog.name();
	QString i2c_s_addr;// = dialog.i2c_s_addr();
	QString value1 = 0;//dialog.val1();
	QString value2 = 0;//dialog.val2();
	QString value3 = 0;//dialog.val3();

	i2c_slaveAddr = 0;
	value_1 = 0;
	value_2 = 0;
	value_3 = 0;
//	readval = 0;

	i2c_slaveAddr = i2c_s_addr.toUInt(&convertOK, 16);
	value_1 = value1.toUInt(&convertOK, 16);
	value_2 = value2.toUInt(&convertOK, 16);
	value_3 = value3.toUInt(&convertOK, 16);
	value_4 = 0;
//	onPconfigButton();
	//init_i2c();
	//test_set_slave(i2c_slaveAddr);
//	read(fd, readval, 4);
//	i2c_read_reg2(readval, reg_var);
//	test_read_byte();
	//test_read_byte_4();
	//close_device();
//	init_i2c();
//	proc_pass_fail = i2c_set_slave(i2c_slaveAddr);
//	test_write_int();
//	proc_pass_fail = i2c_write_byte(i2c_var_byte);
//	test_read_int();
//	proc_pass_fail = close_device();


	qDebug()<< "i2c_slaveAddr" << i2c_slaveAddr;
	qDebug()<< "value_3" << value_3;

//		if (!name.isEmpty() && !value1.isEmpty()) {
//			QListWidgetItem *item = new	QListWidgetItem(name, ui.addressList);
//			item->setData(Qt::UserRole, value1);
//			ui.addressList->setCurrentItem(item);
//		}
//	}
//	menu(1);// test menu - produced console output - worked
}//;added*/
/*void MainWindow::on_EeventpushButton_clicked(void)
{

}*/


/*void MainWindow::on_addressList_currentItemChanged()
{
	QListWidgetItem *curItem = ui.addressList->currentItem();
	if (curItem) {
		ui.nameLabel->setText("Name: " + curItem->text());
//		ui.regvarLabel->setText("Register Var: " + curItem->data(Qt::UserRole).toString());
	} else {
		ui.nameLabel->setText("<No item selected>");
//		ui.regvarLabel->clear();
	}
}*/

/*void MainWindow::on_deleteButton_clicked()
{

//		QListWidgetItem *curItem = ui.addressList->currentItem();
//	if (curItem) {
//		int row = ui.addressList->row(curItem);
//		ui.addressList->takeItem(row);
//		delete curItem;
//		if (ui.addressList->count() > 0)
//			ui.addressList->setCurrentRow(0);
//		else
//			on_addressList_currentItemChanged();
	i2c_slaveAddr = 0;
	value_1 = 0;
	value_2 = 0;
	value_3 = 0;
//	}
}//added*/

/*void MainWindow::on_sendbyteButton_clicked()// A/D 7417
{
	MainWindow i2c;
	int proc_pass_fail = 0;
	int fd;

	__u8 buff[3];//__16

		buff[0] = value_1;
		buff[1] = value_2;
//		buff[2] = value_3;
//		buff[3] = value_4;

		fd = init_i2c();
		proc_pass_fail = i2c.i2c_set_slave(fd, i2c_slaveAddr);
	//	NOTE Try this in a loop.
		if (write(fd, buff, 2) != 2) {
				fprintf(stderr, "i2c_write_command: Error on write: %s\n",
				strerror(errno));
			}
		proc_pass_fail = i2c.close_device(fd);
}//added*/

/*void MainWindow::on_sendcharButton_clicked()
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

		 buff[0] = value_1;
		 buff[1] = value_2;
		 buff[2] = value_3;
		 buff[3] = value_4;

	fd = init_i2c();
	i2c.i2c_set_slave(fd, i2c_slaveAddr);
//	NOTE Try this in a loop.
		if (write(fd, buff, 4) != 4) {
				fprintf(stderr, "i2c_write_command: Error on write: %s\n",
				strerror(errno));
			}
	close_device(fd);

}//added*/

/*void MainWindow::on_i2creadbyteButton_clicked()// need to do something with readval
{
	MainWindow i2c;
	int fd;
	int proc_pass_fail = 0;

	fd = init_i2c();
	proc_pass_fail = i2c.i2c_set_slave(fd, i2c_slaveAddr);
	read(fd, readval, 4);
	proc_pass_fail = i2c.close_device(fd);
}*/
/*void MainWindow::on_i2creadcharButton_clicked()
{
	MainWindow i2c;
	int fd;
	int proc_pass_fail = 0;

	fd = init_i2c();
	test_set_slave(fd, i2c_slaveAddr);
	read(fd, readval, 4);
	proc_pass_fail = i2c.close_device(fd);
}*/

/*void MainWindow::on_opendeviceButton_clicked()
{
	init_i2c();//Initialize the I2C device, set "FD"
}//added*/

/*void MainWindow::on_closedeviceButton_clicked()
{
	MainWindow i2c;
	int fd;

	fd = init_i2c();

	i2c.close_device(fd);//Close the I2C device
}//added*/


/////////////////////////////////////////////I2C\\\\\\\\\\\\\\\\\\\\\END
/////////////////////////////////////////// SPI/////////////////////Begin
/*int main(int argc, char ** argv)
{

	if (argc < 4)
	{
		printf("USAGE: %s device length mosi\n",argv[0]);
		printf(	"device: name of the spi device node\n"
				"length: length of spi transaction(bytes)\n"
				"mosi:   hex value to be transmitted\n\n"
				"EX: %s /dev/spi_cs1 4 12AB\n\n"
				"Note: mosi will be padded or truncated\n"
				"      to the length speficied.\n"
				"      %d bytes maximum length.\n",argv[0],MAX_LENGTH);
		return -1;
	}

	if(setup_spi(argv[1]) == -1) exit(EXIT_FAILURE);

	transmit_spi(atoi(argv[2]),argv[3]);

	close_spi();

	exit(EXIT_SUCCESS);
}*/

double MainWindow::getSig_spi(int length, char * mosi_str)
{
    spi_transfer_t data;
    __u8 nibble;
    int i, g;
    double result;
    unsigned int hexHold;

    if (!is_initialized) return -1;

    data.size = (length < MAX_LENGTH) ? length : MAX_LENGTH;

    for(i=0; i<(length*2); i++)
    {
    	if(i < strlen(mosi_str))
    		nibble = char2hex(mosi_str[i]);
    	else
    		nibble = 0xf;

    	mosi[i/2] = ((i % 2) == 0) ? nibble : ((mosi[i/2] << 4) | nibble);
    }

    data.mosi = mosi;
    data.miso = miso;

	g = ioctl(file_des, XMIT, &data);
    if (g == -1) {
        EPRINT("spi_transmit: error writing device\n");
        return -1;
    }

    //////////////////////////////////// wtr start
   hexHold = (miso[1]<<16) + (miso[2]<<8) + miso[3];
//   printf("hexhold = %x\n", hexHold);
   result = (hexHold * 0.00000029802322307695);//0.00000014901162082026);//0.00000007450580596924);//0.00000029802322307695);// 0.00000014901162082026);// * 2);///0xFFFFFF) * 2.5;

   if(hexHold < 0x7fffff){//<=
	   result = result * (-1);
   }
//   qDebug("Result from SPI = %f", result);

    //////////////////////////////////// wtr end
//	deviceClose8100(file_des);
    return result;// / 2.0;remove
}
int MainWindow::setup_spi(char * device_file)
{
	static spi_control config = SPICL_EIGHTBIT;
	int g, h;

    if (is_initialized)
        return 0;

    g = (file_des = open(device_file, O_RDWR));
    if (g == -1) {
        //EPRINT("setup_spi: error opening device file: %s: %s\n",device_file, strerror(errno));
        return -1;
    }

    // confwrite to set bpw to 8 , mode 0,0 (CPHA and CPOL 0)/////
    h = (ioctl(file_des, CONFWRITE, &config));
    if (h == -1) {
        //EPRINT("setup_spi: error configuring device\n");
        close_device(file_des);
        return -1;
    }

    is_initialized = TRUE;
//    close_device(file_des);//added for test

    return 0;
}

int MainWindow::transmit_spi(int length, char * mosi_str)
{
/*    spi_transfer_t data;
    __u8 nibble;
    int i;

    if (!is_initialized) return -1;

    data.size = (length < MAX_LENGTH) ? length : MAX_LENGTH;

    for(i=0; i<(length*2); i++)
    {
    	if(i < strlen(mosi_str))
    		nibble = char2hex(mosi_str[i]);
    	else
    		nibble = 0xf;

    	mosi[i/2] = ((i % 2) == 0) ? nibble : ((mosi[i/2] << 4) | nibble);
    }

    data.mosi = mosi;
    data.miso = miso;

    if (ioctl(file_des, XMIT, &data) == -1) {
        EPRINT("spi_transmit: error writing device\n");
        return -1;
    }
	close_device(file_des);// added 7-23-2015 for test
    is_initialized = FALSE;// added 7-23-2015 for test remove if used in sequential commands

//    printf("MOSI  MISO\n");

//    for(i=0; i<length; i++) printf("%.2X  : %.2X\n", mosi[i],miso[i]);
*/
    return 0;
}

void MainWindow::close_spi(void)
{
	if (!is_initialized){
		//EPRINT("close_spi: call to close before initialization\n");
	}
    else {

    	close_device(file_des);
        is_initialized = FALSE;
    }
}

__u8 MainWindow::char2hex(char value)
{
	__u8 retval;
	if(value >= '0' && value <= '9') retval = value - '0';
	else if(value >= 'A' && value <= 'F') retval = value - 'A' + 0xA;
	else if(value >= 'a' && value <= 'f') retval = value - 'a' + 0xA;
	else retval = 0xF;

	return retval;
}
void MainWindow::TriggerOnOff(void){

	if(ui->triggerCheckBox->isChecked()){
		TRIGGER = 1;
//		qDebug("Trigger = %d", TRIGGER);
//		ui->triggerCheckBox->clicked(0);
//		ui->triggerButton->released();
	}else{
		TRIGGER = 0;
//		qDebug("Trigger = %d", TRIGGER);
//		ui->triggerCheckBox->clicked(1);
//		ui->triggerButton->released();
	}

}

void MainWindow::runOvenCommands(void){
	qDebug("Run Oven Commands Firing.");

	QString firstCommand = "serial-mode -p comc -m rs485";
	QProcess *myProcess1 = new QProcess();
	myProcess1->start(firstCommand);

	QString SecondCommand = "serial-mode -p comc -r 1";
	QProcess *myProcess2 = new QProcess();
	myProcess2->start(SecondCommand);
}

void MainWindow::heatersOff(void){// ok // Need relay to cut power, normally open !!!!!!!!!!!!!

	OvenWidget heater;

	writeRecipeSetpoint(0x01, 0x01, 25);
	delay(MDT);
//	writeRecipeSetpoint(0x01, 4004, 2);// go to standby
//	delay(MDT);
	writeRecipeSetpoint(0x02, 0x01, 25);
	delay(MDT);
	writeRecipeSetpoint(0x03, 0x01, 25);
	delay(MDT);
	writeRecipeSetpoint(0x04, 0x01, 25);
}
void MainWindow::setCollumnTemp(QString txt){
		double val3;
		bool okv[1];
		int tempVar;

		val3 = txt.toDouble(okv);



		qDebug("detConfigure delete PolPop val3  = %f", val3);

		//ui.didPolVCtlSpinBox->setValue(val3);

		tempVar = txt.toInt();
		qDebug() << "OVEN TEMP SET TO: %d" << tempVar;
		//ui.column_temp_box->display(txt_dc.toInt());

		//test.
		writeTempSetpoint(1,tempVar);
}

void MainWindow::setDetectorTemp(QString txt){
		double val3;
		bool okv[1];
		int tempVar;

		val3 = txt.toDouble(okv);

		qDebug("detConfigure deleteNuMPop val3  = %f", val3);
		tempVar = txt.toInt();

		qDebug() << "********OVEN TEMP SET TO: %d" << tempVar;
		writeTempSetpoint(2,tempVar);
}

// Copy This
QString MainWindow::getModBusTemp(int SlaveAddress){
	QString program = "./modbus_read_ttyO1";
	qDebug("starting Modbus Read");
	QStringList arguments;
	arguments << SlaveAddress;
	QProcess *myProcess = new QProcess();
	myProcess->start(program, arguments);
	myProcess->waitForFinished();
	if(myProcess->FailedToStart){
		qDebug("Modbus Failed to Start");
		qDebug(myProcess->errorString());
		return myProcess->errorString();
	}
	if(myProcess->Crashed){
		qDebug("Modbus Crashed");
		qDebug(myProcess->errorString());
		return myProcess->errorString();
	}
	if(myProcess->Timedout){
		qDebug("Modbus Timedout");
		qDebug(myProcess->errorString());
		return myProcess->errorString();
	}
	if(myProcess->WriteError){
		qDebug("Modbus WriteError");
		qDebug(myProcess->errorString());
		return myProcess->errorString();
	}
	if(myProcess->ReadError){
		qDebug("Modbus ReadError");
		qDebug(myProcess->errorString());
		return myProcess->errorString();
	}
	if(myProcess->UnknownError){
		qDebug("Modbus UnknownError");
		qDebug(myProcess->errorString());
		return myProcess->errorString();
	}
	qDebug(myProcess->readAll());

}
// Copy This
void MainWindow::SetModBusTemp(QString SlaveAddress, QString Temp){
	QString program = "./modbus_set_ttyO1";
		qDebug("starting Modbus Set");
		QStringList arguments;
		arguments << Temp << SlaveAddress;
		QProcess *myProcess = new QProcess();

		myProcess->start(program, arguments);
		myProcess->waitForFinished();
		qDebug(myProcess->errorString());
		/*
		if(myProcess->FailedToStart){
			qDebug("Modbus Failed to Start");
			qDebug(myProcess->errorString());
		}
		if(myProcess->Crashed){
			qDebug("Modbus Crashed");
			qDebug(myProcess->errorString());
		}
		if(myProcess->Timedout){
			qDebug("Modbus Timedout");
			qDebug(myProcess->errorString());
		}
		if(myProcess->WriteError){
			qDebug("Modbus WriteError");
			qDebug(myProcess->errorString());
		}
		if(myProcess->ReadError){
			qDebug("Modbus ReadError");
			qDebug(myProcess->errorString());
		}
		if(myProcess->UnknownError){
			qDebug("Modbus UnknownError");
			qDebug(myProcess->errorString());
		}*/
}


////////////////////////////////////////////SPI/////////////////////END
//*************** END MainWindow initialization FUNCTIONS ************************

extern "C" {

void busMonitorAddItem( uint8_t isRequest, uint8_t slave, uint8_t func, uint16_t addr, uint16_t nb, uint16_t expectedCRC, uint16_t actualCRC )
{
    // Why this exists is inexplicable, but the program will NOT compile without it

//         globalMainWin->busMonitorAddItem( isRequest, slave, func, addr, nb, expectedCRC, actualCRC );
}

void busMonitorRawData( uint8_t * data, uint8_t dataLen, uint8_t addNewline )
{
    // Why this exists is inexplicable, but the program will NOT compile without it

//        globalMainWin->busMonitorRawData( data, dataLen, addNewline != 0 );
}



}
/*    bool MainWindow::notify(QObject *receiver, QEvent *event)
    {
      if (event->type() == QEvent::KeyPress) {
        // Handle
      }
      return QApplication::notify(receiver, event);
    }*/


