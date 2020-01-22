/********************************************************************************
** Form generated from reading UI file 'calibrate.ui'
**
** Created: Tue Jan 7 12:49:35 2020
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALIBRATE_H
#define UI_CALIBRATE_H

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
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calibrateClass
{
public:
    QPushButton *spanButton;
    QPushButton *zeroButton;
    QLabel *label_cal;
    QPushButton *endButton;
    QLabel *rmcalLabel_2;
    QWidget *layoutWidget_3;
    QGridLayout *gridLayout_3;
    QCheckBox *rmcalCheckBox;
    QLabel *rmcalLabel;
    QLabel *label_4;
    QLCDNumber *calDetSigLCD;
    QDoubleSpinBox *CalSpanConcSpinBox;
    QLabel *rmcalLabel_3;
    QPushButton *testReadButton;
    QLineEdit *busyLineEdit;
    QLCDNumber *calSpanlcdNumber;
    QPushButton *cgcZeroButton;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *cgcHiButton;
    QCheckBox *cgHiCheckBox;
    QPushButton *cgcMidButton;
    QCheckBox *cgMidCheckBox;
    QPushButton *cgcLowButton;
    QCheckBox *cgLowCheckBox;
    QPushButton *cgcMinButton;
    QCheckBox *cgMinCheckBox;
    QLabel *rangelabel;
    QCheckBox *cZerocheckBox;
    QCheckBox *cSpanCheckBox;

    void setupUi(QDialog *calibrateClass)
    {
        if (calibrateClass->objectName().isEmpty())
            calibrateClass->setObjectName(QString::fromUtf8("calibrateClass"));
        calibrateClass->resize(480, 272);
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
        calibrateClass->setPalette(palette);
        spanButton = new QPushButton(calibrateClass);
        spanButton->setObjectName(QString::fromUtf8("spanButton"));
        spanButton->setGeometry(QRect(400, 90, 71, 41));
        spanButton->setMinimumSize(QSize(55, 22));
        spanButton->setMaximumSize(QSize(111, 41));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush7(QColor(170, 255, 255, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush8(QColor(212, 255, 255, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush8);
        QBrush brush9(QColor(85, 127, 127, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush9);
        QBrush brush10(QColor(113, 170, 170, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush10);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush11(QColor(0, 255, 127, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush11);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        spanButton->setPalette(palette1);
        spanButton->setFocusPolicy(Qt::NoFocus);
        zeroButton = new QPushButton(calibrateClass);
        zeroButton->setObjectName(QString::fromUtf8("zeroButton"));
        zeroButton->setGeometry(QRect(400, 30, 71, 41));
        zeroButton->setMinimumSize(QSize(55, 22));
        zeroButton->setMaximumSize(QSize(111, 41));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush8);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush9);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush10);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush11);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        zeroButton->setPalette(palette2);
        zeroButton->setFocusPolicy(Qt::NoFocus);
        label_cal = new QLabel(calibrateClass);
        label_cal->setObjectName(QString::fromUtf8("label_cal"));
        label_cal->setGeometry(QRect(370, 0, 111, 31));
        endButton = new QPushButton(calibrateClass);
        endButton->setObjectName(QString::fromUtf8("endButton"));
        endButton->setGeometry(QRect(490, 220, 71, 41));
        endButton->setMinimumSize(QSize(55, 22));
        endButton->setMaximumSize(QSize(111, 41));
        QPalette palette3;
        QBrush brush12(QColor(0, 170, 255, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        endButton->setPalette(palette3);
        rmcalLabel_2 = new QLabel(calibrateClass);
        rmcalLabel_2->setObjectName(QString::fromUtf8("rmcalLabel_2"));
        rmcalLabel_2->setGeometry(QRect(380, 200, 101, 21));
        rmcalLabel_2->setIndent(-4);
        layoutWidget_3 = new QWidget(calibrateClass);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(380, 220, 89, 41));
        gridLayout_3 = new QGridLayout(layoutWidget_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        rmcalCheckBox = new QCheckBox(layoutWidget_3);
        rmcalCheckBox->setObjectName(QString::fromUtf8("rmcalCheckBox"));
        rmcalCheckBox->setMinimumSize(QSize(31, 31));
        QFont font;
        font.setPointSize(12);
        rmcalCheckBox->setFont(font);
        rmcalCheckBox->setMouseTracking(false);
        rmcalCheckBox->setFocusPolicy(Qt::NoFocus);
        rmcalCheckBox->setAcceptDrops(false);

        gridLayout_3->addWidget(rmcalCheckBox, 0, 0, 1, 1);

        rmcalLabel = new QLabel(layoutWidget_3);
        rmcalLabel->setObjectName(QString::fromUtf8("rmcalLabel"));

        gridLayout_3->addWidget(rmcalLabel, 0, 1, 1, 1);

        label_4 = new QLabel(calibrateClass);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(330, 160, 41, 21));
        QFont font1;
        font1.setPointSize(11);
        label_4->setFont(font1);
        calDetSigLCD = new QLCDNumber(calibrateClass);
        calDetSigLCD->setObjectName(QString::fromUtf8("calDetSigLCD"));
        calDetSigLCD->setGeometry(QRect(100, 30, 271, 131));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        calDetSigLCD->setFont(font2);
        calDetSigLCD->setSegmentStyle(QLCDNumber::Flat);
        CalSpanConcSpinBox = new QDoubleSpinBox(calibrateClass);
        CalSpanConcSpinBox->setObjectName(QString::fromUtf8("CalSpanConcSpinBox"));
        CalSpanConcSpinBox->setGeometry(QRect(160, 220, 171, 41));
        QFont font3;
        font3.setPointSize(26);
        font3.setItalic(false);
        CalSpanConcSpinBox->setFont(font3);
        CalSpanConcSpinBox->setFocusPolicy(Qt::TabFocus);
        CalSpanConcSpinBox->setAccelerated(false);
        CalSpanConcSpinBox->setDecimals(2);
        CalSpanConcSpinBox->setMinimum(0);
        CalSpanConcSpinBox->setMaximum(20000);
        CalSpanConcSpinBox->setSingleStep(0.01);
        CalSpanConcSpinBox->setValue(0);
        rmcalLabel_3 = new QLabel(calibrateClass);
        rmcalLabel_3->setObjectName(QString::fromUtf8("rmcalLabel_3"));
        rmcalLabel_3->setGeometry(QRect(160, 200, 121, 21));
        rmcalLabel_3->setIndent(-4);
        testReadButton = new QPushButton(calibrateClass);
        testReadButton->setObjectName(QString::fromUtf8("testReadButton"));
        testReadButton->setGeometry(QRect(400, 150, 71, 41));
        testReadButton->setMinimumSize(QSize(55, 22));
        testReadButton->setMaximumSize(QSize(111, 41));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush8);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush9);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush10);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush11);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush9);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush11);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush9);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush9);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush9);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush9);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        testReadButton->setPalette(palette4);
        testReadButton->setFocusPolicy(Qt::NoFocus);
        busyLineEdit = new QLineEdit(calibrateClass);
        busyLineEdit->setObjectName(QString::fromUtf8("busyLineEdit"));
        busyLineEdit->setGeometry(QRect(170, 0, 111, 31));
        busyLineEdit->setFont(font2);
        calSpanlcdNumber = new QLCDNumber(calibrateClass);
        calSpanlcdNumber->setObjectName(QString::fromUtf8("calSpanlcdNumber"));
        calSpanlcdNumber->setGeometry(QRect(10, 220, 151, 41));
        QFont font4;
        font4.setPointSize(24);
        calSpanlcdNumber->setFont(font4);
        calSpanlcdNumber->setProperty("intValue", QVariant(0));
        cgcZeroButton = new QPushButton(calibrateClass);
        cgcZeroButton->setObjectName(QString::fromUtf8("cgcZeroButton"));
        cgcZeroButton->setGeometry(QRect(10, 190, 71, 31));
        cgcZeroButton->setMinimumSize(QSize(55, 22));
        cgcZeroButton->setMaximumSize(QSize(111, 41));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        QBrush brush13(QColor(121, 120, 120, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush13);
        cgcZeroButton->setPalette(palette5);
        cgcZeroButton->setFocusPolicy(Qt::NoFocus);
        layoutWidget = new QWidget(calibrateClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 94, 144));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        cgcHiButton = new QPushButton(layoutWidget);
        cgcHiButton->setObjectName(QString::fromUtf8("cgcHiButton"));
        cgcHiButton->setMinimumSize(QSize(55, 22));
        cgcHiButton->setMaximumSize(QSize(111, 41));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush8);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush9);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush10);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush9);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush10);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush10);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        cgcHiButton->setPalette(palette6);
        cgcHiButton->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(cgcHiButton, 0, 0, 1, 1);

        cgHiCheckBox = new QCheckBox(layoutWidget);
        cgHiCheckBox->setObjectName(QString::fromUtf8("cgHiCheckBox"));
        cgHiCheckBox->setMinimumSize(QSize(31, 31));
        cgHiCheckBox->setFont(font);
        cgHiCheckBox->setMouseTracking(false);
        cgHiCheckBox->setFocusPolicy(Qt::NoFocus);
        cgHiCheckBox->setAcceptDrops(false);

        gridLayout->addWidget(cgHiCheckBox, 0, 1, 1, 1);

        cgcMidButton = new QPushButton(layoutWidget);
        cgcMidButton->setObjectName(QString::fromUtf8("cgcMidButton"));
        cgcMidButton->setMinimumSize(QSize(55, 22));
        cgcMidButton->setMaximumSize(QSize(111, 41));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette7.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Midlight, brush8);
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush9);
        palette7.setBrush(QPalette::Active, QPalette::Mid, brush10);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush);
        palette7.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette7.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette7.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Midlight, brush8);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush9);
        palette7.setBrush(QPalette::Inactive, QPalette::Mid, brush10);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette7.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush9);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette7.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Midlight, brush8);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush9);
        palette7.setBrush(QPalette::Disabled, QPalette::Mid, brush10);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush9);
        palette7.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush9);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette7.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        cgcMidButton->setPalette(palette7);
        cgcMidButton->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(cgcMidButton, 1, 0, 1, 1);

        cgMidCheckBox = new QCheckBox(layoutWidget);
        cgMidCheckBox->setObjectName(QString::fromUtf8("cgMidCheckBox"));
        cgMidCheckBox->setMinimumSize(QSize(31, 31));
        cgMidCheckBox->setFont(font);
        cgMidCheckBox->setMouseTracking(false);
        cgMidCheckBox->setFocusPolicy(Qt::NoFocus);
        cgMidCheckBox->setAcceptDrops(false);

        gridLayout->addWidget(cgMidCheckBox, 1, 1, 1, 1);

        cgcLowButton = new QPushButton(layoutWidget);
        cgcLowButton->setObjectName(QString::fromUtf8("cgcLowButton"));
        cgcLowButton->setMinimumSize(QSize(55, 22));
        cgcLowButton->setMaximumSize(QSize(111, 41));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette8.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette8.setBrush(QPalette::Active, QPalette::Midlight, brush8);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush9);
        palette8.setBrush(QPalette::Active, QPalette::Mid, brush10);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush);
        palette8.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette8.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette8.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::Midlight, brush8);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush9);
        palette8.setBrush(QPalette::Inactive, QPalette::Mid, brush10);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette8.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush9);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette8.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Midlight, brush8);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush9);
        palette8.setBrush(QPalette::Disabled, QPalette::Mid, brush10);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush9);
        palette8.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush9);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette8.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        cgcLowButton->setPalette(palette8);
        cgcLowButton->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(cgcLowButton, 2, 0, 1, 1);

        cgLowCheckBox = new QCheckBox(layoutWidget);
        cgLowCheckBox->setObjectName(QString::fromUtf8("cgLowCheckBox"));
        cgLowCheckBox->setMinimumSize(QSize(31, 31));
        cgLowCheckBox->setFont(font);
        cgLowCheckBox->setMouseTracking(false);
        cgLowCheckBox->setFocusPolicy(Qt::NoFocus);
        cgLowCheckBox->setAcceptDrops(false);

        gridLayout->addWidget(cgLowCheckBox, 2, 1, 1, 1);

        cgcMinButton = new QPushButton(layoutWidget);
        cgcMinButton->setObjectName(QString::fromUtf8("cgcMinButton"));
        cgcMinButton->setMinimumSize(QSize(55, 22));
        cgcMinButton->setMaximumSize(QSize(111, 41));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush13);
        cgcMinButton->setPalette(palette9);
        cgcMinButton->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(cgcMinButton, 3, 0, 1, 1);

        cgMinCheckBox = new QCheckBox(layoutWidget);
        cgMinCheckBox->setObjectName(QString::fromUtf8("cgMinCheckBox"));
        cgMinCheckBox->setMinimumSize(QSize(31, 31));
        cgMinCheckBox->setFont(font);
        cgMinCheckBox->setFocusPolicy(Qt::NoFocus);
        cgMinCheckBox->setAcceptDrops(false);

        gridLayout->addWidget(cgMinCheckBox, 3, 1, 1, 1);

        rangelabel = new QLabel(calibrateClass);
        rangelabel->setObjectName(QString::fromUtf8("rangelabel"));
        rangelabel->setGeometry(QRect(10, 0, 71, 31));
        cZerocheckBox = new QCheckBox(calibrateClass);
        cZerocheckBox->setObjectName(QString::fromUtf8("cZerocheckBox"));
        cZerocheckBox->setGeometry(QRect(380, 40, 31, 31));
        cZerocheckBox->setMinimumSize(QSize(31, 31));
        cZerocheckBox->setFont(font);
        cZerocheckBox->setMouseTracking(false);
        cZerocheckBox->setFocusPolicy(Qt::NoFocus);
        cZerocheckBox->setAcceptDrops(false);
        cSpanCheckBox = new QCheckBox(calibrateClass);
        cSpanCheckBox->setObjectName(QString::fromUtf8("cSpanCheckBox"));
        cSpanCheckBox->setGeometry(QRect(380, 100, 31, 31));
        cSpanCheckBox->setMinimumSize(QSize(31, 31));
        cSpanCheckBox->setFont(font);
        cSpanCheckBox->setMouseTracking(false);
        cSpanCheckBox->setFocusPolicy(Qt::NoFocus);
        cSpanCheckBox->setAcceptDrops(false);

        retranslateUi(calibrateClass);
        QObject::connect(endButton, SIGNAL(clicked()), calibrateClass, SLOT(close()));
        QObject::connect(spanButton, SIGNAL(released()), calibrateClass, SLOT(span()));
        QObject::connect(zeroButton, SIGNAL(released()), calibrateClass, SLOT(zero()));
        QObject::connect(testReadButton, SIGNAL(released()), calibrateClass, SLOT(readSignal()));
        QObject::connect(cgcMinButton, SIGNAL(released()), calibrateClass, SLOT(calRangeMin()));
        QObject::connect(cgcZeroButton, SIGNAL(released()), calibrateClass, SLOT(calZero()));
        QObject::connect(cgcLowButton, SIGNAL(released()), calibrateClass, SLOT(calRangeLo()));
        QObject::connect(cgcMidButton, SIGNAL(released()), calibrateClass, SLOT(calRangeMid()));
        QObject::connect(cgcHiButton, SIGNAL(released()), calibrateClass, SLOT(calRangeHi()));

        QMetaObject::connectSlotsByName(calibrateClass);
    } // setupUi

    void retranslateUi(QDialog *calibrateClass)
    {
        calibrateClass->setWindowTitle(QApplication::translate("calibrateClass", "calibrate", 0, QApplication::UnicodeUTF8));
        spanButton->setText(QApplication::translate("calibrateClass", "SPAN", 0, QApplication::UnicodeUTF8));
        zeroButton->setText(QApplication::translate("calibrateClass", "ZERO", 0, QApplication::UnicodeUTF8));
        label_cal->setText(QApplication::translate("calibrateClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">CALIBRATE</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        endButton->setText(QApplication::translate("calibrateClass", "END", 0, QApplication::UnicodeUTF8));
        rmcalLabel_2->setText(QApplication::translate("calibrateClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#00aa00;\">REMOTE CAL</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        rmcalCheckBox->setText(QString());
        rmcalLabel->setText(QApplication::translate("calibrateClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; text-decoration: underline;\">ON/OFF</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("calibrateClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Volt</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        rmcalLabel_3->setText(QApplication::translate("calibrateClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#0055ff;\">Span Conc (ppm)</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        testReadButton->setText(QApplication::translate("calibrateClass", "test read", 0, QApplication::UnicodeUTF8));
        cgcZeroButton->setText(QApplication::translate("calibrateClass", "HW ZERO", 0, QApplication::UnicodeUTF8));
        cgcHiButton->setText(QApplication::translate("calibrateClass", "R1", 0, QApplication::UnicodeUTF8));
        cgHiCheckBox->setText(QString());
        cgcMidButton->setText(QApplication::translate("calibrateClass", "R2", 0, QApplication::UnicodeUTF8));
        cgMidCheckBox->setText(QString());
        cgcLowButton->setText(QApplication::translate("calibrateClass", "R3", 0, QApplication::UnicodeUTF8));
        cgLowCheckBox->setText(QString());
        cgcMinButton->setText(QApplication::translate("calibrateClass", "R4", 0, QApplication::UnicodeUTF8));
        cgMinCheckBox->setText(QString());
        rangelabel->setText(QApplication::translate("calibrateClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">RANGE</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        cZerocheckBox->setText(QString());
        cSpanCheckBox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class calibrateClass: public Ui_calibrateClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALIBRATE_H
