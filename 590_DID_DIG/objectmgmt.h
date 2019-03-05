#ifndef OBJECTMGMT_H
#define OBJECTMGMT_H

//#include <QObject>
#include <QWidget>

#include "part.h"
#include "detectorobject.h"
#include "detectorwidget.h"
#include "columnobject.h"
#include "ovenwidget.h"
#include "inletobject.h"
#include "inletwidget.h"
#include "injectorobject.h"
#include "injectorwidget.h"
#include "mainwindow.h"
#include "ovencontrol.h"//1-15-14

class MainWindow;
class OvenControl;//1/15/14

class ObjectMgmt : public QWidget
{
    Q_OBJECT

public:
    explicit ObjectMgmt(QWidget *parent = 0);

public slots:
//    void setPartCounts(int partCount, int detCount, int colCount, int inletCount, int injCount);
    void createNewPart(QString partName, QString partType, QString partSubtype, bool isHeated, int tempSlaveID);

    QList<Part*> getPartList();
    QList<QWidget*> getWidgetList();
    void holdOldParts();
    void deleteOldParts();
    void deleteNewParts();
    void setMainWindow(MainWindow *mainWin);

private:
    void setPartCounts(int partCount, int detCount, int colCount, int inletCount, int injCount);
    void modifyNewDet(DetectorObject* detector, QString partSubType);

    void createNewDet(QString partName, QString partType, QString partSubtype, bool isHeated, int tempSlaveID);
    void createNewDetWidget(DetectorObject* detector);
    void createNewCol(QString partName, QString partType, QString partSubtype, bool isHeated, int tempSlaveID);
    void createNewOvenWidget(ColumnObject* column);
    void createNewInlet(QString partName, QString partType, QString partSubtype, bool isHeated, int tempSlaveID);
    void createNewInletWidget(InletObject* inlet);
    void createNewInj(QString partName, QString partType, QString partSubtype, bool isHeated, int tempSlaveID);
    void createNewInjWidget(InjectorObject* injector);

    QList<Part*> m_currentPartList;
    QList<Part*> m_oldPartList;
    QList<QWidget*> m_currentWidgetList;
    QList<QWidget*> m_oldWidgetList;
    int m_partCount;
    int m_detCount;
    int m_colCount;
    int m_injCount;
    int m_inletCount;
    int m_oldPartCount;
    int m_oldDetCount;
    int m_oldColCount;
    int m_oldInjCount;
    int m_oldInletCount;

    Part *m_partProto;
    MainWindow *m_MainWindow;


};

#endif // OBJECTMGMT_H
