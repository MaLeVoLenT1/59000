/********************************************************************************
** Form generated from reading UI file 'inletwidget.ui'
**
** Created: Wed Jan 8 09:17:35 2020
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INLETWIDGET_H
#define UI_INLETWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InletWidget
{
public:
    QLabel *inletLabel;
    QDoubleSpinBox *inletSetTempSpinBox;
    QLCDNumber *inletActTempLCD;
    QCheckBox *tempCheckBox;
    QLabel *typeLabel;
    QLabel *nameLabel;
    QLabel *inletTempLabel;
    QLabel *tempSetTestLabel;
    QToolButton *actualTempButton;
    QLabel *inletOnOffLabel;
    QLabel *inletActualLabel;
    QLabel *inletSetpointLabel;
    QPushButton *sendTempButton;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *heaterOnButton;
    QCheckBox *heatOnCheckBox;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QPushButton *heaterOffButton;
    QCheckBox *heatOffCheckBox;

    void setupUi(QWidget *InletWidget)
    {
        if (InletWidget->objectName().isEmpty())
            InletWidget->setObjectName(QString::fromUtf8("InletWidget"));
        InletWidget->resize(480, 287);
        inletLabel = new QLabel(InletWidget);
        inletLabel->setObjectName(QString::fromUtf8("inletLabel"));
        inletLabel->setGeometry(QRect(110, 40, 261, 51));
        inletSetTempSpinBox = new QDoubleSpinBox(InletWidget);
        inletSetTempSpinBox->setObjectName(QString::fromUtf8("inletSetTempSpinBox"));
        inletSetTempSpinBox->setGeometry(QRect(340, 120, 131, 71));
        QFont font;
        font.setPointSize(50);
        inletSetTempSpinBox->setFont(font);
        inletSetTempSpinBox->setDecimals(0);
        inletActTempLCD = new QLCDNumber(InletWidget);
        inletActTempLCD->setObjectName(QString::fromUtf8("inletActTempLCD"));
        inletActTempLCD->setGeometry(QRect(190, 120, 131, 71));
        inletActTempLCD->setSegmentStyle(QLCDNumber::Flat);
        tempCheckBox = new QCheckBox(InletWidget);
        tempCheckBox->setObjectName(QString::fromUtf8("tempCheckBox"));
        tempCheckBox->setGeometry(QRect(50, 160, 21, 17));
        typeLabel = new QLabel(InletWidget);
        typeLabel->setObjectName(QString::fromUtf8("typeLabel"));
        typeLabel->setGeometry(QRect(200, 10, 211, 31));
        nameLabel = new QLabel(InletWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setGeometry(QRect(10, 10, 191, 31));
        inletTempLabel = new QLabel(InletWidget);
        inletTempLabel->setObjectName(QString::fromUtf8("inletTempLabel"));
        inletTempLabel->setGeometry(QRect(20, 90, 141, 20));
        tempSetTestLabel = new QLabel(InletWidget);
        tempSetTestLabel->setObjectName(QString::fromUtf8("tempSetTestLabel"));
        tempSetTestLabel->setGeometry(QRect(350, 260, 46, 13));
        actualTempButton = new QToolButton(InletWidget);
        actualTempButton->setObjectName(QString::fromUtf8("actualTempButton"));
        actualTempButton->setGeometry(QRect(120, 120, 71, 71));
        inletOnOffLabel = new QLabel(InletWidget);
        inletOnOffLabel->setObjectName(QString::fromUtf8("inletOnOffLabel"));
        inletOnOffLabel->setGeometry(QRect(10, 120, 91, 31));
        inletActualLabel = new QLabel(InletWidget);
        inletActualLabel->setObjectName(QString::fromUtf8("inletActualLabel"));
        inletActualLabel->setGeometry(QRect(190, 80, 101, 41));
        inletSetpointLabel = new QLabel(InletWidget);
        inletSetpointLabel->setObjectName(QString::fromUtf8("inletSetpointLabel"));
        inletSetpointLabel->setGeometry(QRect(340, 80, 141, 41));
        sendTempButton = new QPushButton(InletWidget);
        sendTempButton->setObjectName(QString::fromUtf8("sendTempButton"));
        sendTempButton->setGeometry(QRect(350, 210, 101, 41));
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
        layoutWidget = new QWidget(InletWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 410, 112, 67));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        heaterOnButton = new QPushButton(layoutWidget);
        heaterOnButton->setObjectName(QString::fromUtf8("heaterOnButton"));
        heaterOnButton->setMinimumSize(QSize(0, 0));
        heaterOnButton->setMaximumSize(QSize(171, 41));
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
        heaterOnButton->setPalette(palette1);
        heaterOnButton->setFont(font1);

        gridLayout->addWidget(heaterOnButton, 0, 0, 1, 1);

        heatOnCheckBox = new QCheckBox(layoutWidget);
        heatOnCheckBox->setObjectName(QString::fromUtf8("heatOnCheckBox"));
        heatOnCheckBox->setMinimumSize(QSize(21, 21));
        QFont font2;
        font2.setPointSize(12);
        heatOnCheckBox->setFont(font2);
        heatOnCheckBox->setAcceptDrops(false);

        gridLayout->addWidget(heatOnCheckBox, 1, 0, 1, 1);

        layoutWidget1 = new QWidget(InletWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 410, 118, 67));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        heaterOffButton = new QPushButton(layoutWidget1);
        heaterOffButton->setObjectName(QString::fromUtf8("heaterOffButton"));
        heaterOffButton->setMinimumSize(QSize(0, 0));
        heaterOffButton->setMaximumSize(QSize(171, 41));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
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
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
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
        heaterOffButton->setPalette(palette2);
        heaterOffButton->setFont(font1);

        gridLayout_2->addWidget(heaterOffButton, 0, 0, 1, 1);

        heatOffCheckBox = new QCheckBox(layoutWidget1);
        heatOffCheckBox->setObjectName(QString::fromUtf8("heatOffCheckBox"));
        heatOffCheckBox->setMinimumSize(QSize(21, 21));
        heatOffCheckBox->setFont(font2);
        heatOffCheckBox->setAcceptDrops(false);

        gridLayout_2->addWidget(heatOffCheckBox, 1, 0, 1, 1);


        retranslateUi(InletWidget);
        QObject::connect(sendTempButton, SIGNAL(released()), InletWidget, SLOT(manualWriteTemp()));

        QMetaObject::connectSlotsByName(InletWidget);
    } // setupUi

    void retranslateUi(QWidget *InletWidget)
    {
        InletWidget->setWindowTitle(QApplication::translate("InletWidget", "Form", 0, QApplication::UnicodeUTF8));
        inletLabel->setText(QApplication::translate("InletWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:24pt; font-weight:600; text-decoration: underline;\">Inlet Settings:</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        tempCheckBox->setText(QString());
        typeLabel->setText(QApplication::translate("InletWidget", "TypeLabel", 0, QApplication::UnicodeUTF8));
        nameLabel->setText(QApplication::translate("InletWidget", "NameLabel", 0, QApplication::UnicodeUTF8));
        inletTempLabel->setText(QApplication::translate("InletWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-style:italic;\">Temperature (</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-style:italic; color:#ff0000;\">C</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-style:italic;\">)</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        tempSetTestLabel->setText(QApplication::translate("InletWidget", "( )", 0, QApplication::UnicodeUTF8));
        actualTempButton->setText(QApplication::translate("InletWidget", "...", 0, QApplication::UnicodeUTF8));
        inletOnOffLabel->setText(QApplication::translate("InletWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:18pt; text-decoration: underline;\">ON/OFF</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        inletActualLabel->setText(QApplication::translate("InletWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:24pt; text-decoration: underline;\">Actual</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        inletSetpointLabel->setText(QApplication::translate("InletWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:24pt; text-decoration: underline;\">Setpoint</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        sendTempButton->setText(QApplication::translate("InletWidget", "ENTER", 0, QApplication::UnicodeUTF8));
        heaterOnButton->setText(QApplication::translate("InletWidget", "Heat On", 0, QApplication::UnicodeUTF8));
        heatOnCheckBox->setText(QString());
        heaterOffButton->setText(QApplication::translate("InletWidget", "Heat Off", 0, QApplication::UnicodeUTF8));
        heatOffCheckBox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class InletWidget: public Ui_InletWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INLETWIDGET_H
