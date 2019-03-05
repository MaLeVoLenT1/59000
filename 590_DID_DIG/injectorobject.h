#ifndef INJECTOROBJECT_H
#define INJECTOROBJECT_H

//#include <QObject>
#include "part.h"

class InjectorObject : public Part
{
    Q_OBJECT
public:
    explicit InjectorObject(Part *parent = 0);

    void setInjectorType(QString injectorType);
    QString getInjectorType();


private:
    QString m_injectorType;

signals:

public slots:

};

#endif // INJECTOROBJECT_H
