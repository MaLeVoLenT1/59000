#ifndef PART_H
#define PART_H

#include <QObject>

class Part : public QObject
{
    Q_OBJECT
public:
    explicit Part(QObject *parent = 0);

    void setPartActive(bool isPartActive);
    bool getPartActive();

    void setPartType(QString partType);
    QString getPartType();

    void setName(QString partName);
    QString getName();

    void setHeatedZone(bool isPartHeated);
    bool getHeatedZone();

    void setTempSlaveID(int tempSlaveID);
    int getTempSlaveID();

    double getIdealTemp();

    void setActualTemp(float partActualTemp);
    float getActualTemp();

//    void setPresControl(bool isPartPresControl);
//    bool getPresControl();

//    void setNumPresControls(int numPresControls);
//    int getNumPresControls();

//    void setIdealPres(float partIdealPres);
//    float getIdealPres();

//    void setActualPres(float partActualPres);
//    float getActualPres();

signals:

public slots:
    void setIdealTemp(double partIdealTemp);

private:
    QString m_name;
    QString m_type;
    bool m_isHeatedZone;
    int m_tempSlaveID;
    float m_idealTemperature;
    float m_actualTemperature;

//    bool m_isPresControlled;
//    int m_numPresControls;
//    float m_idealPressure;
//    float m_actualPressure;


};

#endif // PART_H
