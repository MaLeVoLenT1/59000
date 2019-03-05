#ifndef INLETOBJECT_H
#define INLETOBJECT_H

//#include <QObject>
#include "part.h"

class InletObject : public Part
{
    Q_OBJECT
public:
    explicit InletObject(Part *parent = 0);

    void setInletType(QString inletType);
    QString getInletType();

private:
    QString m_inletType;

signals:

public slots:

};

#endif // INLETOBJECT_H
