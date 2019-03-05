#ifndef OVENWIDGET_H
#define OVENNWIDGET_H

#include "columnobject.h"
#include "modbus.h"
#include "mainwindow.h"//1/8/2014

#include <QWidget>

//static modbus_t* ow_m_modbus;// temporary for transfering data from MainWindow class

namespace Ui {
    class OvenWidget;
}

class OvenWidget : public QWidget
{
    Q_OBJECT

signals:
    void tempSetPoint(int slaveID, int tempSP);
    void tempProcessValue(int slaveID);
//    void on_rampTempButton_clicked(void);
public slots:
    void setIdealTemp(double tempSetpoint);
    void setActualTemp(int slaveID, int actualTemp);
    void rampTempButton(void);
    void rampTempMonitor(void);
    void extEvent(void);
    void owValveControl(void);
    void owReadFlow(void);
//    double* readZoneRegParameters(modbus_t *ctx, int addr, int nb, uint16_t *dest);
//    void ReadZoneRampSoakParameters(void);
    void sendRampParameters(void);
    void manualWriteTemp(void);
    void ovenHeaterOff(void);
    void ovenHeaterOn(void);
    void ovenHeaterOnOff(bool state);

//public slots:
//    void writeZoneRegParameters(modbus_t *ctx, int addr, int nb, uint16_t *dest);//double*
//    void readZoneRegParameters(modbus_t *ctx, int addr, int nb, uint16_t *dest);//double*

public:
    explicit OvenWidget(QWidget *parent = 0);
    ~OvenWidget();

    void setLabels(QString nameLabel, QString typeLabel);
    void setIsHeated(bool isHeated);
    void setConnectsMinsMaxes(ColumnObject *column);
    void setSlaveIDs(int slaveID);
//    void ZoneRampSoakParameters(void);
    void testwtr(void);

private slots:
    void rampTempEnabler(bool isEnabled);
    void on_actualTempButton_clicked();

private:
    Ui::OvenWidget *ui;

    int m_tempSlaveID;
    int m_actualTemp;
};

#endif // OVENWIDGET_H
