#include <QtGui>

#include "configuredialog2.h"
#include "ui_configuredialog2.h"

int ConfigureDialog2::detCount = 0;
int ConfigureDialog2::inletCount = 0;
int ConfigureDialog2::injCount = 0;
int ConfigureDialog2::colCount = 0;
int ConfigureDialog2::partCount = 0;

ConfigureDialog2::ConfigureDialog2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConfigureDialog2)
{
    ui->setupUi(this);

    ui->partTypeHiddenLabel->setVisible(false);
    ui->acceptConfig->setVisible(false);

    connect(ui->nextButton,SIGNAL(clicked()),this,SLOT(accept()));
    connect(ui->acceptConfig,SIGNAL(clicked()),this,SLOT(accept()));
    connect(ui->cancelButton,SIGNAL(clicked()),this,SLOT(reject()));
    connect(ui->acceptConfig, SIGNAL(clicked()),this,SIGNAL(finalAccept()));

    //m_objectMngr = 0;

//    detCount = 0;
//    inletCount = 0;
//    colCount = 0;
//    partCount = 0;
//    injCount = 0;

}

ConfigureDialog2::~ConfigureDialog2()
{
    delete ui;
}

void ConfigureDialog2::setObjectMngr(ObjectMgmt* objectMngr)
{
    m_objectMngr = objectMngr;
}

void ConfigureDialog2::partToConfig(QString partString, int listSize)
{
//    static int detCount = 0;
//    static int inletCount = 0;
//    static int colCount = 0;
//    static int partCount = 0;
//    static int injCount = 0;

    partCount++;

    ui->curPageLabel->setText(QString::number(partCount));
    ui->totPageLabel->setText(QString::number(listSize));

    int stringSize = partString.size();
    partString.replace(stringSize-2,2,"");

    ui->typeLabel->setText(partString);

    if (partString == "Detector"){
        detCount++;
        m_partType = "Detector";
//        DetectorObject* detector = new DetectorObject;
        setupDetConfig(detCount);
//        return detector;
    }
    else if (partString == "Inlet") {
        inletCount++;
        m_partType = "Inlet";
        setupInletConfig(inletCount);
    }
    else if (partString == "Column") {
        colCount++;
        m_partType = "Column";
        setupColumnConfig(colCount);
    }
    else if (partString == "Injector") {
        injCount++;
        m_partType = "Injector";
        setupInjConfig(injCount);
    }
    else {
        ui->typeLabel->setText("An unrecognized part was detected. NO Part can be configured.");
    };

    // m_objectMngr->setPartCounts(partCount, detCount, inletCount, injCount, colCount);

    if (partCount == listSize) {
        ui->acceptConfig->setVisible(true);
        ui->nextButton->setVisible(false);

        partCount = 0;
        detCount = 0;
        inletCount = 0;
        injCount = 0;
        colCount = 0;
    }

}

void ConfigureDialog2::setupDetConfig(int count)
{
    ui->totTypeLabel->setText("(" + QString::number(count) + ")");

    ui->partTypeHiddenLabel->setText(m_partType);
    ui->typeLabel->setText(QApplication::translate("ConfigureDialog2", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-style:italic; text-decoration: underline;\">Detector</span></p></body></html>", 0, QApplication::UnicodeUTF8));

    ui->typeComboBox->addItem("Discharge Ionization");
    ui->typeComboBox->addItem("Flame Ionization");
    ui->typeComboBox->addItem("Thermal Conductivity");
    ui->typeComboBox->addItem("Nitrogen Phosphorous");
    ui->typeComboBox->addItem("Electron Capture");
    ui->typeComboBox->addItem("Flame Photometric");
    ui->typeComboBox->addItem("None");

}

void ConfigureDialog2::setupInletConfig(int count)
{
    ui->totTypeLabel->setText("(" + QString::number(count) + ")");

    ui->partTypeHiddenLabel->setText(m_partType);
    ui->typeLabel->setText(QApplication::translate("ConfigureDialog2", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-style:italic; text-decoration: underline;\">Inlet</span></p></body></html>", 0, QApplication::UnicodeUTF8));

    ui->typeComboBox->addItem("Split/Splitless");
    ui->typeComboBox->addItem("Cool on Column");
    ui->typeComboBox->addItem("Purged Packed");
    ui->typeComboBox->addItem("Prog. Temperature Vaporization");
    ui->typeComboBox->addItem("Volatile Injection");
    ui->typeComboBox->addItem("None");

}

void ConfigureDialog2::setupColumnConfig(int count)
{
    ui->totTypeLabel->setText("(" + QString::number(count) + ")");

    ui->partTypeHiddenLabel->setText(m_partType);
    ui->typeLabel->setText(QApplication::translate("ConfigureDialog2", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-style:italic; text-decoration: underline;\">Column</span></p></body></html>", 0, QApplication::UnicodeUTF8));

    ui->heatedCheckBox->setChecked(true);
    ui->heatedCheckBox->setEnabled(false);
    ui->tempSlaveIDSpinBox->setValue(1);
    ui->tempSlaveIDSpinBox->setEnabled(false);

    ui->typeComboBox->addItem("Capillary");
    ui->typeComboBox->addItem("Packed Metal");
    ui->typeComboBox->addItem("Packed Glass");
    ui->typeComboBox->addItem("None");

}

void ConfigureDialog2::setupInjConfig(int count)
{
    ui->totTypeLabel->setText("(" + QString::number(count) + ")");

    ui->partTypeHiddenLabel->setText(m_partType);
    ui->typeLabel->setText(QApplication::translate("ConfigureDialog2", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-style:italic; text-decoration: underline;\">Injector</span></p></body></html>", 0, QApplication::UnicodeUTF8));

    ui->typeComboBox->addItem("");
    ui->typeComboBox->addItem("None");


}

void ConfigureDialog2::on_nextButton_clicked()
{
    m_partName = ui->lineEdit->text();
    m_partSubType = ui->typeComboBox->currentText();
    isPartHeated = ui->heatedCheckBox->isChecked();
    m_tempSlaveID = ui->tempSlaveIDSpinBox->value();
    m_objectMngr->createNewPart(m_partName, m_partType, m_partSubType,isPartHeated, m_tempSlaveID);
}

void ConfigureDialog2::on_cancelButton_clicked()
{
    detCount = 0;
    inletCount = 0;
    colCount = 0;
    partCount = 0;
    injCount = 0;
    m_objectMngr->deleteNewParts();
}

void ConfigureDialog2::on_acceptConfig_clicked()
{
    m_partName = ui->lineEdit->text();
    m_partSubType = ui->typeComboBox->currentText();
    isPartHeated = ui->heatedCheckBox->isChecked();
    m_tempSlaveID = ui->tempSlaveIDSpinBox->value();
    m_objectMngr->createNewPart(m_partName, m_partType, m_partSubType,isPartHeated, m_tempSlaveID);
}
