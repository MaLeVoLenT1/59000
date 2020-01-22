/********************************************************************************
** Form generated from reading UI file 'rampoven_output_parameter.ui'
**
** Created: Wed Jan 8 09:17:36 2020
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RAMPOVEN_OUTPUT_PARAMETER_H
#define UI_RAMPOVEN_OUTPUT_PARAMETER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rampoven_output_parameterClass
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *output_one_typeLabel;
    QDoubleSpinBox *output_one_typeSpinBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *output_one_cycletimeLabel;
    QDoubleSpinBox *output_one_cycletimeSpinBox;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *output_one_highlimitLabel;
    QDoubleSpinBox *output_one_highlimitSpinBox;
    QHBoxLayout *horizontalLayout_8;
    QLabel *output_one_alarm_operationLabel;
    QDoubleSpinBox *output_one_alarm_operationSpinBox;
    QHBoxLayout *horizontalLayout_9;
    QLabel *output_one_alarm_inhibitLabel;
    QDoubleSpinBox *output_one_alarm_inhibitSpinBox;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_11;
    QLabel *output_one_deviationLabel;
    QDoubleSpinBox *output_one_deviationSpinBox;
    QWidget *layoutWidget_6;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *output_one_actionLabel;
    QDoubleSpinBox *output_one_actionSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *output_one_lowlimitLabel;
    QDoubleSpinBox *output_one_lowlimitSpinBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *output_one_alarmactionLabel;
    QDoubleSpinBox *output_one_alarmactionSpinBox;
    QHBoxLayout *horizontalLayout_6;
    QLabel *output_one_alarm_delayLabel;
    QDoubleSpinBox *output_one_alarm_delaySpinBox;
    QHBoxLayout *horizontalLayout_10;
    QLabel *output_one_alarm_setpointLabel;
    QDoubleSpinBox *output_one_alarm_setpointSpinBox;
    QLabel *output_one_Label;

    void setupUi(QDialog *rampoven_output_parameterClass)
    {
        if (rampoven_output_parameterClass->objectName().isEmpty())
            rampoven_output_parameterClass->setObjectName(QString::fromUtf8("rampoven_output_parameterClass"));
        rampoven_output_parameterClass->resize(362, 335);
        layoutWidget = new QWidget(rampoven_output_parameterClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(1, 50, 175, 232));
        verticalLayout_7 = new QVBoxLayout(layoutWidget);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        output_one_typeLabel = new QLabel(layoutWidget);
        output_one_typeLabel->setObjectName(QString::fromUtf8("output_one_typeLabel"));

        horizontalLayout->addWidget(output_one_typeLabel);

        output_one_typeSpinBox = new QDoubleSpinBox(layoutWidget);
        output_one_typeSpinBox->setObjectName(QString::fromUtf8("output_one_typeSpinBox"));
        QFont font;
        font.setPointSize(18);
        output_one_typeSpinBox->setFont(font);
        output_one_typeSpinBox->setDecimals(0);
        output_one_typeSpinBox->setMinimum(1);
        output_one_typeSpinBox->setMaximum(5);
        output_one_typeSpinBox->setValue(2);

        horizontalLayout->addWidget(output_one_typeSpinBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        output_one_cycletimeLabel = new QLabel(layoutWidget);
        output_one_cycletimeLabel->setObjectName(QString::fromUtf8("output_one_cycletimeLabel"));

        horizontalLayout_4->addWidget(output_one_cycletimeLabel);

        output_one_cycletimeSpinBox = new QDoubleSpinBox(layoutWidget);
        output_one_cycletimeSpinBox->setObjectName(QString::fromUtf8("output_one_cycletimeSpinBox"));
        output_one_cycletimeSpinBox->setFont(font);
        output_one_cycletimeSpinBox->setDecimals(0);
        output_one_cycletimeSpinBox->setMinimum(0);
        output_one_cycletimeSpinBox->setMaximum(120);
        output_one_cycletimeSpinBox->setValue(0);

        horizontalLayout_4->addWidget(output_one_cycletimeSpinBox);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_5->addLayout(verticalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        output_one_highlimitLabel = new QLabel(layoutWidget);
        output_one_highlimitLabel->setObjectName(QString::fromUtf8("output_one_highlimitLabel"));

        horizontalLayout_7->addWidget(output_one_highlimitLabel);

        output_one_highlimitSpinBox = new QDoubleSpinBox(layoutWidget);
        output_one_highlimitSpinBox->setObjectName(QString::fromUtf8("output_one_highlimitSpinBox"));
        output_one_highlimitSpinBox->setFont(font);
        output_one_highlimitSpinBox->setDecimals(0);
        output_one_highlimitSpinBox->setMinimum(0);
        output_one_highlimitSpinBox->setMaximum(100);
        output_one_highlimitSpinBox->setValue(100);

        horizontalLayout_7->addWidget(output_one_highlimitSpinBox);


        verticalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        output_one_alarm_operationLabel = new QLabel(layoutWidget);
        output_one_alarm_operationLabel->setObjectName(QString::fromUtf8("output_one_alarm_operationLabel"));

        horizontalLayout_8->addWidget(output_one_alarm_operationLabel);

        output_one_alarm_operationSpinBox = new QDoubleSpinBox(layoutWidget);
        output_one_alarm_operationSpinBox->setObjectName(QString::fromUtf8("output_one_alarm_operationSpinBox"));
        output_one_alarm_operationSpinBox->setFont(font);
        output_one_alarm_operationSpinBox->setDecimals(0);
        output_one_alarm_operationSpinBox->setMinimum(1);
        output_one_alarm_operationSpinBox->setMaximum(6);
        output_one_alarm_operationSpinBox->setValue(2);

        horizontalLayout_8->addWidget(output_one_alarm_operationSpinBox);


        verticalLayout_4->addLayout(horizontalLayout_8);


        verticalLayout_5->addLayout(verticalLayout_4);


        verticalLayout_7->addLayout(verticalLayout_5);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        output_one_alarm_inhibitLabel = new QLabel(layoutWidget);
        output_one_alarm_inhibitLabel->setObjectName(QString::fromUtf8("output_one_alarm_inhibitLabel"));

        horizontalLayout_9->addWidget(output_one_alarm_inhibitLabel);

        output_one_alarm_inhibitSpinBox = new QDoubleSpinBox(layoutWidget);
        output_one_alarm_inhibitSpinBox->setObjectName(QString::fromUtf8("output_one_alarm_inhibitSpinBox"));
        output_one_alarm_inhibitSpinBox->setFont(font);
        output_one_alarm_inhibitSpinBox->setDecimals(0);
        output_one_alarm_inhibitSpinBox->setMinimum(0);
        output_one_alarm_inhibitSpinBox->setMaximum(9999);
        output_one_alarm_inhibitSpinBox->setValue(0);

        horizontalLayout_9->addWidget(output_one_alarm_inhibitSpinBox);


        verticalLayout_7->addLayout(horizontalLayout_9);

        layoutWidget_2 = new QWidget(rampoven_output_parameterClass);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(80, 289, 172, 40));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        output_one_deviationLabel = new QLabel(layoutWidget_2);
        output_one_deviationLabel->setObjectName(QString::fromUtf8("output_one_deviationLabel"));

        horizontalLayout_11->addWidget(output_one_deviationLabel);

        output_one_deviationSpinBox = new QDoubleSpinBox(layoutWidget_2);
        output_one_deviationSpinBox->setObjectName(QString::fromUtf8("output_one_deviationSpinBox"));
        output_one_deviationSpinBox->setFont(font);
        output_one_deviationSpinBox->setDecimals(0);
        output_one_deviationSpinBox->setMinimum(0);
        output_one_deviationSpinBox->setMaximum(1728);
        output_one_deviationSpinBox->setValue(1728);

        horizontalLayout_11->addWidget(output_one_deviationSpinBox);

        layoutWidget_6 = new QWidget(rampoven_output_parameterClass);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(180, 50, 168, 232));
        verticalLayout_8 = new QVBoxLayout(layoutWidget_6);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        output_one_actionLabel = new QLabel(layoutWidget_6);
        output_one_actionLabel->setObjectName(QString::fromUtf8("output_one_actionLabel"));

        horizontalLayout_2->addWidget(output_one_actionLabel);

        output_one_actionSpinBox = new QDoubleSpinBox(layoutWidget_6);
        output_one_actionSpinBox->setObjectName(QString::fromUtf8("output_one_actionSpinBox"));
        output_one_actionSpinBox->setFont(font);
        output_one_actionSpinBox->setDecimals(0);
        output_one_actionSpinBox->setMinimum(1);
        output_one_actionSpinBox->setMaximum(2);
        output_one_actionSpinBox->setValue(2);

        horizontalLayout_2->addWidget(output_one_actionSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        output_one_lowlimitLabel = new QLabel(layoutWidget_6);
        output_one_lowlimitLabel->setObjectName(QString::fromUtf8("output_one_lowlimitLabel"));

        horizontalLayout_3->addWidget(output_one_lowlimitLabel);

        output_one_lowlimitSpinBox = new QDoubleSpinBox(layoutWidget_6);
        output_one_lowlimitSpinBox->setObjectName(QString::fromUtf8("output_one_lowlimitSpinBox"));
        output_one_lowlimitSpinBox->setFont(font);
        output_one_lowlimitSpinBox->setDecimals(0);
        output_one_lowlimitSpinBox->setMinimum(0);
        output_one_lowlimitSpinBox->setMaximum(100);
        output_one_lowlimitSpinBox->setValue(0);

        horizontalLayout_3->addWidget(output_one_lowlimitSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_6->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        output_one_alarmactionLabel = new QLabel(layoutWidget_6);
        output_one_alarmactionLabel->setObjectName(QString::fromUtf8("output_one_alarmactionLabel"));

        horizontalLayout_5->addWidget(output_one_alarmactionLabel);

        output_one_alarmactionSpinBox = new QDoubleSpinBox(layoutWidget_6);
        output_one_alarmactionSpinBox->setObjectName(QString::fromUtf8("output_one_alarmactionSpinBox"));
        output_one_alarmactionSpinBox->setFont(font);
        output_one_alarmactionSpinBox->setDecimals(0);
        output_one_alarmactionSpinBox->setMinimum(1);
        output_one_alarmactionSpinBox->setMaximum(3);
        output_one_alarmactionSpinBox->setValue(1);

        horizontalLayout_5->addWidget(output_one_alarmactionSpinBox);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        output_one_alarm_delayLabel = new QLabel(layoutWidget_6);
        output_one_alarm_delayLabel->setObjectName(QString::fromUtf8("output_one_alarm_delayLabel"));

        horizontalLayout_6->addWidget(output_one_alarm_delayLabel);

        output_one_alarm_delaySpinBox = new QDoubleSpinBox(layoutWidget_6);
        output_one_alarm_delaySpinBox->setObjectName(QString::fromUtf8("output_one_alarm_delaySpinBox"));
        output_one_alarm_delaySpinBox->setFont(font);
        output_one_alarm_delaySpinBox->setDecimals(0);
        output_one_alarm_delaySpinBox->setMinimum(0);
        output_one_alarm_delaySpinBox->setMaximum(9999);
        output_one_alarm_delaySpinBox->setValue(0);

        horizontalLayout_6->addWidget(output_one_alarm_delaySpinBox);


        verticalLayout_3->addLayout(horizontalLayout_6);


        verticalLayout_6->addLayout(verticalLayout_3);


        verticalLayout_8->addLayout(verticalLayout_6);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        output_one_alarm_setpointLabel = new QLabel(layoutWidget_6);
        output_one_alarm_setpointLabel->setObjectName(QString::fromUtf8("output_one_alarm_setpointLabel"));

        horizontalLayout_10->addWidget(output_one_alarm_setpointLabel);

        output_one_alarm_setpointSpinBox = new QDoubleSpinBox(layoutWidget_6);
        output_one_alarm_setpointSpinBox->setObjectName(QString::fromUtf8("output_one_alarm_setpointSpinBox"));
        output_one_alarm_setpointSpinBox->setFont(font);
        output_one_alarm_setpointSpinBox->setDecimals(0);
        output_one_alarm_setpointSpinBox->setMinimum(-556);
        output_one_alarm_setpointSpinBox->setMaximum(556);
        output_one_alarm_setpointSpinBox->setValue(25);

        horizontalLayout_10->addWidget(output_one_alarm_setpointSpinBox);


        verticalLayout_8->addLayout(horizontalLayout_10);

        output_one_Label = new QLabel(rampoven_output_parameterClass);
        output_one_Label->setObjectName(QString::fromUtf8("output_one_Label"));
        output_one_Label->setGeometry(QRect(140, 10, 75, 38));

        retranslateUi(rampoven_output_parameterClass);

        QMetaObject::connectSlotsByName(rampoven_output_parameterClass);
    } // setupUi

    void retranslateUi(QDialog *rampoven_output_parameterClass)
    {
        rampoven_output_parameterClass->setWindowTitle(QApplication::translate("rampoven_output_parameterClass", "rampoven_output_parameter", 0, QApplication::UnicodeUTF8));
        output_one_typeLabel->setText(QApplication::translate("rampoven_output_parameterClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Type:</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        output_one_cycletimeLabel->setText(QApplication::translate("rampoven_output_parameterClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Cycle </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Time</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        output_one_highlimitLabel->setText(QApplication::translate("rampoven_output_parameterClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">High </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Limit:</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        output_one_alarm_operationLabel->setText(QApplication::translate("rampoven_output_parameterClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Alarm</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Operation:</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        output_one_alarm_inhibitLabel->setText(QApplication::translate("rampoven_output_parameterClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Alarm</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">inhibit:</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        output_one_deviationLabel->setText(QApplication::translate("rampoven_output_parameterClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Deviation:</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        output_one_actionLabel->setText(QApplication::translate("rampoven_output_parameterClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Action:</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        output_one_lowlimitLabel->setText(QApplication::translate("rampoven_output_parameterClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Low Limit</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        output_one_alarmactionLabel->setText(QApplication::translate("rampoven_output_parameterClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Alarm</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Action:</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        output_one_alarm_delayLabel->setText(QApplication::translate("rampoven_output_parameterClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Alarm</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Delay:</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        output_one_alarm_setpointLabel->setText(QApplication::translate("rampoven_output_parameterClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Alarm</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Setpoint:</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        output_one_Label->setText(QApplication::translate("rampoven_output_parameterClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Output 1</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class rampoven_output_parameterClass: public Ui_rampoven_output_parameterClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAMPOVEN_OUTPUT_PARAMETER_H
