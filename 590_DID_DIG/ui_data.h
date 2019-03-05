/********************************************************************************
** Form generated from reading UI file 'data.ui'
**
** Created: Tue Mar 5 14:05:07 2019
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATA_H
#define UI_DATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDateTimeEdit>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dataClass
{
public:
    QToolButton *endButton;
    QPushButton *startdlogButton;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QCheckBox *rs485CheckBox;
    QLabel *detOnOffLabel;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_2;
    QCheckBox *rs232CheckBox;
    QLabel *detOnOffLabel_2;
    QWidget *layoutWidget_3;
    QGridLayout *gridLayout_3;
    QCheckBox *dlogCheckBox;
    QLabel *dlogLabel;
    QWidget *layoutWidget_4;
    QGridLayout *gridLayout_4;
    QCheckBox *profiCheckBox;
    QLabel *detOnOffLabel_4;
    QWidget *layoutWidget_5;
    QGridLayout *gridLayout_5;
    QCheckBox *networkCheckBox;
    QLabel *detOnOffLabel_5;
    QLabel *dloglLabel;
    QLabel *dloglLabel_2;
    QLabel *dloglLabel_3;
    QLabel *dloglLabel_4;
    QLabel *dloglLabel_5;
    QLabel *dataLabel;
    QToolButton *dataConfigButton;
    QDateTimeEdit *datacfClockSpinBox;
    QLineEdit *busyLineEdit;
    QWidget *layoutWidget_6;
    QGridLayout *gridLayout_6;
    QCheckBox *dataconfigTimeCheckBox;
    QLabel *dataconfigTimeonoffLabel;
    QWidget *layoutWidget_7;
    QGridLayout *gridLayout_7;
    QCheckBox *dataconfigAlarmCheckBox;
    QLabel *dataconfigOnOffAlarmLabel;
    QLabel *dataconfigTimelabel;
    QLabel *dataconfigAlarmLabel;
    QSpinBox *dMonthSpinBox;
    QSpinBox *dDaySpinBox;
    QSpinBox *dYearSpinBox;
    QSpinBox *dHourSpinBox;
    QSpinBox *dMinuteSpinBox;
    QSpinBox *dSecondsSpinBox;
    QSpinBox *dMiliSecSpinBox;
    QLabel *dHourlabel;
    QLabel *dMinutelabel;
    QLabel *dSecondlabel;
    QLabel *dMiliSecondlabel;
    QLabel *dMonthlabel;
    QLabel *dYearlabel;
    QLabel *dDaylabel;
    QLabel *dloglLabel_7;

    void setupUi(QDialog *dataClass)
    {
        if (dataClass->objectName().isEmpty())
            dataClass->setObjectName(QString::fromUtf8("dataClass"));
        dataClass->resize(480, 272);
        endButton = new QToolButton(dataClass);
        endButton->setObjectName(QString::fromUtf8("endButton"));
        endButton->setGeometry(QRect(400, 220, 71, 41));
        endButton->setMinimumSize(QSize(55, 22));
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
        startdlogButton = new QPushButton(dataClass);
        startdlogButton->setObjectName(QString::fromUtf8("startdlogButton"));
        startdlogButton->setGeometry(QRect(190, 230, 111, 31));
        startdlogButton->setMinimumSize(QSize(0, 0));
        startdlogButton->setMaximumSize(QSize(150, 41));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush6);
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
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush6);
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
        startdlogButton->setPalette(palette1);
        layoutWidget = new QWidget(dataClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(560, 40, 89, 33));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        rs485CheckBox = new QCheckBox(layoutWidget);
        rs485CheckBox->setObjectName(QString::fromUtf8("rs485CheckBox"));
        rs485CheckBox->setMinimumSize(QSize(31, 31));
        QFont font;
        font.setPointSize(12);
        rs485CheckBox->setFont(font);
        rs485CheckBox->setAcceptDrops(false);

        gridLayout->addWidget(rs485CheckBox, 0, 0, 1, 1);

        detOnOffLabel = new QLabel(layoutWidget);
        detOnOffLabel->setObjectName(QString::fromUtf8("detOnOffLabel"));

        gridLayout->addWidget(detOnOffLabel, 0, 1, 1, 1);

        layoutWidget_2 = new QWidget(dataClass);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(580, 0, 89, 33));
        gridLayout_2 = new QGridLayout(layoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        rs232CheckBox = new QCheckBox(layoutWidget_2);
        rs232CheckBox->setObjectName(QString::fromUtf8("rs232CheckBox"));
        rs232CheckBox->setMinimumSize(QSize(31, 31));
        rs232CheckBox->setFont(font);
        rs232CheckBox->setAcceptDrops(false);

        gridLayout_2->addWidget(rs232CheckBox, 0, 0, 1, 1);

        detOnOffLabel_2 = new QLabel(layoutWidget_2);
        detOnOffLabel_2->setObjectName(QString::fromUtf8("detOnOffLabel_2"));

        gridLayout_2->addWidget(detOnOffLabel_2, 0, 1, 1, 1);

        layoutWidget_3 = new QWidget(dataClass);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(380, 50, 89, 33));
        gridLayout_3 = new QGridLayout(layoutWidget_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        dlogCheckBox = new QCheckBox(layoutWidget_3);
        dlogCheckBox->setObjectName(QString::fromUtf8("dlogCheckBox"));
        dlogCheckBox->setMinimumSize(QSize(31, 31));
        dlogCheckBox->setFont(font);
        dlogCheckBox->setAcceptDrops(false);

        gridLayout_3->addWidget(dlogCheckBox, 0, 0, 1, 1);

        dlogLabel = new QLabel(layoutWidget_3);
        dlogLabel->setObjectName(QString::fromUtf8("dlogLabel"));

        gridLayout_3->addWidget(dlogLabel, 0, 1, 1, 1);

        layoutWidget_4 = new QWidget(dataClass);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(790, 0, 89, 33));
        gridLayout_4 = new QGridLayout(layoutWidget_4);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        profiCheckBox = new QCheckBox(layoutWidget_4);
        profiCheckBox->setObjectName(QString::fromUtf8("profiCheckBox"));
        profiCheckBox->setMinimumSize(QSize(31, 31));
        profiCheckBox->setFont(font);
        profiCheckBox->setAcceptDrops(false);

        gridLayout_4->addWidget(profiCheckBox, 0, 0, 1, 1);

        detOnOffLabel_4 = new QLabel(layoutWidget_4);
        detOnOffLabel_4->setObjectName(QString::fromUtf8("detOnOffLabel_4"));

        gridLayout_4->addWidget(detOnOffLabel_4, 0, 1, 1, 1);

        layoutWidget_5 = new QWidget(dataClass);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(790, 40, 89, 33));
        gridLayout_5 = new QGridLayout(layoutWidget_5);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        networkCheckBox = new QCheckBox(layoutWidget_5);
        networkCheckBox->setObjectName(QString::fromUtf8("networkCheckBox"));
        networkCheckBox->setMinimumSize(QSize(31, 31));
        networkCheckBox->setFont(font);
        networkCheckBox->setAcceptDrops(false);

        gridLayout_5->addWidget(networkCheckBox, 0, 0, 1, 1);

        detOnOffLabel_5 = new QLabel(layoutWidget_5);
        detOnOffLabel_5->setObjectName(QString::fromUtf8("detOnOffLabel_5"));

        gridLayout_5->addWidget(detOnOffLabel_5, 0, 1, 1, 1);

        dloglLabel = new QLabel(dataClass);
        dloglLabel->setObjectName(QString::fromUtf8("dloglLabel"));
        dloglLabel->setGeometry(QRect(290, 50, 81, 31));
        dloglLabel->setIndent(-4);
        dloglLabel_2 = new QLabel(dataClass);
        dloglLabel_2->setObjectName(QString::fromUtf8("dloglLabel_2"));
        dloglLabel_2->setGeometry(QRect(500, 0, 71, 31));
        dloglLabel_2->setLineWidth(4);
        dloglLabel_2->setIndent(-4);
        dloglLabel_3 = new QLabel(dataClass);
        dloglLabel_3->setObjectName(QString::fromUtf8("dloglLabel_3"));
        dloglLabel_3->setGeometry(QRect(480, 40, 71, 31));
        dloglLabel_3->setIndent(-4);
        dloglLabel_4 = new QLabel(dataClass);
        dloglLabel_4->setObjectName(QString::fromUtf8("dloglLabel_4"));
        dloglLabel_4->setGeometry(QRect(680, 0, 101, 31));
        dloglLabel_4->setIndent(-4);
        dloglLabel_5 = new QLabel(dataClass);
        dloglLabel_5->setObjectName(QString::fromUtf8("dloglLabel_5"));
        dloglLabel_5->setGeometry(QRect(660, 40, 121, 31));
        dloglLabel_5->setIndent(-4);
        dataLabel = new QLabel(dataClass);
        dataLabel->setObjectName(QString::fromUtf8("dataLabel"));
        dataLabel->setGeometry(QRect(10, 0, 41, 21));
        dataLabel->setIndent(-4);
        dataConfigButton = new QToolButton(dataClass);
        dataConfigButton->setObjectName(QString::fromUtf8("dataConfigButton"));
        dataConfigButton->setGeometry(QRect(400, 170, 71, 41));
        dataConfigButton->setMinimumSize(QSize(41, 41));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        dataConfigButton->setPalette(palette2);
        datacfClockSpinBox = new QDateTimeEdit(dataClass);
        datacfClockSpinBox->setObjectName(QString::fromUtf8("datacfClockSpinBox"));
        datacfClockSpinBox->setGeometry(QRect(310, 0, 171, 41));
        datacfClockSpinBox->setMaximumSize(QSize(470, 272));
        QFont font1;
        font1.setPointSize(12);
        font1.setItalic(false);
        datacfClockSpinBox->setFont(font1);
        datacfClockSpinBox->setFocusPolicy(Qt::TabFocus);
        datacfClockSpinBox->setAccelerated(false);
        busyLineEdit = new QLineEdit(dataClass);
        busyLineEdit->setObjectName(QString::fromUtf8("busyLineEdit"));
        busyLineEdit->setGeometry(QRect(190, 0, 101, 27));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        busyLineEdit->setFont(font2);
        layoutWidget_6 = new QWidget(dataClass);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(380, 90, 89, 33));
        gridLayout_6 = new QGridLayout(layoutWidget_6);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        dataconfigTimeCheckBox = new QCheckBox(layoutWidget_6);
        dataconfigTimeCheckBox->setObjectName(QString::fromUtf8("dataconfigTimeCheckBox"));
        dataconfigTimeCheckBox->setMinimumSize(QSize(31, 31));
        dataconfigTimeCheckBox->setFont(font);
        dataconfigTimeCheckBox->setAcceptDrops(false);

        gridLayout_6->addWidget(dataconfigTimeCheckBox, 0, 0, 1, 1);

        dataconfigTimeonoffLabel = new QLabel(layoutWidget_6);
        dataconfigTimeonoffLabel->setObjectName(QString::fromUtf8("dataconfigTimeonoffLabel"));

        gridLayout_6->addWidget(dataconfigTimeonoffLabel, 0, 1, 1, 1);

        layoutWidget_7 = new QWidget(dataClass);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(560, 130, 89, 33));
        gridLayout_7 = new QGridLayout(layoutWidget_7);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        dataconfigAlarmCheckBox = new QCheckBox(layoutWidget_7);
        dataconfigAlarmCheckBox->setObjectName(QString::fromUtf8("dataconfigAlarmCheckBox"));
        dataconfigAlarmCheckBox->setMinimumSize(QSize(31, 31));
        dataconfigAlarmCheckBox->setFont(font);
        dataconfigAlarmCheckBox->setAcceptDrops(false);

        gridLayout_7->addWidget(dataconfigAlarmCheckBox, 0, 0, 1, 1);

        dataconfigOnOffAlarmLabel = new QLabel(layoutWidget_7);
        dataconfigOnOffAlarmLabel->setObjectName(QString::fromUtf8("dataconfigOnOffAlarmLabel"));

        gridLayout_7->addWidget(dataconfigOnOffAlarmLabel, 0, 1, 1, 1);

        dataconfigTimelabel = new QLabel(dataClass);
        dataconfigTimelabel->setObjectName(QString::fromUtf8("dataconfigTimelabel"));
        dataconfigTimelabel->setGeometry(QRect(290, 90, 91, 31));
        dataconfigTimelabel->setLineWidth(4);
        dataconfigTimelabel->setIndent(-4);
        dataconfigAlarmLabel = new QLabel(dataClass);
        dataconfigAlarmLabel->setObjectName(QString::fromUtf8("dataconfigAlarmLabel"));
        dataconfigAlarmLabel->setGeometry(QRect(490, 130, 71, 31));
        dataconfigAlarmLabel->setLineWidth(4);
        dataconfigAlarmLabel->setIndent(-4);
        dMonthSpinBox = new QSpinBox(dataClass);
        dMonthSpinBox->setObjectName(QString::fromUtf8("dMonthSpinBox"));
        dMonthSpinBox->setGeometry(QRect(10, 90, 71, 41));
        QFont font3;
        font3.setPointSize(26);
        font3.setItalic(false);
        dMonthSpinBox->setFont(font3);
        dMonthSpinBox->setFocusPolicy(Qt::TabFocus);
        dMonthSpinBox->setAccelerated(false);
        dDaySpinBox = new QSpinBox(dataClass);
        dDaySpinBox->setObjectName(QString::fromUtf8("dDaySpinBox"));
        dDaySpinBox->setGeometry(QRect(100, 90, 71, 41));
        dDaySpinBox->setFont(font3);
        dDaySpinBox->setFocusPolicy(Qt::TabFocus);
        dDaySpinBox->setAccelerated(false);
        dYearSpinBox = new QSpinBox(dataClass);
        dYearSpinBox->setObjectName(QString::fromUtf8("dYearSpinBox"));
        dYearSpinBox->setGeometry(QRect(180, 90, 101, 41));
        dYearSpinBox->setFont(font3);
        dYearSpinBox->setFocusPolicy(Qt::TabFocus);
        dYearSpinBox->setAccelerated(false);
        dYearSpinBox->setMaximum(9999);
        dHourSpinBox = new QSpinBox(dataClass);
        dHourSpinBox->setObjectName(QString::fromUtf8("dHourSpinBox"));
        dHourSpinBox->setGeometry(QRect(10, 170, 71, 41));
        dHourSpinBox->setFont(font3);
        dHourSpinBox->setFocusPolicy(Qt::TabFocus);
        dHourSpinBox->setAccelerated(false);
        dMinuteSpinBox = new QSpinBox(dataClass);
        dMinuteSpinBox->setObjectName(QString::fromUtf8("dMinuteSpinBox"));
        dMinuteSpinBox->setGeometry(QRect(90, 170, 71, 41));
        dMinuteSpinBox->setFont(font3);
        dMinuteSpinBox->setFocusPolicy(Qt::TabFocus);
        dMinuteSpinBox->setAccelerated(false);
        dSecondsSpinBox = new QSpinBox(dataClass);
        dSecondsSpinBox->setObjectName(QString::fromUtf8("dSecondsSpinBox"));
        dSecondsSpinBox->setGeometry(QRect(170, 170, 71, 41));
        dSecondsSpinBox->setFont(font3);
        dSecondsSpinBox->setFocusPolicy(Qt::TabFocus);
        dSecondsSpinBox->setAccelerated(false);
        dMiliSecSpinBox = new QSpinBox(dataClass);
        dMiliSecSpinBox->setObjectName(QString::fromUtf8("dMiliSecSpinBox"));
        dMiliSecSpinBox->setGeometry(QRect(700, 170, 91, 41));
        dMiliSecSpinBox->setFont(font3);
        dMiliSecSpinBox->setFocusPolicy(Qt::TabFocus);
        dMiliSecSpinBox->setAccelerated(false);
        dHourlabel = new QLabel(dataClass);
        dHourlabel->setObjectName(QString::fromUtf8("dHourlabel"));
        dHourlabel->setGeometry(QRect(20, 140, 41, 31));
        dHourlabel->setLineWidth(4);
        dHourlabel->setIndent(-4);
        dMinutelabel = new QLabel(dataClass);
        dMinutelabel->setObjectName(QString::fromUtf8("dMinutelabel"));
        dMinutelabel->setGeometry(QRect(100, 140, 31, 31));
        dMinutelabel->setLineWidth(4);
        dMinutelabel->setIndent(-4);
        dSecondlabel = new QLabel(dataClass);
        dSecondlabel->setObjectName(QString::fromUtf8("dSecondlabel"));
        dSecondlabel->setGeometry(QRect(180, 140, 31, 31));
        dSecondlabel->setLineWidth(4);
        dSecondlabel->setIndent(-4);
        dMiliSecondlabel = new QLabel(dataClass);
        dMiliSecondlabel->setObjectName(QString::fromUtf8("dMiliSecondlabel"));
        dMiliSecondlabel->setGeometry(QRect(710, 140, 51, 31));
        dMiliSecondlabel->setLineWidth(4);
        dMiliSecondlabel->setIndent(-4);
        dMonthlabel = new QLabel(dataClass);
        dMonthlabel->setObjectName(QString::fromUtf8("dMonthlabel"));
        dMonthlabel->setGeometry(QRect(20, 60, 51, 31));
        dMonthlabel->setLineWidth(4);
        dMonthlabel->setIndent(-4);
        dYearlabel = new QLabel(dataClass);
        dYearlabel->setObjectName(QString::fromUtf8("dYearlabel"));
        dYearlabel->setGeometry(QRect(190, 60, 41, 31));
        dYearlabel->setLineWidth(4);
        dYearlabel->setIndent(-4);
        dDaylabel = new QLabel(dataClass);
        dDaylabel->setObjectName(QString::fromUtf8("dDaylabel"));
        dDaylabel->setGeometry(QRect(110, 60, 31, 31));
        dDaylabel->setLineWidth(4);
        dDaylabel->setIndent(-4);
        dloglLabel_7 = new QLabel(dataClass);
        dloglLabel_7->setObjectName(QString::fromUtf8("dloglLabel_7"));
        dloglLabel_7->setGeometry(QRect(10, 30, 141, 31));
        dloglLabel_7->setIndent(-4);

        retranslateUi(dataClass);
        QObject::connect(endButton, SIGNAL(released()), dataClass, SLOT(close()));
        QObject::connect(dataConfigButton, SIGNAL(released()), dataClass, SLOT(setSystemDateTime()));
        QObject::connect(startdlogButton, SIGNAL(released()), dataClass, SLOT(saveDatalog()));

        QMetaObject::connectSlotsByName(dataClass);
    } // setupUi

    void retranslateUi(QDialog *dataClass)
    {
        dataClass->setWindowTitle(QApplication::translate("dataClass", "data", 0, QApplication::UnicodeUTF8));
        endButton->setText(QApplication::translate("dataClass", "ENTER", 0, QApplication::UnicodeUTF8));
        startdlogButton->setText(QApplication::translate("dataClass", "INIT D-LOG", 0, QApplication::UnicodeUTF8));
        rs485CheckBox->setText(QString());
        detOnOffLabel->setText(QApplication::translate("dataClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; text-decoration: underline;\">ON/OFF</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        rs232CheckBox->setText(QString());
        detOnOffLabel_2->setText(QApplication::translate("dataClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; text-decoration: underline;\">ON/OFF</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        dlogCheckBox->setText(QString());
        dlogLabel->setText(QApplication::translate("dataClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; text-decoration: underline;\">ON/OFF</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        profiCheckBox->setText(QString());
        detOnOffLabel_4->setText(QApplication::translate("dataClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; text-decoration: underline;\">ON/OFF</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        networkCheckBox->setText(QString());
        detOnOffLabel_5->setText(QApplication::translate("dataClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; text-decoration: underline;\">ON/OFF</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        dloglLabel->setText(QApplication::translate("dataClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#00aa00;\">DATA LOG</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        dloglLabel_2->setText(QApplication::translate("dataClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600; color:#0055ff;\">RS232</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        dloglLabel_3->setText(QApplication::translate("dataClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600; color:#0055ff;\">RS485</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        dloglLabel_4->setText(QApplication::translate("dataClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600; color:#0055ff;\">ProfiBus</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        dloglLabel_5->setText(QApplication::translate("dataClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600; color:#0055ff;\">NETWORK</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        dataLabel->setText(QApplication::translate("dataClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#00aa00;\">DATA</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        dataConfigButton->setText(QApplication::translate("dataClass", "Config", 0, QApplication::UnicodeUTF8));
        datacfClockSpinBox->setDisplayFormat(QApplication::translate("dataClass", "M/d/yy h:mm:ss AP", 0, QApplication::UnicodeUTF8));
        dataconfigTimeCheckBox->setText(QString());
        dataconfigTimeonoffLabel->setText(QApplication::translate("dataClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; text-decoration: underline;\">ON/OFF</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        dataconfigAlarmCheckBox->setText(QString());
        dataconfigOnOffAlarmLabel->setText(QApplication::translate("dataClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; text-decoration: underline;\">ON/OFF</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        dataconfigTimelabel->setText(QApplication::translate("dataClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#0055ff;\">SET CLOCK</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        dataconfigAlarmLabel->setText(QApplication::translate("dataClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#0055ff;\">ALARM</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        dHourlabel->setText(QApplication::translate("dataClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#0055ff;\">Hour</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        dMinutelabel->setText(QApplication::translate("dataClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#0055ff;\">Min.</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        dSecondlabel->setText(QApplication::translate("dataClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#0055ff;\">Sec.</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        dMiliSecondlabel->setText(QApplication::translate("dataClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#0055ff;\">mSec.</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        dMonthlabel->setText(QApplication::translate("dataClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#0055ff;\">Month</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        dYearlabel->setText(QApplication::translate("dataClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#0055ff;\">Year</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        dDaylabel->setText(QApplication::translate("dataClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#0055ff;\">Day</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        dloglLabel_7->setText(QApplication::translate("dataClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#ff0000;\">SET DATE &amp; TIME</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dataClass: public Ui_dataClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATA_H
