#include "injectorobject.h"

InjectorObject::InjectorObject(Part *parent) :
    Part(parent)
{
}

void InjectorObject::setInjectorType(QString injectorType)
{
    m_injectorType = injectorType;
}

QString InjectorObject::getInjectorType()
{
    return m_injectorType;
}
