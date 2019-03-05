#include "inletobject.h"

InletObject::InletObject(Part *parent) :
    Part(parent)
{
}

void InletObject::setInletType(QString inletType)
{
    m_inletType = inletType;
}

QString InletObject::getInletType()
{
    return m_inletType;
}
