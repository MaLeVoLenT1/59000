/********************************************************************************
** Form generated from reading UI file 'readflow.ui'
**
** Created: Mon Aug 19 13:25:32 2019
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READFLOW_H
#define UI_READFLOW_H

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

class Ui_readFlowClass
{
public:
    QLCDNumber *readFlowLCD;
    QLabel *flowLabel;
    QPushButton *flowOkButton;
    QPushButton *flowReadButton_2;

    void setupUi(QDialog *readFlowClass)
    {
        if (readFlowClass->objectName().isEmpty())
            readFlowClass->setObjectName(QString::fromUtf8("readFlowClass"));
        readFlowClass->resize(400, 300);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 127, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(255, 255, 191, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(127, 127, 63, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(170, 170, 84, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        readFlowClass->setPalette(palette);
        readFlowLCD = new QLCDNumber(readFlowClass);
        readFlowLCD->setObjectName(QString::fromUtf8("readFlowLCD"));
        readFlowLCD->setGeometry(QRect(30, 60, 341, 121));
        readFlowLCD->setNumDigits(4);
        readFlowLCD->setDigitCount(4);
        readFlowLCD->setSegmentStyle(QLCDNumber::Flat);
        flowLabel = new QLabel(readFlowClass);
        flowLabel->setObjectName(QString::fromUtf8("flowLabel"));
        flowLabel->setGeometry(QRect(150, 10, 101, 41));
        flowOkButton = new QPushButton(readFlowClass);
        flowOkButton->setObjectName(QString::fromUtf8("flowOkButton"));
        flowOkButton->setGeometry(QRect(130, 190, 141, 61));
        flowOkButton->setMinimumSize(QSize(81, 61));
        flowReadButton_2 = new QPushButton(readFlowClass);
        flowReadButton_2->setObjectName(QString::fromUtf8("flowReadButton_2"));
        flowReadButton_2->setGeometry(QRect(130, 190, 141, 61));
        flowReadButton_2->setMinimumSize(QSize(81, 61));

        retranslateUi(readFlowClass);
        QObject::connect(flowOkButton, SIGNAL(clicked()), readFlowClass, SLOT(close()));
        QObject::connect(flowReadButton_2, SIGNAL(released()), readFlowClass, SLOT(flowMeter()));

        QMetaObject::connectSlotsByName(readFlowClass);
    } // setupUi

    void retranslateUi(QDialog *readFlowClass)
    {
        readFlowClass->setWindowTitle(QApplication::translate("readFlowClass", "readFlow", 0, QApplication::UnicodeUTF8));
        flowLabel->setText(QApplication::translate("readFlowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:24pt; text-decoration: underline;\">FLOW</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        flowOkButton->setText(QApplication::translate("readFlowClass", "OK", 0, QApplication::UnicodeUTF8));
        flowReadButton_2->setText(QApplication::translate("readFlowClass", "Read", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class readFlowClass: public Ui_readFlowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READFLOW_H
