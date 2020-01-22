#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui/QWidget> ////////// 06/19/2014
//#include "objectmgmt.h"// removed to get MW.h to work in OW.*1/8/14
#include <QStringListModel>
#include <QStackedWidget>
#include <QLabel>
#include <stdio.h>
#include <stdlib.h>

#include "modbus.h"

#include "part.h"//1/8/14
#include "i2c--dev.h"// added
#include <QDebug>

class QAction;

class ConfigureDialog;
class ConfigureDialog2;

class ObjectMgmt;

class ovenConfig;// added wtr 12-19-2013

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void busMonitorAddItem( bool isRequest,
                            uint8_t slave,
                            uint8_t func,
                            uint16_t addr,
                            uint16_t nb,
                            uint16_t expectedCRC,
                            uint16_t actualCRC );
    void busMonitorRawData( uint8_t * data, uint8_t dataLen, bool addNewline );
//    void writeZoneRegParameters(modbus_t *ctx, int addr, int nb, uint16_t *dest);//double*
//    int* readZoneRegParameters(modbus_t *ctx, int addr, int nb, uint16_t *dest);//double*
    void ZoneRampSoakParameters(void);

//    bool m_superUser;

signals:
    void listViewActiveRow(int);
    void tempProcessValue(int slaveID, int tempPV);
    void testMainSig(void);//1/12/2014

public slots:
	void changeSerialPort( int temp);// added to public slots so as to be able to call it in main()
    void writeTempSetpoint(int slaveID, int tempSP);
    void writeRecipeSetpoint(int slaveID, int addr, double recipeSP);
    void readTempValue(int slaveID);
    int readTrueValue(int slaveID);
    int readRecipeValue(int slaveID, int addr);//const int addr
    int readRetry(int slaveID, int addr);
//    void ReadZoneRampSoakParameters(void);
    void sendRampParameters(void);
    void testMainSlot(int a, int b);//01/12/14

    //Added by Dione from detconfigure
    void setCollumnTemp(QString txt);
    void setDetectorTemp(QString txt);

    // i2c prototypes //
	int init_i2c(void);
	int i2c_set_slave(int fd, int addr);
	int i2c_write_byte(int fd, __u8 byte);
	int i2c_write_cmd(int fd, __u8 reg, __u8 cmd);
	int i2c_read_byte(int fd, __u8 *val);
	int i2c_read_byte4(int fd, __u8 *val);
	int i2c_read_reg(int fd, __u8 *val, __u8 reg);
	int i2c_read_reg2(int fd, __u16 *val, __u8 reg);
	int i2c_read_reg4(int fd, __u16 *val, __u8 reg);//__u8
	int i2c_write_cmd2(int fd, __u8 reg, __u16 cmd);
	// Testing Functions //
	int close_device(int fd);
	void test_set_slave(int fd, unsigned int adr);
	void test_write_byte(int fd);
	void test_write_int(int fd);
	void test_read_byte(int fd);
//	void test_read_byte_4(int fd, __u8 *val, __u8 reg);
//	void test_read_int(int fd);

	int setup_spi(char * device_file);
	double getSig_spi(int length, char * mosi_str);
	int transmit_spi(int length, char * mosi_str);
	void close_spi(void);
	__u8 char2hex(char value);
	void openVent(void);
	void closeVent(void);
	void delay( int millisecondsToWait );
	void heatersOff(void);
	void TriggerOnOff(void);
	void displayStatusBusy(void);
	void displayStatusDone(void);
	void externalValvesOn(void);
	void externalValvesOff(void);
	void dtlog(void);
//    void changeSerialPort( int );// added from private 8-24-2014
protected:
//	bool MainWindow::notify(QObject *receiver, QEvent *event);
//	void keyPressEvent(QKeyEvent * e);/////////////   06/18/2014
//    void keyReleaseEvent(QKeyEvent *e);/////////////   06/19/2014

private slots://added
//	void on_tempcontrolButton_clicked();
//	void on_configioButton_clicked();
//	void on_addressList_currentItemChanged();
//	void on_deleteButton_clicked();
//	void on_sendbyteButton_clicked();
//	void on_sendcharButton_clicked();
//	void on_i2creadbyteButton_clicked();
//	void on_i2creadcharButton_clicked();
//	void on_opendeviceButton_clicked();
//	void on_closedeviceButton_clicked();
//	void on_max7300ioButton_clicked();
//	void on_EeventpushButton_clicked();

private slots:
    void newConfiguration();
    void modifyConfiguration();
    void loadConfiguration();
    void saveConfiguration();
    void closePrep();
    void listViewActivated(const QModelIndex &index);
//    void changeSerialPort( int );
    void on_loginLogoutButton_clicked();
    void loginSuperUser();
    void logoutSuperUser();

private:
    Ui::MainWindow *ui;

    QLabel *detLabel;
    QLabel *colLabel;
    QLabel *inletLabel;


    QList<Part*> currentPartList;//1/8/2014 wtr temp remove to elimate class redefin when add MW.h to ovenwidget.h
    QList<QWidget*> currentWidgetList;
    QStringListModel *m_partNameModel;
    QStringList partNameList;

    void createActions();
    void createMenus();
    void createToolBars();
    void createStatusBar();
    void readSettings();
    void writeSettings();
    bool loadFile(const QString &fileName);
    bool saveFile(const QString &fileName);

    bool m_superUser;

    QMenu *fileMenu;
    QMenu *helpMenu;
    QToolBar *fileToolBar;

    QAction *newConfigurationAction;
    QAction *modifyConfigurationAction;
    QAction *loadConfigurationAction;
    QAction *saveConfigurationAction;
    QAction *exitAction;

    ObjectMgmt *objectMngr;

    modbus_t* m_modbus;

};

#endif // MAINWINDOW_H
