/********************************************************************************
** Form generated from reading UI file 'output.ui'
**
** Created: Wed Jan 8 09:17:36 2020
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTPUT_H
#define UI_OUTPUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_outputClass
{
public:
    QLabel *label_output;
    QPushButton *endButton;
    QLabel *label_output_hi;
    QLabel *label_output_low;
    QLabel *label_output_volt;
    QLabel *label_output_5;
    QPushButton *setupButton;
    QPushButton *valvesButton;
    QPushButton *outputGainButton;
    QDoubleSpinBox *opCurrentRangeSpinBox;
    QLabel *label_output_volt_2;
    QLabel *enalrmlLabel_2;
    QLCDNumber *opAlarmL1lcdNumber;
    QLCDNumber *opAlarmH1lcdNumber;
    QLCDNumber *opAlarmL2lcdNumber;
    QLCDNumber *opAlarmH2lcdNumber;

    void setupUi(QDialog *outputClass)
    {
        if (outputClass->objectName().isEmpty())
            outputClass->setObjectName(QString::fromUtf8("outputClass"));
        outputClass->resize(480, 272);
        label_output = new QLabel(outputClass);
        label_output->setObjectName(QString::fromUtf8("label_output"));
        label_output->setGeometry(QRect(200, 0, 66, 17));
        endButton = new QPushButton(outputClass);
        endButton->setObjectName(QString::fromUtf8("endButton"));
        endButton->setGeometry(QRect(400, 220, 71, 41));
        endButton->setMinimumSize(QSize(55, 22));
        endButton->setMaximumSize(QSize(111, 41));
        QPalette palette;
        QBrush brush(QColor(0, 170, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        endButton->setPalette(palette);
        endButton->setFocusPolicy(Qt::NoFocus);
        label_output_hi = new QLabel(outputClass);
        label_output_hi->setObjectName(QString::fromUtf8("label_output_hi"));
        label_output_hi->setGeometry(QRect(290, 140, 21, 17));
        label_output_low = new QLabel(outputClass);
        label_output_low->setObjectName(QString::fromUtf8("label_output_low"));
        label_output_low->setGeometry(QRect(140, 140, 41, 17));
        label_output_volt = new QLabel(outputClass);
        label_output_volt->setObjectName(QString::fromUtf8("label_output_volt"));
        label_output_volt->setGeometry(QRect(20, 170, 66, 17));
        label_output_5 = new QLabel(outputClass);
        label_output_5->setObjectName(QString::fromUtf8("label_output_5"));
        label_output_5->setGeometry(QRect(20, 220, 66, 17));
        setupButton = new QPushButton(outputClass);
        setupButton->setObjectName(QString::fromUtf8("setupButton"));
        setupButton->setGeometry(QRect(390, 20, 81, 41));
        setupButton->setMinimumSize(QSize(55, 22));
        setupButton->setMaximumSize(QSize(111, 41));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        QBrush brush2(QColor(121, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        setupButton->setPalette(palette1);
        setupButton->setFocusPolicy(Qt::NoFocus);
        valvesButton = new QPushButton(outputClass);
        valvesButton->setObjectName(QString::fromUtf8("valvesButton"));
        valvesButton->setGeometry(QRect(390, 80, 81, 41));
        valvesButton->setMinimumSize(QSize(55, 22));
        valvesButton->setMaximumSize(QSize(111, 41));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        valvesButton->setPalette(palette2);
        valvesButton->setFocusPolicy(Qt::NoFocus);
        outputGainButton = new QPushButton(outputClass);
        outputGainButton->setObjectName(QString::fromUtf8("outputGainButton"));
        outputGainButton->setGeometry(QRect(390, 140, 81, 41));
        outputGainButton->setMinimumSize(QSize(55, 22));
        outputGainButton->setMaximumSize(QSize(111, 41));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        outputGainButton->setPalette(palette3);
        outputGainButton->setFocusPolicy(Qt::NoFocus);
        opCurrentRangeSpinBox = new QDoubleSpinBox(outputClass);
        opCurrentRangeSpinBox->setObjectName(QString::fromUtf8("opCurrentRangeSpinBox"));
        opCurrentRangeSpinBox->setGeometry(QRect(180, 30, 161, 31));
        opCurrentRangeSpinBox->setMinimumSize(QSize(91, 31));
        opCurrentRangeSpinBox->setMaximumSize(QSize(200, 200));
        QFont font;
        font.setPointSize(18);
        opCurrentRangeSpinBox->setFont(font);
        opCurrentRangeSpinBox->setAlignment(Qt::AlignCenter);
        opCurrentRangeSpinBox->setDecimals(2);
        opCurrentRangeSpinBox->setMaximum(100000);
        opCurrentRangeSpinBox->setValue(0);
        label_output_volt_2 = new QLabel(outputClass);
        label_output_volt_2->setObjectName(QString::fromUtf8("label_output_volt_2"));
        label_output_volt_2->setGeometry(QRect(10, 40, 161, 17));
        enalrmlLabel_2 = new QLabel(outputClass);
        enalrmlLabel_2->setObjectName(QString::fromUtf8("enalrmlLabel_2"));
        enalrmlLabel_2->setGeometry(QRect(140, 100, 181, 31));
        enalrmlLabel_2->setIndent(-4);
        opAlarmL1lcdNumber = new QLCDNumber(outputClass);
        opAlarmL1lcdNumber->setObjectName(QString::fromUtf8("opAlarmL1lcdNumber"));
        opAlarmL1lcdNumber->setGeometry(QRect(110, 160, 91, 31));
        QFont font1;
        font1.setPointSize(24);
        opAlarmL1lcdNumber->setFont(font1);
        opAlarmL1lcdNumber->setProperty("intValue", QVariant(0));
        opAlarmH1lcdNumber = new QLCDNumber(outputClass);
        opAlarmH1lcdNumber->setObjectName(QString::fromUtf8("opAlarmH1lcdNumber"));
        opAlarmH1lcdNumber->setGeometry(QRect(250, 160, 91, 31));
        opAlarmH1lcdNumber->setFont(font1);
        opAlarmH1lcdNumber->setProperty("intValue", QVariant(0));
        opAlarmL2lcdNumber = new QLCDNumber(outputClass);
        opAlarmL2lcdNumber->setObjectName(QString::fromUtf8("opAlarmL2lcdNumber"));
        opAlarmL2lcdNumber->setGeometry(QRect(110, 210, 91, 31));
        opAlarmL2lcdNumber->setFont(font1);
        opAlarmL2lcdNumber->setProperty("intValue", QVariant(0));
        opAlarmH2lcdNumber = new QLCDNumber(outputClass);
        opAlarmH2lcdNumber->setObjectName(QString::fromUtf8("opAlarmH2lcdNumber"));
        opAlarmH2lcdNumber->setGeometry(QRect(250, 210, 91, 31));
        opAlarmH2lcdNumber->setFont(font1);
        opAlarmH2lcdNumber->setProperty("intValue", QVariant(0));

        retranslateUi(outputClass);
        QObject::connect(endButton, SIGNAL(clicked()), outputClass, SLOT(close()));
        QObject::connect(setupButton, SIGNAL(clicked()), outputClass, SLOT(setup_1()));
        QObject::connect(valvesButton, SIGNAL(released()), outputClass, SLOT(oValvesCtrl()));
        QObject::connect(outputGainButton, SIGNAL(released()), outputClass, SLOT(oGainCtrl()));

        QMetaObject::connectSlotsByName(outputClass);
    } // setupUi

    void retranslateUi(QDialog *outputClass)
    {
        outputClass->setWindowTitle(QApplication::translate("outputClass", "output", 0, QApplication::UnicodeUTF8));
        label_output->setText(QApplication::translate("outputClass", "OUTPUT", 0, QApplication::UnicodeUTF8));
        endButton->setText(QApplication::translate("outputClass", "ENTER", 0, QApplication::UnicodeUTF8));
        label_output_hi->setText(QApplication::translate("outputClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#ff0000;\">HI</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label_output_low->setText(QApplication::translate("outputClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#0055ff;\">LOW</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label_output_volt->setText(QApplication::translate("outputClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#00aa00;\">ALARM 1</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label_output_5->setText(QApplication::translate("outputClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#00aa00;\">ALARM 2</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        setupButton->setText(QApplication::translate("outputClass", "SETUP", 0, QApplication::UnicodeUTF8));
        valvesButton->setText(QApplication::translate("outputClass", "VALVES", 0, QApplication::UnicodeUTF8));
        outputGainButton->setText(QApplication::translate("outputClass", "GAIN", 0, QApplication::UnicodeUTF8));
        label_output_volt_2->setText(QApplication::translate("outputClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600; font-style:italic; color:#0000ff;\">(</span><span style=\" font-size:8pt; font-weight:600; font-style:italic; color:#0000ff;\">4-20mA maximum</span><span style=\" font-size:8pt; font-weight:600; font-style:italic; color:#0000ff;\">)</span><span style=\" font-weight:600; color:#aa0000;\"> RANGE</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        enalrmlLabel_2->setText(QApplication::translate("outputClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; text-decoration: underline; color:#ff0000;\">ALARM SETPOINTS</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class outputClass: public Ui_outputClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTPUT_H
