#ifndef DETECTORWIDGET_H
#define DETECTORWIDGET_H

#include "detectorobject.h"

#include <QWidget>

namespace Ui {
    class DetectorWidget;
}

class DetectorWidget : public QWidget
{
    Q_OBJECT

signals:
    void tempSetPoint(int slaveID, int tempSP);
    void tempProcessValue(int slaveID);

public slots:
    void setIdealTemp(double tempSetpoint);
    void setActualTemp(int slaveID, int actualTemp);

public:
    explicit DetectorWidget(QWidget *parent = 0);
    ~DetectorWidget();

    void setLabels(QString nameLabel, QString typeLabel);
    void setIsHeated(bool isHeated);
    void setConnectsMinsMaxes(DetectorObject *detector);
    void setSlaveIDs(int slaveID);
////////////////
    void manualWriteTemp(void);
    void dwConfig(void);
    void keyReleaseEvent(QKeyEvent *event);
////////////////

private slots:
    void on_actualTempButton_clicked();

private:
    Ui::DetectorWidget *ui;

    int m_tempSlaveID;
    int m_actualTemp;
};

#endif // DETECTORWIDGET_H
