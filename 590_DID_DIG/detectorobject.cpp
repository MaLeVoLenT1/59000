#include "detectorobject.h"

DetectorObject::DetectorObject(Part *parent) :
    Part(parent)
{
}

void DetectorObject::setDetectorType(QString detectorType)
{
    m_detectorType = detectorType;
}

QString DetectorObject::getDetectorType()
{
    return m_detectorType;
}

void DetectorObject::setDetRange(float range)
{
    m_range = range;
}

float DetectorObject::getDetRange()
{
    return m_range;
}

void DetectorObject::setDetGain(float gain)
{
    m_gain = gain;
}

float DetectorObject::getDetGain()
{
    return m_gain;
}

void DetectorObject::setDetAttenuation(float attenuation)
{
    m_attenuation = attenuation;
}

float DetectorObject::getDetAttenuation()
{
    return m_attenuation;
}

void DetectorObject::setDetOutput(int output)
{
    m_output = output;
}

int DetectorObject::getDetOutput()
{
    return m_output;
}

void DetectorObject::setDetCurrent(float current)
{
    m_current = current;
}

float DetectorObject::getDetCurrent()
{
    return m_current;
}

void DetectorObject::setDetDisVolt(float dischargeV)
{
    m_dischargeVoltage = dischargeV;
}

float DetectorObject::getDetDisVolt()
{
    return m_dischargeVoltage;
}

void DetectorObject::setDetPolarity(bool polarity)
{
    m_voltagePol = polarity;
}

bool DetectorObject::getDetPolarity()
{
    return m_voltagePol;
}

