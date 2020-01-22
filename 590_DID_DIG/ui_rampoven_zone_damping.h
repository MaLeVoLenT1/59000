/********************************************************************************
** Form generated from reading UI file 'rampoven_zone_damping.ui'
**
** Created: Wed Jan 15 09:50:58 2020
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RAMPOVEN_ZONE_DAMPING_H
#define UI_RAMPOVEN_ZONE_DAMPING_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rampoven_Zone_DampingClass
{
public:
    QPushButton *closeButton;
    QPushButton *writeDataButton;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_11;
    QLabel *ro_Autotune_Damping_label;
    QDoubleSpinBox *ro_Autotune_Damping_SpinBox;
    QPushButton *ReadDataButton;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_12;
    QLabel *ro_Autotune_Damping_label_2;
    QDoubleSpinBox *roAutoTuneModeSpinBox;
    QPushButton *autoTuneStartButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *slaveIDnameLabel;
    QDoubleSpinBox *slaveIdSpinBox;
    QLineEdit *autoTuneStatusLineEdit;
    QLabel *detSetpointLabel;
    QDoubleSpinBox *ovenSetTempSpinBox;
    QLCDNumber *ovenActTempLCD;
    QLabel *detActualLabel;

    void setupUi(QDialog *rampoven_Zone_DampingClass)
    {
        if (rampoven_Zone_DampingClass->objectName().isEmpty())
            rampoven_Zone_DampingClass->setObjectName(QString::fromUtf8("rampoven_Zone_DampingClass"));
        rampoven_Zone_DampingClass->resize(400, 537);
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
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
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
        rampoven_Zone_DampingClass->setPalette(palette);
        closeButton = new QPushButton(rampoven_Zone_DampingClass);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(280, 490, 111, 41));
        closeButton->setMinimumSize(QSize(111, 41));
        closeButton->setMaximumSize(QSize(111, 41));
        writeDataButton = new QPushButton(rampoven_Zone_DampingClass);
        writeDataButton->setObjectName(QString::fromUtf8("writeDataButton"));
        writeDataButton->setGeometry(QRect(10, 490, 111, 41));
        writeDataButton->setMinimumSize(QSize(111, 41));
        writeDataButton->setMaximumSize(QSize(111, 41));
        layoutWidget_2 = new QWidget(rampoven_Zone_DampingClass);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 30, 172, 40));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        ro_Autotune_Damping_label = new QLabel(layoutWidget_2);
        ro_Autotune_Damping_label->setObjectName(QString::fromUtf8("ro_Autotune_Damping_label"));

        horizontalLayout_11->addWidget(ro_Autotune_Damping_label);

        ro_Autotune_Damping_SpinBox = new QDoubleSpinBox(layoutWidget_2);
        ro_Autotune_Damping_SpinBox->setObjectName(QString::fromUtf8("ro_Autotune_Damping_SpinBox"));
        QFont font;
        font.setPointSize(18);
        ro_Autotune_Damping_SpinBox->setFont(font);
        ro_Autotune_Damping_SpinBox->setDecimals(0);
        ro_Autotune_Damping_SpinBox->setMinimum(1);
        ro_Autotune_Damping_SpinBox->setMaximum(3);
        ro_Autotune_Damping_SpinBox->setValue(1);

        horizontalLayout_11->addWidget(ro_Autotune_Damping_SpinBox);

        ReadDataButton = new QPushButton(rampoven_Zone_DampingClass);
        ReadDataButton->setObjectName(QString::fromUtf8("ReadDataButton"));
        ReadDataButton->setGeometry(QRect(140, 490, 111, 41));
        ReadDataButton->setMinimumSize(QSize(111, 41));
        ReadDataButton->setMaximumSize(QSize(111, 41));
        layoutWidget_3 = new QWidget(rampoven_Zone_DampingClass);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(20, 120, 172, 40));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        ro_Autotune_Damping_label_2 = new QLabel(layoutWidget_3);
        ro_Autotune_Damping_label_2->setObjectName(QString::fromUtf8("ro_Autotune_Damping_label_2"));

        horizontalLayout_12->addWidget(ro_Autotune_Damping_label_2);

        roAutoTuneModeSpinBox = new QDoubleSpinBox(layoutWidget_3);
        roAutoTuneModeSpinBox->setObjectName(QString::fromUtf8("roAutoTuneModeSpinBox"));
        roAutoTuneModeSpinBox->setFont(font);
        roAutoTuneModeSpinBox->setDecimals(0);
        roAutoTuneModeSpinBox->setMinimum(1);
        roAutoTuneModeSpinBox->setMaximum(6);
        roAutoTuneModeSpinBox->setValue(3);

        horizontalLayout_12->addWidget(roAutoTuneModeSpinBox);

        autoTuneStartButton = new QPushButton(rampoven_Zone_DampingClass);
        autoTuneStartButton->setObjectName(QString::fromUtf8("autoTuneStartButton"));
        autoTuneStartButton->setGeometry(QRect(140, 260, 111, 41));
        autoTuneStartButton->setMinimumSize(QSize(111, 41));
        autoTuneStartButton->setMaximumSize(QSize(111, 41));
        layoutWidget = new QWidget(rampoven_Zone_DampingClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(300, 20, 63, 56));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        slaveIDnameLabel = new QLabel(layoutWidget);
        slaveIDnameLabel->setObjectName(QString::fromUtf8("slaveIDnameLabel"));
        slaveIDnameLabel->setMaximumSize(QSize(61, 17));

        verticalLayout->addWidget(slaveIDnameLabel);

        slaveIdSpinBox = new QDoubleSpinBox(layoutWidget);
        slaveIdSpinBox->setObjectName(QString::fromUtf8("slaveIdSpinBox"));
        slaveIdSpinBox->setMinimumSize(QSize(61, 31));
        slaveIdSpinBox->setMaximumSize(QSize(61, 31));
        slaveIdSpinBox->setFont(font);
        slaveIdSpinBox->setFocusPolicy(Qt::TabFocus);
        slaveIdSpinBox->setDecimals(0);
        slaveIdSpinBox->setMinimum(0);
        slaveIdSpinBox->setMaximum(4);
        slaveIdSpinBox->setValue(0);

        verticalLayout->addWidget(slaveIdSpinBox);

        autoTuneStatusLineEdit = new QLineEdit(rampoven_Zone_DampingClass);
        autoTuneStatusLineEdit->setObjectName(QString::fromUtf8("autoTuneStatusLineEdit"));
        autoTuneStatusLineEdit->setGeometry(QRect(100, 200, 201, 51));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        autoTuneStatusLineEdit->setFont(font1);
        detSetpointLabel = new QLabel(rampoven_Zone_DampingClass);
        detSetpointLabel->setObjectName(QString::fromUtf8("detSetpointLabel"));
        detSetpointLabel->setGeometry(QRect(190, 310, 141, 41));
        ovenSetTempSpinBox = new QDoubleSpinBox(rampoven_Zone_DampingClass);
        ovenSetTempSpinBox->setObjectName(QString::fromUtf8("ovenSetTempSpinBox"));
        ovenSetTempSpinBox->setGeometry(QRect(190, 360, 141, 71));
        ovenSetTempSpinBox->setMinimumSize(QSize(81, 41));
        QFont font2;
        font2.setPointSize(50);
        font2.setBold(false);
        font2.setWeight(50);
        ovenSetTempSpinBox->setFont(font2);
        ovenSetTempSpinBox->setDecimals(0);
        ovenSetTempSpinBox->setMaximum(450);
        ovenSetTempSpinBox->setValue(450);
        ovenActTempLCD = new QLCDNumber(rampoven_Zone_DampingClass);
        ovenActTempLCD->setObjectName(QString::fromUtf8("ovenActTempLCD"));
        ovenActTempLCD->setGeometry(QRect(40, 360, 131, 71));
        ovenActTempLCD->setMinimumSize(QSize(64, 41));
        ovenActTempLCD->setFont(font2);
        ovenActTempLCD->setSegmentStyle(QLCDNumber::Flat);
        ovenActTempLCD->setProperty("intValue", QVariant(25));
        detActualLabel = new QLabel(rampoven_Zone_DampingClass);
        detActualLabel->setObjectName(QString::fromUtf8("detActualLabel"));
        detActualLabel->setGeometry(QRect(60, 310, 101, 41));
        detActualLabel->setLayoutDirection(Qt::LeftToRight);

        retranslateUi(rampoven_Zone_DampingClass);
        QObject::connect(writeDataButton, SIGNAL(clicked()), rampoven_Zone_DampingClass, SLOT(WriteDataButton()));
        QObject::connect(ReadDataButton, SIGNAL(clicked()), rampoven_Zone_DampingClass, SLOT(ReadDataButton()));
        QObject::connect(closeButton, SIGNAL(clicked()), rampoven_Zone_DampingClass, SLOT(close()));
        QObject::connect(autoTuneStartButton, SIGNAL(released()), rampoven_Zone_DampingClass, SLOT(autoTuneStartButton()));

        QMetaObject::connectSlotsByName(rampoven_Zone_DampingClass);
    } // setupUi

    void retranslateUi(QDialog *rampoven_Zone_DampingClass)
    {
        rampoven_Zone_DampingClass->setWindowTitle(QApplication::translate("rampoven_Zone_DampingClass", "rampoven_Zone_Damping", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("rampoven_Zone_DampingClass", "CLOSE", 0, QApplication::UnicodeUTF8));
        writeDataButton->setText(QApplication::translate("rampoven_Zone_DampingClass", "Write", 0, QApplication::UnicodeUTF8));
        ro_Autotune_Damping_label->setText(QApplication::translate("rampoven_Zone_DampingClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Autotune</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Damping</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        ReadDataButton->setText(QApplication::translate("rampoven_Zone_DampingClass", "Read", 0, QApplication::UnicodeUTF8));
        ro_Autotune_Damping_label_2->setText(QApplication::translate("rampoven_Zone_DampingClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Autotune</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">MODE</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        autoTuneStartButton->setText(QApplication::translate("rampoven_Zone_DampingClass", "Auto Tune Start", 0, QApplication::UnicodeUTF8));
        slaveIDnameLabel->setText(QApplication::translate("rampoven_Zone_DampingClass", "Zone", 0, QApplication::UnicodeUTF8));
        detSetpointLabel->setText(QApplication::translate("rampoven_Zone_DampingClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:24pt; text-decoration: underline;\">Setpoint</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        detActualLabel->setText(QApplication::translate("rampoven_Zone_DampingClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:24pt; text-decoration: underline;\">Actual</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class rampoven_Zone_DampingClass: public Ui_rampoven_Zone_DampingClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAMPOVEN_ZONE_DAMPING_H
