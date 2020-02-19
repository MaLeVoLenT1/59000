/********************************************************************************
** Form generated from reading UI file 'readpressure.ui'
**
** Created: Wed Jan 29 12:39:03 2020
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READPRESSURE_H
#define UI_READPRESSURE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_readPressureClass
{
public:
    QPushButton *pressureOkButton;
    QLabel *pressureLabel;
    QLCDNumber *readPressureLCD;
    QPushButton *pressureReadButton;

    void setupUi(QDialog *readPressureClass)
    {
        if (readPressureClass->objectName().isEmpty())
            readPressureClass->setObjectName(QString::fromUtf8("readPressureClass"));
        readPressureClass->resize(400, 300);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(85, 255, 127, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(213, 255, 223, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(149, 255, 175, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(42, 127, 63, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(56, 170, 84, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(170, 255, 191, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        readPressureClass->setPalette(palette);
        pressureOkButton = new QPushButton(readPressureClass);
        pressureOkButton->setObjectName(QString::fromUtf8("pressureOkButton"));
        pressureOkButton->setGeometry(QRect(130, 190, 141, 61));
        pressureOkButton->setMinimumSize(QSize(81, 61));
        pressureLabel = new QLabel(readPressureClass);
        pressureLabel->setObjectName(QString::fromUtf8("pressureLabel"));
        pressureLabel->setGeometry(QRect(130, 10, 141, 41));
        readPressureLCD = new QLCDNumber(readPressureClass);
        readPressureLCD->setObjectName(QString::fromUtf8("readPressureLCD"));
        readPressureLCD->setGeometry(QRect(30, 60, 341, 121));
        readPressureLCD->setNumDigits(4);
        readPressureLCD->setDigitCount(4);
        readPressureLCD->setSegmentStyle(QLCDNumber::Flat);
        pressureReadButton = new QPushButton(readPressureClass);
        pressureReadButton->setObjectName(QString::fromUtf8("pressureReadButton"));
        pressureReadButton->setGeometry(QRect(130, 190, 141, 61));
        pressureReadButton->setMinimumSize(QSize(81, 61));

        retranslateUi(readPressureClass);
        QObject::connect(pressureOkButton, SIGNAL(clicked()), readPressureClass, SLOT(close()));
        QObject::connect(pressureReadButton, SIGNAL(clicked()), readPressureClass, SLOT(pressureMeter()));

        QMetaObject::connectSlotsByName(readPressureClass);
    } // setupUi

    void retranslateUi(QDialog *readPressureClass)
    {
        readPressureClass->setWindowTitle(QApplication::translate("readPressureClass", "readPressure", 0, QApplication::UnicodeUTF8));
        pressureOkButton->setText(QApplication::translate("readPressureClass", "OK", 0, QApplication::UnicodeUTF8));
        pressureLabel->setText(QApplication::translate("readPressureClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:24pt; text-decoration: underline;\">Pressure</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        pressureReadButton->setText(QApplication::translate("readPressureClass", "Read", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class readPressureClass: public Ui_readPressureClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READPRESSURE_H
