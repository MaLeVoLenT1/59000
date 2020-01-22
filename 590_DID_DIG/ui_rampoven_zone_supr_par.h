/********************************************************************************
** Form generated from reading UI file 'rampoven_zone_supr_par.ui'
**
** Created: Wed Jan 8 09:17:36 2020
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RAMPOVEN_ZONE_SUPR_PAR_H
#define UI_RAMPOVEN_ZONE_SUPR_PAR_H

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

class Ui_rampoven_Zone_Supr_ParClass
{
public:
    QPushButton *ReadDataButton;
    QPushButton *writeDataButton;
    QPushButton *closeButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *ro_Highest_reading_Label;
    QDoubleSpinBox *ro_Highest_Reading_SpinBox;
    QHBoxLayout *horizontalLayout_4;
    QDoubleSpinBox *ro_Lowest_Reading_SpinBox;
    QLabel *ro_Lowest_Reading_Label;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *ro_OutputTwo_Failsafe_Label;
    QDoubleSpinBox *ro_OutputTwo_Failsafe_SpinBox;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QLabel *ro_OutputOne_FailsafeLabel;
    QDoubleSpinBox *ro_OutputOne_Failsafe_SpinBox;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *ro_Loop_Break_Time_Label;
    QDoubleSpinBox *ro_Loop_Break_Time_SpinBox;

    void setupUi(QDialog *rampoven_Zone_Supr_ParClass)
    {
        if (rampoven_Zone_Supr_ParClass->objectName().isEmpty())
            rampoven_Zone_Supr_ParClass->setObjectName(QString::fromUtf8("rampoven_Zone_Supr_ParClass"));
        rampoven_Zone_Supr_ParClass->resize(397, 294);
        ReadDataButton = new QPushButton(rampoven_Zone_Supr_ParClass);
        ReadDataButton->setObjectName(QString::fromUtf8("ReadDataButton"));
        ReadDataButton->setGeometry(QRect(140, 240, 111, 41));
        ReadDataButton->setMinimumSize(QSize(111, 41));
        ReadDataButton->setMaximumSize(QSize(111, 41));
        writeDataButton = new QPushButton(rampoven_Zone_Supr_ParClass);
        writeDataButton->setObjectName(QString::fromUtf8("writeDataButton"));
        writeDataButton->setGeometry(QRect(10, 240, 111, 41));
        writeDataButton->setMinimumSize(QSize(111, 41));
        writeDataButton->setMaximumSize(QSize(111, 41));
        closeButton = new QPushButton(rampoven_Zone_Supr_ParClass);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(280, 240, 111, 41));
        closeButton->setMinimumSize(QSize(111, 41));
        closeButton->setMaximumSize(QSize(111, 41));
        layoutWidget = new QWidget(rampoven_Zone_Supr_ParClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(91, 152, 217, 80));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        ro_Highest_reading_Label = new QLabel(layoutWidget);
        ro_Highest_reading_Label->setObjectName(QString::fromUtf8("ro_Highest_reading_Label"));

        horizontalLayout_5->addWidget(ro_Highest_reading_Label);

        ro_Highest_Reading_SpinBox = new QDoubleSpinBox(layoutWidget);
        ro_Highest_Reading_SpinBox->setObjectName(QString::fromUtf8("ro_Highest_Reading_SpinBox"));
        ro_Highest_Reading_SpinBox->setMinimumSize(QSize(91, 31));
        ro_Highest_Reading_SpinBox->setMaximumSize(QSize(91, 31));
        QFont font;
        font.setPointSize(18);
        ro_Highest_Reading_SpinBox->setFont(font);
        ro_Highest_Reading_SpinBox->setDecimals(0);
        ro_Highest_Reading_SpinBox->setMinimum(-3566);
        ro_Highest_Reading_SpinBox->setMaximum(18030);
        ro_Highest_Reading_SpinBox->setValue(-3566);

        horizontalLayout_5->addWidget(ro_Highest_Reading_SpinBox);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        ro_Lowest_Reading_SpinBox = new QDoubleSpinBox(layoutWidget);
        ro_Lowest_Reading_SpinBox->setObjectName(QString::fromUtf8("ro_Lowest_Reading_SpinBox"));
        ro_Lowest_Reading_SpinBox->setMinimumSize(QSize(100, 31));
        ro_Lowest_Reading_SpinBox->setMaximumSize(QSize(81, 31));
        ro_Lowest_Reading_SpinBox->setFont(font);
        ro_Lowest_Reading_SpinBox->setDecimals(1);
        ro_Lowest_Reading_SpinBox->setMinimum(-3566);
        ro_Lowest_Reading_SpinBox->setMaximum(18030);
        ro_Lowest_Reading_SpinBox->setValue(18030);

        horizontalLayout_4->addWidget(ro_Lowest_Reading_SpinBox);

        ro_Lowest_Reading_Label = new QLabel(layoutWidget);
        ro_Lowest_Reading_Label->setObjectName(QString::fromUtf8("ro_Lowest_Reading_Label"));

        horizontalLayout_4->addWidget(ro_Lowest_Reading_Label);


        verticalLayout->addLayout(horizontalLayout_4);

        layoutWidget1 = new QWidget(rampoven_Zone_Supr_ParClass);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(220, 40, 141, 36));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        ro_OutputTwo_Failsafe_Label = new QLabel(layoutWidget1);
        ro_OutputTwo_Failsafe_Label->setObjectName(QString::fromUtf8("ro_OutputTwo_Failsafe_Label"));
        ro_OutputTwo_Failsafe_Label->setTextFormat(Qt::AutoText);

        horizontalLayout_2->addWidget(ro_OutputTwo_Failsafe_Label);

        ro_OutputTwo_Failsafe_SpinBox = new QDoubleSpinBox(layoutWidget1);
        ro_OutputTwo_Failsafe_SpinBox->setObjectName(QString::fromUtf8("ro_OutputTwo_Failsafe_SpinBox"));
        ro_OutputTwo_Failsafe_SpinBox->setMinimumSize(QSize(41, 31));
        ro_OutputTwo_Failsafe_SpinBox->setMaximumSize(QSize(41, 31));
        ro_OutputTwo_Failsafe_SpinBox->setFont(font);
        ro_OutputTwo_Failsafe_SpinBox->setDecimals(0);
        ro_OutputTwo_Failsafe_SpinBox->setMaximum(100);
        ro_OutputTwo_Failsafe_SpinBox->setValue(0);

        horizontalLayout_2->addWidget(ro_OutputTwo_Failsafe_SpinBox);

        layoutWidget2 = new QWidget(rampoven_Zone_Supr_ParClass);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 40, 147, 36));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ro_OutputOne_FailsafeLabel = new QLabel(layoutWidget2);
        ro_OutputOne_FailsafeLabel->setObjectName(QString::fromUtf8("ro_OutputOne_FailsafeLabel"));

        horizontalLayout->addWidget(ro_OutputOne_FailsafeLabel);

        ro_OutputOne_Failsafe_SpinBox = new QDoubleSpinBox(layoutWidget2);
        ro_OutputOne_Failsafe_SpinBox->setObjectName(QString::fromUtf8("ro_OutputOne_Failsafe_SpinBox"));
        ro_OutputOne_Failsafe_SpinBox->setMinimumSize(QSize(61, 31));
        ro_OutputOne_Failsafe_SpinBox->setMaximumSize(QSize(71, 31));
        ro_OutputOne_Failsafe_SpinBox->setFont(font);
        ro_OutputOne_Failsafe_SpinBox->setDecimals(0);
        ro_OutputOne_Failsafe_SpinBox->setMaximum(100);
        ro_OutputOne_Failsafe_SpinBox->setValue(0);

        horizontalLayout->addWidget(ro_OutputOne_Failsafe_SpinBox);

        layoutWidget3 = new QWidget(rampoven_Zone_Supr_ParClass);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(122, 106, 176, 36));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        ro_Loop_Break_Time_Label = new QLabel(layoutWidget3);
        ro_Loop_Break_Time_Label->setObjectName(QString::fromUtf8("ro_Loop_Break_Time_Label"));

        horizontalLayout_3->addWidget(ro_Loop_Break_Time_Label);

        ro_Loop_Break_Time_SpinBox = new QDoubleSpinBox(layoutWidget3);
        ro_Loop_Break_Time_SpinBox->setObjectName(QString::fromUtf8("ro_Loop_Break_Time_SpinBox"));
        ro_Loop_Break_Time_SpinBox->setMinimumSize(QSize(91, 31));
        ro_Loop_Break_Time_SpinBox->setMaximumSize(QSize(41, 31));
        ro_Loop_Break_Time_SpinBox->setFont(font);
        ro_Loop_Break_Time_SpinBox->setDecimals(0);
        ro_Loop_Break_Time_SpinBox->setMinimum(3);
        ro_Loop_Break_Time_SpinBox->setMaximum(9600);

        horizontalLayout_3->addWidget(ro_Loop_Break_Time_SpinBox);


        retranslateUi(rampoven_Zone_Supr_ParClass);
        QObject::connect(closeButton, SIGNAL(clicked()), rampoven_Zone_Supr_ParClass, SLOT(close()));
        QObject::connect(writeDataButton, SIGNAL(clicked()), rampoven_Zone_Supr_ParClass, SLOT(WriteDataButton()));
        QObject::connect(ReadDataButton, SIGNAL(clicked()), rampoven_Zone_Supr_ParClass, SLOT(ReadDataButton()));

        QMetaObject::connectSlotsByName(rampoven_Zone_Supr_ParClass);
    } // setupUi

    void retranslateUi(QDialog *rampoven_Zone_Supr_ParClass)
    {
        rampoven_Zone_Supr_ParClass->setWindowTitle(QApplication::translate("rampoven_Zone_Supr_ParClass", "rampoven_Zone_Supr_Par", 0, QApplication::UnicodeUTF8));
        ReadDataButton->setText(QApplication::translate("rampoven_Zone_Supr_ParClass", "Read", 0, QApplication::UnicodeUTF8));
        writeDataButton->setText(QApplication::translate("rampoven_Zone_Supr_ParClass", "Write", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("rampoven_Zone_Supr_ParClass", "CLOSE", 0, QApplication::UnicodeUTF8));
        ro_Highest_reading_Label->setText(QApplication::translate("rampoven_Zone_Supr_ParClass", "Highest Reading", 0, QApplication::UnicodeUTF8));
        ro_Lowest_Reading_Label->setText(QApplication::translate("rampoven_Zone_Supr_ParClass", "Lowest Reading", 0, QApplication::UnicodeUTF8));
        ro_OutputTwo_Failsafe_Label->setText(QApplication::translate("rampoven_Zone_Supr_ParClass", "Output 2:\n"
"Failsafe %", 0, QApplication::UnicodeUTF8));
        ro_OutputOne_FailsafeLabel->setText(QApplication::translate("rampoven_Zone_Supr_ParClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Output 1:</p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Failsafe %</p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        ro_Loop_Break_Time_Label->setText(QApplication::translate("rampoven_Zone_Supr_ParClass", "Loop Break\n"
"Time", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class rampoven_Zone_Supr_ParClass: public Ui_rampoven_Zone_Supr_ParClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAMPOVEN_ZONE_SUPR_PAR_H
