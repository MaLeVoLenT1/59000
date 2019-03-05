#ifndef COLUMNOBJECT_H
#define COLUMNOBJECT_H

//#include <QObject>
#include "part.h"

class ColumnObject : public Part
{
    Q_OBJECT
public:
    explicit ColumnObject(Part *parent = 0);

    void setColumnType(QString columnType);
    QString getColumnType();

private:
    QString m_columnType;

signals:

public slots:

};

#endif // COLUMNOBJECT_H
