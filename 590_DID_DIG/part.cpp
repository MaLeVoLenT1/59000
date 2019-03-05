#include "part.h"

Part::Part(QObject *parent) :
    QObject(parent)
{
    m_isHeatedZone = false;
    m_idealTemperature = -1;
    m_tempSlaveID = -1;
    //m_isPresControlled = false;

}

void Part::setPartType(QString partType)
{
    m_type = partType;
}

QString Part::getPartType()
{
    return m_type;
}

void Part::setName(QString partName)
{
    m_name = partName;
}

QString Part::getName()
{
    return m_name;
}

void Part::setHeatedZone(bool isPartHeated)
{
    m_isHeatedZone = isPartHeated;
}

bool Part::getHeatedZone()
{
    return m_isHeatedZone;
}

void Part::setTempSlaveID(int tempSlaveID)
{
    m_tempSlaveID = tempSlaveID;
}

int Part::getTempSlaveID()
{
    return m_tempSlaveID;
}

void Part::setIdealTemp(double partIdealTemp)
{
    m_idealTemperature = partIdealTemp;
}

double Part::getIdealTemp()
{
    return m_idealTemperature;
}

void Part::setActualTemp(float partActualTemp)
{
    m_actualTemperature = partActualTemp;
}

float Part::getActualTemp()
{
    return m_actualTemperature;
}

//void Part::setPresControl(bool isPartPresControl)
//{
//    m_isPresControlled = isPartPresControl;
//}

//bool Part::getPresControl()
//{
//    return m_isPresControlled;
//}

//void Part::setNumPresControls(int numPresControls)
//{
//    m_numPresControls = numPresControls;
//}

//int Part::getNumPresControls()
//{
//    return m_numPresControls;
//}

//void Part::setIdealPres(float partIdealPres)
//{
//    m_idealPressure = partIdealPres;
//}

//float Part::getIdealPres()
//{
//    return m_idealPressure;
//}

//void Part::setActualPres(float partActualPres)
//{
//    m_actualPressure = partActualPres;
//}

//float Part::getActualPres()
//{
//    return m_actualPressure;
//}
