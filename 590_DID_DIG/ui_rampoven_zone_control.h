/********************************************************************************
** Form generated from reading UI file 'rampoven_zone_control.ui'
**
** Created: Mon Aug 19 13:25:32 2019
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RAMPOVEN_ZONE_CONTROL_H
#define UI_RAMPOVEN_ZONE_CONTROL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rampoven_zone_controlClass
{
public:
    QLabel *output_one_actionLabel_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *ro_Derivative_label;
    QDoubleSpinBox *ro_Derivative_SpinBox;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_8;
    QLabel *ro_Deadband_OutputOne_label;
    QDoubleSpinBox *ro_Deadband_OutputOne_SpinBox;
    QHBoxLayout *horizontalLayout_9;
    QLabel *ro_Hysteresis_OutputOne_label;
    QDoubleSpinBox *ro_Hysteresis_OutputOne_SpinBox;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout_12;
    QLabel *ro_Deadband_OutputTwo_label;
    QDoubleSpinBox *ro_Deadband_OutputTwo_SpinBox;
    QHBoxLayout *horizontalLayout_13;
    QLabel *ro_Hysteresis_OutputTwo_label;
    QDoubleSpinBox *ro_Hysteresis_OutputTwo_SpinBox;
    QPushButton *closeButton;
    QPushButton *ReadDataButton;
    QPushButton *writeDataButton;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_5;
    QLabel *ro_ManualReset_label;
    QDoubleSpinBox *ro_ManualReset_SpinBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *ro_AutoReset_label;
    QDoubleSpinBox *ro_AutoReset_SpinBox;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *ro_PID_band_outputOne_label;
    QDoubleSpinBox *ro_PID_band_outputOne_SpinBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *ro_PID_band_outputTwo_label;
    QDoubleSpinBox *ro_PID_band_outputTwo_SpinBox;

    void setupUi(QDialog *rampoven_zone_controlClass)
    {
        if (rampoven_zone_controlClass->objectName().isEmpty())
            rampoven_zone_controlClass->setObjectName(QString::fromUtf8("rampoven_zone_controlClass"));
        rampoven_zone_controlClass->resize(480, 800);
        output_one_actionLabel_2 = new QLabel(rampoven_zone_controlClass);
        output_one_actionLabel_2->setObjectName(QString::fromUtf8("output_one_actionLabel_2"));
        output_one_actionLabel_2->setGeometry(QRect(210, 40, 51, 31));
        output_one_actionLabel_2->setTextFormat(Qt::RichText);
        layoutWidget = new QWidget(rampoven_zone_controlClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(150, 190, 174, 40));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        ro_Derivative_label = new QLabel(layoutWidget);
        ro_Derivative_label->setObjectName(QString::fromUtf8("ro_Derivative_label"));

        horizontalLayout_3->addWidget(ro_Derivative_label);

        ro_Derivative_SpinBox = new QDoubleSpinBox(layoutWidget);
        ro_Derivative_SpinBox->setObjectName(QString::fromUtf8("ro_Derivative_SpinBox"));
        QFont font;
        font.setPointSize(18);
        ro_Derivative_SpinBox->setFont(font);
        ro_Derivative_SpinBox->setDecimals(0);
        ro_Derivative_SpinBox->setMinimum(0);
        ro_Derivative_SpinBox->setMaximum(2400);
        ro_Derivative_SpinBox->setValue(5);

        horizontalLayout_3->addWidget(ro_Derivative_SpinBox);

        layoutWidget1 = new QWidget(rampoven_zone_controlClass);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(50, 240, 380, 92));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        ro_Deadband_OutputOne_label = new QLabel(layoutWidget1);
        ro_Deadband_OutputOne_label->setObjectName(QString::fromUtf8("ro_Deadband_OutputOne_label"));

        horizontalLayout_8->addWidget(ro_Deadband_OutputOne_label);

        ro_Deadband_OutputOne_SpinBox = new QDoubleSpinBox(layoutWidget1);
        ro_Deadband_OutputOne_SpinBox->setObjectName(QString::fromUtf8("ro_Deadband_OutputOne_SpinBox"));
        ro_Deadband_OutputOne_SpinBox->setFont(font);
        ro_Deadband_OutputOne_SpinBox->setDecimals(0);
        ro_Deadband_OutputOne_SpinBox->setMinimum(-1999);
        ro_Deadband_OutputOne_SpinBox->setMaximum(9999);
        ro_Deadband_OutputOne_SpinBox->setValue(2);

        horizontalLayout_8->addWidget(ro_Deadband_OutputOne_SpinBox);


        horizontalLayout_10->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        ro_Hysteresis_OutputOne_label = new QLabel(layoutWidget1);
        ro_Hysteresis_OutputOne_label->setObjectName(QString::fromUtf8("ro_Hysteresis_OutputOne_label"));

        horizontalLayout_9->addWidget(ro_Hysteresis_OutputOne_label);

        ro_Hysteresis_OutputOne_SpinBox = new QDoubleSpinBox(layoutWidget1);
        ro_Hysteresis_OutputOne_SpinBox->setObjectName(QString::fromUtf8("ro_Hysteresis_OutputOne_SpinBox"));
        ro_Hysteresis_OutputOne_SpinBox->setFont(font);
        ro_Hysteresis_OutputOne_SpinBox->setDecimals(0);
        ro_Hysteresis_OutputOne_SpinBox->setMinimum(1);
        ro_Hysteresis_OutputOne_SpinBox->setMaximum(9999);
        ro_Hysteresis_OutputOne_SpinBox->setValue(1);

        horizontalLayout_9->addWidget(ro_Hysteresis_OutputOne_SpinBox);


        horizontalLayout_10->addLayout(horizontalLayout_9);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        ro_Deadband_OutputTwo_label = new QLabel(layoutWidget1);
        ro_Deadband_OutputTwo_label->setObjectName(QString::fromUtf8("ro_Deadband_OutputTwo_label"));

        horizontalLayout_12->addWidget(ro_Deadband_OutputTwo_label);

        ro_Deadband_OutputTwo_SpinBox = new QDoubleSpinBox(layoutWidget1);
        ro_Deadband_OutputTwo_SpinBox->setObjectName(QString::fromUtf8("ro_Deadband_OutputTwo_SpinBox"));
        ro_Deadband_OutputTwo_SpinBox->setFont(font);
        ro_Deadband_OutputTwo_SpinBox->setDecimals(0);
        ro_Deadband_OutputTwo_SpinBox->setMinimum(-1999);
        ro_Deadband_OutputTwo_SpinBox->setMaximum(9999);
        ro_Deadband_OutputTwo_SpinBox->setValue(2);

        horizontalLayout_12->addWidget(ro_Deadband_OutputTwo_SpinBox);


        horizontalLayout_11->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        ro_Hysteresis_OutputTwo_label = new QLabel(layoutWidget1);
        ro_Hysteresis_OutputTwo_label->setObjectName(QString::fromUtf8("ro_Hysteresis_OutputTwo_label"));

        horizontalLayout_13->addWidget(ro_Hysteresis_OutputTwo_label);

        ro_Hysteresis_OutputTwo_SpinBox = new QDoubleSpinBox(layoutWidget1);
        ro_Hysteresis_OutputTwo_SpinBox->setObjectName(QString::fromUtf8("ro_Hysteresis_OutputTwo_SpinBox"));
        ro_Hysteresis_OutputTwo_SpinBox->setFont(font);
        ro_Hysteresis_OutputTwo_SpinBox->setDecimals(0);
        ro_Hysteresis_OutputTwo_SpinBox->setMinimum(1);
        ro_Hysteresis_OutputTwo_SpinBox->setMaximum(9999);
        ro_Hysteresis_OutputTwo_SpinBox->setValue(1);

        horizontalLayout_13->addWidget(ro_Hysteresis_OutputTwo_SpinBox);


        horizontalLayout_11->addLayout(horizontalLayout_13);


        verticalLayout_2->addLayout(horizontalLayout_11);

        closeButton = new QPushButton(rampoven_zone_controlClass);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(310, 360, 111, 41));
        closeButton->setMinimumSize(QSize(111, 41));
        closeButton->setMaximumSize(QSize(111, 41));
        ReadDataButton = new QPushButton(rampoven_zone_controlClass);
        ReadDataButton->setObjectName(QString::fromUtf8("ReadDataButton"));
        ReadDataButton->setGeometry(QRect(170, 360, 111, 41));
        ReadDataButton->setMinimumSize(QSize(111, 41));
        ReadDataButton->setMaximumSize(QSize(111, 41));
        writeDataButton = new QPushButton(rampoven_zone_controlClass);
        writeDataButton->setObjectName(QString::fromUtf8("writeDataButton"));
        writeDataButton->setGeometry(QRect(40, 360, 111, 41));
        writeDataButton->setMinimumSize(QSize(111, 41));
        writeDataButton->setMaximumSize(QSize(111, 41));
        layoutWidget2 = new QWidget(rampoven_zone_controlClass);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(40, 130, 368, 42));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        ro_ManualReset_label = new QLabel(layoutWidget2);
        ro_ManualReset_label->setObjectName(QString::fromUtf8("ro_ManualReset_label"));

        horizontalLayout_5->addWidget(ro_ManualReset_label);

        ro_ManualReset_SpinBox = new QDoubleSpinBox(layoutWidget2);
        ro_ManualReset_SpinBox->setObjectName(QString::fromUtf8("ro_ManualReset_SpinBox"));
        ro_ManualReset_SpinBox->setFont(font);
        ro_ManualReset_SpinBox->setDecimals(0);
        ro_ManualReset_SpinBox->setMinimum(-100);
        ro_ManualReset_SpinBox->setMaximum(100);
        ro_ManualReset_SpinBox->setValue(0);

        horizontalLayout_5->addWidget(ro_ManualReset_SpinBox);


        horizontalLayout_7->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        ro_AutoReset_label = new QLabel(layoutWidget2);
        ro_AutoReset_label->setObjectName(QString::fromUtf8("ro_AutoReset_label"));

        horizontalLayout_4->addWidget(ro_AutoReset_label);

        ro_AutoReset_SpinBox = new QDoubleSpinBox(layoutWidget2);
        ro_AutoReset_SpinBox->setObjectName(QString::fromUtf8("ro_AutoReset_SpinBox"));
        ro_AutoReset_SpinBox->setFont(font);
        ro_AutoReset_SpinBox->setDecimals(0);
        ro_AutoReset_SpinBox->setMinimum(0);
        ro_AutoReset_SpinBox->setMaximum(9600);
        ro_AutoReset_SpinBox->setValue(25);

        horizontalLayout_4->addWidget(ro_AutoReset_SpinBox);


        horizontalLayout_7->addLayout(horizontalLayout_4);

        layoutWidget3 = new QWidget(rampoven_zone_controlClass);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 80, 430, 42));
        gridLayout_2 = new QGridLayout(layoutWidget3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        ro_PID_band_outputOne_label = new QLabel(layoutWidget3);
        ro_PID_band_outputOne_label->setObjectName(QString::fromUtf8("ro_PID_band_outputOne_label"));

        gridLayout->addWidget(ro_PID_band_outputOne_label, 0, 0, 1, 1);

        ro_PID_band_outputOne_SpinBox = new QDoubleSpinBox(layoutWidget3);
        ro_PID_band_outputOne_SpinBox->setObjectName(QString::fromUtf8("ro_PID_band_outputOne_SpinBox"));
        ro_PID_band_outputOne_SpinBox->setFont(font);
        ro_PID_band_outputOne_SpinBox->setDecimals(0);
        ro_PID_band_outputOne_SpinBox->setMinimum(1);
        ro_PID_band_outputOne_SpinBox->setMaximum(9999);
        ro_PID_band_outputOne_SpinBox->setValue(2);

        gridLayout->addWidget(ro_PID_band_outputOne_SpinBox, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        ro_PID_band_outputTwo_label = new QLabel(layoutWidget3);
        ro_PID_band_outputTwo_label->setObjectName(QString::fromUtf8("ro_PID_band_outputTwo_label"));

        horizontalLayout_2->addWidget(ro_PID_band_outputTwo_label);

        ro_PID_band_outputTwo_SpinBox = new QDoubleSpinBox(layoutWidget3);
        ro_PID_band_outputTwo_SpinBox->setObjectName(QString::fromUtf8("ro_PID_band_outputTwo_SpinBox"));
        ro_PID_band_outputTwo_SpinBox->setFont(font);
        ro_PID_band_outputTwo_SpinBox->setDecimals(0);
        ro_PID_band_outputTwo_SpinBox->setMinimum(1);
        ro_PID_band_outputTwo_SpinBox->setMaximum(9999);
        ro_PID_band_outputTwo_SpinBox->setValue(4);

        horizontalLayout_2->addWidget(ro_PID_band_outputTwo_SpinBox);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 1, 1, 1);


        retranslateUi(rampoven_zone_controlClass);
        QObject::connect(writeDataButton, SIGNAL(clicked()), rampoven_zone_controlClass, SLOT(WriteDataButton()));
        QObject::connect(closeButton, SIGNAL(clicked()), rampoven_zone_controlClass, SLOT(close()));
        QObject::connect(ReadDataButton, SIGNAL(clicked()), rampoven_zone_controlClass, SLOT(ReadDataButton()));

        QMetaObject::connectSlotsByName(rampoven_zone_controlClass);
    } // setupUi

    void retranslateUi(QDialog *rampoven_zone_controlClass)
    {
        rampoven_zone_controlClass->setWindowTitle(QApplication::translate("rampoven_zone_controlClass", "rampoven_zone_control", 0, QApplication::UnicodeUTF8));
        output_one_actionLabel_2->setText(QApplication::translate("rampoven_zone_controlClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:18pt;\">PID</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        ro_Derivative_label->setText(QApplication::translate("rampoven_zone_controlClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Derivative</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        ro_Deadband_OutputOne_label->setText(QApplication::translate("rampoven_zone_controlClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Deadband</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">(Output 1)</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        ro_Hysteresis_OutputOne_label->setText(QApplication::translate("rampoven_zone_controlClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Hysteresis</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">(Output 1)</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        ro_Deadband_OutputTwo_label->setText(QApplication::translate("rampoven_zone_controlClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Deadband</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">(Output 2)</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        ro_Hysteresis_OutputTwo_label->setText(QApplication::translate("rampoven_zone_controlClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Hysteresis</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">(Output 2)</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("rampoven_zone_controlClass", "CLOSE", 0, QApplication::UnicodeUTF8));
        ReadDataButton->setText(QApplication::translate("rampoven_zone_controlClass", "Read", 0, QApplication::UnicodeUTF8));
        writeDataButton->setText(QApplication::translate("rampoven_zone_controlClass", "Write", 0, QApplication::UnicodeUTF8));
        ro_ManualReset_label->setText(QApplication::translate("rampoven_zone_controlClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Manual Reset</p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        ro_AutoReset_label->setText(QApplication::translate("rampoven_zone_controlClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Auto Reset</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        ro_PID_band_outputOne_label->setText(QApplication::translate("rampoven_zone_controlClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Band(Output 1)</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        ro_PID_band_outputTwo_label->setText(QApplication::translate("rampoven_zone_controlClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Band(Output 2)</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class rampoven_zone_controlClass: public Ui_rampoven_zone_controlClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAMPOVEN_ZONE_CONTROL_H
