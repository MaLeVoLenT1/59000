#include "objectmgmt.h"
#include "mainwindow.h"

#include <QDebug>
#include <QMessageBox>

ObjectMgmt::ObjectMgmt(QWidget *parent) :
    QWidget(parent)
{
    //m_currentPartList = 0;
    m_partProto = new Part(this);

    m_partCount = 0;
    m_detCount = 0;
    m_colCount = 0;
    m_inletCount = 0;
    m_injCount = 0;

//    ColumnObject *column1 = new ColumnObject(this);
//    ColumnObject *column2 = new ColumnObject(this);
//    OvenWidget *ovenWidgColumn1 = new OvenWidget(this);
//    OvenWidget *ovenWidgColumn2 = new OvenWidget(this);

}

void ObjectMgmt::setPartCounts(int partCount, int detCount, int colCount, int inletCount, int injCount)
{
    m_partCount = partCount;
    m_detCount = detCount;
    m_colCount = colCount;
    m_inletCount = inletCount;
    m_injCount = injCount;
}

void ObjectMgmt::setMainWindow(MainWindow *mainWin)
{
    m_MainWindow = mainWin;
}

void ObjectMgmt::createNewPart(QString partName, QString partType, QString partSubtype, bool isHeated, int tempSlaveID)
{

    m_partCount++;

    if (partType =="Detector") {
        m_detCount++;
        if (partName=="") partName = partType + " " + QString::number(m_detCount);
        createNewDet(partName,partType,partSubtype,isHeated,tempSlaveID);
    }
    else if (partType == "Column") {
        m_colCount++;
        if (partName=="") partName = partType + " " + QString::number(m_colCount);
        createNewCol(partName,partType,partSubtype,isHeated, tempSlaveID);
    }
    else if (partType == "Inlet") {
        m_inletCount++;
        if (partName=="") partName = partType + " " + QString::number(m_inletCount);
        createNewInlet(partName,partType,partSubtype,isHeated, tempSlaveID);
    }
    else if (partType == "Injector") {
        m_injCount++;
        if (partName=="") partName = partType + " " + QString::number(m_injCount);
        createNewInj(partName,partType,partSubtype,isHeated, tempSlaveID);
    };

}

QList<Part*> ObjectMgmt::getPartList()
{
    return m_currentPartList;
}

QList<QWidget*> ObjectMgmt::getWidgetList()
{
    return m_currentWidgetList;
}

void ObjectMgmt::deleteOldParts()
{
    for (int i=m_oldPartList.count()-1; i>=0; i--) {
        if (!m_oldPartList.isEmpty()) {
            m_oldPartList[i]->deleteLater();
            m_oldPartList.removeAt(i);
            m_oldWidgetList[i]->deleteLater();
            m_oldWidgetList.removeAt(i);
        }
    }
}

void ObjectMgmt::deleteNewParts()
{
    if (m_currentPartList.isEmpty()){
        m_currentPartList << m_oldPartList;
        m_currentWidgetList << m_oldWidgetList;
        setPartCounts(m_oldPartCount,m_oldDetCount, m_oldColCount,m_oldInletCount,m_oldInjCount);
    }
    else {

        for (int i=m_currentPartList.count()-1; i>=0; i--) {
            m_currentPartList[i]->deleteLater();
            m_currentPartList.removeAt(i);
            m_currentWidgetList[i]->deleteLater();
            m_currentWidgetList.removeAt(i);
        }
    };

    deleteOldParts();
}

void ObjectMgmt::holdOldParts()
{
    if (m_oldPartList.isEmpty()){
        m_oldPartList << m_currentPartList;
        m_oldWidgetList << m_currentWidgetList;
        m_oldPartCount = m_partCount;
        m_oldDetCount = m_detCount;
        m_oldColCount = m_colCount;
        m_oldInjCount = m_injCount;
        m_oldInletCount = m_inletCount;
        setPartCounts(0,0,0,0,0);
        for (int i=m_currentPartList.count()-1; i>=0; i--) {
            if (!m_currentPartList.isEmpty()) {
                m_currentPartList[i]->deleteLater();
                m_currentPartList.removeAt(i);
                m_currentWidgetList[i]->deleteLater();
                m_currentWidgetList.removeAt(i);
            }
        }
    }
    else {

        for (int i=m_oldPartList.count()-1; i>=0; i--) {
            m_oldPartList[i]->deleteLater();
            m_oldPartList.removeAt(i);
            m_oldWidgetList[i]->deleteLater();
            m_oldWidgetList.removeAt(i);
        }
    };
}

void ObjectMgmt::modifyNewDet(DetectorObject *detector, QString partSubType)
{
    detector->setDetectorType(partSubType);
}

void ObjectMgmt::createNewDet(QString partName, QString partType, QString partSubtype, bool isHeated, int tempSlaveID)
{
    DetectorObject* detector = new DetectorObject(m_partProto);
    detector->setName(partName);
    detector->setPartType(partType);
    detector->setHeatedZone(isHeated);
    detector->setDetectorType(partSubtype);
    detector->setTempSlaveID(tempSlaveID);
    m_currentPartList << detector;

    createNewDetWidget(detector);
}

void ObjectMgmt::createNewCol(QString partName, QString partType, QString partSubtype, bool isHeated, int tempSlaveID)
{
    ColumnObject* column = new ColumnObject(m_partProto);
    column->setName(partName);
    column->setPartType(partType);
    column->setHeatedZone(isHeated);
    column->setColumnType(partSubtype);
    column->setTempSlaveID(tempSlaveID);
    m_currentPartList << column;

    createNewOvenWidget(column);
}

void ObjectMgmt::createNewInlet(QString partName, QString partType, QString partSubtype, bool isHeated, int tempSlaveID)
{
    InletObject* inlet = new InletObject(m_partProto);
    inlet->setName(partName);
    inlet->setPartType(partType);
    inlet->setHeatedZone(isHeated);
    inlet->setInletType(partSubtype);
    inlet->setTempSlaveID(tempSlaveID);
    m_currentPartList << inlet;

    createNewInletWidget(inlet);
}

void ObjectMgmt::createNewInj(QString partName, QString partType, QString partSubtype, bool isHeated, int tempSlaveID)
{
    InjectorObject* injector = new InjectorObject(m_partProto);
    injector->setName(partName);
    injector->setPartType(partType);
    injector->setHeatedZone(isHeated);
    injector->setInjectorType(partSubtype);
    injector->setTempSlaveID(tempSlaveID);
    m_currentPartList << injector;

    createNewInjWidget(injector);
}

void ObjectMgmt::createNewDetWidget(DetectorObject* detector)
{
    if (detector == 0) qDebug() << "Null pointer to detector";
    else {
        DetectorWidget* detWidget = new DetectorWidget(this);
        m_currentWidgetList << detWidget;
        detWidget->setLabels(detector->getName(),detector->getDetectorType());
        detWidget->setIsHeated(detector->getHeatedZone());
        detWidget->setConnectsMinsMaxes(detector);
        detWidget->setSlaveIDs(detector->getTempSlaveID());
        connect(detWidget, SIGNAL(tempSetPoint(int,int)),m_MainWindow, SLOT(writeTempSetpoint(int,int)));
        connect(detWidget, SIGNAL(tempProcessValue(int)),m_MainWindow, SLOT(readTempValue(int)));
        connect(m_MainWindow, SIGNAL(tempProcessValue(int,int)),detWidget, SLOT(setActualTemp(int,int)));
    }
}

void ObjectMgmt::createNewOvenWidget(ColumnObject* column)
{
    if (column == 0) qDebug() << "Null pointer to column";
    else {
    OvenWidget* ovenWidget = new OvenWidget(this);
    m_currentWidgetList << ovenWidget;
    ovenWidget->setLabels(column->getName(),column->getColumnType());
    ovenWidget->setIsHeated(column->getHeatedZone());
    ovenWidget->setConnectsMinsMaxes(column);
    ovenWidget->setSlaveIDs(column->getTempSlaveID());
    connect(ovenWidget, SIGNAL(tempSetPoint(int,int)),m_MainWindow, SLOT(writeTempSetpoint(int,int)));
    connect(ovenWidget, SIGNAL(tempProcessValue(int)),m_MainWindow, SLOT(readTempValue(int)));
    connect(m_MainWindow, SIGNAL(tempProcessValue(int,int)),ovenWidget, SLOT(setActualTemp(int,int)));
    }
}

void ObjectMgmt::createNewInletWidget(InletObject* inlet)
{
    if (inlet == 0) qDebug() << "Null pointer to inelt";
    else {
    InletWidget* inletWidget = new InletWidget(this);
    m_currentWidgetList << inletWidget;
    inletWidget->setLabels(inlet->getName(),inlet->getInletType());
    inletWidget->setIsHeated(inlet->getHeatedZone());
    inletWidget->setConnectsMinsMaxes(inlet);
    inletWidget->setSlaveIDs(inlet->getTempSlaveID());
    connect(inletWidget, SIGNAL(tempSetPoint(int,int)),m_MainWindow, SLOT(writeTempSetpoint(int,int)));
    connect(inletWidget, SIGNAL(tempProcessValue(int)),m_MainWindow, SLOT(readTempValue(int)));
    connect(m_MainWindow, SIGNAL(tempProcessValue(int,int)),inletWidget, SLOT(setActualTemp(int,int)));
    }
}

void ObjectMgmt::createNewInjWidget(InjectorObject* injector)
{
    if (injector == 0) qDebug() << "Null pointer to inlet";
    else {
    InjectorWidget* injWidget = new InjectorWidget(this);
    m_currentWidgetList << injWidget;
    injWidget->setLabels(injector->getName(),injector->getInjectorType());
    injWidget->setIsHeated(injector->getHeatedZone());
    injWidget->setConnectsMinsMaxes(injector);
    injWidget->setSlaveIDs(injector->getTempSlaveID());
    connect(injWidget, SIGNAL(tempSetPoint(int,int)),m_MainWindow, SLOT(writeTempSetpoint(int,int)));
    connect(injWidget, SIGNAL(tempProcessValue(int)),m_MainWindow, SLOT(readTempValue(int)));
    connect(m_MainWindow, SIGNAL(tempProcessValue(int,int)),injWidget, SLOT(setActualTemp(int,int)));
    }
}
