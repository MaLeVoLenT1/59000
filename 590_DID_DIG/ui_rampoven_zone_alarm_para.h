/********************************************************************************
** Form generated from reading UI file 'rampoven_zone_alarm_para.ui'
**
** Created: Wed Jan 29 12:39:03 2020
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RAMPOVEN_ZONE_ALARM_PARA_H
#define UI_RAMPOVEN_ZONE_ALARM_PARA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rampoven_Zone_Alarm_paraClass
{
public:
    QPushButton *writeDataButton;
    QPushButton *closeButton;
    QPushButton *ReadDataButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *ro_Alarm_One_Action_Label;
    QDoubleSpinBox *ro_Alarm_One_Action_SpinBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *ro_Alarm_One_Delay_Label;
    QDoubleSpinBox *ro_Alarm_One_Delay_SpinBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *ro_Alarm_One_Setpoint_Label;
    QDoubleSpinBox *ro_Alarm_One_Setpoint_SpinBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *ro_Alarm_One_OP_Label;
    QDoubleSpinBox *ro_Alarm_One_OP_SpinBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *ro_Alarm_One_Inhibit_Label;
    QDoubleSpinBox *ro_Alarm_One_Inhibit_SpinBox;
    QHBoxLayout *horizontalLayout_6;
    QLabel *ro_Alarm_One_Deviation_Label;
    QDoubleSpinBox *ro_Alarm_One_Deviation_SpinBox;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *ro_Alarm_Two_Action_Label;
    QDoubleSpinBox *ro_Alarm_Two_Action_SpinBox;
    QHBoxLayout *horizontalLayout_10;
    QLabel *ro_Alarm_Two_Delay_Label;
    QDoubleSpinBox *ro_Alarm_Two_Delay_SpinBox;
    QHBoxLayout *horizontalLayout_11;
    QLabel *ro_Alarm_Two_Setpoint_Label;
    QDoubleSpinBox *ro_Alarm_Two_Setpoint_SpinBox;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_12;
    QLabel *ro_Alarm_Two_OP_Label;
    QDoubleSpinBox *ro_Alarm_Two_OP_SpinBox;
    QHBoxLayout *horizontalLayout_13;
    QLabel *ro_Alarm_Two_Inhibit_Label;
    QDoubleSpinBox *ro_Alarm_Two_Inhibit_SpinBox;
    QHBoxLayout *horizontalLayout_14;
    QLabel *ro_Alarm_Two_Deviation_Label;
    QDoubleSpinBox *ro_Alarm_Two_Deviation_SpinBox;

    void setupUi(QDialog *rampoven_Zone_Alarm_paraClass)
    {
        if (rampoven_Zone_Alarm_paraClass->objectName().isEmpty())
            rampoven_Zone_Alarm_paraClass->setObjectName(QString::fromUtf8("rampoven_Zone_Alarm_paraClass"));
        rampoven_Zone_Alarm_paraClass->resize(400, 356);
        writeDataButton = new QPushButton(rampoven_Zone_Alarm_paraClass);
        writeDataButton->setObjectName(QString::fromUtf8("writeDataButton"));
        writeDataButton->setGeometry(QRect(260, 300, 111, 41));
        writeDataButton->setMinimumSize(QSize(111, 41));
        writeDataButton->setMaximumSize(QSize(111, 41));
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
        writeDataButton->setPalette(palette);
        closeButton = new QPushButton(rampoven_Zone_Alarm_paraClass);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(140, 300, 111, 41));
        closeButton->setMinimumSize(QSize(111, 41));
        closeButton->setMaximumSize(QSize(111, 41));
        ReadDataButton = new QPushButton(rampoven_Zone_Alarm_paraClass);
        ReadDataButton->setObjectName(QString::fromUtf8("ReadDataButton"));
        ReadDataButton->setGeometry(QRect(20, 300, 111, 41));
        ReadDataButton->setMinimumSize(QSize(111, 41));
        ReadDataButton->setMaximumSize(QSize(111, 41));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        ReadDataButton->setPalette(palette1);
        layoutWidget = new QWidget(rampoven_Zone_Alarm_paraClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(24, 10, 341, 280));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ro_Alarm_One_Action_Label = new QLabel(layoutWidget);
        ro_Alarm_One_Action_Label->setObjectName(QString::fromUtf8("ro_Alarm_One_Action_Label"));

        horizontalLayout->addWidget(ro_Alarm_One_Action_Label);

        ro_Alarm_One_Action_SpinBox = new QDoubleSpinBox(layoutWidget);
        ro_Alarm_One_Action_SpinBox->setObjectName(QString::fromUtf8("ro_Alarm_One_Action_SpinBox"));
        QFont font;
        font.setPointSize(18);
        ro_Alarm_One_Action_SpinBox->setFont(font);
        ro_Alarm_One_Action_SpinBox->setDecimals(0);
        ro_Alarm_One_Action_SpinBox->setMinimum(1);
        ro_Alarm_One_Action_SpinBox->setMaximum(4);
        ro_Alarm_One_Action_SpinBox->setValue(1);

        horizontalLayout->addWidget(ro_Alarm_One_Action_SpinBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        ro_Alarm_One_Delay_Label = new QLabel(layoutWidget);
        ro_Alarm_One_Delay_Label->setObjectName(QString::fromUtf8("ro_Alarm_One_Delay_Label"));

        horizontalLayout_3->addWidget(ro_Alarm_One_Delay_Label);

        ro_Alarm_One_Delay_SpinBox = new QDoubleSpinBox(layoutWidget);
        ro_Alarm_One_Delay_SpinBox->setObjectName(QString::fromUtf8("ro_Alarm_One_Delay_SpinBox"));
        ro_Alarm_One_Delay_SpinBox->setFont(font);
        ro_Alarm_One_Delay_SpinBox->setDecimals(0);
        ro_Alarm_One_Delay_SpinBox->setMinimum(0);
        ro_Alarm_One_Delay_SpinBox->setMaximum(9999);
        ro_Alarm_One_Delay_SpinBox->setValue(0);

        horizontalLayout_3->addWidget(ro_Alarm_One_Delay_SpinBox);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        ro_Alarm_One_Setpoint_Label = new QLabel(layoutWidget);
        ro_Alarm_One_Setpoint_Label->setObjectName(QString::fromUtf8("ro_Alarm_One_Setpoint_Label"));

        horizontalLayout_5->addWidget(ro_Alarm_One_Setpoint_Label);

        ro_Alarm_One_Setpoint_SpinBox = new QDoubleSpinBox(layoutWidget);
        ro_Alarm_One_Setpoint_SpinBox->setObjectName(QString::fromUtf8("ro_Alarm_One_Setpoint_SpinBox"));
        ro_Alarm_One_Setpoint_SpinBox->setFont(font);
        ro_Alarm_One_Setpoint_SpinBox->setDecimals(0);
        ro_Alarm_One_Setpoint_SpinBox->setMinimum(77);
        ro_Alarm_One_Setpoint_SpinBox->setMaximum(1728);
        ro_Alarm_One_Setpoint_SpinBox->setValue(77);

        horizontalLayout_5->addWidget(ro_Alarm_One_Setpoint_SpinBox);


        verticalLayout->addLayout(horizontalLayout_5);


        horizontalLayout_7->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        ro_Alarm_One_OP_Label = new QLabel(layoutWidget);
        ro_Alarm_One_OP_Label->setObjectName(QString::fromUtf8("ro_Alarm_One_OP_Label"));

        horizontalLayout_2->addWidget(ro_Alarm_One_OP_Label);

        ro_Alarm_One_OP_SpinBox = new QDoubleSpinBox(layoutWidget);
        ro_Alarm_One_OP_SpinBox->setObjectName(QString::fromUtf8("ro_Alarm_One_OP_SpinBox"));
        ro_Alarm_One_OP_SpinBox->setFont(font);
        ro_Alarm_One_OP_SpinBox->setDecimals(0);
        ro_Alarm_One_OP_SpinBox->setMinimum(1);
        ro_Alarm_One_OP_SpinBox->setMaximum(6);
        ro_Alarm_One_OP_SpinBox->setValue(1);

        horizontalLayout_2->addWidget(ro_Alarm_One_OP_SpinBox);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        ro_Alarm_One_Inhibit_Label = new QLabel(layoutWidget);
        ro_Alarm_One_Inhibit_Label->setObjectName(QString::fromUtf8("ro_Alarm_One_Inhibit_Label"));

        horizontalLayout_4->addWidget(ro_Alarm_One_Inhibit_Label);

        ro_Alarm_One_Inhibit_SpinBox = new QDoubleSpinBox(layoutWidget);
        ro_Alarm_One_Inhibit_SpinBox->setObjectName(QString::fromUtf8("ro_Alarm_One_Inhibit_SpinBox"));
        ro_Alarm_One_Inhibit_SpinBox->setFont(font);
        ro_Alarm_One_Inhibit_SpinBox->setDecimals(0);
        ro_Alarm_One_Inhibit_SpinBox->setMinimum(0);
        ro_Alarm_One_Inhibit_SpinBox->setMaximum(9999);
        ro_Alarm_One_Inhibit_SpinBox->setValue(0);

        horizontalLayout_4->addWidget(ro_Alarm_One_Inhibit_SpinBox);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        ro_Alarm_One_Deviation_Label = new QLabel(layoutWidget);
        ro_Alarm_One_Deviation_Label->setObjectName(QString::fromUtf8("ro_Alarm_One_Deviation_Label"));

        horizontalLayout_6->addWidget(ro_Alarm_One_Deviation_Label);

        ro_Alarm_One_Deviation_SpinBox = new QDoubleSpinBox(layoutWidget);
        ro_Alarm_One_Deviation_SpinBox->setObjectName(QString::fromUtf8("ro_Alarm_One_Deviation_SpinBox"));
        ro_Alarm_One_Deviation_SpinBox->setFont(font);
        ro_Alarm_One_Deviation_SpinBox->setDecimals(0);
        ro_Alarm_One_Deviation_SpinBox->setMinimum(1);
        ro_Alarm_One_Deviation_SpinBox->setMaximum(1728);
        ro_Alarm_One_Deviation_SpinBox->setValue(1728);

        horizontalLayout_6->addWidget(ro_Alarm_One_Deviation_SpinBox);


        verticalLayout_2->addLayout(horizontalLayout_6);


        horizontalLayout_7->addLayout(verticalLayout_2);


        verticalLayout_5->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        ro_Alarm_Two_Action_Label = new QLabel(layoutWidget);
        ro_Alarm_Two_Action_Label->setObjectName(QString::fromUtf8("ro_Alarm_Two_Action_Label"));

        horizontalLayout_9->addWidget(ro_Alarm_Two_Action_Label);

        ro_Alarm_Two_Action_SpinBox = new QDoubleSpinBox(layoutWidget);
        ro_Alarm_Two_Action_SpinBox->setObjectName(QString::fromUtf8("ro_Alarm_Two_Action_SpinBox"));
        ro_Alarm_Two_Action_SpinBox->setFont(font);
        ro_Alarm_Two_Action_SpinBox->setDecimals(0);
        ro_Alarm_Two_Action_SpinBox->setMinimum(1);
        ro_Alarm_Two_Action_SpinBox->setMaximum(4);
        ro_Alarm_Two_Action_SpinBox->setValue(1);

        horizontalLayout_9->addWidget(ro_Alarm_Two_Action_SpinBox);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        ro_Alarm_Two_Delay_Label = new QLabel(layoutWidget);
        ro_Alarm_Two_Delay_Label->setObjectName(QString::fromUtf8("ro_Alarm_Two_Delay_Label"));

        horizontalLayout_10->addWidget(ro_Alarm_Two_Delay_Label);

        ro_Alarm_Two_Delay_SpinBox = new QDoubleSpinBox(layoutWidget);
        ro_Alarm_Two_Delay_SpinBox->setObjectName(QString::fromUtf8("ro_Alarm_Two_Delay_SpinBox"));
        ro_Alarm_Two_Delay_SpinBox->setFont(font);
        ro_Alarm_Two_Delay_SpinBox->setDecimals(0);
        ro_Alarm_Two_Delay_SpinBox->setMinimum(0);
        ro_Alarm_Two_Delay_SpinBox->setMaximum(9999);
        ro_Alarm_Two_Delay_SpinBox->setValue(0);

        horizontalLayout_10->addWidget(ro_Alarm_Two_Delay_SpinBox);


        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        ro_Alarm_Two_Setpoint_Label = new QLabel(layoutWidget);
        ro_Alarm_Two_Setpoint_Label->setObjectName(QString::fromUtf8("ro_Alarm_Two_Setpoint_Label"));

        horizontalLayout_11->addWidget(ro_Alarm_Two_Setpoint_Label);

        ro_Alarm_Two_Setpoint_SpinBox = new QDoubleSpinBox(layoutWidget);
        ro_Alarm_Two_Setpoint_SpinBox->setObjectName(QString::fromUtf8("ro_Alarm_Two_Setpoint_SpinBox"));
        ro_Alarm_Two_Setpoint_SpinBox->setFont(font);
        ro_Alarm_Two_Setpoint_SpinBox->setDecimals(0);
        ro_Alarm_Two_Setpoint_SpinBox->setMinimum(77);
        ro_Alarm_Two_Setpoint_SpinBox->setMaximum(1728);
        ro_Alarm_Two_Setpoint_SpinBox->setValue(77);

        horizontalLayout_11->addWidget(ro_Alarm_Two_Setpoint_SpinBox);


        verticalLayout_3->addLayout(horizontalLayout_11);


        horizontalLayout_8->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        ro_Alarm_Two_OP_Label = new QLabel(layoutWidget);
        ro_Alarm_Two_OP_Label->setObjectName(QString::fromUtf8("ro_Alarm_Two_OP_Label"));

        horizontalLayout_12->addWidget(ro_Alarm_Two_OP_Label);

        ro_Alarm_Two_OP_SpinBox = new QDoubleSpinBox(layoutWidget);
        ro_Alarm_Two_OP_SpinBox->setObjectName(QString::fromUtf8("ro_Alarm_Two_OP_SpinBox"));
        ro_Alarm_Two_OP_SpinBox->setFont(font);
        ro_Alarm_Two_OP_SpinBox->setDecimals(0);
        ro_Alarm_Two_OP_SpinBox->setMinimum(1);
        ro_Alarm_Two_OP_SpinBox->setMaximum(6);
        ro_Alarm_Two_OP_SpinBox->setValue(1);

        horizontalLayout_12->addWidget(ro_Alarm_Two_OP_SpinBox);


        verticalLayout_4->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        ro_Alarm_Two_Inhibit_Label = new QLabel(layoutWidget);
        ro_Alarm_Two_Inhibit_Label->setObjectName(QString::fromUtf8("ro_Alarm_Two_Inhibit_Label"));

        horizontalLayout_13->addWidget(ro_Alarm_Two_Inhibit_Label);

        ro_Alarm_Two_Inhibit_SpinBox = new QDoubleSpinBox(layoutWidget);
        ro_Alarm_Two_Inhibit_SpinBox->setObjectName(QString::fromUtf8("ro_Alarm_Two_Inhibit_SpinBox"));
        ro_Alarm_Two_Inhibit_SpinBox->setFont(font);
        ro_Alarm_Two_Inhibit_SpinBox->setDecimals(0);
        ro_Alarm_Two_Inhibit_SpinBox->setMinimum(0);
        ro_Alarm_Two_Inhibit_SpinBox->setMaximum(9999);
        ro_Alarm_Two_Inhibit_SpinBox->setValue(0);

        horizontalLayout_13->addWidget(ro_Alarm_Two_Inhibit_SpinBox);


        verticalLayout_4->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        ro_Alarm_Two_Deviation_Label = new QLabel(layoutWidget);
        ro_Alarm_Two_Deviation_Label->setObjectName(QString::fromUtf8("ro_Alarm_Two_Deviation_Label"));

        horizontalLayout_14->addWidget(ro_Alarm_Two_Deviation_Label);

        ro_Alarm_Two_Deviation_SpinBox = new QDoubleSpinBox(layoutWidget);
        ro_Alarm_Two_Deviation_SpinBox->setObjectName(QString::fromUtf8("ro_Alarm_Two_Deviation_SpinBox"));
        ro_Alarm_Two_Deviation_SpinBox->setFont(font);
        ro_Alarm_Two_Deviation_SpinBox->setDecimals(0);
        ro_Alarm_Two_Deviation_SpinBox->setMinimum(1);
        ro_Alarm_Two_Deviation_SpinBox->setMaximum(1728);
        ro_Alarm_Two_Deviation_SpinBox->setValue(1728);

        horizontalLayout_14->addWidget(ro_Alarm_Two_Deviation_SpinBox);


        verticalLayout_4->addLayout(horizontalLayout_14);


        horizontalLayout_8->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_8);


        retranslateUi(rampoven_Zone_Alarm_paraClass);
        QObject::connect(writeDataButton, SIGNAL(clicked()), rampoven_Zone_Alarm_paraClass, SLOT(WriteDataButton()));
        QObject::connect(closeButton, SIGNAL(clicked()), rampoven_Zone_Alarm_paraClass, SLOT(close()));
        QObject::connect(ReadDataButton, SIGNAL(clicked()), rampoven_Zone_Alarm_paraClass, SLOT(ReadDataButton()));

        QMetaObject::connectSlotsByName(rampoven_Zone_Alarm_paraClass);
    } // setupUi

    void retranslateUi(QDialog *rampoven_Zone_Alarm_paraClass)
    {
        rampoven_Zone_Alarm_paraClass->setWindowTitle(QApplication::translate("rampoven_Zone_Alarm_paraClass", "rampoven_Zone_Alarm_para", 0, QApplication::UnicodeUTF8));
        writeDataButton->setText(QApplication::translate("rampoven_Zone_Alarm_paraClass", "Write", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("rampoven_Zone_Alarm_paraClass", "CLOSE", 0, QApplication::UnicodeUTF8));
        ReadDataButton->setText(QApplication::translate("rampoven_Zone_Alarm_paraClass", "Read", 0, QApplication::UnicodeUTF8));
        ro_Alarm_One_Action_Label->setText(QApplication::translate("rampoven_Zone_Alarm_paraClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Action</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        ro_Alarm_One_Delay_Label->setText(QApplication::translate("rampoven_Zone_Alarm_paraClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Delay</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        ro_Alarm_One_Setpoint_Label->setText(QApplication::translate("rampoven_Zone_Alarm_paraClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Process</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Setpoint</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        ro_Alarm_One_OP_Label->setText(QApplication::translate("rampoven_Zone_Alarm_paraClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Operation</p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        ro_Alarm_One_Inhibit_Label->setText(QApplication::translate("rampoven_Zone_Alarm_paraClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Inhibit</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        ro_Alarm_One_Deviation_Label->setText(QApplication::translate("rampoven_Zone_Alarm_paraClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Deviation</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        ro_Alarm_Two_Action_Label->setText(QApplication::translate("rampoven_Zone_Alarm_paraClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Action</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        ro_Alarm_Two_Delay_Label->setText(QApplication::translate("rampoven_Zone_Alarm_paraClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Delay</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        ro_Alarm_Two_Setpoint_Label->setText(QApplication::translate("rampoven_Zone_Alarm_paraClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Process</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Setpoint</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        ro_Alarm_Two_OP_Label->setText(QApplication::translate("rampoven_Zone_Alarm_paraClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Operation</p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        ro_Alarm_Two_Inhibit_Label->setText(QApplication::translate("rampoven_Zone_Alarm_paraClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Inhibit</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        ro_Alarm_Two_Deviation_Label->setText(QApplication::translate("rampoven_Zone_Alarm_paraClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Deviation</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class rampoven_Zone_Alarm_paraClass: public Ui_rampoven_Zone_Alarm_paraClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAMPOVEN_ZONE_ALARM_PARA_H
