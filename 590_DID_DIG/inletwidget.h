#ifndef INLETWIDGET_H
#define INLETWIDGET_H

#include <QWidget>

#include "inletobject.h"

namespace Ui {
    class InletWidget;
}

class InletWidget : public QWidget
{
    Q_OBJECT

signals:
    void tempSetPoint(int slaveID, int tempSP);
    void tempProcessValue(int slaveID);

public slots:
    void setIdealTemp(double tempSetpoint);
    void setActualTemp(int slaveID, int actualTemp);
    void manualWriteTemp(void);

public:
    explicit InletWidget(QWidget *parent = 0);
    ~InletWidget();

    void setLabels(QString nameLabel, QString typeLabel);
    void setIsHeated(bool isHeated);
    void setConnectsMinsMaxes(InletObject *inlet);
    void setSlaveIDs(int slaveID);

private slots:
    void on_actualTempButton_clicked();

private:
    Ui::InletWidget *ui;

    int m_tempSlaveID;
    int m_actualTemp;
};

#endif // INLETWIDGET_H
