/********************************************************************************
** Form generated from reading UI file 'rampoven_registers.ui'
**
** Created: Wed Jan 15 09:50:58 2020
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RAMPOVEN_REGISTERS_H
#define UI_RAMPOVEN_REGISTERS_H

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

class Ui_rampoven_RegistersClass
{
public:
    QPushButton *closeButton;
    QPushButton *ReadDataButton;
    QPushButton *writeDataButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *ro_process_value_label;
    QDoubleSpinBox *ro_process_value_SpinBox;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *ro_setpoint_eeprom_label;
    QDoubleSpinBox *ro_setpoint_eeprom_SpinBox;
    QHBoxLayout *horizontalLayout_6;
    QLabel *ro_setpoint_ram_Label;
    QDoubleSpinBox *ro_setpoint_ram_SpinBox;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *ro_recipe_setpoint_label;
    QDoubleSpinBox *ro_recipe_setpoint_SpinBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *ro_active_setpoint_Label;
    QDoubleSpinBox *ro_active_setpoint_SpinBox;

    void setupUi(QDialog *rampoven_RegistersClass)
    {
        if (rampoven_RegistersClass->objectName().isEmpty())
            rampoven_RegistersClass->setObjectName(QString::fromUtf8("rampoven_RegistersClass"));
        rampoven_RegistersClass->resize(454, 200);
        closeButton = new QPushButton(rampoven_RegistersClass);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(170, 150, 111, 41));
        closeButton->setMinimumSize(QSize(111, 41));
        closeButton->setMaximumSize(QSize(111, 41));
        ReadDataButton = new QPushButton(rampoven_RegistersClass);
        ReadDataButton->setObjectName(QString::fromUtf8("ReadDataButton"));
        ReadDataButton->setGeometry(QRect(60, 150, 111, 41));
        ReadDataButton->setMinimumSize(QSize(111, 41));
        ReadDataButton->setMaximumSize(QSize(111, 41));
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
        ReadDataButton->setPalette(palette);
        writeDataButton = new QPushButton(rampoven_RegistersClass);
        writeDataButton->setObjectName(QString::fromUtf8("writeDataButton"));
        writeDataButton->setGeometry(QRect(280, 150, 111, 41));
        writeDataButton->setMinimumSize(QSize(111, 41));
        writeDataButton->setMaximumSize(QSize(111, 41));
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
        writeDataButton->setPalette(palette1);
        layoutWidget = new QWidget(rampoven_RegistersClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 10, 221, 40));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ro_process_value_label = new QLabel(layoutWidget);
        ro_process_value_label->setObjectName(QString::fromUtf8("ro_process_value_label"));

        horizontalLayout->addWidget(ro_process_value_label);

        ro_process_value_SpinBox = new QDoubleSpinBox(layoutWidget);
        ro_process_value_SpinBox->setObjectName(QString::fromUtf8("ro_process_value_SpinBox"));
        QFont font;
        font.setPointSize(18);
        ro_process_value_SpinBox->setFont(font);
        ro_process_value_SpinBox->setDecimals(0);
        ro_process_value_SpinBox->setMinimum(-32768);
        ro_process_value_SpinBox->setMaximum(32767);
        ro_process_value_SpinBox->setValue(-32768);

        horizontalLayout->addWidget(ro_process_value_SpinBox);

        layoutWidget1 = new QWidget(rampoven_RegistersClass);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 57, 433, 92));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        ro_setpoint_eeprom_label = new QLabel(layoutWidget1);
        ro_setpoint_eeprom_label->setObjectName(QString::fromUtf8("ro_setpoint_eeprom_label"));

        horizontalLayout_5->addWidget(ro_setpoint_eeprom_label);

        ro_setpoint_eeprom_SpinBox = new QDoubleSpinBox(layoutWidget1);
        ro_setpoint_eeprom_SpinBox->setObjectName(QString::fromUtf8("ro_setpoint_eeprom_SpinBox"));
        ro_setpoint_eeprom_SpinBox->setFont(font);
        ro_setpoint_eeprom_SpinBox->setDecimals(0);
        ro_setpoint_eeprom_SpinBox->setMinimum(1);
        ro_setpoint_eeprom_SpinBox->setMaximum(77);
        ro_setpoint_eeprom_SpinBox->setValue(1);

        horizontalLayout_5->addWidget(ro_setpoint_eeprom_SpinBox);


        horizontalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        ro_setpoint_ram_Label = new QLabel(layoutWidget1);
        ro_setpoint_ram_Label->setObjectName(QString::fromUtf8("ro_setpoint_ram_Label"));

        horizontalLayout_6->addWidget(ro_setpoint_ram_Label);

        ro_setpoint_ram_SpinBox = new QDoubleSpinBox(layoutWidget1);
        ro_setpoint_ram_SpinBox->setObjectName(QString::fromUtf8("ro_setpoint_ram_SpinBox"));
        ro_setpoint_ram_SpinBox->setFont(font);
        ro_setpoint_ram_SpinBox->setDecimals(0);
        ro_setpoint_ram_SpinBox->setMinimum(0);
        ro_setpoint_ram_SpinBox->setMaximum(77);
        ro_setpoint_ram_SpinBox->setValue(1);

        horizontalLayout_6->addWidget(ro_setpoint_ram_SpinBox);


        horizontalLayout_4->addLayout(horizontalLayout_6);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        ro_recipe_setpoint_label = new QLabel(layoutWidget1);
        ro_recipe_setpoint_label->setObjectName(QString::fromUtf8("ro_recipe_setpoint_label"));

        horizontalLayout_7->addWidget(ro_recipe_setpoint_label);

        ro_recipe_setpoint_SpinBox = new QDoubleSpinBox(layoutWidget1);
        ro_recipe_setpoint_SpinBox->setObjectName(QString::fromUtf8("ro_recipe_setpoint_SpinBox"));
        ro_recipe_setpoint_SpinBox->setFont(font);
        ro_recipe_setpoint_SpinBox->setDecimals(0);
        ro_recipe_setpoint_SpinBox->setMinimum(77);
        ro_recipe_setpoint_SpinBox->setMaximum(77);
        ro_recipe_setpoint_SpinBox->setValue(77);

        horizontalLayout_7->addWidget(ro_recipe_setpoint_SpinBox);


        horizontalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        ro_active_setpoint_Label = new QLabel(layoutWidget1);
        ro_active_setpoint_Label->setObjectName(QString::fromUtf8("ro_active_setpoint_Label"));

        horizontalLayout_2->addWidget(ro_active_setpoint_Label);

        ro_active_setpoint_SpinBox = new QDoubleSpinBox(layoutWidget1);
        ro_active_setpoint_SpinBox->setObjectName(QString::fromUtf8("ro_active_setpoint_SpinBox"));
        ro_active_setpoint_SpinBox->setFont(font);
        ro_active_setpoint_SpinBox->setDecimals(0);
        ro_active_setpoint_SpinBox->setMinimum(-1999);
        ro_active_setpoint_SpinBox->setMaximum(9999);
        ro_active_setpoint_SpinBox->setValue(9999);

        horizontalLayout_2->addWidget(ro_active_setpoint_SpinBox);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(rampoven_RegistersClass);
        QObject::connect(writeDataButton, SIGNAL(clicked()), rampoven_RegistersClass, SLOT(WriteDataButton()));
        QObject::connect(ReadDataButton, SIGNAL(clicked()), rampoven_RegistersClass, SLOT(ReadDataButton()));
        QObject::connect(closeButton, SIGNAL(clicked()), rampoven_RegistersClass, SLOT(close()));

        QMetaObject::connectSlotsByName(rampoven_RegistersClass);
    } // setupUi

    void retranslateUi(QDialog *rampoven_RegistersClass)
    {
        rampoven_RegistersClass->setWindowTitle(QApplication::translate("rampoven_RegistersClass", "rampoven_Registers", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("rampoven_RegistersClass", "CLOSE", 0, QApplication::UnicodeUTF8));
        ReadDataButton->setText(QApplication::translate("rampoven_RegistersClass", "Read", 0, QApplication::UnicodeUTF8));
        writeDataButton->setText(QApplication::translate("rampoven_RegistersClass", "Write", 0, QApplication::UnicodeUTF8));
        ro_process_value_label->setText(QApplication::translate("rampoven_RegistersClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Process Value</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        ro_setpoint_eeprom_label->setText(QApplication::translate("rampoven_RegistersClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Setpoint</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">EEPROM &amp; RAM</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        ro_setpoint_ram_Label->setText(QApplication::translate("rampoven_RegistersClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Setpoint</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">RAM</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        ro_recipe_setpoint_label->setText(QApplication::translate("rampoven_RegistersClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Recipe Setpoint</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        ro_active_setpoint_Label->setText(QApplication::translate("rampoven_RegistersClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Active Setpoint</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class rampoven_RegistersClass: public Ui_rampoven_RegistersClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAMPOVEN_REGISTERS_H
