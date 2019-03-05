/********************************************************************************
** Form generated from reading UI file 'rampoven_para_registers.ui'
**
** Created: Tue Mar 5 14:05:07 2019
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RAMPOVEN_PARA_REGISTERS_H
#define UI_RAMPOVEN_PARA_REGISTERS_H

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
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rampoven_para_registersClass
{
public:
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_11;
    QLabel *ro_States_Byte_label;
    QDoubleSpinBox *ro_Status_Byte_SpinBox;
    QPushButton *writeDataButton;
    QPushButton *closeButton;
    QPushButton *ReadDataButton;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_12;
    QLabel *ro_Operating_mode_label;
    QDoubleSpinBox *ro_operating_mode_SpinBox;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_13;
    QLabel *ro_recipe_state_label;
    QDoubleSpinBox *ro_Recipe_State_SpinBox;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_14;
    QLabel *ro_autotune_state_label;
    QDoubleSpinBox *ro_autotune_state_SpinBox;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_15;
    QLabel *ro_Recipe_Segment_label;
    QDoubleSpinBox *ro_Recipe_Segment_SpinBox;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_16;
    QLabel *ro_Resume_Exhaustion_label;
    QDoubleSpinBox *ro_Resume_Exhaustion_SpinBox;

    void setupUi(QDialog *rampoven_para_registersClass)
    {
        if (rampoven_para_registersClass->objectName().isEmpty())
            rampoven_para_registersClass->setObjectName(QString::fromUtf8("rampoven_para_registersClass"));
        rampoven_para_registersClass->resize(443, 216);
        layoutWidget_2 = new QWidget(rampoven_para_registersClass);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 20, 172, 40));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        ro_States_Byte_label = new QLabel(layoutWidget_2);
        ro_States_Byte_label->setObjectName(QString::fromUtf8("ro_States_Byte_label"));

        horizontalLayout_11->addWidget(ro_States_Byte_label);

        ro_Status_Byte_SpinBox = new QDoubleSpinBox(layoutWidget_2);
        ro_Status_Byte_SpinBox->setObjectName(QString::fromUtf8("ro_Status_Byte_SpinBox"));
        QFont font;
        font.setPointSize(18);
        ro_Status_Byte_SpinBox->setFont(font);
        ro_Status_Byte_SpinBox->setDecimals(0);
        ro_Status_Byte_SpinBox->setMinimum(0);
        ro_Status_Byte_SpinBox->setMaximum(7);
        ro_Status_Byte_SpinBox->setValue(0);

        horizontalLayout_11->addWidget(ro_Status_Byte_SpinBox);

        writeDataButton = new QPushButton(rampoven_para_registersClass);
        writeDataButton->setObjectName(QString::fromUtf8("writeDataButton"));
        writeDataButton->setGeometry(QRect(10, 170, 111, 41));
        writeDataButton->setMinimumSize(QSize(111, 41));
        writeDataButton->setMaximumSize(QSize(111, 41));
        closeButton = new QPushButton(rampoven_para_registersClass);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(280, 170, 111, 41));
        closeButton->setMinimumSize(QSize(111, 41));
        closeButton->setMaximumSize(QSize(111, 41));
        ReadDataButton = new QPushButton(rampoven_para_registersClass);
        ReadDataButton->setObjectName(QString::fromUtf8("ReadDataButton"));
        ReadDataButton->setGeometry(QRect(140, 170, 111, 41));
        ReadDataButton->setMinimumSize(QSize(111, 41));
        ReadDataButton->setMaximumSize(QSize(111, 41));
        layoutWidget_3 = new QWidget(rampoven_para_registersClass);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(200, 20, 210, 40));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        ro_Operating_mode_label = new QLabel(layoutWidget_3);
        ro_Operating_mode_label->setObjectName(QString::fromUtf8("ro_Operating_mode_label"));

        horizontalLayout_12->addWidget(ro_Operating_mode_label);

        ro_operating_mode_SpinBox = new QDoubleSpinBox(layoutWidget_3);
        ro_operating_mode_SpinBox->setObjectName(QString::fromUtf8("ro_operating_mode_SpinBox"));
        ro_operating_mode_SpinBox->setFont(font);
        ro_operating_mode_SpinBox->setDecimals(0);
        ro_operating_mode_SpinBox->setMinimum(0);
        ro_operating_mode_SpinBox->setMaximum(6);
        ro_operating_mode_SpinBox->setValue(3);

        horizontalLayout_12->addWidget(ro_operating_mode_SpinBox);

        layoutWidget_4 = new QWidget(rampoven_para_registersClass);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(200, 70, 172, 40));
        horizontalLayout_13 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        ro_recipe_state_label = new QLabel(layoutWidget_4);
        ro_recipe_state_label->setObjectName(QString::fromUtf8("ro_recipe_state_label"));

        horizontalLayout_13->addWidget(ro_recipe_state_label);

        ro_Recipe_State_SpinBox = new QDoubleSpinBox(layoutWidget_4);
        ro_Recipe_State_SpinBox->setObjectName(QString::fromUtf8("ro_Recipe_State_SpinBox"));
        ro_Recipe_State_SpinBox->setFont(font);
        ro_Recipe_State_SpinBox->setDecimals(0);
        ro_Recipe_State_SpinBox->setMinimum(0);
        ro_Recipe_State_SpinBox->setMaximum(8);
        ro_Recipe_State_SpinBox->setValue(0);

        horizontalLayout_13->addWidget(ro_Recipe_State_SpinBox);

        layoutWidget_5 = new QWidget(rampoven_para_registersClass);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(20, 70, 172, 40));
        horizontalLayout_14 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        ro_autotune_state_label = new QLabel(layoutWidget_5);
        ro_autotune_state_label->setObjectName(QString::fromUtf8("ro_autotune_state_label"));

        horizontalLayout_14->addWidget(ro_autotune_state_label);

        ro_autotune_state_SpinBox = new QDoubleSpinBox(layoutWidget_5);
        ro_autotune_state_SpinBox->setObjectName(QString::fromUtf8("ro_autotune_state_SpinBox"));
        ro_autotune_state_SpinBox->setFont(font);
        ro_autotune_state_SpinBox->setDecimals(0);
        ro_autotune_state_SpinBox->setMinimum(0);
        ro_autotune_state_SpinBox->setMaximum(9);
        ro_autotune_state_SpinBox->setValue(0);

        horizontalLayout_14->addWidget(ro_autotune_state_SpinBox);

        layoutWidget_6 = new QWidget(rampoven_para_registersClass);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(20, 120, 172, 40));
        horizontalLayout_15 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        ro_Recipe_Segment_label = new QLabel(layoutWidget_6);
        ro_Recipe_Segment_label->setObjectName(QString::fromUtf8("ro_Recipe_Segment_label"));

        horizontalLayout_15->addWidget(ro_Recipe_Segment_label);

        ro_Recipe_Segment_SpinBox = new QDoubleSpinBox(layoutWidget_6);
        ro_Recipe_Segment_SpinBox->setObjectName(QString::fromUtf8("ro_Recipe_Segment_SpinBox"));
        ro_Recipe_Segment_SpinBox->setFont(font);
        ro_Recipe_Segment_SpinBox->setDecimals(0);
        ro_Recipe_Segment_SpinBox->setMinimum(0);
        ro_Recipe_Segment_SpinBox->setMaximum(8);
        ro_Recipe_Segment_SpinBox->setValue(0);

        horizontalLayout_15->addWidget(ro_Recipe_Segment_SpinBox);

        layoutWidget_7 = new QWidget(rampoven_para_registersClass);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(200, 120, 173, 40));
        horizontalLayout_16 = new QHBoxLayout(layoutWidget_7);
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        ro_Resume_Exhaustion_label = new QLabel(layoutWidget_7);
        ro_Resume_Exhaustion_label->setObjectName(QString::fromUtf8("ro_Resume_Exhaustion_label"));

        horizontalLayout_16->addWidget(ro_Resume_Exhaustion_label);

        ro_Resume_Exhaustion_SpinBox = new QDoubleSpinBox(layoutWidget_7);
        ro_Resume_Exhaustion_SpinBox->setObjectName(QString::fromUtf8("ro_Resume_Exhaustion_SpinBox"));
        ro_Resume_Exhaustion_SpinBox->setFont(font);
        ro_Resume_Exhaustion_SpinBox->setDecimals(0);
        ro_Resume_Exhaustion_SpinBox->setMinimum(0);
        ro_Resume_Exhaustion_SpinBox->setMaximum(2);
        ro_Resume_Exhaustion_SpinBox->setValue(0);

        horizontalLayout_16->addWidget(ro_Resume_Exhaustion_SpinBox);


        retranslateUi(rampoven_para_registersClass);

        QMetaObject::connectSlotsByName(rampoven_para_registersClass);
    } // setupUi

    void retranslateUi(QDialog *rampoven_para_registersClass)
    {
        rampoven_para_registersClass->setWindowTitle(QApplication::translate("rampoven_para_registersClass", "rampoven_para_registers", 0, QApplication::UnicodeUTF8));
        ro_States_Byte_label->setText(QApplication::translate("rampoven_para_registersClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Status</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Byte</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        writeDataButton->setText(QApplication::translate("rampoven_para_registersClass", "Write", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("rampoven_para_registersClass", "CLOSE", 0, QApplication::UnicodeUTF8));
        ReadDataButton->setText(QApplication::translate("rampoven_para_registersClass", "Read", 0, QApplication::UnicodeUTF8));
        ro_Operating_mode_label->setText(QApplication::translate("rampoven_para_registersClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Operating Mode</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        ro_recipe_state_label->setText(QApplication::translate("rampoven_para_registersClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Recipe</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">State</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        ro_autotune_state_label->setText(QApplication::translate("rampoven_para_registersClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Autotune</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">State</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        ro_Recipe_Segment_label->setText(QApplication::translate("rampoven_para_registersClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Recipe</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Segment</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        ro_Resume_Exhaustion_label->setText(QApplication::translate("rampoven_para_registersClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Resume</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Exhaustion</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class rampoven_para_registersClass: public Ui_rampoven_para_registersClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAMPOVEN_PARA_REGISTERS_H
