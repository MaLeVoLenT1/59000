/********************************************************************************
** Form generated from reading UI file 'setup.ui'
**
** Created: Tue Jan 7 12:49:35 2020
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETUP_H
#define UI_SETUP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setupClass
{
public:
    QLabel *label_output_hi;
    QDoubleSpinBox *alh2SpinBox;
    QDoubleSpinBox *alh1SpinBox;
    QLabel *enalrmlLabel;
    QToolButton *endButton;
    QLabel *fuelFlowlabel;
    QLabel *airFlowlabel;
    QLabel *sampleFlowlabel;
    QLabel *enalrmlLabel_2;
    QDoubleSpinBox *fuelFlowSpinBox;
    QDoubleSpinBox *airFlowSpinBox;
    QDoubleSpinBox *sampFlowSpinBox;
    QLabel *pressurelabel;
    QPushButton *tempConfigButton;
    QPushButton *setTempButton;
    QLineEdit *subusyLineEdit;
    QDoubleSpinBox *pVSpinBox;
    QDoubleSpinBox *methFlowSpinBox;
    QLabel *fuelFlowlabel_2;
    QPushButton *setupIgniteButton;
    QLabel *setupStatuslabel;
    QLineEdit *suFlameLineEdit;
    QDoubleSpinBox *all1SpinBox;
    QDoubleSpinBox *all2SpinBox;
    QLabel *label_output_low;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_5;
    QCheckBox *enableAlarmCheckBox;
    QLabel *detOnOffLabel_5;
    QGridLayout *gridLayout;
    QCheckBox *alarm1EnableCheckBox;
    QLabel *label_output_volt;
    QGridLayout *gridLayout_2;
    QCheckBox *alarm2EnableCheckBox;
    QLabel *label_output_5;
    QLCDNumber *spAlarmL1lcdNumber;
    QLCDNumber *spAlarmH1lcdNumber;
    QLCDNumber *spAlarmL2lcdNumber;
    QLCDNumber *spAlarmH2lcdNumber;
    QLCDNumber *spH2FlowlcdNumber;
    QLCDNumber *spSampFlowlcdNumber;
    QLCDNumber *spAirFlowlcdNumber;
    QLCDNumber *spMethFlowlcdNumber;

    void setupUi(QDialog *setupClass)
    {
        if (setupClass->objectName().isEmpty())
            setupClass->setObjectName(QString::fromUtf8("setupClass"));
        setupClass->resize(480, 272);
        label_output_hi = new QLabel(setupClass);
        label_output_hi->setObjectName(QString::fromUtf8("label_output_hi"));
        label_output_hi->setGeometry(QRect(310, 40, 21, 17));
        alh2SpinBox = new QDoubleSpinBox(setupClass);
        alh2SpinBox->setObjectName(QString::fromUtf8("alh2SpinBox"));
        alh2SpinBox->setGeometry(QRect(250, 100, 121, 31));
        alh2SpinBox->setMinimumSize(QSize(91, 31));
        alh2SpinBox->setMaximumSize(QSize(200, 200));
        QFont font;
        font.setPointSize(18);
        alh2SpinBox->setFont(font);
        alh2SpinBox->setFocusPolicy(Qt::ClickFocus);
        alh2SpinBox->setAlignment(Qt::AlignCenter);
        alh2SpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        alh2SpinBox->setCorrectionMode(QAbstractSpinBox::CorrectToNearestValue);
        alh2SpinBox->setDecimals(1);
        alh2SpinBox->setMaximum(99999);
        alh1SpinBox = new QDoubleSpinBox(setupClass);
        alh1SpinBox->setObjectName(QString::fromUtf8("alh1SpinBox"));
        alh1SpinBox->setGeometry(QRect(250, 60, 121, 31));
        alh1SpinBox->setMinimumSize(QSize(91, 31));
        alh1SpinBox->setMaximumSize(QSize(200, 200));
        alh1SpinBox->setFont(font);
        alh1SpinBox->setFocusPolicy(Qt::ClickFocus);
        alh1SpinBox->setAlignment(Qt::AlignCenter);
        alh1SpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        alh1SpinBox->setCorrectionMode(QAbstractSpinBox::CorrectToNearestValue);
        alh1SpinBox->setDecimals(1);
        alh1SpinBox->setMaximum(99999);
        enalrmlLabel = new QLabel(setupClass);
        enalrmlLabel->setObjectName(QString::fromUtf8("enalrmlLabel"));
        enalrmlLabel->setGeometry(QRect(10, 0, 121, 21));
        enalrmlLabel->setIndent(-4);
        endButton = new QToolButton(setupClass);
        endButton->setObjectName(QString::fromUtf8("endButton"));
        endButton->setGeometry(QRect(400, 280, 71, 41));
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
        fuelFlowlabel = new QLabel(setupClass);
        fuelFlowlabel->setObjectName(QString::fromUtf8("fuelFlowlabel"));
        fuelFlowlabel->setGeometry(QRect(20, 180, 51, 21));
        airFlowlabel = new QLabel(setupClass);
        airFlowlabel->setObjectName(QString::fromUtf8("airFlowlabel"));
        airFlowlabel->setGeometry(QRect(30, 230, 41, 21));
        airFlowlabel->setContextMenuPolicy(Qt::PreventContextMenu);
        sampleFlowlabel = new QLabel(setupClass);
        sampleFlowlabel->setObjectName(QString::fromUtf8("sampleFlowlabel"));
        sampleFlowlabel->setGeometry(QRect(190, 180, 81, 21));
        enalrmlLabel_2 = new QLabel(setupClass);
        enalrmlLabel_2->setObjectName(QString::fromUtf8("enalrmlLabel_2"));
        enalrmlLabel_2->setGeometry(QRect(150, 0, 181, 31));
        enalrmlLabel_2->setIndent(-4);
        fuelFlowSpinBox = new QDoubleSpinBox(setupClass);
        fuelFlowSpinBox->setObjectName(QString::fromUtf8("fuelFlowSpinBox"));
        fuelFlowSpinBox->setGeometry(QRect(70, 180, 91, 31));
        fuelFlowSpinBox->setMinimumSize(QSize(91, 31));
        fuelFlowSpinBox->setMaximumSize(QSize(200, 200));
        fuelFlowSpinBox->setFont(font);
        fuelFlowSpinBox->setAlignment(Qt::AlignCenter);
        fuelFlowSpinBox->setDecimals(0);
        fuelFlowSpinBox->setMaximum(100);
        fuelFlowSpinBox->setValue(30);
        airFlowSpinBox = new QDoubleSpinBox(setupClass);
        airFlowSpinBox->setObjectName(QString::fromUtf8("airFlowSpinBox"));
        airFlowSpinBox->setGeometry(QRect(70, 230, 91, 31));
        airFlowSpinBox->setMinimumSize(QSize(91, 31));
        airFlowSpinBox->setMaximumSize(QSize(200, 200));
        airFlowSpinBox->setFont(font);
        airFlowSpinBox->setAlignment(Qt::AlignCenter);
        airFlowSpinBox->setDecimals(0);
        airFlowSpinBox->setMaximum(350);
        airFlowSpinBox->setValue(300);
        sampFlowSpinBox = new QDoubleSpinBox(setupClass);
        sampFlowSpinBox->setObjectName(QString::fromUtf8("sampFlowSpinBox"));
        sampFlowSpinBox->setGeometry(QRect(270, 180, 91, 31));
        sampFlowSpinBox->setMinimumSize(QSize(91, 31));
        sampFlowSpinBox->setMaximumSize(QSize(200, 200));
        sampFlowSpinBox->setFont(font);
        sampFlowSpinBox->setAlignment(Qt::AlignCenter);
        sampFlowSpinBox->setDecimals(0);
        sampFlowSpinBox->setMaximum(70);
        sampFlowSpinBox->setValue(30);
        pressurelabel = new QLabel(setupClass);
        pressurelabel->setObjectName(QString::fromUtf8("pressurelabel"));
        pressurelabel->setGeometry(QRect(190, 140, 61, 31));
        pressurelabel->setContextMenuPolicy(Qt::PreventContextMenu);
        tempConfigButton = new QPushButton(setupClass);
        tempConfigButton->setObjectName(QString::fromUtf8("tempConfigButton"));
        tempConfigButton->setGeometry(QRect(380, 10, 91, 41));
        tempConfigButton->setMinimumSize(QSize(55, 22));
        tempConfigButton->setMaximumSize(QSize(111, 41));
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
        QBrush brush12(QColor(170, 255, 127, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush12);
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
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush12);
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
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        tempConfigButton->setPalette(palette1);
        tempConfigButton->setFocusPolicy(Qt::NoFocus);
        setTempButton = new QPushButton(setupClass);
        setTempButton->setObjectName(QString::fromUtf8("setTempButton"));
        setTempButton->setGeometry(QRect(380, 70, 91, 41));
        setTempButton->setMinimumSize(QSize(55, 22));
        setTempButton->setMaximumSize(QSize(111, 41));
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
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush12);
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
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush12);
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
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        setTempButton->setPalette(palette2);
        setTempButton->setFocusPolicy(Qt::NoFocus);
        subusyLineEdit = new QLineEdit(setupClass);
        subusyLineEdit->setObjectName(QString::fromUtf8("subusyLineEdit"));
        subusyLineEdit->setGeometry(QRect(370, 200, 101, 27));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        subusyLineEdit->setFont(font1);
        pVSpinBox = new QDoubleSpinBox(setupClass);
        pVSpinBox->setObjectName(QString::fromUtf8("pVSpinBox"));
        pVSpinBox->setGeometry(QRect(380, 280, 91, 31));
        pVSpinBox->setMinimumSize(QSize(91, 31));
        pVSpinBox->setMaximumSize(QSize(200, 200));
        pVSpinBox->setFont(font);
        pVSpinBox->setAlignment(Qt::AlignCenter);
        pVSpinBox->setDecimals(0);
        pVSpinBox->setMaximum(200);
        pVSpinBox->setSingleStep(10);
        pVSpinBox->setValue(160);
        methFlowSpinBox = new QDoubleSpinBox(setupClass);
        methFlowSpinBox->setObjectName(QString::fromUtf8("methFlowSpinBox"));
        methFlowSpinBox->setGeometry(QRect(270, 230, 91, 31));
        methFlowSpinBox->setMinimumSize(QSize(91, 31));
        methFlowSpinBox->setMaximumSize(QSize(200, 200));
        methFlowSpinBox->setFont(font);
        methFlowSpinBox->setAlignment(Qt::AlignCenter);
        methFlowSpinBox->setDecimals(0);
        methFlowSpinBox->setMaximum(100);
        methFlowSpinBox->setValue(30);
        fuelFlowlabel_2 = new QLabel(setupClass);
        fuelFlowlabel_2->setObjectName(QString::fromUtf8("fuelFlowlabel_2"));
        fuelFlowlabel_2->setGeometry(QRect(210, 230, 61, 21));
        setupIgniteButton = new QPushButton(setupClass);
        setupIgniteButton->setObjectName(QString::fromUtf8("setupIgniteButton"));
        setupIgniteButton->setGeometry(QRect(380, 130, 91, 41));
        setupIgniteButton->setMinimumSize(QSize(55, 22));
        setupIgniteButton->setMaximumSize(QSize(111, 41));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QBrush brush13(QColor(255, 0, 0, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush13);
        QBrush brush14(QColor(255, 127, 127, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush14);
        QBrush brush15(QColor(255, 63, 63, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush15);
        QBrush brush16(QColor(127, 0, 0, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush16);
        QBrush brush17(QColor(170, 0, 0, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush17);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush13);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush12);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush14);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush15);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush16);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush17);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush12);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush16);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush13);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush14);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush15);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush16);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush17);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush16);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush16);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush13);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush13);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        setupIgniteButton->setPalette(palette3);
        setupIgniteButton->setFocusPolicy(Qt::NoFocus);
        setupStatuslabel = new QLabel(setupClass);
        setupStatuslabel->setObjectName(QString::fromUtf8("setupStatuslabel"));
        setupStatuslabel->setGeometry(QRect(370, 180, 41, 21));
        suFlameLineEdit = new QLineEdit(setupClass);
        suFlameLineEdit->setObjectName(QString::fromUtf8("suFlameLineEdit"));
        suFlameLineEdit->setGeometry(QRect(370, 230, 101, 31));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush18(QColor(240, 240, 240, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush18);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush6);
        QBrush brush19(QColor(247, 247, 247, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush19);
        QBrush brush20(QColor(120, 120, 120, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush20);
        QBrush brush21(QColor(160, 160, 160, 255));
        brush21.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush21);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush18);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush19);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush18);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush19);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush20);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush21);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush18);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush19);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush20);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush18);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush19);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush20);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush21);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush20);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush20);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush18);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush18);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush18);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        suFlameLineEdit->setPalette(palette4);
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        suFlameLineEdit->setFont(font2);
        suFlameLineEdit->setFocusPolicy(Qt::NoFocus);
        all1SpinBox = new QDoubleSpinBox(setupClass);
        all1SpinBox->setObjectName(QString::fromUtf8("all1SpinBox"));
        all1SpinBox->setGeometry(QRect(120, 60, 121, 31));
        all1SpinBox->setMinimumSize(QSize(91, 31));
        all1SpinBox->setMaximumSize(QSize(200, 200));
        all1SpinBox->setFont(font);
        all1SpinBox->setFocusPolicy(Qt::ClickFocus);
        all1SpinBox->setAlignment(Qt::AlignCenter);
        all1SpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        all1SpinBox->setCorrectionMode(QAbstractSpinBox::CorrectToNearestValue);
        all1SpinBox->setDecimals(1);
        all1SpinBox->setMaximum(99999);
        all2SpinBox = new QDoubleSpinBox(setupClass);
        all2SpinBox->setObjectName(QString::fromUtf8("all2SpinBox"));
        all2SpinBox->setGeometry(QRect(120, 100, 121, 31));
        all2SpinBox->setMinimumSize(QSize(91, 31));
        all2SpinBox->setMaximumSize(QSize(200, 200));
        all2SpinBox->setFont(font);
        all2SpinBox->setFocusPolicy(Qt::ClickFocus);
        all2SpinBox->setAlignment(Qt::AlignCenter);
        all2SpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        all2SpinBox->setCorrectionMode(QAbstractSpinBox::CorrectToNearestValue);
        all2SpinBox->setDecimals(1);
        all2SpinBox->setMaximum(99999);
        label_output_low = new QLabel(setupClass);
        label_output_low->setObjectName(QString::fromUtf8("label_output_low"));
        label_output_low->setGeometry(QRect(160, 40, 41, 17));
        layoutWidget = new QWidget(setupClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 103, 113));
        gridLayout_3 = new QGridLayout(layoutWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        enableAlarmCheckBox = new QCheckBox(layoutWidget);
        enableAlarmCheckBox->setObjectName(QString::fromUtf8("enableAlarmCheckBox"));
        enableAlarmCheckBox->setMinimumSize(QSize(31, 31));
        QFont font3;
        font3.setPointSize(12);
        enableAlarmCheckBox->setFont(font3);
        enableAlarmCheckBox->setFocusPolicy(Qt::TabFocus);
        enableAlarmCheckBox->setAcceptDrops(false);

        gridLayout_5->addWidget(enableAlarmCheckBox, 0, 0, 1, 1);

        detOnOffLabel_5 = new QLabel(layoutWidget);
        detOnOffLabel_5->setObjectName(QString::fromUtf8("detOnOffLabel_5"));

        gridLayout_5->addWidget(detOnOffLabel_5, 0, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_5, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        alarm1EnableCheckBox = new QCheckBox(layoutWidget);
        alarm1EnableCheckBox->setObjectName(QString::fromUtf8("alarm1EnableCheckBox"));
        alarm1EnableCheckBox->setMinimumSize(QSize(31, 31));
        alarm1EnableCheckBox->setFont(font3);
        alarm1EnableCheckBox->setFocusPolicy(Qt::TabFocus);
        alarm1EnableCheckBox->setAcceptDrops(false);

        gridLayout->addWidget(alarm1EnableCheckBox, 0, 0, 1, 1);

        label_output_volt = new QLabel(layoutWidget);
        label_output_volt->setObjectName(QString::fromUtf8("label_output_volt"));

        gridLayout->addWidget(label_output_volt, 0, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        alarm2EnableCheckBox = new QCheckBox(layoutWidget);
        alarm2EnableCheckBox->setObjectName(QString::fromUtf8("alarm2EnableCheckBox"));
        alarm2EnableCheckBox->setMinimumSize(QSize(31, 31));
        alarm2EnableCheckBox->setFont(font3);
        alarm2EnableCheckBox->setFocusPolicy(Qt::TabFocus);
        alarm2EnableCheckBox->setAcceptDrops(false);
        alarm2EnableCheckBox->setChecked(false);

        gridLayout_2->addWidget(alarm2EnableCheckBox, 0, 0, 1, 1);

        label_output_5 = new QLabel(layoutWidget);
        label_output_5->setObjectName(QString::fromUtf8("label_output_5"));

        gridLayout_2->addWidget(label_output_5, 0, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 2, 0, 1, 1);

        spAlarmL1lcdNumber = new QLCDNumber(setupClass);
        spAlarmL1lcdNumber->setObjectName(QString::fromUtf8("spAlarmL1lcdNumber"));
        spAlarmL1lcdNumber->setGeometry(QRect(490, 100, 101, 21));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setItalic(true);
        font4.setWeight(75);
        spAlarmL1lcdNumber->setFont(font4);
        spAlarmL1lcdNumber->setFrameShape(QFrame::NoFrame);
        spAlarmL1lcdNumber->setProperty("intValue", QVariant(0));
        spAlarmH1lcdNumber = new QLCDNumber(setupClass);
        spAlarmH1lcdNumber->setObjectName(QString::fromUtf8("spAlarmH1lcdNumber"));
        spAlarmH1lcdNumber->setGeometry(QRect(620, 100, 101, 21));
        spAlarmH1lcdNumber->setFont(font4);
        spAlarmH1lcdNumber->setFrameShape(QFrame::NoFrame);
        spAlarmH1lcdNumber->setProperty("intValue", QVariant(0));
        spAlarmL2lcdNumber = new QLCDNumber(setupClass);
        spAlarmL2lcdNumber->setObjectName(QString::fromUtf8("spAlarmL2lcdNumber"));
        spAlarmL2lcdNumber->setGeometry(QRect(490, 160, 101, 21));
        spAlarmL2lcdNumber->setFont(font4);
        spAlarmL2lcdNumber->setFrameShape(QFrame::NoFrame);
        spAlarmL2lcdNumber->setProperty("intValue", QVariant(0));
        spAlarmH2lcdNumber = new QLCDNumber(setupClass);
        spAlarmH2lcdNumber->setObjectName(QString::fromUtf8("spAlarmH2lcdNumber"));
        spAlarmH2lcdNumber->setGeometry(QRect(620, 160, 101, 21));
        spAlarmH2lcdNumber->setFont(font4);
        spAlarmH2lcdNumber->setFrameShape(QFrame::NoFrame);
        spAlarmH2lcdNumber->setFrameShadow(QFrame::Plain);
        spAlarmH2lcdNumber->setProperty("intValue", QVariant(0));
        spH2FlowlcdNumber = new QLCDNumber(setupClass);
        spH2FlowlcdNumber->setObjectName(QString::fromUtf8("spH2FlowlcdNumber"));
        spH2FlowlcdNumber->setGeometry(QRect(90, 160, 51, 20));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Ubuntu Mono"));
        font5.setPointSize(12);
        font5.setBold(true);
        font5.setItalic(false);
        font5.setWeight(75);
        spH2FlowlcdNumber->setFont(font5);
        spH2FlowlcdNumber->setFrameShape(QFrame::NoFrame);
        spH2FlowlcdNumber->setProperty("intValue", QVariant(0));
        spSampFlowlcdNumber = new QLCDNumber(setupClass);
        spSampFlowlcdNumber->setObjectName(QString::fromUtf8("spSampFlowlcdNumber"));
        spSampFlowlcdNumber->setGeometry(QRect(290, 160, 51, 20));
        spSampFlowlcdNumber->setFont(font5);
        spSampFlowlcdNumber->setFrameShape(QFrame::NoFrame);
        spSampFlowlcdNumber->setProperty("intValue", QVariant(0));
        spAirFlowlcdNumber = new QLCDNumber(setupClass);
        spAirFlowlcdNumber->setObjectName(QString::fromUtf8("spAirFlowlcdNumber"));
        spAirFlowlcdNumber->setGeometry(QRect(90, 210, 51, 20));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Ubuntu Mono"));
        font6.setPointSize(12);
        font6.setBold(false);
        font6.setItalic(false);
        font6.setWeight(50);
        spAirFlowlcdNumber->setFont(font6);
        spAirFlowlcdNumber->setFrameShape(QFrame::NoFrame);
        spAirFlowlcdNumber->setProperty("intValue", QVariant(0));
        spMethFlowlcdNumber = new QLCDNumber(setupClass);
        spMethFlowlcdNumber->setObjectName(QString::fromUtf8("spMethFlowlcdNumber"));
        spMethFlowlcdNumber->setGeometry(QRect(290, 210, 51, 20));
        QFont font7;
        font7.setPointSize(12);
        font7.setBold(false);
        font7.setItalic(false);
        font7.setWeight(50);
        spMethFlowlcdNumber->setFont(font7);
        spMethFlowlcdNumber->setFrameShape(QFrame::NoFrame);
        spMethFlowlcdNumber->setProperty("intValue", QVariant(0));
        QWidget::setTabOrder(enableAlarmCheckBox, alh1SpinBox);
        QWidget::setTabOrder(alh1SpinBox, alh2SpinBox);
        QWidget::setTabOrder(alh2SpinBox, fuelFlowSpinBox);
        QWidget::setTabOrder(fuelFlowSpinBox, airFlowSpinBox);
        QWidget::setTabOrder(airFlowSpinBox, sampFlowSpinBox);
        QWidget::setTabOrder(sampFlowSpinBox, endButton);

        retranslateUi(setupClass);
        QObject::connect(endButton, SIGNAL(released()), setupClass, SLOT(close()));
        QObject::connect(setupIgniteButton, SIGNAL(released()), setupClass, SLOT(igniteDet()));
        QObject::connect(setTempButton, SIGNAL(released()), setupClass, SLOT(sTsetTemp()));

        QMetaObject::connectSlotsByName(setupClass);
    } // setupUi

    void retranslateUi(QDialog *setupClass)
    {
        setupClass->setWindowTitle(QApplication::translate("setupClass", "setup", 0, QApplication::UnicodeUTF8));
        label_output_hi->setText(QApplication::translate("setupClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ff0000;\">HI</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        enalrmlLabel->setText(QApplication::translate("setupClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">ENABLE ALARM</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        endButton->setText(QApplication::translate("setupClass", "END", 0, QApplication::UnicodeUTF8));
        fuelFlowlabel->setText(QApplication::translate("setupClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; color:#ff0000;\">FUEL</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        airFlowlabel->setText(QApplication::translate("setupClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; color:#0055ff;\">AIR</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        sampleFlowlabel->setText(QApplication::translate("setupClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">SAMPLE</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        enalrmlLabel_2->setText(QApplication::translate("setupClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; text-decoration: underline; color:#ff0000;\">ALARM SETTINGS</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        pressurelabel->setText(QApplication::translate("setupClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; text-decoration: underline; color:#00aa00;\">FLOW</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        tempConfigButton->setText(QApplication::translate("setupClass", "Temp Config", 0, QApplication::UnicodeUTF8));
        setTempButton->setText(QApplication::translate("setupClass", "Set Temp", 0, QApplication::UnicodeUTF8));
        fuelFlowlabel_2->setText(QApplication::translate("setupClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; color:#ff0000;\">METH</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        setupIgniteButton->setText(QApplication::translate("setupClass", "IGNITE", 0, QApplication::UnicodeUTF8));
        setupStatuslabel->setText(QApplication::translate("setupClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">STATUS</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label_output_low->setText(QApplication::translate("setupClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#0055ff;\">LOW</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        enableAlarmCheckBox->setText(QString());
        detOnOffLabel_5->setText(QApplication::translate("setupClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; text-decoration: underline;\">ON/OFF</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        alarm1EnableCheckBox->setText(QString());
        label_output_volt->setText(QApplication::translate("setupClass", "ALARM 1", 0, QApplication::UnicodeUTF8));
        alarm2EnableCheckBox->setText(QString());
        label_output_5->setText(QApplication::translate("setupClass", "ALARM 2", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class setupClass: public Ui_setupClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETUP_H
