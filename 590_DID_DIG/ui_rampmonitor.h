/********************************************************************************
** Form generated from reading UI file 'rampmonitor.ui'
**
** Created: Wed Jan 29 12:39:03 2020
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RAMPMONITOR_H
#define UI_RAMPMONITOR_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_rampMonitorClass
{
public:
    QLabel *label_6;
    QLabel *label_14;
    QLabel *label_10;
    QPushButton *cancelrunButton;
    QLCDNumber *lcdNumber_targetrsm;
    QProgressBar *mon_progressBar_7;
    QLCDNumber *lcdNumber_currentrsm;
    QPushButton *startrunButton;
    QLCDNumber *lcdNumber_ramplevelrsm;
    QLabel *label_2;
    QLabel *label_9;
    QLabel *label_13;
    QProgressBar *mon_progressBar_8;
    QProgressBar *mon_progressBar_1;
    QProgressBar *mon_progressBar_3;
    QLabel *label_8;
    QPushButton *closeButton;
    QLCDNumber *lcdNumber_rampcyclersm;
    QLabel *label_3;
    QLabel *label_12;
    QTimeEdit *montimeEdit;
    QProgressBar *mon_progressBar_5;
    QProgressBar *mon_progressBar_4;
    QLabel *label_7;
    QProgressBar *mon_progressBar_6;
    QLabel *label;
    QLabel *label_11;
    QProgressBar *mon_progressBar_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *recipeStatelabel;
    QLCDNumber *recipeStatelcdNumber;
    QLCDNumber *lcdNumber_numofcycles;
    QLabel *numofcycleslabel;
    QTimeEdit *monTimeCntEdit;
    QLineEdit *lineEdit;
    QLineEdit *readyLineEdit;

    void setupUi(QDialog *rampMonitorClass)
    {
        if (rampMonitorClass->objectName().isEmpty())
            rampMonitorClass->setObjectName(QString::fromUtf8("rampMonitorClass"));
        rampMonitorClass->resize(480, 800);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(170, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(212, 255, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(85, 127, 127, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(113, 170, 170, 255));
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
        rampMonitorClass->setPalette(palette);
        rampMonitorClass->setFocusPolicy(Qt::StrongFocus);
        rampMonitorClass->setModal(true);
        label_6 = new QLabel(rampMonitorClass);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 440, 111, 17));
        label_14 = new QLabel(rampMonitorClass);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(300, 600, 111, 20));
        label_10 = new QLabel(rampMonitorClass);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(320, 440, 111, 17));
        cancelrunButton = new QPushButton(rampMonitorClass);
        cancelrunButton->setObjectName(QString::fromUtf8("cancelrunButton"));
        cancelrunButton->setGeometry(QRect(340, 730, 111, 61));
        cancelrunButton->setMinimumSize(QSize(111, 61));
        cancelrunButton->setMaximumSize(QSize(111, 61));
        lcdNumber_targetrsm = new QLCDNumber(rampMonitorClass);
        lcdNumber_targetrsm->setObjectName(QString::fromUtf8("lcdNumber_targetrsm"));
        lcdNumber_targetrsm->setGeometry(QRect(270, 160, 161, 91));
        QFont font;
        font.setPointSize(24);
        lcdNumber_targetrsm->setFont(font);
        lcdNumber_targetrsm->setProperty("intValue", QVariant(0));
        mon_progressBar_7 = new QProgressBar(rampMonitorClass);
        mon_progressBar_7->setObjectName(QString::fromUtf8("mon_progressBar_7"));
        mon_progressBar_7->setGeometry(QRect(40, 300, 118, 23));
        mon_progressBar_7->setValue(0);
        lcdNumber_currentrsm = new QLCDNumber(rampMonitorClass);
        lcdNumber_currentrsm->setObjectName(QString::fromUtf8("lcdNumber_currentrsm"));
        lcdNumber_currentrsm->setGeometry(QRect(40, 160, 161, 91));
        lcdNumber_currentrsm->setFont(font);
        lcdNumber_currentrsm->setProperty("intValue", QVariant(0));
        startrunButton = new QPushButton(rampMonitorClass);
        startrunButton->setObjectName(QString::fromUtf8("startrunButton"));
        startrunButton->setGeometry(QRect(30, 730, 111, 61));
        startrunButton->setMinimumSize(QSize(111, 61));
        startrunButton->setMaximumSize(QSize(111, 81));
        lcdNumber_ramplevelrsm = new QLCDNumber(rampMonitorClass);
        lcdNumber_ramplevelrsm->setObjectName(QString::fromUtf8("lcdNumber_ramplevelrsm"));
        lcdNumber_ramplevelrsm->setGeometry(QRect(30, 620, 161, 71));
        lcdNumber_ramplevelrsm->setFont(font);
        lcdNumber_ramplevelrsm->setProperty("intValue", QVariant(0));
        label_2 = new QLabel(rampMonitorClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 280, 111, 17));
        label_9 = new QLabel(rampMonitorClass);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(320, 360, 111, 17));
        label_13 = new QLabel(rampMonitorClass);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(30, 600, 161, 17));
        mon_progressBar_8 = new QProgressBar(rampMonitorClass);
        mon_progressBar_8->setObjectName(QString::fromUtf8("mon_progressBar_8"));
        mon_progressBar_8->setGeometry(QRect(310, 300, 118, 23));
        mon_progressBar_8->setValue(0);
        mon_progressBar_1 = new QProgressBar(rampMonitorClass);
        mon_progressBar_1->setObjectName(QString::fromUtf8("mon_progressBar_1"));
        mon_progressBar_1->setGeometry(QRect(40, 540, 118, 23));
        mon_progressBar_1->setValue(0);
        mon_progressBar_3 = new QProgressBar(rampMonitorClass);
        mon_progressBar_3->setObjectName(QString::fromUtf8("mon_progressBar_3"));
        mon_progressBar_3->setGeometry(QRect(40, 460, 118, 23));
        mon_progressBar_3->setValue(0);
        label_8 = new QLabel(rampMonitorClass);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(320, 280, 111, 17));
        closeButton = new QPushButton(rampMonitorClass);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(190, 730, 111, 61));
        closeButton->setMinimumSize(QSize(111, 61));
        closeButton->setMaximumSize(QSize(111, 41));
        lcdNumber_rampcyclersm = new QLCDNumber(rampMonitorClass);
        lcdNumber_rampcyclersm->setObjectName(QString::fromUtf8("lcdNumber_rampcyclersm"));
        lcdNumber_rampcyclersm->setGeometry(QRect(270, 620, 161, 71));
        lcdNumber_rampcyclersm->setFont(font);
        lcdNumber_rampcyclersm->setProperty("intValue", QVariant(0));
        label_3 = new QLabel(rampMonitorClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 140, 66, 17));
        label_12 = new QLabel(rampMonitorClass);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(150, 110, 181, 17));
        montimeEdit = new QTimeEdit(rampMonitorClass);
        montimeEdit->setObjectName(QString::fromUtf8("montimeEdit"));
        montimeEdit->setGeometry(QRect(10, 40, 141, 51));
        QFont font1;
        font1.setPointSize(22);
        montimeEdit->setFont(font1);
        montimeEdit->setLocale(QLocale(QLocale::English, QLocale::Canada));
        montimeEdit->setButtonSymbols(QAbstractSpinBox::NoButtons);
        montimeEdit->setDateTime(QDateTime(QDate(2000, 2, 1), QTime(0, 0, 0)));
        montimeEdit->setTimeSpec(Qt::OffsetFromUTC);
        montimeEdit->setTime(QTime(0, 0, 0));
        mon_progressBar_5 = new QProgressBar(rampMonitorClass);
        mon_progressBar_5->setObjectName(QString::fromUtf8("mon_progressBar_5"));
        mon_progressBar_5->setGeometry(QRect(40, 380, 118, 23));
        mon_progressBar_5->setValue(0);
        mon_progressBar_4 = new QProgressBar(rampMonitorClass);
        mon_progressBar_4->setObjectName(QString::fromUtf8("mon_progressBar_4"));
        mon_progressBar_4->setGeometry(QRect(310, 460, 118, 23));
        mon_progressBar_4->setValue(0);
        label_7 = new QLabel(rampMonitorClass);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(50, 520, 111, 17));
        mon_progressBar_6 = new QProgressBar(rampMonitorClass);
        mon_progressBar_6->setObjectName(QString::fromUtf8("mon_progressBar_6"));
        mon_progressBar_6->setGeometry(QRect(310, 380, 118, 23));
        mon_progressBar_6->setValue(0);
        label = new QLabel(rampMonitorClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 10, 161, 20));
        label_11 = new QLabel(rampMonitorClass);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(320, 520, 111, 17));
        mon_progressBar_2 = new QProgressBar(rampMonitorClass);
        mon_progressBar_2->setObjectName(QString::fromUtf8("mon_progressBar_2"));
        mon_progressBar_2->setGeometry(QRect(310, 540, 118, 23));
        mon_progressBar_2->setValue(0);
        label_4 = new QLabel(rampMonitorClass);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(320, 140, 66, 17));
        label_5 = new QLabel(rampMonitorClass);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 360, 111, 17));
        recipeStatelabel = new QLabel(rampMonitorClass);
        recipeStatelabel->setObjectName(QString::fromUtf8("recipeStatelabel"));
        recipeStatelabel->setGeometry(QRect(330, 30, 81, 17));
        recipeStatelcdNumber = new QLCDNumber(rampMonitorClass);
        recipeStatelcdNumber->setObjectName(QString::fromUtf8("recipeStatelcdNumber"));
        recipeStatelcdNumber->setGeometry(QRect(410, 80, 51, 31));
        recipeStatelcdNumber->setFont(font);
        recipeStatelcdNumber->setProperty("intValue", QVariant(0));
        lcdNumber_numofcycles = new QLCDNumber(rampMonitorClass);
        lcdNumber_numofcycles->setObjectName(QString::fromUtf8("lcdNumber_numofcycles"));
        lcdNumber_numofcycles->setGeometry(QRect(200, 50, 71, 31));
        lcdNumber_numofcycles->setFont(font);
        lcdNumber_numofcycles->setProperty("intValue", QVariant(0));
        numofcycleslabel = new QLabel(rampMonitorClass);
        numofcycleslabel->setObjectName(QString::fromUtf8("numofcycleslabel"));
        numofcycleslabel->setGeometry(QRect(190, 30, 81, 17));
        monTimeCntEdit = new QTimeEdit(rampMonitorClass);
        monTimeCntEdit->setObjectName(QString::fromUtf8("monTimeCntEdit"));
        monTimeCntEdit->setGeometry(QRect(170, 810, 131, 51));
        QFont font2;
        font2.setPointSize(20);
        monTimeCntEdit->setFont(font2);
        monTimeCntEdit->setLocale(QLocale(QLocale::English, QLocale::Canada));
        monTimeCntEdit->setButtonSymbols(QAbstractSpinBox::NoButtons);
        monTimeCntEdit->setDateTime(QDateTime(QDate(2000, 2, 1), QTime(0, 0, 0)));
        monTimeCntEdit->setTimeSpec(Qt::OffsetFromUTC);
        monTimeCntEdit->setTime(QTime(0, 0, 0));
        lineEdit = new QLineEdit(rampMonitorClass);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(330, 50, 131, 27));
        readyLineEdit = new QLineEdit(rampMonitorClass);
        readyLineEdit->setObjectName(QString::fromUtf8("readyLineEdit"));
        readyLineEdit->setGeometry(QRect(330, 80, 81, 31));

        retranslateUi(rampMonitorClass);
        QObject::connect(closeButton, SIGNAL(clicked()), rampMonitorClass, SLOT(close()));
        QObject::connect(startrunButton, SIGNAL(clicked()), rampMonitorClass, SLOT(monitorRun()));
        QObject::connect(cancelrunButton, SIGNAL(clicked()), rampMonitorClass, SLOT(monitorabort()));

        QMetaObject::connectSlotsByName(rampMonitorClass);
    } // setupUi

    void retranslateUi(QDialog *rampMonitorClass)
    {
        rampMonitorClass->setWindowTitle(QApplication::translate("rampMonitorClass", "rampMonitor", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("rampMonitorClass", "RAMP / HOLD 3", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("rampMonitorClass", "RAMP CYCLE #", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("rampMonitorClass", "RAMP / HOLD 4", 0, QApplication::UnicodeUTF8));
        cancelrunButton->setText(QApplication::translate("rampMonitorClass", "CANCEL RUN", 0, QApplication::UnicodeUTF8));
        startrunButton->setText(QApplication::translate("rampMonitorClass", "START RUN", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("rampMonitorClass", "RAMP / HOLD 7", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("rampMonitorClass", "RAMP / HOLD 6", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("rampMonitorClass", "CURRENT RAMP LEVEL", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("rampMonitorClass", "RAMP / HOLD 8", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("rampMonitorClass", "CLOSE", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("rampMonitorClass", "CURRENT", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("rampMonitorClass", "PROCESS TEMPERATURES", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("rampMonitorClass", "RAMP / HOLD 1", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("rampMonitorClass", "RAMP HOLD MONITOR", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("rampMonitorClass", "RAMP / HOLD 2", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("rampMonitorClass", "TARGET", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("rampMonitorClass", "RAMP / HOLD 5", 0, QApplication::UnicodeUTF8));
        recipeStatelabel->setText(QApplication::translate("rampMonitorClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">Method State</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        numofcycleslabel->setText(QApplication::translate("rampMonitorClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\"># of C</span><span style=\" font-size:8pt; font-weight:600;\">ycles</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class rampMonitorClass: public Ui_rampMonitorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAMPMONITOR_H
