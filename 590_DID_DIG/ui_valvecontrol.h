/********************************************************************************
** Form generated from reading UI file 'valvecontrol.ui'
**
** Created: Tue Jan 7 12:49:34 2020
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VALVECONTROL_H
#define UI_VALVECONTROL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_valveControlClass
{
public:
    QGridLayout *gridLayout_12;
    QSpacerItem *horizontalSpacer_6;
    QGridLayout *gridLayout_11;
    QGridLayout *gridLayout_10;
    QGridLayout *gridLayout_8;
    QPushButton *v1a_pushButton;
    QCheckBox *valve_1_EnabledCheckBox;
    QGridLayout *gridLayout_7;
    QPushButton *v2a_pushButton;
    QCheckBox *valve_2_EnabledCheckBox;
    QGridLayout *gridLayout_6;
    QPushButton *v3a_pushButton;
    QCheckBox *valve_3_EnabledCheckBox;
    QGridLayout *gridLayout_5;
    QPushButton *v4a_pushButton;
    QCheckBox *valve_4_EnabledCheckBox;
    QGridLayout *gridLayout_4;
    QPushButton *v5a_pushButton;
    QCheckBox *valve_5_EnabledCheckBox;
    QGridLayout *gridLayout_3;
    QPushButton *v6a_pushButton;
    QCheckBox *valve_6_EnabledCheckBox;
    QGridLayout *gridLayout_2;
    QPushButton *v7a_pushButton;
    QCheckBox *valve_7_EnabledCheckBox;
    QGridLayout *gridLayout;
    QPushButton *v8a_pushButton;
    QCheckBox *valve_8_EnabledCheckBox;
    QGridLayout *gridLayout_9;
    QPushButton *v1b_pushButton;
    QPushButton *v2b_pushButton;
    QPushButton *v3b_pushButton;
    QPushButton *v4b_pushButton;
    QPushButton *v5b_pushButton;
    QPushButton *v6b_pushButton;
    QPushButton *v7b_pushButton;
    QPushButton *v8b_pushButton;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *ValveOkButton;

    void setupUi(QDialog *valveControlClass)
    {
        if (valveControlClass->objectName().isEmpty())
            valveControlClass->setObjectName(QString::fromUtf8("valveControlClass"));
        valveControlClass->resize(480, 800);
        gridLayout_12 = new QGridLayout(valveControlClass);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        horizontalSpacer_6 = new QSpacerItem(35, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_6, 0, 0, 1, 1);

        gridLayout_11 = new QGridLayout();
        gridLayout_11->setSpacing(6);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setSpacing(6);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(6);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        v1a_pushButton = new QPushButton(valveControlClass);
        v1a_pushButton->setObjectName(QString::fromUtf8("v1a_pushButton"));
        v1a_pushButton->setMinimumSize(QSize(85, 85));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(85, 255, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(170, 255, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(127, 255, 63, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(42, 127, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(56, 170, 0, 255));
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
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
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
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
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
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        v1a_pushButton->setPalette(palette);

        gridLayout_8->addWidget(v1a_pushButton, 0, 0, 1, 1);

        valve_1_EnabledCheckBox = new QCheckBox(valveControlClass);
        valve_1_EnabledCheckBox->setObjectName(QString::fromUtf8("valve_1_EnabledCheckBox"));

        gridLayout_8->addWidget(valve_1_EnabledCheckBox, 0, 1, 1, 1);


        gridLayout_10->addLayout(gridLayout_8, 0, 0, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(6);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        v2a_pushButton = new QPushButton(valveControlClass);
        v2a_pushButton->setObjectName(QString::fromUtf8("v2a_pushButton"));
        v2a_pushButton->setMinimumSize(QSize(85, 85));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush8(QColor(85, 255, 127, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush8);
        QBrush brush9(QColor(213, 255, 223, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush9);
        QBrush brush10(QColor(149, 255, 175, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        QBrush brush11(QColor(42, 127, 63, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush11);
        QBrush brush12(QColor(56, 170, 84, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush13(QColor(170, 255, 191, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        v2a_pushButton->setPalette(palette1);

        gridLayout_7->addWidget(v2a_pushButton, 0, 0, 1, 1);

        valve_2_EnabledCheckBox = new QCheckBox(valveControlClass);
        valve_2_EnabledCheckBox->setObjectName(QString::fromUtf8("valve_2_EnabledCheckBox"));

        gridLayout_7->addWidget(valve_2_EnabledCheckBox, 0, 1, 1, 1);


        gridLayout_10->addLayout(gridLayout_7, 1, 0, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        v3a_pushButton = new QPushButton(valveControlClass);
        v3a_pushButton->setObjectName(QString::fromUtf8("v3a_pushButton"));
        v3a_pushButton->setMinimumSize(QSize(85, 85));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush9);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush11);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        v3a_pushButton->setPalette(palette2);

        gridLayout_6->addWidget(v3a_pushButton, 0, 0, 1, 1);

        valve_3_EnabledCheckBox = new QCheckBox(valveControlClass);
        valve_3_EnabledCheckBox->setObjectName(QString::fromUtf8("valve_3_EnabledCheckBox"));

        gridLayout_6->addWidget(valve_3_EnabledCheckBox, 0, 1, 1, 1);


        gridLayout_10->addLayout(gridLayout_6, 2, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        v4a_pushButton = new QPushButton(valveControlClass);
        v4a_pushButton->setObjectName(QString::fromUtf8("v4a_pushButton"));
        v4a_pushButton->setMinimumSize(QSize(85, 85));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush9);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush11);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        v4a_pushButton->setPalette(palette3);

        gridLayout_5->addWidget(v4a_pushButton, 0, 0, 1, 1);

        valve_4_EnabledCheckBox = new QCheckBox(valveControlClass);
        valve_4_EnabledCheckBox->setObjectName(QString::fromUtf8("valve_4_EnabledCheckBox"));

        gridLayout_5->addWidget(valve_4_EnabledCheckBox, 0, 1, 1, 1);


        gridLayout_10->addLayout(gridLayout_5, 3, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        v5a_pushButton = new QPushButton(valveControlClass);
        v5a_pushButton->setObjectName(QString::fromUtf8("v5a_pushButton"));
        v5a_pushButton->setMinimumSize(QSize(85, 85));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush9);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush11);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        v5a_pushButton->setPalette(palette4);

        gridLayout_4->addWidget(v5a_pushButton, 0, 0, 1, 1);

        valve_5_EnabledCheckBox = new QCheckBox(valveControlClass);
        valve_5_EnabledCheckBox->setObjectName(QString::fromUtf8("valve_5_EnabledCheckBox"));

        gridLayout_4->addWidget(valve_5_EnabledCheckBox, 0, 1, 1, 1);


        gridLayout_10->addLayout(gridLayout_4, 4, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        v6a_pushButton = new QPushButton(valveControlClass);
        v6a_pushButton->setObjectName(QString::fromUtf8("v6a_pushButton"));
        v6a_pushButton->setMinimumSize(QSize(85, 85));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush9);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush11);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        v6a_pushButton->setPalette(palette5);

        gridLayout_3->addWidget(v6a_pushButton, 0, 0, 1, 1);

        valve_6_EnabledCheckBox = new QCheckBox(valveControlClass);
        valve_6_EnabledCheckBox->setObjectName(QString::fromUtf8("valve_6_EnabledCheckBox"));

        gridLayout_3->addWidget(valve_6_EnabledCheckBox, 0, 1, 1, 1);


        gridLayout_10->addLayout(gridLayout_3, 5, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        v7a_pushButton = new QPushButton(valveControlClass);
        v7a_pushButton->setObjectName(QString::fromUtf8("v7a_pushButton"));
        v7a_pushButton->setMinimumSize(QSize(85, 85));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush9);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush11);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        v7a_pushButton->setPalette(palette6);

        gridLayout_2->addWidget(v7a_pushButton, 0, 0, 1, 1);

        valve_7_EnabledCheckBox = new QCheckBox(valveControlClass);
        valve_7_EnabledCheckBox->setObjectName(QString::fromUtf8("valve_7_EnabledCheckBox"));

        gridLayout_2->addWidget(valve_7_EnabledCheckBox, 0, 1, 1, 1);


        gridLayout_10->addLayout(gridLayout_2, 6, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        v8a_pushButton = new QPushButton(valveControlClass);
        v8a_pushButton->setObjectName(QString::fromUtf8("v8a_pushButton"));
        v8a_pushButton->setMinimumSize(QSize(85, 85));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette7.setBrush(QPalette::Active, QPalette::Light, brush9);
        palette7.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush11);
        palette7.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush);
        palette7.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette7.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette7.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette7.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette7.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette7.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette7.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette7.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette7.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette7.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette7.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        v8a_pushButton->setPalette(palette7);

        gridLayout->addWidget(v8a_pushButton, 0, 0, 1, 1);

        valve_8_EnabledCheckBox = new QCheckBox(valveControlClass);
        valve_8_EnabledCheckBox->setObjectName(QString::fromUtf8("valve_8_EnabledCheckBox"));

        gridLayout->addWidget(valve_8_EnabledCheckBox, 0, 1, 1, 1);


        gridLayout_10->addLayout(gridLayout, 7, 0, 1, 1);


        gridLayout_11->addLayout(gridLayout_10, 0, 0, 1, 1);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setSpacing(6);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        v1b_pushButton = new QPushButton(valveControlClass);
        v1b_pushButton->setObjectName(QString::fromUtf8("v1b_pushButton"));
        v1b_pushButton->setMinimumSize(QSize(85, 85));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush14(QColor(255, 170, 127, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush14);
        palette8.setBrush(QPalette::Active, QPalette::Light, brush6);
        QBrush brush15(QColor(255, 212, 191, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Midlight, brush15);
        QBrush brush16(QColor(127, 85, 63, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush16);
        QBrush brush17(QColor(170, 113, 84, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Mid, brush17);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush);
        palette8.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush14);
        palette8.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Active, QPalette::AlternateBase, brush15);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush14);
        palette8.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Midlight, brush15);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush16);
        palette8.setBrush(QPalette::Inactive, QPalette::Mid, brush17);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush14);
        palette8.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush16);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush14);
        palette8.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::Midlight, brush15);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush16);
        palette8.setBrush(QPalette::Disabled, QPalette::Mid, brush17);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush16);
        palette8.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush16);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush14);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush14);
        palette8.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush14);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        v1b_pushButton->setPalette(palette8);

        gridLayout_9->addWidget(v1b_pushButton, 0, 0, 1, 1);

        v2b_pushButton = new QPushButton(valveControlClass);
        v2b_pushButton->setObjectName(QString::fromUtf8("v2b_pushButton"));
        v2b_pushButton->setMinimumSize(QSize(85, 85));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush14);
        palette9.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette9.setBrush(QPalette::Active, QPalette::Midlight, brush15);
        palette9.setBrush(QPalette::Active, QPalette::Dark, brush16);
        palette9.setBrush(QPalette::Active, QPalette::Mid, brush17);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush);
        palette9.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush14);
        palette9.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette9.setBrush(QPalette::Active, QPalette::AlternateBase, brush15);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush14);
        palette9.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Midlight, brush15);
        palette9.setBrush(QPalette::Inactive, QPalette::Dark, brush16);
        palette9.setBrush(QPalette::Inactive, QPalette::Mid, brush17);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush14);
        palette9.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush16);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush14);
        palette9.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::Midlight, brush15);
        palette9.setBrush(QPalette::Disabled, QPalette::Dark, brush16);
        palette9.setBrush(QPalette::Disabled, QPalette::Mid, brush17);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush16);
        palette9.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush16);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush14);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush14);
        palette9.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush14);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        v2b_pushButton->setPalette(palette9);

        gridLayout_9->addWidget(v2b_pushButton, 1, 0, 1, 1);

        v3b_pushButton = new QPushButton(valveControlClass);
        v3b_pushButton->setObjectName(QString::fromUtf8("v3b_pushButton"));
        v3b_pushButton->setMinimumSize(QSize(85, 85));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush14);
        palette10.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette10.setBrush(QPalette::Active, QPalette::Midlight, brush15);
        palette10.setBrush(QPalette::Active, QPalette::Dark, brush16);
        palette10.setBrush(QPalette::Active, QPalette::Mid, brush17);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush);
        palette10.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush14);
        palette10.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette10.setBrush(QPalette::Active, QPalette::AlternateBase, brush15);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush14);
        palette10.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::Midlight, brush15);
        palette10.setBrush(QPalette::Inactive, QPalette::Dark, brush16);
        palette10.setBrush(QPalette::Inactive, QPalette::Mid, brush17);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush14);
        palette10.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush16);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush14);
        palette10.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::Midlight, brush15);
        palette10.setBrush(QPalette::Disabled, QPalette::Dark, brush16);
        palette10.setBrush(QPalette::Disabled, QPalette::Mid, brush17);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush16);
        palette10.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush16);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush14);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush14);
        palette10.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush14);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        v3b_pushButton->setPalette(palette10);

        gridLayout_9->addWidget(v3b_pushButton, 2, 0, 1, 1);

        v4b_pushButton = new QPushButton(valveControlClass);
        v4b_pushButton->setObjectName(QString::fromUtf8("v4b_pushButton"));
        v4b_pushButton->setMinimumSize(QSize(85, 85));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush14);
        palette11.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette11.setBrush(QPalette::Active, QPalette::Midlight, brush15);
        palette11.setBrush(QPalette::Active, QPalette::Dark, brush16);
        palette11.setBrush(QPalette::Active, QPalette::Mid, brush17);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush);
        palette11.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush14);
        palette11.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette11.setBrush(QPalette::Active, QPalette::AlternateBase, brush15);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush14);
        palette11.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::Midlight, brush15);
        palette11.setBrush(QPalette::Inactive, QPalette::Dark, brush16);
        palette11.setBrush(QPalette::Inactive, QPalette::Mid, brush17);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush14);
        palette11.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush16);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush14);
        palette11.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::Midlight, brush15);
        palette11.setBrush(QPalette::Disabled, QPalette::Dark, brush16);
        palette11.setBrush(QPalette::Disabled, QPalette::Mid, brush17);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush16);
        palette11.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush16);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush14);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush14);
        palette11.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush14);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        v4b_pushButton->setPalette(palette11);

        gridLayout_9->addWidget(v4b_pushButton, 3, 0, 1, 1);

        v5b_pushButton = new QPushButton(valveControlClass);
        v5b_pushButton->setObjectName(QString::fromUtf8("v5b_pushButton"));
        v5b_pushButton->setMinimumSize(QSize(85, 85));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush14);
        palette12.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette12.setBrush(QPalette::Active, QPalette::Midlight, brush15);
        palette12.setBrush(QPalette::Active, QPalette::Dark, brush16);
        palette12.setBrush(QPalette::Active, QPalette::Mid, brush17);
        palette12.setBrush(QPalette::Active, QPalette::Text, brush);
        palette12.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush14);
        palette12.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette12.setBrush(QPalette::Active, QPalette::AlternateBase, brush15);
        palette12.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette12.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush14);
        palette12.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::Midlight, brush15);
        palette12.setBrush(QPalette::Inactive, QPalette::Dark, brush16);
        palette12.setBrush(QPalette::Inactive, QPalette::Mid, brush17);
        palette12.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush14);
        palette12.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette12.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette12.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush16);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush14);
        palette12.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::Midlight, brush15);
        palette12.setBrush(QPalette::Disabled, QPalette::Dark, brush16);
        palette12.setBrush(QPalette::Disabled, QPalette::Mid, brush17);
        palette12.setBrush(QPalette::Disabled, QPalette::Text, brush16);
        palette12.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush16);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush14);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush14);
        palette12.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush14);
        palette12.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette12.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        v5b_pushButton->setPalette(palette12);

        gridLayout_9->addWidget(v5b_pushButton, 4, 0, 1, 1);

        v6b_pushButton = new QPushButton(valveControlClass);
        v6b_pushButton->setObjectName(QString::fromUtf8("v6b_pushButton"));
        v6b_pushButton->setMinimumSize(QSize(85, 85));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Button, brush14);
        palette13.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette13.setBrush(QPalette::Active, QPalette::Midlight, brush15);
        palette13.setBrush(QPalette::Active, QPalette::Dark, brush16);
        palette13.setBrush(QPalette::Active, QPalette::Mid, brush17);
        palette13.setBrush(QPalette::Active, QPalette::Text, brush);
        palette13.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush14);
        palette13.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette13.setBrush(QPalette::Active, QPalette::AlternateBase, brush15);
        palette13.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette13.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush14);
        palette13.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::Midlight, brush15);
        palette13.setBrush(QPalette::Inactive, QPalette::Dark, brush16);
        palette13.setBrush(QPalette::Inactive, QPalette::Mid, brush17);
        palette13.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush14);
        palette13.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette13.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette13.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush16);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush14);
        palette13.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette13.setBrush(QPalette::Disabled, QPalette::Midlight, brush15);
        palette13.setBrush(QPalette::Disabled, QPalette::Dark, brush16);
        palette13.setBrush(QPalette::Disabled, QPalette::Mid, brush17);
        palette13.setBrush(QPalette::Disabled, QPalette::Text, brush16);
        palette13.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush16);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush14);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush14);
        palette13.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush14);
        palette13.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette13.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        v6b_pushButton->setPalette(palette13);

        gridLayout_9->addWidget(v6b_pushButton, 5, 0, 1, 1);

        v7b_pushButton = new QPushButton(valveControlClass);
        v7b_pushButton->setObjectName(QString::fromUtf8("v7b_pushButton"));
        v7b_pushButton->setMinimumSize(QSize(85, 85));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Active, QPalette::Button, brush14);
        palette14.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette14.setBrush(QPalette::Active, QPalette::Midlight, brush15);
        palette14.setBrush(QPalette::Active, QPalette::Dark, brush16);
        palette14.setBrush(QPalette::Active, QPalette::Mid, brush17);
        palette14.setBrush(QPalette::Active, QPalette::Text, brush);
        palette14.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette14.setBrush(QPalette::Active, QPalette::Window, brush14);
        palette14.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette14.setBrush(QPalette::Active, QPalette::AlternateBase, brush15);
        palette14.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette14.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush14);
        palette14.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::Midlight, brush15);
        palette14.setBrush(QPalette::Inactive, QPalette::Dark, brush16);
        palette14.setBrush(QPalette::Inactive, QPalette::Mid, brush17);
        palette14.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::Window, brush14);
        palette14.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette14.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette14.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush16);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush14);
        palette14.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette14.setBrush(QPalette::Disabled, QPalette::Midlight, brush15);
        palette14.setBrush(QPalette::Disabled, QPalette::Dark, brush16);
        palette14.setBrush(QPalette::Disabled, QPalette::Mid, brush17);
        palette14.setBrush(QPalette::Disabled, QPalette::Text, brush16);
        palette14.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush16);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush14);
        palette14.setBrush(QPalette::Disabled, QPalette::Window, brush14);
        palette14.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush14);
        palette14.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette14.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        v7b_pushButton->setPalette(palette14);

        gridLayout_9->addWidget(v7b_pushButton, 6, 0, 1, 1);

        v8b_pushButton = new QPushButton(valveControlClass);
        v8b_pushButton->setObjectName(QString::fromUtf8("v8b_pushButton"));
        v8b_pushButton->setMinimumSize(QSize(85, 85));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Active, QPalette::Button, brush14);
        palette15.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette15.setBrush(QPalette::Active, QPalette::Midlight, brush15);
        palette15.setBrush(QPalette::Active, QPalette::Dark, brush16);
        palette15.setBrush(QPalette::Active, QPalette::Mid, brush17);
        palette15.setBrush(QPalette::Active, QPalette::Text, brush);
        palette15.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette15.setBrush(QPalette::Active, QPalette::Window, brush14);
        palette15.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette15.setBrush(QPalette::Active, QPalette::AlternateBase, brush15);
        palette15.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette15.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Button, brush14);
        palette15.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette15.setBrush(QPalette::Inactive, QPalette::Midlight, brush15);
        palette15.setBrush(QPalette::Inactive, QPalette::Dark, brush16);
        palette15.setBrush(QPalette::Inactive, QPalette::Mid, brush17);
        palette15.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette15.setBrush(QPalette::Inactive, QPalette::Window, brush14);
        palette15.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette15.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette15.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush16);
        palette15.setBrush(QPalette::Disabled, QPalette::Button, brush14);
        palette15.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette15.setBrush(QPalette::Disabled, QPalette::Midlight, brush15);
        palette15.setBrush(QPalette::Disabled, QPalette::Dark, brush16);
        palette15.setBrush(QPalette::Disabled, QPalette::Mid, brush17);
        palette15.setBrush(QPalette::Disabled, QPalette::Text, brush16);
        palette15.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush16);
        palette15.setBrush(QPalette::Disabled, QPalette::Base, brush14);
        palette15.setBrush(QPalette::Disabled, QPalette::Window, brush14);
        palette15.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush14);
        palette15.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette15.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        v8b_pushButton->setPalette(palette15);

        gridLayout_9->addWidget(v8b_pushButton, 7, 0, 1, 1);


        gridLayout_11->addLayout(gridLayout_9, 0, 1, 1, 1);


        gridLayout_12->addLayout(gridLayout_11, 0, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(37, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_7, 0, 2, 1, 1);

        ValveOkButton = new QPushButton(valveControlClass);
        ValveOkButton->setObjectName(QString::fromUtf8("ValveOkButton"));
        ValveOkButton->setMinimumSize(QSize(81, 61));

        gridLayout_12->addWidget(ValveOkButton, 1, 1, 1, 1);


        retranslateUi(valveControlClass);
        QObject::connect(ValveOkButton, SIGNAL(clicked()), valveControlClass, SLOT(close()));

        QMetaObject::connectSlotsByName(valveControlClass);
    } // setupUi

    void retranslateUi(QDialog *valveControlClass)
    {
        valveControlClass->setWindowTitle(QApplication::translate("valveControlClass", "valveControl", 0, QApplication::UnicodeUTF8));
        v1a_pushButton->setText(QApplication::translate("valveControlClass", "Valve 1\n"
"On", 0, QApplication::UnicodeUTF8));
        valve_1_EnabledCheckBox->setText(QString());
        v2a_pushButton->setText(QApplication::translate("valveControlClass", "Split\n"
"On", 0, QApplication::UnicodeUTF8));
        valve_2_EnabledCheckBox->setText(QString());
        v3a_pushButton->setText(QApplication::translate("valveControlClass", "Valve 3\n"
"On", 0, QApplication::UnicodeUTF8));
        valve_3_EnabledCheckBox->setText(QString());
        v4a_pushButton->setText(QApplication::translate("valveControlClass", "Valve 4\n"
"On", 0, QApplication::UnicodeUTF8));
        valve_4_EnabledCheckBox->setText(QString());
        v5a_pushButton->setText(QApplication::translate("valveControlClass", "Valve 5\n"
"On", 0, QApplication::UnicodeUTF8));
        valve_5_EnabledCheckBox->setText(QString());
        v6a_pushButton->setText(QApplication::translate("valveControlClass", "Valve 6\n"
"On", 0, QApplication::UnicodeUTF8));
        valve_6_EnabledCheckBox->setText(QString());
        v7a_pushButton->setText(QApplication::translate("valveControlClass", "Valve 7\n"
"On", 0, QApplication::UnicodeUTF8));
        valve_7_EnabledCheckBox->setText(QString());
        v8a_pushButton->setText(QApplication::translate("valveControlClass", "Valve 8\n"
"On", 0, QApplication::UnicodeUTF8));
        valve_8_EnabledCheckBox->setText(QString());
        v1b_pushButton->setText(QApplication::translate("valveControlClass", "Valve 1\n"
"Off", 0, QApplication::UnicodeUTF8));
        v2b_pushButton->setText(QApplication::translate("valveControlClass", "Split\n"
"Off", 0, QApplication::UnicodeUTF8));
        v3b_pushButton->setText(QApplication::translate("valveControlClass", "Valve 3\n"
"Off", 0, QApplication::UnicodeUTF8));
        v4b_pushButton->setText(QApplication::translate("valveControlClass", "Valve 4\n"
"Off", 0, QApplication::UnicodeUTF8));
        v5b_pushButton->setText(QApplication::translate("valveControlClass", "Valve5\n"
"Off", 0, QApplication::UnicodeUTF8));
        v6b_pushButton->setText(QApplication::translate("valveControlClass", "Valve 6\n"
"Off", 0, QApplication::UnicodeUTF8));
        v7b_pushButton->setText(QApplication::translate("valveControlClass", "Valve 7\n"
"Off", 0, QApplication::UnicodeUTF8));
        v8b_pushButton->setText(QApplication::translate("valveControlClass", "Valve 8\n"
"Off", 0, QApplication::UnicodeUTF8));
        ValveOkButton->setText(QApplication::translate("valveControlClass", "OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class valveControlClass: public Ui_valveControlClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VALVECONTROL_H
