#include "columnobject.h"

ColumnObject::ColumnObject(Part *parent) :
    Part(parent)
{
}

void ColumnObject::setColumnType(QString columnType)
{
    m_columnType = columnType;
}

QString ColumnObject::getColumnType()
{
    return m_columnType;
}
