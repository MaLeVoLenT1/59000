#include <QtGui>

#include "configuredialog.h"
#include "ui_configuredialog.h"

#include "configuredialog2.h"

#include "objectmgmt.h"

ConfigureDialog::ConfigureDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConfigureDialog)
{
    ui->setupUi(this);

    partNameModel = new QStringListModel(this);

    m_detNameList << "Detector 1";
    m_detCount = 1;
    m_inletNameList << "Inlet 1";
    m_inletCount = 1;
    m_colNameList << "Column 1";
    m_colCount = 1;
    m_injCount = 0;

    //m_objectMngr = 0;

    m_partsList << m_detNameList << m_inletNameList << m_colNameList;
    m_partsList.sort();

    partNameModel->setStringList(m_partsList);

    ui->partListView->setModel(partNameModel);

    connect(ui->cancelButton,SIGNAL(clicked()),this,SLOT(reject()));

}

ConfigureDialog::~ConfigureDialog()
{
    delete ui;
}


void ConfigureDialog::on_okButton_clicked()
{
//    QStringList partsToConfig;
//    partsToConfig << "Detector 1" << "Column 1" << "Inlet 1" << "Detector 2";

//    configureParts(partsToConfig);
    configureParts(m_partsList, m_objectMngr);
}

void ConfigureDialog::setObjectMngr(ObjectMgmt* objectMngr)
{
    m_objectMngr = objectMngr;
}

void ConfigureDialog::configureParts(QStringList configList, ObjectMgmt* objectMngr)
{
    bool isComplete = true;
    int i;
    for (i = 0; i<configList.length(); i++)
    {
        QString partString = configList[i];
        int j = configList.length();

        ConfigureDialog2 config(this);
        config.partToConfig(partString,j);

        config.setObjectMngr(objectMngr);

        if (!config.exec())
        {
            isComplete = false;
            break;
        }

    }
    if (isComplete)
        this->accept();
    else
        this->reject();
}

void ConfigureDialog::on_cancelButton_clicked()
{
    this->close();
}

void ConfigureDialog::on_addDetector_clicked()
{
    m_detCount++;
    m_partsList.append("Detector " + QString::number(m_detCount));
    m_partsList.sort();
    partNameModel->setStringList(m_partsList);

    somethingChanged = true;
}

void ConfigureDialog::on_deleteDetector_clicked()
{
    if (m_detCount>1) {
    //    m_detNameList.removeLast();
        m_partsList.removeAt(m_colCount + m_detCount-1);
        m_detCount--;
        partNameModel->setStringList(m_partsList);

        somethingChanged  = true;
    }
    else {
        QMessageBox::warning(this, "Invalid Configuration", "At least 1 detector must be selected for configuration");
    }
}

void ConfigureDialog::on_addInlet_clicked()
{
    m_inletCount++;
    m_partsList.append("Inlet " + QString::number(m_inletCount));
    m_partsList.sort();
    partNameModel->setStringList(m_partsList);

    somethingChanged = true;
}

void ConfigureDialog::on_deleteInlet_clicked()
{
    if (m_inletCount>1) {
//        m_inletNameList.removeLast();
        m_partsList.removeAt(m_colCount + m_detCount + m_injCount + m_inletCount - 1);
        m_inletCount--;
        partNameModel->setStringList(m_partsList);

        somethingChanged  = true;
    }
    else {
        QMessageBox::warning(this, "Invalid Configuration", "At least 1 inlet must be selected for configuration");
    }
}

void ConfigureDialog::on_addColumn_clicked()
{
    if (m_colCount<2) {

        m_colCount++;
        m_partsList.append("Column " + QString::number(m_colCount));
        m_partsList.sort();
        partNameModel->setStringList(m_partsList);

        somethingChanged = true;
    }
}

void ConfigureDialog::on_deleteColumn_clicked()
{
    if (m_colCount>1) {
//        m_colNameList.removeLast();
        m_partsList.removeAt(m_colCount - 1);
        m_colCount--;
        partNameModel->setStringList(m_partsList);

        somethingChanged  = true;
    }
    else {
        QMessageBox::warning(this, "Invalid Configuration", "At least 1 column must be selected for configuration");
    }
}

void ConfigureDialog::on_addInjector_clicked()
{
    m_injCount++;
    m_partsList.append("Injector " + QString::number(m_injCount));
    m_partsList.sort();
    partNameModel->setStringList(m_partsList);

    somethingChanged = true;
}

void ConfigureDialog::on_deleteInjector_clicked()
{
    if (m_injCount>0) {
//        m_injNameList.removeLast();
        m_partsList.removeAt(m_colCount + m_detCount + m_injCount - 1);
        m_injCount--;
        partNameModel->setStringList(m_partsList);

        somethingChanged  = true;
    }
}
