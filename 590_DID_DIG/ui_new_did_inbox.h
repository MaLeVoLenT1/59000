/********************************************************************************
** Form generated from reading UI file 'new_did_inbox.ui'
**
** Created: Thu Aug 3 10:54:50 2017
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_DID_INBOX_H
#define UI_NEW_DID_INBOX_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NEW_DID_INBOXClass
{
public:
    QWidget *centralwidget;
    QLineEdit *thStatusLineEdit;
    QLineEdit *thAlarmInd1LineEdit;
    QLineEdit *thRangeLineEdit;
    QPushButton *calButton;
    QLineEdit *thMeasureLineEdit;
    QLineEdit *thFlameLineEdit;
    QLabel *label_4;
    QLabel *label_3;
    QLCDNumber *mainDetSigLCD;
    QPushButton *outputButton;
    QPushButton *measureButton;
    QLineEdit *thAlarmInd2LineEdit;
    QPushButton *dataButton;
    QLCDNumber *detDidISigLCD;
    QLCDNumber *detDid1LCD;
    QLCDNumber *detDidPolVLCD;
    QLCDNumber *detDidHvLCD;
    QLineEdit *mainStatusLineEdit;
    QLabel *detTcdISigLabel_3;
    QLabel *detTcdISigLabel_2;
    QLabel *detTcdISigLabel;
    QLabel *detTcdISigLabel_4;
    QPushButton *offButton;
    QLabel *versionLabel;
    QLabel *modelLabel;

    void setupUi(QMainWindow *NEW_DID_INBOXClass)
    {
        if (NEW_DID_INBOXClass->objectName().isEmpty())
            NEW_DID_INBOXClass->setObjectName(QString::fromUtf8("NEW_DID_INBOXClass"));
        NEW_DID_INBOXClass->resize(480, 272);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush2(QColor(255, 255, 220, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
        NEW_DID_INBOXClass->setPalette(palette);
        NEW_DID_INBOXClass->setCursor(QCursor(Qt::BlankCursor));
        centralwidget = new QWidget(NEW_DID_INBOXClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        thStatusLineEdit = new QLineEdit(centralwidget);
        thStatusLineEdit->setObjectName(QString::fromUtf8("thStatusLineEdit"));
        thStatusLineEdit->setGeometry(QRect(170, 430, 111, 21));
        QPalette palette1;
        QBrush brush3(QColor(242, 241, 240, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        thStatusLineEdit->setPalette(palette1);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        thStatusLineEdit->setFont(font);
        thStatusLineEdit->setFrame(false);
        thAlarmInd1LineEdit = new QLineEdit(centralwidget);
        thAlarmInd1LineEdit->setObjectName(QString::fromUtf8("thAlarmInd1LineEdit"));
        thAlarmInd1LineEdit->setGeometry(QRect(20, 460, 31, 21));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush4(QColor(239, 239, 239, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush);
        QBrush brush5(QColor(247, 247, 247, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush5);
        QBrush brush6(QColor(119, 119, 119, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush6);
        QBrush brush7(QColor(159, 159, 159, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush7);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush5);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
        thAlarmInd1LineEdit->setPalette(palette2);
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        thAlarmInd1LineEdit->setFont(font1);
        thAlarmInd1LineEdit->setFocusPolicy(Qt::NoFocus);
        thAlarmInd1LineEdit->setFrame(false);
        thRangeLineEdit = new QLineEdit(centralwidget);
        thRangeLineEdit->setObjectName(QString::fromUtf8("thRangeLineEdit"));
        thRangeLineEdit->setGeometry(QRect(330, 640, 61, 31));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        thRangeLineEdit->setPalette(palette3);
        thRangeLineEdit->setFont(font);
        thRangeLineEdit->setFocusPolicy(Qt::NoFocus);
        thRangeLineEdit->setFrame(false);
        calButton = new QPushButton(centralwidget);
        calButton->setObjectName(QString::fromUtf8("calButton"));
        calButton->setGeometry(QRect(400, 450, 71, 41));
        calButton->setMinimumSize(QSize(55, 22));
        calButton->setMaximumSize(QSize(111, 41));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush8(QColor(170, 255, 255, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush);
        QBrush brush9(QColor(212, 255, 255, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        QBrush brush10(QColor(85, 127, 127, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush10);
        QBrush brush11(QColor(113, 170, 170, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush9);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush9);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
        calButton->setPalette(palette4);
        calButton->setFocusPolicy(Qt::NoFocus);
        thMeasureLineEdit = new QLineEdit(centralwidget);
        thMeasureLineEdit->setObjectName(QString::fromUtf8("thMeasureLineEdit"));
        thMeasureLineEdit->setGeometry(QRect(400, 640, 71, 31));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush5);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush7);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush3);
        QBrush brush12(QColor(234, 234, 234, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush12);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush5);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush7);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
        thMeasureLineEdit->setPalette(palette5);
        thMeasureLineEdit->setFont(font1);
        thMeasureLineEdit->setFocusPolicy(Qt::NoFocus);
        thMeasureLineEdit->setFrame(false);
        thFlameLineEdit = new QLineEdit(centralwidget);
        thFlameLineEdit->setObjectName(QString::fromUtf8("thFlameLineEdit"));
        thFlameLineEdit->setGeometry(QRect(60, 640, 101, 31));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush5);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush7);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush5);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush5);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush5);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
        thFlameLineEdit->setPalette(palette6);
        thFlameLineEdit->setFont(font1);
        thFlameLineEdit->setFocusPolicy(Qt::NoFocus);
        thFlameLineEdit->setFrame(false);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 630, 41, 21));
        QFont font2;
        font2.setPointSize(11);
        label_4->setFont(font2);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 430, 66, 17));
        mainDetSigLCD = new QLCDNumber(centralwidget);
        mainDetSigLCD->setObjectName(QString::fromUtf8("mainDetSigLCD"));
        mainDetSigLCD->setGeometry(QRect(10, 450, 381, 181));
        mainDetSigLCD->setFont(font);
        mainDetSigLCD->setFocusPolicy(Qt::StrongFocus);
        mainDetSigLCD->setSmallDecimalPoint(false);
        mainDetSigLCD->setSegmentStyle(QLCDNumber::Flat);
        outputButton = new QPushButton(centralwidget);
        outputButton->setObjectName(QString::fromUtf8("outputButton"));
        outputButton->setGeometry(QRect(140, 10, 201, 41));
        outputButton->setMinimumSize(QSize(55, 22));
        outputButton->setMaximumSize(QSize(450, 242));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette7.setBrush(QPalette::Active, QPalette::Light, brush);
        palette7.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette7.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette7.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette7.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette7.setBrush(QPalette::Active, QPalette::AlternateBase, brush9);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette7.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette7.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette7.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush9);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette7.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette7.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette7.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette7.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
        outputButton->setPalette(palette7);
        outputButton->setCursor(QCursor(Qt::BlankCursor));
        outputButton->setFocusPolicy(Qt::NoFocus);
        measureButton = new QPushButton(centralwidget);
        measureButton->setObjectName(QString::fromUtf8("measureButton"));
        measureButton->setGeometry(QRect(170, 640, 111, 31));
        measureButton->setMinimumSize(QSize(55, 22));
        measureButton->setMaximumSize(QSize(111, 41));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette8.setBrush(QPalette::Active, QPalette::Light, brush);
        palette8.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette8.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette8.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette8.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette8.setBrush(QPalette::Active, QPalette::AlternateBase, brush9);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette8.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette8.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette8.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush9);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette8.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette8.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette8.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette8.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
        measureButton->setPalette(palette8);
        measureButton->setFocusPolicy(Qt::NoFocus);
        thAlarmInd2LineEdit = new QLineEdit(centralwidget);
        thAlarmInd2LineEdit->setObjectName(QString::fromUtf8("thAlarmInd2LineEdit"));
        thAlarmInd2LineEdit->setGeometry(QRect(60, 460, 31, 20));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette9.setBrush(QPalette::Active, QPalette::Light, brush);
        palette9.setBrush(QPalette::Active, QPalette::Midlight, brush5);
        palette9.setBrush(QPalette::Active, QPalette::Dark, brush6);
        palette9.setBrush(QPalette::Active, QPalette::Mid, brush7);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette9.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette9.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette9.setBrush(QPalette::Active, QPalette::AlternateBase, brush5);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette9.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Midlight, brush5);
        palette9.setBrush(QPalette::Inactive, QPalette::Dark, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Mid, brush7);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette9.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush5);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Midlight, brush5);
        palette9.setBrush(QPalette::Disabled, QPalette::Dark, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::Mid, brush7);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
        thAlarmInd2LineEdit->setPalette(palette9);
        thAlarmInd2LineEdit->setFont(font1);
        thAlarmInd2LineEdit->setFocusPolicy(Qt::NoFocus);
        thAlarmInd2LineEdit->setFrame(false);
        dataButton = new QPushButton(centralwidget);
        dataButton->setObjectName(QString::fromUtf8("dataButton"));
        dataButton->setGeometry(QRect(400, 520, 71, 41));
        dataButton->setMinimumSize(QSize(55, 22));
        dataButton->setMaximumSize(QSize(111, 41));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette10.setBrush(QPalette::Active, QPalette::Light, brush);
        palette10.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        palette10.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette10.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette10.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette10.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette10.setBrush(QPalette::Active, QPalette::AlternateBase, brush9);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette10.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette10.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette10.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette10.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush9);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette10.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette10.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette10.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette10.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette10.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
        dataButton->setPalette(palette10);
        dataButton->setFocusPolicy(Qt::NoFocus);
        detDidISigLCD = new QLCDNumber(centralwidget);
        detDidISigLCD->setObjectName(QString::fromUtf8("detDidISigLCD"));
        detDidISigLCD->setGeometry(QRect(180, 190, 121, 61));
        detDidISigLCD->setFont(font);
        detDidISigLCD->setCursor(QCursor(Qt::BlankCursor));
        detDidISigLCD->setSegmentStyle(QLCDNumber::Flat);
        detDid1LCD = new QLCDNumber(centralwidget);
        detDid1LCD->setObjectName(QString::fromUtf8("detDid1LCD"));
        detDid1LCD->setGeometry(QRect(180, 90, 121, 61));
        detDid1LCD->setFont(font);
        detDid1LCD->setCursor(QCursor(Qt::BlankCursor));
        detDid1LCD->setNumDigits(4);
        detDid1LCD->setSegmentStyle(QLCDNumber::Flat);
        detDidPolVLCD = new QLCDNumber(centralwidget);
        detDidPolVLCD->setObjectName(QString::fromUtf8("detDidPolVLCD"));
        detDidPolVLCD->setGeometry(QRect(340, 90, 121, 61));
        detDidPolVLCD->setFont(font);
        detDidPolVLCD->setCursor(QCursor(Qt::BlankCursor));
        detDidPolVLCD->setNumDigits(4);
        detDidPolVLCD->setSegmentStyle(QLCDNumber::Flat);
        detDidHvLCD = new QLCDNumber(centralwidget);
        detDidHvLCD->setObjectName(QString::fromUtf8("detDidHvLCD"));
        detDidHvLCD->setGeometry(QRect(20, 90, 121, 61));
        detDidHvLCD->setFont(font);
        detDidHvLCD->setCursor(QCursor(Qt::BlankCursor));
        detDidHvLCD->setNumDigits(4);
        detDidHvLCD->setSegmentStyle(QLCDNumber::Flat);
        mainStatusLineEdit = new QLineEdit(centralwidget);
        mainStatusLineEdit->setObjectName(QString::fromUtf8("mainStatusLineEdit"));
        mainStatusLineEdit->setGeometry(QRect(0, 0, 111, 21));
        mainStatusLineEdit->setFont(font);
        mainStatusLineEdit->setCursor(QCursor(Qt::BlankCursor));
        detTcdISigLabel_3 = new QLabel(centralwidget);
        detTcdISigLabel_3->setObjectName(QString::fromUtf8("detTcdISigLabel_3"));
        detTcdISigLabel_3->setGeometry(QRect(20, 70, 71, 20));
        detTcdISigLabel_3->setCursor(QCursor(Qt::BlankCursor));
        detTcdISigLabel_3->setLayoutDirection(Qt::LeftToRight);
        detTcdISigLabel_2 = new QLabel(centralwidget);
        detTcdISigLabel_2->setObjectName(QString::fromUtf8("detTcdISigLabel_2"));
        detTcdISigLabel_2->setGeometry(QRect(340, 70, 81, 20));
        detTcdISigLabel_2->setCursor(QCursor(Qt::BlankCursor));
        detTcdISigLabel_2->setLayoutDirection(Qt::LeftToRight);
        detTcdISigLabel = new QLabel(centralwidget);
        detTcdISigLabel->setObjectName(QString::fromUtf8("detTcdISigLabel"));
        detTcdISigLabel->setGeometry(QRect(180, 170, 71, 20));
        detTcdISigLabel->setCursor(QCursor(Qt::BlankCursor));
        detTcdISigLabel->setLayoutDirection(Qt::LeftToRight);
        detTcdISigLabel_4 = new QLabel(centralwidget);
        detTcdISigLabel_4->setObjectName(QString::fromUtf8("detTcdISigLabel_4"));
        detTcdISigLabel_4->setGeometry(QRect(180, 70, 71, 20));
        detTcdISigLabel_4->setCursor(QCursor(Qt::BlankCursor));
        detTcdISigLabel_4->setLayoutDirection(Qt::LeftToRight);
        offButton = new QPushButton(centralwidget);
        offButton->setObjectName(QString::fromUtf8("offButton"));
        offButton->setGeometry(QRect(380, 220, 91, 41));
        offButton->setMinimumSize(QSize(55, 22));
        offButton->setMaximumSize(QSize(450, 242));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush13(QColor(255, 160, 184, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush13);
        palette11.setBrush(QPalette::Active, QPalette::Light, brush);
        QBrush brush14(QColor(255, 207, 219, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette11.setBrush(QPalette::Active, QPalette::Midlight, brush14);
        QBrush brush15(QColor(127, 80, 92, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette11.setBrush(QPalette::Active, QPalette::Dark, brush15);
        QBrush brush16(QColor(170, 107, 123, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette11.setBrush(QPalette::Active, QPalette::Mid, brush16);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette11.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush13);
        palette11.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette11.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette11.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Midlight, brush14);
        palette11.setBrush(QPalette::Inactive, QPalette::Dark, brush15);
        palette11.setBrush(QPalette::Inactive, QPalette::Mid, brush16);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette11.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush15);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush13);
        palette11.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Midlight, brush14);
        palette11.setBrush(QPalette::Disabled, QPalette::Dark, brush15);
        palette11.setBrush(QPalette::Disabled, QPalette::Mid, brush16);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush15);
        palette11.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush15);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush13);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush13);
        palette11.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush13);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
        offButton->setPalette(palette11);
        offButton->setCursor(QCursor(Qt::BlankCursor));
        offButton->setFocusPolicy(Qt::NoFocus);
        versionLabel = new QLabel(centralwidget);
        versionLabel->setObjectName(QString::fromUtf8("versionLabel"));
        versionLabel->setGeometry(QRect(380, 10, 91, 20));
        versionLabel->setCursor(QCursor(Qt::BlankCursor));
        versionLabel->setLayoutDirection(Qt::LeftToRight);
        modelLabel = new QLabel(centralwidget);
        modelLabel->setObjectName(QString::fromUtf8("modelLabel"));
        modelLabel->setGeometry(QRect(10, 250, 151, 20));
        modelLabel->setCursor(QCursor(Qt::BlankCursor));
        modelLabel->setLayoutDirection(Qt::LeftToRight);
        NEW_DID_INBOXClass->setCentralWidget(centralwidget);

        retranslateUi(NEW_DID_INBOXClass);
        QObject::connect(outputButton, SIGNAL(pressed()), NEW_DID_INBOXClass, SLOT(detcfg()));
        QObject::connect(offButton, SIGNAL(pressed()), NEW_DID_INBOXClass, SLOT(shutDwnMsg()));

        QMetaObject::connectSlotsByName(NEW_DID_INBOXClass);
    } // setupUi

    void retranslateUi(QMainWindow *NEW_DID_INBOXClass)
    {
        NEW_DID_INBOXClass->setWindowTitle(QApplication::translate("NEW_DID_INBOXClass", "MainWindow", 0, QApplication::UnicodeUTF8));
        calButton->setText(QApplication::translate("NEW_DID_INBOXClass", "Calibrate", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("NEW_DID_INBOXClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">PPM</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("NEW_DID_INBOXClass", "MAIN", 0, QApplication::UnicodeUTF8));
        outputButton->setText(QApplication::translate("NEW_DID_INBOXClass", "CONFIGURE DETECTOR", 0, QApplication::UnicodeUTF8));
        measureButton->setText(QApplication::translate("NEW_DID_INBOXClass", "MEASURE", 0, QApplication::UnicodeUTF8));
        dataButton->setText(QApplication::translate("NEW_DID_INBOXClass", "DATA", 0, QApplication::UnicodeUTF8));
        detTcdISigLabel_3->setText(QApplication::translate("NEW_DID_INBOXClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; text-decoration: underline;\">DID HV</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        detTcdISigLabel_2->setText(QApplication::translate("NEW_DID_INBOXClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; text-decoration: underline;\">POL VOLT</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        detTcdISigLabel->setText(QApplication::translate("NEW_DID_INBOXClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; text-decoration: underline;\">DID SIG</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        detTcdISigLabel_4->setText(QApplication::translate("NEW_DID_INBOXClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; text-decoration: underline;\">DID ImA</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        offButton->setText(QApplication::translate("NEW_DID_INBOXClass", "SHUTDOWN", 0, QApplication::UnicodeUTF8));
        versionLabel->setText(QApplication::translate("NEW_DID_INBOXClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt;\">V1012015</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        modelLabel->setText(QApplication::translate("NEW_DID_INBOXClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt;\">DID CONTROLLER</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NEW_DID_INBOXClass: public Ui_NEW_DID_INBOXClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_DID_INBOX_H
