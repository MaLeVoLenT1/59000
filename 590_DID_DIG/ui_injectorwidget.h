/********************************************************************************
** Form generated from reading UI file 'injectorwidget.ui'
**
** Created: Wed Jan 8 09:17:35 2020
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INJECTORWIDGET_H
#define UI_INJECTORWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InjectorWidget
{
public:
    QLabel *injectorLabel;
    QCheckBox *tempCheckBox;
    QDoubleSpinBox *injSetTempSpinBox;
    QLCDNumber *injActTempLCD;
    QLabel *injTempLabel;
    QLabel *typeLabel;
    QLabel *nameLabel;
    QLabel *tempSetTestLabel;
    QToolButton *actualTempButton;
    QLabel *detSetpointLabel;
    QLabel *detActualLabel;
    QLabel *detOnOffLabel;
    QPushButton *sendTempButton;
    QPushButton *readPressureButton;

    void setupUi(QWidget *InjectorWidget)
    {
        if (InjectorWidget->objectName().isEmpty())
            InjectorWidget->setObjectName(QString::fromUtf8("InjectorWidget"));
        InjectorWidget->resize(480, 304);
        injectorLabel = new QLabel(InjectorWidget);
        injectorLabel->setObjectName(QString::fromUtf8("injectorLabel"));
        injectorLabel->setGeometry(QRect(0, 50, 321, 41));
        tempCheckBox = new QCheckBox(InjectorWidget);
        tempCheckBox->setObjectName(QString::fromUtf8("tempCheckBox"));
        tempCheckBox->setGeometry(QRect(40, 180, 21, 17));
        injSetTempSpinBox = new QDoubleSpinBox(InjectorWidget);
        injSetTempSpinBox->setObjectName(QString::fromUtf8("injSetTempSpinBox"));
        injSetTempSpinBox->setGeometry(QRect(300, 140, 131, 71));
        QFont font;
        font.setPointSize(50);
        injSetTempSpinBox->setFont(font);
        injSetTempSpinBox->setDecimals(0);
        injActTempLCD = new QLCDNumber(InjectorWidget);
        injActTempLCD->setObjectName(QString::fromUtf8("injActTempLCD"));
        injActTempLCD->setGeometry(QRect(160, 140, 131, 71));
        injActTempLCD->setFont(font);
        injActTempLCD->setSegmentStyle(QLCDNumber::Flat);
        injTempLabel = new QLabel(InjectorWidget);
        injTempLabel->setObjectName(QString::fromUtf8("injTempLabel"));
        injTempLabel->setGeometry(QRect(0, 100, 141, 20));
        typeLabel = new QLabel(InjectorWidget);
        typeLabel->setObjectName(QString::fromUtf8("typeLabel"));
        typeLabel->setGeometry(QRect(290, 10, 181, 31));
        nameLabel = new QLabel(InjectorWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setGeometry(QRect(10, 10, 221, 31));
        tempSetTestLabel = new QLabel(InjectorWidget);
        tempSetTestLabel->setObjectName(QString::fromUtf8("tempSetTestLabel"));
        tempSetTestLabel->setGeometry(QRect(340, 280, 46, 13));
        actualTempButton = new QToolButton(InjectorWidget);
        actualTempButton->setObjectName(QString::fromUtf8("actualTempButton"));
        actualTempButton->setGeometry(QRect(90, 140, 71, 71));
        detSetpointLabel = new QLabel(InjectorWidget);
        detSetpointLabel->setObjectName(QString::fromUtf8("detSetpointLabel"));
        detSetpointLabel->setGeometry(QRect(300, 90, 141, 41));
        detActualLabel = new QLabel(InjectorWidget);
        detActualLabel->setObjectName(QString::fromUtf8("detActualLabel"));
        detActualLabel->setGeometry(QRect(160, 90, 101, 41));
        detOnOffLabel = new QLabel(InjectorWidget);
        detOnOffLabel->setObjectName(QString::fromUtf8("detOnOffLabel"));
        detOnOffLabel->setGeometry(QRect(0, 140, 101, 31));
        sendTempButton = new QPushButton(InjectorWidget);
        sendTempButton->setObjectName(QString::fromUtf8("sendTempButton"));
        sendTempButton->setGeometry(QRect(320, 230, 101, 41));
        sendTempButton->setMinimumSize(QSize(0, 0));
        sendTempButton->setMaximumSize(QSize(171, 41));
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
        sendTempButton->setPalette(palette);
        QFont font1;
        font1.setPointSize(18);
        sendTempButton->setFont(font1);
        readPressureButton = new QPushButton(InjectorWidget);
        readPressureButton->setObjectName(QString::fromUtf8("readPressureButton"));
        readPressureButton->setGeometry(QRect(0, 210, 101, 41));
        readPressureButton->setMinimumSize(QSize(0, 0));
        readPressureButton->setMaximumSize(QSize(171, 41));
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
        readPressureButton->setPalette(palette1);
        readPressureButton->setFont(font1);

        retranslateUi(InjectorWidget);
        QObject::connect(sendTempButton, SIGNAL(released()), InjectorWidget, SLOT(manualWriteTemp()));
        QObject::connect(readPressureButton, SIGNAL(released()), InjectorWidget, SLOT(readPressureInj()));

        QMetaObject::connectSlotsByName(InjectorWidget);
    } // setupUi

    void retranslateUi(QWidget *InjectorWidget)
    {
        InjectorWidget->setWindowTitle(QApplication::translate("InjectorWidget", "Form", 0, QApplication::UnicodeUTF8));
        injectorLabel->setText(QApplication::translate("InjectorWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:24pt; font-weight:600; text-decoration: underline;\">Injector Settings:</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        tempCheckBox->setText(QString());
        injTempLabel->setText(QApplication::translate("InjectorWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-style:italic;\">Temperature (</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-style:italic; color:#ff0000;\">C</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-style:italic;\">)</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        typeLabel->setText(QApplication::translate("InjectorWidget", "TypeLabel", 0, QApplication::UnicodeUTF8));
        nameLabel->setText(QApplication::translate("InjectorWidget", "NameLabel", 0, QApplication::UnicodeUTF8));
        tempSetTestLabel->setText(QApplication::translate("InjectorWidget", "( )", 0, QApplication::UnicodeUTF8));
        actualTempButton->setText(QApplication::translate("InjectorWidget", "...", 0, QApplication::UnicodeUTF8));
        detSetpointLabel->setText(QApplication::translate("InjectorWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:24pt; text-decoration: underline;\">Setpoint</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        detActualLabel->setText(QApplication::translate("InjectorWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:24pt; text-decoration: underline;\">Actual</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        detOnOffLabel->setText(QApplication::translate("InjectorWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:18pt; text-decoration: underline;\">ON/OFF</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        sendTempButton->setText(QApplication::translate("InjectorWidget", "ENTER", 0, QApplication::UnicodeUTF8));
        readPressureButton->setText(QApplication::translate("InjectorWidget", "Pressure", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class InjectorWidget: public Ui_InjectorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INJECTORWIDGET_H
