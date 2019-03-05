/********************************************************************************
** Form generated from reading UI file 'detconfigure.ui'
**
** Created: Tue Mar 5 14:05:07 2019
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETCONFIGURE_H
#define UI_DETCONFIGURE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_detConfigureClass
{
public:
    QLabel *detGainLabel_2;
    QDoubleSpinBox *detGainSpinBox_2;
    QPushButton *detOkButton;
    QLabel *detTcdISigLabel;
    QLCDNumber *detTcdISigLCD;
    QPushButton *detDIDZeroButton;
    QPushButton *detTCDWriteButton;
    QPushButton *detTCDReadButton;
    QPushButton *detSigReadButton;
    QPushButton *detDIDWriteGainButton;
    QLabel *detTCDOffSetBLLabel;
    QDoubleSpinBox *detDIDOffSetBLSpinBox;
    QPushButton *detDIDOffSetBLCurrentButton;
    QCheckBox *detPolarityEnableCheckBox;
    QPushButton *detPolarityButton;
    QLabel *detPolarityLabel;
    QLabel *detConfDialogLabel;
    QLineEdit *busyLineEdit;
    QLabel *label_4;
    QPushButton *dcIgniteCtrlButton;
    QLCDNumber *detDidPolVLCD;
    QLCDNumber *detDidHvLCD;
    QLCDNumber *detDidISigLCD;
    QDoubleSpinBox *didPolVCtlSpinBox;
    QLCDNumber *detDid1LCD;
    QDoubleSpinBox *detVdcCtlSpinBox;
    QCheckBox *didIgniteEnableCheckBox;
    QRadioButton *R1;
    QRadioButton *R2;
    QRadioButton *R3;
    QRadioButton *R4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *detTcdISigLabel_2;
    QLabel *detTcdISigLabel_3;
    QLabel *detConfDialogLabel_2;
    QPushButton *startButton;
    QPushButton *detDIDHvButton;
    QPushButton *detDIDPolButton;
    QLCDNumber *detDidGainLCD;

    void setupUi(QDialog *detConfigureClass)
    {
        if (detConfigureClass->objectName().isEmpty())
            detConfigureClass->setObjectName(QString::fromUtf8("detConfigureClass"));
        detConfigureClass->resize(480, 272);
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
        detConfigureClass->setPalette(palette);
        QFont font;
        font.setPointSize(11);
        detConfigureClass->setFont(font);
        detConfigureClass->setCursor(QCursor(Qt::BlankCursor));
        detConfigureClass->setFocusPolicy(Qt::StrongFocus);
        detGainLabel_2 = new QLabel(detConfigureClass);
        detGainLabel_2->setObjectName(QString::fromUtf8("detGainLabel_2"));
        detGainLabel_2->setGeometry(QRect(800, 190, 51, 21));
        detGainLabel_2->setLayoutDirection(Qt::LeftToRight);
        detGainSpinBox_2 = new QDoubleSpinBox(detConfigureClass);
        detGainSpinBox_2->setObjectName(QString::fromUtf8("detGainSpinBox_2"));
        detGainSpinBox_2->setGeometry(QRect(90, 220, 41, 41));
        QFont font1;
        font1.setPointSize(24);
        detGainSpinBox_2->setFont(font1);
        detGainSpinBox_2->setFocusPolicy(Qt::NoFocus);
        detGainSpinBox_2->setFrame(false);
        detGainSpinBox_2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        detGainSpinBox_2->setKeyboardTracking(true);
        detGainSpinBox_2->setDecimals(0);
        detGainSpinBox_2->setMinimum(1);
        detGainSpinBox_2->setMaximum(4);
        detOkButton = new QPushButton(detConfigureClass);
        detOkButton->setObjectName(QString::fromUtf8("detOkButton"));
        detOkButton->setGeometry(QRect(420, 220, 51, 41));
        detOkButton->setMinimumSize(QSize(1, 1));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush7(QColor(85, 170, 255, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush7);
        QBrush brush8(QColor(213, 234, 255, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush8);
        QBrush brush9(QColor(149, 202, 255, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        QBrush brush10(QColor(42, 85, 127, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush10);
        QBrush brush11(QColor(56, 113, 170, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush12(QColor(170, 212, 255, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush12);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        detOkButton->setPalette(palette1);
        detOkButton->setCursor(QCursor(Qt::BlankCursor));
        detOkButton->setFocusPolicy(Qt::NoFocus);
        detTcdISigLabel = new QLabel(detConfigureClass);
        detTcdISigLabel->setObjectName(QString::fromUtf8("detTcdISigLabel"));
        detTcdISigLabel->setGeometry(QRect(120, 50, 71, 20));
        detTcdISigLabel->setLayoutDirection(Qt::LeftToRight);
        detTcdISigLCD = new QLCDNumber(detConfigureClass);
        detTcdISigLCD->setObjectName(QString::fromUtf8("detTcdISigLCD"));
        detTcdISigLCD->setGeometry(QRect(540, 60, 41, 31));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        detTcdISigLCD->setFont(font2);
        detTcdISigLCD->setSegmentStyle(QLCDNumber::Flat);
        detDIDZeroButton = new QPushButton(detConfigureClass);
        detDIDZeroButton->setObjectName(QString::fromUtf8("detDIDZeroButton"));
        detDIDZeroButton->setGeometry(QRect(10, 30, 81, 51));
        detDIDZeroButton->setMinimumSize(QSize(1, 1));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush13(QColor(0, 255, 0, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush13);
        QBrush brush14(QColor(127, 255, 127, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush14);
        QBrush brush15(QColor(63, 255, 63, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush15);
        QBrush brush16(QColor(0, 127, 0, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush16);
        QBrush brush17(QColor(0, 170, 0, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush17);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush13);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush14);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush15);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush16);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush17);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush16);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush14);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush15);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush16);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush17);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush16);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush16);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        detDIDZeroButton->setPalette(palette2);
        detDIDZeroButton->setCursor(QCursor(Qt::BlankCursor));
        detDIDZeroButton->setFocusPolicy(Qt::NoFocus);
        detTCDWriteButton = new QPushButton(detConfigureClass);
        detTCDWriteButton->setObjectName(QString::fromUtf8("detTCDWriteButton"));
        detTCDWriteButton->setGeometry(QRect(10, 280, 81, 41));
        detTCDWriteButton->setMinimumSize(QSize(1, 1));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush18(QColor(238, 0, 0, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush18);
        QBrush brush19(QColor(255, 102, 102, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush19);
        QBrush brush20(QColor(246, 51, 51, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush20);
        QBrush brush21(QColor(119, 0, 0, 255));
        brush21.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush21);
        QBrush brush22(QColor(159, 0, 0, 255));
        brush22.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush22);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush18);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush23(QColor(246, 127, 127, 255));
        brush23.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush23);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush18);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush19);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush20);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush21);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush22);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush18);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush23);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush21);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush18);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush19);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush20);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush21);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush22);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush21);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush21);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush18);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush18);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush18);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        detTCDWriteButton->setPalette(palette3);
        detTCDWriteButton->setFocusPolicy(Qt::NoFocus);
        detTCDReadButton = new QPushButton(detConfigureClass);
        detTCDReadButton->setObjectName(QString::fromUtf8("detTCDReadButton"));
        detTCDReadButton->setGeometry(QRect(100, 320, 101, 41));
        detTCDReadButton->setMinimumSize(QSize(1, 1));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush17);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush13);
        QBrush brush24(QColor(0, 212, 0, 255));
        brush24.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush24);
        QBrush brush25(QColor(0, 85, 0, 255));
        brush25.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush25);
        QBrush brush26(QColor(0, 113, 0, 255));
        brush26.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush26);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush17);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush27(QColor(127, 212, 127, 255));
        brush27.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush27);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush17);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush13);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush24);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush25);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush26);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush17);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush27);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush25);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush17);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush13);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush24);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush25);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush26);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush25);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush25);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush17);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush17);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush17);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        detTCDReadButton->setPalette(palette4);
        detTCDReadButton->setFocusPolicy(Qt::NoFocus);
        detSigReadButton = new QPushButton(detConfigureClass);
        detSigReadButton->setObjectName(QString::fromUtf8("detSigReadButton"));
        detSigReadButton->setGeometry(QRect(10, 90, 81, 51));
        detSigReadButton->setMinimumSize(QSize(1, 1));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush13);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush14);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush15);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush16);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush17);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush13);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush14);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush15);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush16);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush17);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush16);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush13);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush14);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush15);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush16);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush17);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush16);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush16);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush13);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush13);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush13);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        detSigReadButton->setPalette(palette5);
        detSigReadButton->setCursor(QCursor(Qt::BlankCursor));
        detSigReadButton->setFocusPolicy(Qt::NoFocus);
        detDIDWriteGainButton = new QPushButton(detConfigureClass);
        detDIDWriteGainButton->setObjectName(QString::fromUtf8("detDIDWriteGainButton"));
        detDIDWriteGainButton->setGeometry(QRect(10, 220, 81, 41));
        detDIDWriteGainButton->setMinimumSize(QSize(1, 1));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush13);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush14);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush15);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush16);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush17);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush13);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush14);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush15);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush16);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush17);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush16);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush13);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush14);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush15);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush16);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush17);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush16);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush16);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush13);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush13);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush13);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        detDIDWriteGainButton->setPalette(palette6);
        detDIDWriteGainButton->setCursor(QCursor(Qt::BlankCursor));
        detDIDWriteGainButton->setFocusPolicy(Qt::NoFocus);
        detTCDOffSetBLLabel = new QLabel(detConfigureClass);
        detTCDOffSetBLLabel->setObjectName(QString::fromUtf8("detTCDOffSetBLLabel"));
        detTCDOffSetBLLabel->setGeometry(QRect(870, 170, 81, 20));
        detTCDOffSetBLLabel->setLayoutDirection(Qt::LeftToRight);
        detDIDOffSetBLSpinBox = new QDoubleSpinBox(detConfigureClass);
        detDIDOffSetBLSpinBox->setObjectName(QString::fromUtf8("detDIDOffSetBLSpinBox"));
        detDIDOffSetBLSpinBox->setGeometry(QRect(950, 160, 131, 51));
        QFont font3;
        font3.setPointSize(26);
        font3.setItalic(false);
        detDIDOffSetBLSpinBox->setFont(font3);
        detDIDOffSetBLSpinBox->setCursor(QCursor(Qt::IBeamCursor));
        detDIDOffSetBLSpinBox->setFocusPolicy(Qt::TabFocus);
        detDIDOffSetBLSpinBox->setAccelerated(false);
        detDIDOffSetBLSpinBox->setDecimals(2);
        detDIDOffSetBLSpinBox->setMinimum(-6.25);
        detDIDOffSetBLSpinBox->setMaximum(6.25);
        detDIDOffSetBLSpinBox->setSingleStep(0.001);
        detDIDOffSetBLSpinBox->setValue(0);
        detDIDOffSetBLCurrentButton = new QPushButton(detConfigureClass);
        detDIDOffSetBLCurrentButton->setObjectName(QString::fromUtf8("detDIDOffSetBLCurrentButton"));
        detDIDOffSetBLCurrentButton->setGeometry(QRect(10, 150, 81, 51));
        detDIDOffSetBLCurrentButton->setMinimumSize(QSize(1, 1));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush13);
        palette7.setBrush(QPalette::Active, QPalette::Light, brush14);
        palette7.setBrush(QPalette::Active, QPalette::Midlight, brush15);
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush16);
        palette7.setBrush(QPalette::Active, QPalette::Mid, brush17);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush);
        palette7.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush13);
        palette7.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette7.setBrush(QPalette::Inactive, QPalette::Light, brush14);
        palette7.setBrush(QPalette::Inactive, QPalette::Midlight, brush15);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush16);
        palette7.setBrush(QPalette::Inactive, QPalette::Mid, brush17);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette7.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush16);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush13);
        palette7.setBrush(QPalette::Disabled, QPalette::Light, brush14);
        palette7.setBrush(QPalette::Disabled, QPalette::Midlight, brush15);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush16);
        palette7.setBrush(QPalette::Disabled, QPalette::Mid, brush17);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush16);
        palette7.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush16);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush13);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush13);
        palette7.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush13);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        detDIDOffSetBLCurrentButton->setPalette(palette7);
        detDIDOffSetBLCurrentButton->setCursor(QCursor(Qt::BlankCursor));
        detDIDOffSetBLCurrentButton->setFocusPolicy(Qt::NoFocus);
        detPolarityEnableCheckBox = new QCheckBox(detConfigureClass);
        detPolarityEnableCheckBox->setObjectName(QString::fromUtf8("detPolarityEnableCheckBox"));
        detPolarityEnableCheckBox->setGeometry(QRect(490, 40, 21, 21));
        detPolarityEnableCheckBox->setFocusPolicy(Qt::TabFocus);
        detPolarityButton = new QPushButton(detConfigureClass);
        detPolarityButton->setObjectName(QString::fromUtf8("detPolarityButton"));
        detPolarityButton->setGeometry(QRect(509, 30, 61, 31));
        detPolarityButton->setMinimumSize(QSize(1, 1));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush28(QColor(255, 255, 0, 255));
        brush28.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush28);
        QBrush brush29(QColor(255, 255, 127, 255));
        brush29.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Light, brush29);
        QBrush brush30(QColor(255, 255, 63, 255));
        brush30.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Midlight, brush30);
        QBrush brush31(QColor(127, 127, 0, 255));
        brush31.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush31);
        QBrush brush32(QColor(170, 170, 0, 255));
        brush32.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Mid, brush32);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush);
        palette8.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush28);
        palette8.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Active, QPalette::AlternateBase, brush29);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush28);
        palette8.setBrush(QPalette::Inactive, QPalette::Light, brush29);
        palette8.setBrush(QPalette::Inactive, QPalette::Midlight, brush30);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush31);
        palette8.setBrush(QPalette::Inactive, QPalette::Mid, brush32);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush28);
        palette8.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush29);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush31);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush28);
        palette8.setBrush(QPalette::Disabled, QPalette::Light, brush29);
        palette8.setBrush(QPalette::Disabled, QPalette::Midlight, brush30);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush31);
        palette8.setBrush(QPalette::Disabled, QPalette::Mid, brush32);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush31);
        palette8.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush31);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush28);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush28);
        palette8.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush28);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        detPolarityButton->setPalette(palette8);
        detPolarityButton->setFocusPolicy(Qt::NoFocus);
        detPolarityLabel = new QLabel(detConfigureClass);
        detPolarityLabel->setObjectName(QString::fromUtf8("detPolarityLabel"));
        detPolarityLabel->setGeometry(QRect(510, 0, 71, 20));
        detConfDialogLabel = new QLabel(detConfigureClass);
        detConfDialogLabel->setObjectName(QString::fromUtf8("detConfDialogLabel"));
        detConfDialogLabel->setGeometry(QRect(200, 1, 121, 20));
        QFont font4;
        font4.setPointSize(8);
        detConfDialogLabel->setFont(font4);
        busyLineEdit = new QLineEdit(detConfigureClass);
        busyLineEdit->setObjectName(QString::fromUtf8("busyLineEdit"));
        busyLineEdit->setGeometry(QRect(0, 0, 121, 21));
        busyLineEdit->setFont(font2);
        label_4 = new QLabel(detConfigureClass);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(280, 110, 21, 21));
        label_4->setFont(font);
        dcIgniteCtrlButton = new QPushButton(detConfigureClass);
        dcIgniteCtrlButton->setObjectName(QString::fromUtf8("dcIgniteCtrlButton"));
        dcIgniteCtrlButton->setGeometry(QRect(180, 220, 91, 41));
        dcIgniteCtrlButton->setMinimumSize(QSize(1, 1));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush13);
        palette9.setBrush(QPalette::Active, QPalette::Light, brush14);
        palette9.setBrush(QPalette::Active, QPalette::Midlight, brush15);
        palette9.setBrush(QPalette::Active, QPalette::Dark, brush16);
        palette9.setBrush(QPalette::Active, QPalette::Mid, brush17);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush);
        palette9.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush13);
        palette9.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette9.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette9.setBrush(QPalette::Inactive, QPalette::Light, brush14);
        palette9.setBrush(QPalette::Inactive, QPalette::Midlight, brush15);
        palette9.setBrush(QPalette::Inactive, QPalette::Dark, brush16);
        palette9.setBrush(QPalette::Inactive, QPalette::Mid, brush17);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette9.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush16);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush13);
        palette9.setBrush(QPalette::Disabled, QPalette::Light, brush14);
        palette9.setBrush(QPalette::Disabled, QPalette::Midlight, brush15);
        palette9.setBrush(QPalette::Disabled, QPalette::Dark, brush16);
        palette9.setBrush(QPalette::Disabled, QPalette::Mid, brush17);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush16);
        palette9.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush16);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush13);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush13);
        palette9.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush13);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        dcIgniteCtrlButton->setPalette(palette9);
        dcIgniteCtrlButton->setCursor(QCursor(Qt::BlankCursor));
        dcIgniteCtrlButton->setFocusPolicy(Qt::NoFocus);
        detDidPolVLCD = new QLCDNumber(detConfigureClass);
        detDidPolVLCD->setObjectName(QString::fromUtf8("detDidPolVLCD"));
        detDidPolVLCD->setGeometry(QRect(200, 90, 71, 51));
        detDidPolVLCD->setFont(font2);
        detDidPolVLCD->setSegmentStyle(QLCDNumber::Flat);
        detDidHvLCD = new QLCDNumber(detConfigureClass);
        detDidHvLCD->setObjectName(QString::fromUtf8("detDidHvLCD"));
        detDidHvLCD->setGeometry(QRect(200, 150, 71, 41));
        detDidHvLCD->setFont(font2);
        detDidHvLCD->setSegmentStyle(QLCDNumber::Flat);
        detDidISigLCD = new QLCDNumber(detConfigureClass);
        detDidISigLCD->setObjectName(QString::fromUtf8("detDidISigLCD"));
        detDidISigLCD->setGeometry(QRect(200, 40, 191, 41));
        detDidISigLCD->setFont(font2);
        detDidISigLCD->setSegmentStyle(QLCDNumber::Flat);
        didPolVCtlSpinBox = new QDoubleSpinBox(detConfigureClass);
        didPolVCtlSpinBox->setObjectName(QString::fromUtf8("didPolVCtlSpinBox"));
        didPolVCtlSpinBox->setGeometry(QRect(200, 280, 111, 51));
        QFont font5;
        font5.setPointSize(36);
        didPolVCtlSpinBox->setFont(font5);
        didPolVCtlSpinBox->setFocusPolicy(Qt::NoFocus);
        didPolVCtlSpinBox->setDecimals(0);
        didPolVCtlSpinBox->setMinimum(1);
        didPolVCtlSpinBox->setMaximum(300);
        didPolVCtlSpinBox->setSingleStep(10);
        didPolVCtlSpinBox->setValue(150);
        detDid1LCD = new QLCDNumber(detConfigureClass);
        detDid1LCD->setObjectName(QString::fromUtf8("detDid1LCD"));
        detDid1LCD->setGeometry(QRect(300, 150, 71, 41));
        detDid1LCD->setFont(font2);
        detDid1LCD->setSegmentStyle(QLCDNumber::Flat);
        detVdcCtlSpinBox = new QDoubleSpinBox(detConfigureClass);
        detVdcCtlSpinBox->setObjectName(QString::fromUtf8("detVdcCtlSpinBox"));
        detVdcCtlSpinBox->setGeometry(QRect(200, 280, 111, 51));
        detVdcCtlSpinBox->setFont(font5);
        detVdcCtlSpinBox->setFocusPolicy(Qt::NoFocus);
        detVdcCtlSpinBox->setDecimals(0);
        detVdcCtlSpinBox->setMinimum(1);
        detVdcCtlSpinBox->setMaximum(800);
        detVdcCtlSpinBox->setSingleStep(25);
        detVdcCtlSpinBox->setValue(500);
        didIgniteEnableCheckBox = new QCheckBox(detConfigureClass);
        didIgniteEnableCheckBox->setObjectName(QString::fromUtf8("didIgniteEnableCheckBox"));
        didIgniteEnableCheckBox->setGeometry(QRect(270, 230, 21, 21));
        didIgniteEnableCheckBox->setCursor(QCursor(Qt::BlankCursor));
        didIgniteEnableCheckBox->setFocusPolicy(Qt::NoFocus);
        R1 = new QRadioButton(detConfigureClass);
        R1->setObjectName(QString::fromUtf8("R1"));
        R1->setGeometry(QRect(420, 30, 51, 22));
        R1->setCursor(QCursor(Qt::BlankCursor));
        R1->setFocusPolicy(Qt::NoFocus);
        R2 = new QRadioButton(detConfigureClass);
        R2->setObjectName(QString::fromUtf8("R2"));
        R2->setGeometry(QRect(420, 60, 51, 22));
        R2->setCursor(QCursor(Qt::BlankCursor));
        R2->setFocusPolicy(Qt::NoFocus);
        R3 = new QRadioButton(detConfigureClass);
        R3->setObjectName(QString::fromUtf8("R3"));
        R3->setGeometry(QRect(420, 90, 51, 22));
        R3->setCursor(QCursor(Qt::BlankCursor));
        R3->setFocusPolicy(Qt::NoFocus);
        R4 = new QRadioButton(detConfigureClass);
        R4->setObjectName(QString::fromUtf8("R4"));
        R4->setGeometry(QRect(420, 120, 51, 22));
        R4->setCursor(QCursor(Qt::BlankCursor));
        R4->setFocusPolicy(Qt::NoFocus);
        label_5 = new QLabel(detConfigureClass);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(280, 160, 21, 21));
        label_5->setFont(font);
        label_6 = new QLabel(detConfigureClass);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(380, 160, 41, 21));
        label_6->setFont(font);
        label_7 = new QLabel(detConfigureClass);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(400, 50, 21, 21));
        label_7->setFont(font);
        detTcdISigLabel_2 = new QLabel(detConfigureClass);
        detTcdISigLabel_2->setObjectName(QString::fromUtf8("detTcdISigLabel_2"));
        detTcdISigLabel_2->setGeometry(QRect(110, 340, 81, 20));
        detTcdISigLabel_2->setLayoutDirection(Qt::LeftToRight);
        detTcdISigLabel_3 = new QLabel(detConfigureClass);
        detTcdISigLabel_3->setObjectName(QString::fromUtf8("detTcdISigLabel_3"));
        detTcdISigLabel_3->setGeometry(QRect(120, 340, 71, 20));
        detTcdISigLabel_3->setLayoutDirection(Qt::LeftToRight);
        detConfDialogLabel_2 = new QLabel(detConfigureClass);
        detConfDialogLabel_2->setObjectName(QString::fromUtf8("detConfDialogLabel_2"));
        detConfDialogLabel_2->setGeometry(QRect(410, 1, 61, 20));
        detConfDialogLabel_2->setFont(font4);
        startButton = new QPushButton(detConfigureClass);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(320, 220, 81, 41));
        startButton->setMinimumSize(QSize(1, 1));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush13);
        palette10.setBrush(QPalette::Active, QPalette::Light, brush14);
        palette10.setBrush(QPalette::Active, QPalette::Midlight, brush15);
        palette10.setBrush(QPalette::Active, QPalette::Dark, brush16);
        palette10.setBrush(QPalette::Active, QPalette::Mid, brush17);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush);
        palette10.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush13);
        palette10.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette10.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette10.setBrush(QPalette::Inactive, QPalette::Light, brush14);
        palette10.setBrush(QPalette::Inactive, QPalette::Midlight, brush15);
        palette10.setBrush(QPalette::Inactive, QPalette::Dark, brush16);
        palette10.setBrush(QPalette::Inactive, QPalette::Mid, brush17);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette10.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush16);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush13);
        palette10.setBrush(QPalette::Disabled, QPalette::Light, brush14);
        palette10.setBrush(QPalette::Disabled, QPalette::Midlight, brush15);
        palette10.setBrush(QPalette::Disabled, QPalette::Dark, brush16);
        palette10.setBrush(QPalette::Disabled, QPalette::Mid, brush17);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush16);
        palette10.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush16);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush13);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush13);
        palette10.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush13);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        startButton->setPalette(palette10);
        startButton->setCursor(QCursor(Qt::BlankCursor));
        startButton->setFocusPolicy(Qt::NoFocus);
        detDIDHvButton = new QPushButton(detConfigureClass);
        detDIDHvButton->setObjectName(QString::fromUtf8("detDIDHvButton"));
        detDIDHvButton->setGeometry(QRect(110, 150, 81, 41));
        detDIDHvButton->setMinimumSize(QSize(1, 1));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush13);
        palette11.setBrush(QPalette::Active, QPalette::Light, brush14);
        palette11.setBrush(QPalette::Active, QPalette::Midlight, brush15);
        palette11.setBrush(QPalette::Active, QPalette::Dark, brush16);
        palette11.setBrush(QPalette::Active, QPalette::Mid, brush17);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush);
        palette11.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush13);
        palette11.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette11.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette11.setBrush(QPalette::Inactive, QPalette::Light, brush14);
        palette11.setBrush(QPalette::Inactive, QPalette::Midlight, brush15);
        palette11.setBrush(QPalette::Inactive, QPalette::Dark, brush16);
        palette11.setBrush(QPalette::Inactive, QPalette::Mid, brush17);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette11.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush16);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush13);
        palette11.setBrush(QPalette::Disabled, QPalette::Light, brush14);
        palette11.setBrush(QPalette::Disabled, QPalette::Midlight, brush15);
        palette11.setBrush(QPalette::Disabled, QPalette::Dark, brush16);
        palette11.setBrush(QPalette::Disabled, QPalette::Mid, brush17);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush16);
        palette11.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush16);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush13);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush13);
        palette11.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush13);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        detDIDHvButton->setPalette(palette11);
        detDIDHvButton->setCursor(QCursor(Qt::BlankCursor));
        detDIDHvButton->setFocusPolicy(Qt::NoFocus);
        detDIDPolButton = new QPushButton(detConfigureClass);
        detDIDPolButton->setObjectName(QString::fromUtf8("detDIDPolButton"));
        detDIDPolButton->setGeometry(QRect(110, 90, 81, 51));
        detDIDPolButton->setMinimumSize(QSize(1, 1));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush13);
        palette12.setBrush(QPalette::Active, QPalette::Light, brush14);
        palette12.setBrush(QPalette::Active, QPalette::Midlight, brush15);
        palette12.setBrush(QPalette::Active, QPalette::Dark, brush16);
        palette12.setBrush(QPalette::Active, QPalette::Mid, brush17);
        palette12.setBrush(QPalette::Active, QPalette::Text, brush);
        palette12.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush13);
        palette12.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette12.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette12.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette12.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette12.setBrush(QPalette::Inactive, QPalette::Light, brush14);
        palette12.setBrush(QPalette::Inactive, QPalette::Midlight, brush15);
        palette12.setBrush(QPalette::Inactive, QPalette::Dark, brush16);
        palette12.setBrush(QPalette::Inactive, QPalette::Mid, brush17);
        palette12.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette12.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette12.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush16);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush13);
        palette12.setBrush(QPalette::Disabled, QPalette::Light, brush14);
        palette12.setBrush(QPalette::Disabled, QPalette::Midlight, brush15);
        palette12.setBrush(QPalette::Disabled, QPalette::Dark, brush16);
        palette12.setBrush(QPalette::Disabled, QPalette::Mid, brush17);
        palette12.setBrush(QPalette::Disabled, QPalette::Text, brush16);
        palette12.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush16);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush13);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush13);
        palette12.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush13);
        palette12.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        detDIDPolButton->setPalette(palette12);
        detDIDPolButton->setCursor(QCursor(Qt::BlankCursor));
        detDIDPolButton->setFocusPolicy(Qt::NoFocus);
        detDidGainLCD = new QLCDNumber(detConfigureClass);
        detDidGainLCD->setObjectName(QString::fromUtf8("detDidGainLCD"));
        detDidGainLCD->setGeometry(QRect(110, 280, 51, 41));
        detDidGainLCD->setFont(font2);
        detDidGainLCD->setFrameShape(QFrame::NoFrame);
        detDidGainLCD->setSegmentStyle(QLCDNumber::Flat);
        detDidGainLCD->setProperty("value", QVariant(-1));
        QWidget::setTabOrder(detDIDOffSetBLSpinBox, detGainSpinBox_2);
        QWidget::setTabOrder(detGainSpinBox_2, detPolarityEnableCheckBox);

        retranslateUi(detConfigureClass);
        QObject::connect(detOkButton, SIGNAL(released()), detConfigureClass, SLOT(close()));
        QObject::connect(dcIgniteCtrlButton, SIGNAL(pressed()), detConfigureClass, SLOT(detIgn()));
        QObject::connect(didPolVCtlSpinBox, SIGNAL(valueChanged(double)), detConfigureClass, SLOT(detPolSet()));
        QObject::connect(dcIgniteCtrlButton, SIGNAL(pressed()), detConfigureClass, SLOT(detDIDIgnite()));
        QObject::connect(detVdcCtlSpinBox, SIGNAL(valueChanged(double)), detConfigureClass, SLOT(detDID_V_Ctl()));
        QObject::connect(dcIgniteCtrlButton, SIGNAL(pressed()), didIgniteEnableCheckBox, SLOT(toggle()));
        QObject::connect(detDIDZeroButton, SIGNAL(pressed()), detConfigureClass, SLOT(detDIDZeroCtl()));
        QObject::connect(R1, SIGNAL(clicked()), detConfigureClass, SLOT(detRange()));
        QObject::connect(R2, SIGNAL(clicked()), detConfigureClass, SLOT(detRange()));
        QObject::connect(R3, SIGNAL(clicked()), detConfigureClass, SLOT(detRange()));
        QObject::connect(R4, SIGNAL(clicked()), detConfigureClass, SLOT(detRange()));
        QObject::connect(detDIDWriteGainButton, SIGNAL(pressed()), detConfigureClass, SLOT(detDIDSig()));
        QObject::connect(detSigReadButton, SIGNAL(pressed()), detConfigureClass, SLOT(detDIDSig()));
        QObject::connect(detDIDOffSetBLCurrentButton, SIGNAL(pressed()), detConfigureClass, SLOT(numIn()));
        QObject::connect(startButton, SIGNAL(pressed()), detConfigureClass, SLOT(setSettings()));
        QObject::connect(detDIDHvButton, SIGNAL(pressed()), detConfigureClass, SLOT(numInPopUp()));
        QObject::connect(detDIDPolButton, SIGNAL(pressed()), detConfigureClass, SLOT(numInPolPopUp()));
        QObject::connect(detDIDWriteGainButton, SIGNAL(pressed()), detConfigureClass, SLOT(numInGainPopUp()));

        QMetaObject::connectSlotsByName(detConfigureClass);
    } // setupUi

    void retranslateUi(QDialog *detConfigureClass)
    {
        detConfigureClass->setWindowTitle(QApplication::translate("detConfigureClass", "detConfigure", 0, QApplication::UnicodeUTF8));
        detGainLabel_2->setText(QApplication::translate("detConfigureClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; text-decoration: underline;\">Gain</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        detOkButton->setText(QApplication::translate("detConfigureClass", "OK", 0, QApplication::UnicodeUTF8));
        detTcdISigLabel->setText(QApplication::translate("detConfigureClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; text-decoration: underline;\">DID SIG</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        detDIDZeroButton->setText(QApplication::translate("detConfigureClass", "DID ZERO", 0, QApplication::UnicodeUTF8));
        detTCDWriteButton->setText(QApplication::translate("detConfigureClass", "Enter All\n"
"Changes", 0, QApplication::UnicodeUTF8));
        detTCDReadButton->setText(QApplication::translate("detConfigureClass", "Read Detector\n"
"Settings", 0, QApplication::UnicodeUTF8));
        detSigReadButton->setText(QApplication::translate("detConfigureClass", "sig read", 0, QApplication::UnicodeUTF8));
        detDIDWriteGainButton->setText(QApplication::translate("detConfigureClass", "Gain\n"
"Adjust", 0, QApplication::UnicodeUTF8));
        detTCDOffSetBLLabel->setText(QApplication::translate("detConfigureClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:14pt; text-decoration: underline;\">OFFSET</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        detDIDOffSetBLCurrentButton->setText(QApplication::translate("detConfigureClass", "Offset\n"
"Baseline", 0, QApplication::UnicodeUTF8));
        detPolarityEnableCheckBox->setText(QString());
        detPolarityButton->setText(QApplication::translate("detConfigureClass", "On / Off", 0, QApplication::UnicodeUTF8));
        detPolarityLabel->setText(QApplication::translate("detConfigureClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; text-decoration: underline;\">Rev. Pol.</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        detConfDialogLabel->setText(QApplication::translate("detConfigureClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; text-decoration: underline;\">DID Configure</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("detConfigureClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">V</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        dcIgniteCtrlButton->setText(QApplication::translate("detConfigureClass", "IGNITE", 0, QApplication::UnicodeUTF8));
        didIgniteEnableCheckBox->setText(QString());
        R1->setText(QApplication::translate("detConfigureClass", "R1", 0, QApplication::UnicodeUTF8));
        R2->setText(QApplication::translate("detConfigureClass", "R2", 0, QApplication::UnicodeUTF8));
        R3->setText(QApplication::translate("detConfigureClass", "R3", 0, QApplication::UnicodeUTF8));
        R4->setText(QApplication::translate("detConfigureClass", "R4", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("detConfigureClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">V</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("detConfigureClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">ImA</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("detConfigureClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">V</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        detTcdISigLabel_2->setText(QApplication::translate("detConfigureClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; text-decoration: underline;\">POL VOLT</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        detTcdISigLabel_3->setText(QApplication::translate("detConfigureClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; text-decoration: underline;\">DID HV</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        detConfDialogLabel_2->setText(QApplication::translate("detConfigureClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; text-decoration: underline;\">RANGE</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        startButton->setText(QApplication::translate("detConfigureClass", "REFRESH", 0, QApplication::UnicodeUTF8));
        detDIDHvButton->setText(QApplication::translate("detConfigureClass", "H Voltage\n"
"Adjust", 0, QApplication::UnicodeUTF8));
        detDIDPolButton->setText(QApplication::translate("detConfigureClass", "Pol Volt\n"
"Adjust", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class detConfigureClass: public Ui_detConfigureClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETCONFIGURE_H
