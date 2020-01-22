/********************************************************************************
** Form generated from reading UI file 'dataconfig.ui'
**
** Created: Tue Jan 7 12:49:35 2020
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATACONFIG_H
#define UI_DATACONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDateEdit>
#include <QtGui/QDateTimeEdit>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QTimeEdit>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dataConfigClass
{
public:
    QDateTimeEdit *datacfClockSpinBox;
    QTimeEdit *datacfTimeSpinBox;
    QDateEdit *datacfDateSpinBox;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_2;
    QCheckBox *dataconfigAlarmCheckBox;
    QLabel *dataconfigOnOffAlarmLabel;
    QLabel *dataconfigAlarmLabel;
    QWidget *layoutWidget_3;
    QGridLayout *gridLayout_3;
    QCheckBox *dataconfigTimeCheckBox;
    QLabel *dataconfigTimeonoffLabel;
    QLabel *dataconfigTimelabel;
    QLineEdit *busyLineEdit;
    QToolButton *dlEnterButton;

    void setupUi(QDialog *dataConfigClass)
    {
        if (dataConfigClass->objectName().isEmpty())
            dataConfigClass->setObjectName(QString::fromUtf8("dataConfigClass"));
        dataConfigClass->resize(480, 272);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(170, 255, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(213, 255, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(191, 255, 63, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(85, 127, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(113, 170, 0, 255));
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
        QBrush brush7(QColor(212, 255, 127, 255));
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
        dataConfigClass->setPalette(palette);
        datacfClockSpinBox = new QDateTimeEdit(dataConfigClass);
        datacfClockSpinBox->setObjectName(QString::fromUtf8("datacfClockSpinBox"));
        datacfClockSpinBox->setGeometry(QRect(10, 10, 351, 41));
        QFont font;
        font.setPointSize(26);
        font.setItalic(false);
        datacfClockSpinBox->setFont(font);
        datacfClockSpinBox->setFocusPolicy(Qt::TabFocus);
        datacfClockSpinBox->setAccelerated(false);
        datacfTimeSpinBox = new QTimeEdit(dataConfigClass);
        datacfTimeSpinBox->setObjectName(QString::fromUtf8("datacfTimeSpinBox"));
        datacfTimeSpinBox->setGeometry(QRect(10, 80, 301, 41));
        datacfTimeSpinBox->setFont(font);
        datacfTimeSpinBox->setFocusPolicy(Qt::TabFocus);
        datacfTimeSpinBox->setAccelerated(false);
        datacfDateSpinBox = new QDateEdit(dataConfigClass);
        datacfDateSpinBox->setObjectName(QString::fromUtf8("datacfDateSpinBox"));
        datacfDateSpinBox->setGeometry(QRect(10, 130, 191, 41));
        datacfDateSpinBox->setFont(font);
        datacfDateSpinBox->setFocusPolicy(Qt::TabFocus);
        datacfDateSpinBox->setAccelerated(false);
        layoutWidget_2 = new QWidget(dataConfigClass);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(110, 230, 89, 33));
        gridLayout_2 = new QGridLayout(layoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        dataconfigAlarmCheckBox = new QCheckBox(layoutWidget_2);
        dataconfigAlarmCheckBox->setObjectName(QString::fromUtf8("dataconfigAlarmCheckBox"));
        dataconfigAlarmCheckBox->setMinimumSize(QSize(31, 31));
        QFont font1;
        font1.setPointSize(12);
        dataconfigAlarmCheckBox->setFont(font1);
        dataconfigAlarmCheckBox->setAcceptDrops(false);

        gridLayout_2->addWidget(dataconfigAlarmCheckBox, 0, 0, 1, 1);

        dataconfigOnOffAlarmLabel = new QLabel(layoutWidget_2);
        dataconfigOnOffAlarmLabel->setObjectName(QString::fromUtf8("dataconfigOnOffAlarmLabel"));

        gridLayout_2->addWidget(dataconfigOnOffAlarmLabel, 0, 1, 1, 1);

        dataconfigAlarmLabel = new QLabel(dataConfigClass);
        dataconfigAlarmLabel->setObjectName(QString::fromUtf8("dataconfigAlarmLabel"));
        dataconfigAlarmLabel->setGeometry(QRect(10, 230, 91, 31));
        dataconfigAlarmLabel->setLineWidth(4);
        dataconfigAlarmLabel->setIndent(-4);
        layoutWidget_3 = new QWidget(dataConfigClass);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(110, 190, 89, 33));
        gridLayout_3 = new QGridLayout(layoutWidget_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        dataconfigTimeCheckBox = new QCheckBox(layoutWidget_3);
        dataconfigTimeCheckBox->setObjectName(QString::fromUtf8("dataconfigTimeCheckBox"));
        dataconfigTimeCheckBox->setMinimumSize(QSize(31, 31));
        dataconfigTimeCheckBox->setFont(font1);
        dataconfigTimeCheckBox->setAcceptDrops(false);

        gridLayout_3->addWidget(dataconfigTimeCheckBox, 0, 0, 1, 1);

        dataconfigTimeonoffLabel = new QLabel(layoutWidget_3);
        dataconfigTimeonoffLabel->setObjectName(QString::fromUtf8("dataconfigTimeonoffLabel"));

        gridLayout_3->addWidget(dataconfigTimeonoffLabel, 0, 1, 1, 1);

        dataconfigTimelabel = new QLabel(dataConfigClass);
        dataconfigTimelabel->setObjectName(QString::fromUtf8("dataconfigTimelabel"));
        dataconfigTimelabel->setGeometry(QRect(10, 190, 61, 31));
        dataconfigTimelabel->setLineWidth(4);
        dataconfigTimelabel->setIndent(-4);
        busyLineEdit = new QLineEdit(dataConfigClass);
        busyLineEdit->setObjectName(QString::fromUtf8("busyLineEdit"));
        busyLineEdit->setGeometry(QRect(370, 10, 101, 27));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        busyLineEdit->setFont(font2);
        dlEnterButton = new QToolButton(dataConfigClass);
        dlEnterButton->setObjectName(QString::fromUtf8("dlEnterButton"));
        dlEnterButton->setGeometry(QRect(400, 220, 71, 41));
        dlEnterButton->setMinimumSize(QSize(41, 41));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush9(QColor(85, 255, 255, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush9);
        QBrush brush10(QColor(213, 255, 255, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush10);
        QBrush brush11(QColor(149, 255, 255, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        QBrush brush12(QColor(42, 127, 127, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush12);
        QBrush brush13(QColor(56, 170, 170, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush14(QColor(170, 255, 255, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        dlEnterButton->setPalette(palette1);
        dlEnterButton->setFocusPolicy(Qt::NoFocus);

        retranslateUi(dataConfigClass);
        QObject::connect(dlEnterButton, SIGNAL(released()), dataConfigClass, SLOT(close()));

        QMetaObject::connectSlotsByName(dataConfigClass);
    } // setupUi

    void retranslateUi(QDialog *dataConfigClass)
    {
        dataConfigClass->setWindowTitle(QApplication::translate("dataConfigClass", "dataConfig", 0, QApplication::UnicodeUTF8));
        datacfClockSpinBox->setDisplayFormat(QApplication::translate("dataConfigClass", "M/d/yy h:mm:ss AP", 0, QApplication::UnicodeUTF8));
        datacfTimeSpinBox->setDisplayFormat(QApplication::translate("dataConfigClass", "h:mm:ss AP", 0, QApplication::UnicodeUTF8));
        dataconfigAlarmCheckBox->setText(QString());
        dataconfigOnOffAlarmLabel->setText(QApplication::translate("dataConfigClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; text-decoration: underline;\">ON/OFF</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        dataconfigAlarmLabel->setText(QApplication::translate("dataConfigClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600; color:#0055ff;\">ALARM</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        dataconfigTimeCheckBox->setText(QString());
        dataconfigTimeonoffLabel->setText(QApplication::translate("dataConfigClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; text-decoration: underline;\">ON/OFF</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        dataconfigTimelabel->setText(QApplication::translate("dataConfigClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600; color:#0055ff;\">TIME</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        dlEnterButton->setText(QApplication::translate("dataConfigClass", "ENTER", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dataConfigClass: public Ui_dataConfigClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATACONFIG_H
