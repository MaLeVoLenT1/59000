/********************************************************************************
** Form generated from reading UI file 'outputgainctrl.ui'
**
** Created: Tue Jan 7 12:49:35 2020
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTPUTGAINCTRL_H
#define UI_OUTPUTGAINCTRL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_OutputGainCtrlClass
{
public:
    QToolButton *endButton;
    QPushButton *ogcHiButton;
    QPushButton *ogcMidButton;
    QPushButton *ogcLowButton;
    QPushButton *ogcMinButton;
    QCheckBox *ogHiCheckBox;
    QCheckBox *ogMidCheckBox;
    QCheckBox *ogLowCheckBox;
    QCheckBox *ogMinCheckBox;
    QToolButton *ogDetConfigButton;
    QLineEdit *ogcStatusLineEdit;
    QLabel *label_cal;
    QLabel *label_cal_2;

    void setupUi(QDialog *OutputGainCtrlClass)
    {
        if (OutputGainCtrlClass->objectName().isEmpty())
            OutputGainCtrlClass->setObjectName(QString::fromUtf8("OutputGainCtrlClass"));
        OutputGainCtrlClass->resize(480, 272);
        endButton = new QToolButton(OutputGainCtrlClass);
        endButton->setObjectName(QString::fromUtf8("endButton"));
        endButton->setGeometry(QRect(390, 220, 81, 41));
        endButton->setMinimumSize(QSize(41, 41));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(85, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(213, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(149, 255, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(42, 127, 127, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(56, 170, 170, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(170, 255, 255, 255));
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
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush6);
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
        endButton->setPalette(palette);
        endButton->setFocusPolicy(Qt::NoFocus);
        ogcHiButton = new QPushButton(OutputGainCtrlClass);
        ogcHiButton->setObjectName(QString::fromUtf8("ogcHiButton"));
        ogcHiButton->setGeometry(QRect(10, 110, 91, 41));
        ogcHiButton->setMinimumSize(QSize(55, 22));
        ogcHiButton->setMaximumSize(QSize(111, 41));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush6);
        QBrush brush9(QColor(212, 255, 255, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        QBrush brush10(QColor(85, 127, 127, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush10);
        QBrush brush11(QColor(113, 170, 170, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush9);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        ogcHiButton->setPalette(palette1);
        ogcHiButton->setFocusPolicy(Qt::NoFocus);
        ogcMidButton = new QPushButton(OutputGainCtrlClass);
        ogcMidButton->setObjectName(QString::fromUtf8("ogcMidButton"));
        ogcMidButton->setGeometry(QRect(130, 110, 91, 41));
        ogcMidButton->setMinimumSize(QSize(55, 22));
        ogcMidButton->setMaximumSize(QSize(111, 41));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush9);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        ogcMidButton->setPalette(palette2);
        ogcMidButton->setFocusPolicy(Qt::NoFocus);
        ogcLowButton = new QPushButton(OutputGainCtrlClass);
        ogcLowButton->setObjectName(QString::fromUtf8("ogcLowButton"));
        ogcLowButton->setGeometry(QRect(250, 110, 91, 41));
        ogcLowButton->setMinimumSize(QSize(55, 22));
        ogcLowButton->setMaximumSize(QSize(111, 41));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush9);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        ogcLowButton->setPalette(palette3);
        ogcLowButton->setFocusPolicy(Qt::NoFocus);
        ogcMinButton = new QPushButton(OutputGainCtrlClass);
        ogcMinButton->setObjectName(QString::fromUtf8("ogcMinButton"));
        ogcMinButton->setGeometry(QRect(370, 110, 91, 41));
        ogcMinButton->setMinimumSize(QSize(55, 22));
        ogcMinButton->setMaximumSize(QSize(111, 41));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        QBrush brush12(QColor(121, 120, 120, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        ogcMinButton->setPalette(palette4);
        ogcMinButton->setFocusPolicy(Qt::NoFocus);
        ogHiCheckBox = new QCheckBox(OutputGainCtrlClass);
        ogHiCheckBox->setObjectName(QString::fromUtf8("ogHiCheckBox"));
        ogHiCheckBox->setGeometry(QRect(40, 160, 31, 31));
        ogHiCheckBox->setMinimumSize(QSize(31, 31));
        QFont font;
        font.setPointSize(12);
        ogHiCheckBox->setFont(font);
        ogHiCheckBox->setMouseTracking(false);
        ogHiCheckBox->setFocusPolicy(Qt::NoFocus);
        ogHiCheckBox->setAcceptDrops(false);
        ogMidCheckBox = new QCheckBox(OutputGainCtrlClass);
        ogMidCheckBox->setObjectName(QString::fromUtf8("ogMidCheckBox"));
        ogMidCheckBox->setGeometry(QRect(160, 160, 31, 31));
        ogMidCheckBox->setMinimumSize(QSize(31, 31));
        ogMidCheckBox->setFont(font);
        ogMidCheckBox->setMouseTracking(false);
        ogMidCheckBox->setFocusPolicy(Qt::NoFocus);
        ogMidCheckBox->setAcceptDrops(false);
        ogLowCheckBox = new QCheckBox(OutputGainCtrlClass);
        ogLowCheckBox->setObjectName(QString::fromUtf8("ogLowCheckBox"));
        ogLowCheckBox->setGeometry(QRect(280, 160, 31, 31));
        ogLowCheckBox->setMinimumSize(QSize(31, 31));
        ogLowCheckBox->setFont(font);
        ogLowCheckBox->setMouseTracking(false);
        ogLowCheckBox->setFocusPolicy(Qt::NoFocus);
        ogLowCheckBox->setAcceptDrops(false);
        ogMinCheckBox = new QCheckBox(OutputGainCtrlClass);
        ogMinCheckBox->setObjectName(QString::fromUtf8("ogMinCheckBox"));
        ogMinCheckBox->setGeometry(QRect(400, 160, 31, 31));
        ogMinCheckBox->setMinimumSize(QSize(31, 31));
        ogMinCheckBox->setFont(font);
        ogMinCheckBox->setFocusPolicy(Qt::NoFocus);
        ogMinCheckBox->setAcceptDrops(false);
        ogDetConfigButton = new QToolButton(OutputGainCtrlClass);
        ogDetConfigButton->setObjectName(QString::fromUtf8("ogDetConfigButton"));
        ogDetConfigButton->setGeometry(QRect(10, 220, 101, 41));
        ogDetConfigButton->setFocusPolicy(Qt::NoFocus);
        ogcStatusLineEdit = new QLineEdit(OutputGainCtrlClass);
        ogcStatusLineEdit->setObjectName(QString::fromUtf8("ogcStatusLineEdit"));
        ogcStatusLineEdit->setGeometry(QRect(190, 230, 111, 21));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        ogcStatusLineEdit->setFont(font1);
        label_cal = new QLabel(OutputGainCtrlClass);
        label_cal->setObjectName(QString::fromUtf8("label_cal"));
        label_cal->setGeometry(QRect(10, 10, 471, 61));
        label_cal_2 = new QLabel(OutputGainCtrlClass);
        label_cal_2->setObjectName(QString::fromUtf8("label_cal_2"));
        label_cal_2->setGeometry(QRect(220, 210, 51, 21));

        retranslateUi(OutputGainCtrlClass);
        QObject::connect(endButton, SIGNAL(released()), OutputGainCtrlClass, SLOT(close()));
        QObject::connect(ogcHiButton, SIGNAL(released()), OutputGainCtrlClass, SLOT(outputRange1()));
        QObject::connect(ogcMidButton, SIGNAL(released()), OutputGainCtrlClass, SLOT(outputRange2()));
        QObject::connect(ogcLowButton, SIGNAL(released()), OutputGainCtrlClass, SLOT(outputRange3()));
        QObject::connect(ogcMinButton, SIGNAL(released()), OutputGainCtrlClass, SLOT(outputRange4()));
        QObject::connect(ogDetConfigButton, SIGNAL(released()), OutputGainCtrlClass, SLOT(dwConfig()));

        QMetaObject::connectSlotsByName(OutputGainCtrlClass);
    } // setupUi

    void retranslateUi(QDialog *OutputGainCtrlClass)
    {
        OutputGainCtrlClass->setWindowTitle(QApplication::translate("OutputGainCtrlClass", "OutputGainCtrl", 0, QApplication::UnicodeUTF8));
        endButton->setText(QApplication::translate("OutputGainCtrlClass", "ENTER", 0, QApplication::UnicodeUTF8));
        ogcHiButton->setText(QApplication::translate("OutputGainCtrlClass", "R1", 0, QApplication::UnicodeUTF8));
        ogcMidButton->setText(QApplication::translate("OutputGainCtrlClass", "R2", 0, QApplication::UnicodeUTF8));
        ogcLowButton->setText(QApplication::translate("OutputGainCtrlClass", "R3", 0, QApplication::UnicodeUTF8));
        ogcMinButton->setText(QApplication::translate("OutputGainCtrlClass", "R4", 0, QApplication::UnicodeUTF8));
        ogHiCheckBox->setText(QString());
        ogMidCheckBox->setText(QString());
        ogLowCheckBox->setText(QString());
        ogMinCheckBox->setText(QString());
        ogDetConfigButton->setText(QApplication::translate("OutputGainCtrlClass", " Config Sig.", 0, QApplication::UnicodeUTF8));
        label_cal->setText(QApplication::translate("OutputGainCtrlClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">OUTPUT RANGE CONTROL</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label_cal_2->setText(QApplication::translate("OutputGainCtrlClass", "STATUS", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class OutputGainCtrlClass: public Ui_OutputGainCtrlClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTPUTGAINCTRL_H
