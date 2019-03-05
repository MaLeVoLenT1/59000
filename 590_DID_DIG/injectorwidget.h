#ifndef INJECTORWIDGET_H
#define INJECTORWIDGET_H

#include <QWidget>

#include "injectorobject.h"
#include "readpressure.h"

namespace Ui {
    class InjectorWidget;
}

class InjectorWidget : public QWidget
{
    Q_OBJECT

signals:
    void tempSetPoint(int slaveID, int tempSP);
    void tempProcessValue(int slaveID);

public slots:
    void setIdealTemp(double tempSetpoint);
    void setActualTemp(int slaveID, int actualTemp);
    void manualWriteTemp(void);
    void readPressureInj(void);

public:
    explicit InjectorWidget(QWidget *parent = 0);
    ~InjectorWidget();

    void setLabels(QString nameLabel, QString typeLabel);
    void setIsHeated(bool isHeated);
    void setConnectsMinsMaxes(InjectorObject *injector);
    void setSlaveIDs(int tempSlaveID);

private slots:
    void on_actualTempButton_clicked();

private:
    Ui::InjectorWidget *ui;

    int m_tempSlaveID;
    int m_actualTemp;
};

#endif // INJECTORWIDGET_H
