#ifndef DETECTOROBJECT_H
#define DETECTOROBJECT_H

//#include <QObject>

#include "part.h"

class DetectorObject : public Part
{
    Q_OBJECT
public:
    explicit DetectorObject(Part *parent = 0);

    void setDetectorType(QString detectorType);
    QString getDetectorType();

    void setDetRange(float range);
    float getDetRange();

    void setDetGain(float gain);
    float getDetGain();

    void setDetAttenuation(float attenuation);
    float getDetAttenuation();

    void setDetOutput(int output);
    int getDetOutput();

    void setDetCurrent(float current);
    float getDetCurrent();

    void setDetDisVolt(float dischargeV);
    float getDetDisVolt();

    void setDetPolarity(bool polarity);
    bool getDetPolarity();

private:
    QString m_detectorType;
    float m_range;
    float m_gain;
    float m_attenuation;
    int m_output;
    float m_current;
    float m_dischargeVoltage;
    bool m_voltagePol;

signals:

public slots:

};

#endif // DETECTOROBJECT_H
