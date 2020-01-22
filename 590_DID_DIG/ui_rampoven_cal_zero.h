/********************************************************************************
** Form generated from reading UI file 'rampoven_cal_zero.ui'
**
** Created: Mon Aug 19 13:25:32 2019
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RAMPOVEN_CAL_ZERO_H
#define UI_RAMPOVEN_CAL_ZERO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_rampoven_cal_zeroClass
{
public:
    QLabel *ro_Thermo_Zero_Offset_label;
    QDoubleSpinBox *ro_Thermo_Zero_Offset_SpinBox;
    QLabel *ro_Thermo_Span_Adj_Label;
    QDoubleSpinBox *ro_Thermo_Span_Adj_SpinBox;
    QLabel *ro_RTD_Zero_Offset_label;
    QDoubleSpinBox *ro_RTD_Zero_Offset_SpinBox;
    QLabel *ro_RTD_Span_Adj_Label;
    QDoubleSpinBox *ro_RTD_Span_Adj_SpinBox;
    QLabel *ro_LowVolt_Zero_Offset_label;
    QDoubleSpinBox *ro_LowVolt_Zero_Offset_SpinBox;
    QLabel *ro_LowVolt_Span_Adj_Label;
    QDoubleSpinBox *ro_LowVolt_Span_Adj_SpinBox;
    QLabel *ro_HighVolt_Zero_Offset_label;
    QDoubleSpinBox *ro_HighVolt_Zero_Offset_SpinBox;
    QLabel *ro_HighVolt_Span_Adj_Label;
    QDoubleSpinBox *ro_HighVolt_Span_Adj_SpinBox;

    void setupUi(QDialog *rampoven_cal_zeroClass)
    {
        if (rampoven_cal_zeroClass->objectName().isEmpty())
            rampoven_cal_zeroClass->setObjectName(QString::fromUtf8("rampoven_cal_zeroClass"));
        rampoven_cal_zeroClass->resize(440, 268);
        ro_Thermo_Zero_Offset_label = new QLabel(rampoven_cal_zeroClass);
        ro_Thermo_Zero_Offset_label->setObjectName(QString::fromUtf8("ro_Thermo_Zero_Offset_label"));
        ro_Thermo_Zero_Offset_label->setGeometry(QRect(13, 13, 105, 36));
        ro_Thermo_Zero_Offset_SpinBox = new QDoubleSpinBox(rampoven_cal_zeroClass);
        ro_Thermo_Zero_Offset_SpinBox->setObjectName(QString::fromUtf8("ro_Thermo_Zero_Offset_SpinBox"));
        ro_Thermo_Zero_Offset_SpinBox->setGeometry(QRect(124, 13, 110, 38));
        QFont font;
        font.setPointSize(18);
        ro_Thermo_Zero_Offset_SpinBox->setFont(font);
        ro_Thermo_Zero_Offset_SpinBox->setDecimals(0);
        ro_Thermo_Zero_Offset_SpinBox->setMinimum(-25000);
        ro_Thermo_Zero_Offset_SpinBox->setMaximum(25000);
        ro_Thermo_Zero_Offset_SpinBox->setValue(2600);
        ro_Thermo_Span_Adj_Label = new QLabel(rampoven_cal_zeroClass);
        ro_Thermo_Span_Adj_Label->setObjectName(QString::fromUtf8("ro_Thermo_Span_Adj_Label"));
        ro_Thermo_Span_Adj_Label->setGeometry(QRect(242, 13, 126, 36));
        ro_Thermo_Span_Adj_SpinBox = new QDoubleSpinBox(rampoven_cal_zeroClass);
        ro_Thermo_Span_Adj_SpinBox->setObjectName(QString::fromUtf8("ro_Thermo_Span_Adj_SpinBox"));
        ro_Thermo_Span_Adj_SpinBox->setGeometry(QRect(374, 13, 47, 38));
        ro_Thermo_Span_Adj_SpinBox->setFont(font);
        ro_Thermo_Span_Adj_SpinBox->setDecimals(0);
        ro_Thermo_Span_Adj_SpinBox->setMinimum(0);
        ro_Thermo_Span_Adj_SpinBox->setMaximum(2);
        ro_Thermo_Span_Adj_SpinBox->setValue(1);
        ro_RTD_Zero_Offset_label = new QLabel(rampoven_cal_zeroClass);
        ro_RTD_Zero_Offset_label->setObjectName(QString::fromUtf8("ro_RTD_Zero_Offset_label"));
        ro_RTD_Zero_Offset_label->setGeometry(QRect(13, 61, 85, 36));
        ro_RTD_Zero_Offset_SpinBox = new QDoubleSpinBox(rampoven_cal_zeroClass);
        ro_RTD_Zero_Offset_SpinBox->setObjectName(QString::fromUtf8("ro_RTD_Zero_Offset_SpinBox"));
        ro_RTD_Zero_Offset_SpinBox->setGeometry(QRect(104, 61, 110, 38));
        ro_RTD_Zero_Offset_SpinBox->setFont(font);
        ro_RTD_Zero_Offset_SpinBox->setDecimals(0);
        ro_RTD_Zero_Offset_SpinBox->setMinimum(-25000);
        ro_RTD_Zero_Offset_SpinBox->setMaximum(25000);
        ro_RTD_Zero_Offset_SpinBox->setValue(9000);
        ro_RTD_Span_Adj_Label = new QLabel(rampoven_cal_zeroClass);
        ro_RTD_Span_Adj_Label->setObjectName(QString::fromUtf8("ro_RTD_Span_Adj_Label"));
        ro_RTD_Span_Adj_Label->setGeometry(QRect(222, 61, 126, 36));
        ro_RTD_Span_Adj_SpinBox = new QDoubleSpinBox(rampoven_cal_zeroClass);
        ro_RTD_Span_Adj_SpinBox->setObjectName(QString::fromUtf8("ro_RTD_Span_Adj_SpinBox"));
        ro_RTD_Span_Adj_SpinBox->setGeometry(QRect(354, 61, 47, 38));
        ro_RTD_Span_Adj_SpinBox->setFont(font);
        ro_RTD_Span_Adj_SpinBox->setDecimals(0);
        ro_RTD_Span_Adj_SpinBox->setMinimum(0);
        ro_RTD_Span_Adj_SpinBox->setMaximum(2);
        ro_RTD_Span_Adj_SpinBox->setValue(1);
        ro_LowVolt_Zero_Offset_label = new QLabel(rampoven_cal_zeroClass);
        ro_LowVolt_Zero_Offset_label->setObjectName(QString::fromUtf8("ro_LowVolt_Zero_Offset_label"));
        ro_LowVolt_Zero_Offset_label->setGeometry(QRect(13, 109, 89, 36));
        ro_LowVolt_Zero_Offset_SpinBox = new QDoubleSpinBox(rampoven_cal_zeroClass);
        ro_LowVolt_Zero_Offset_SpinBox->setObjectName(QString::fromUtf8("ro_LowVolt_Zero_Offset_SpinBox"));
        ro_LowVolt_Zero_Offset_SpinBox->setGeometry(QRect(108, 109, 110, 38));
        ro_LowVolt_Zero_Offset_SpinBox->setFont(font);
        ro_LowVolt_Zero_Offset_SpinBox->setDecimals(0);
        ro_LowVolt_Zero_Offset_SpinBox->setMinimum(-25000);
        ro_LowVolt_Zero_Offset_SpinBox->setMaximum(25000);
        ro_LowVolt_Zero_Offset_SpinBox->setValue(0);
        ro_LowVolt_Span_Adj_Label = new QLabel(rampoven_cal_zeroClass);
        ro_LowVolt_Span_Adj_Label->setObjectName(QString::fromUtf8("ro_LowVolt_Span_Adj_Label"));
        ro_LowVolt_Span_Adj_Label->setGeometry(QRect(226, 109, 126, 36));
        ro_LowVolt_Span_Adj_SpinBox = new QDoubleSpinBox(rampoven_cal_zeroClass);
        ro_LowVolt_Span_Adj_SpinBox->setObjectName(QString::fromUtf8("ro_LowVolt_Span_Adj_SpinBox"));
        ro_LowVolt_Span_Adj_SpinBox->setGeometry(QRect(358, 109, 47, 38));
        ro_LowVolt_Span_Adj_SpinBox->setFont(font);
        ro_LowVolt_Span_Adj_SpinBox->setDecimals(0);
        ro_LowVolt_Span_Adj_SpinBox->setMinimum(0);
        ro_LowVolt_Span_Adj_SpinBox->setMaximum(2);
        ro_LowVolt_Span_Adj_SpinBox->setValue(1);
        ro_HighVolt_Zero_Offset_label = new QLabel(rampoven_cal_zeroClass);
        ro_HighVolt_Zero_Offset_label->setObjectName(QString::fromUtf8("ro_HighVolt_Zero_Offset_label"));
        ro_HighVolt_Zero_Offset_label->setGeometry(QRect(13, 157, 93, 36));
        ro_HighVolt_Zero_Offset_SpinBox = new QDoubleSpinBox(rampoven_cal_zeroClass);
        ro_HighVolt_Zero_Offset_SpinBox->setObjectName(QString::fromUtf8("ro_HighVolt_Zero_Offset_SpinBox"));
        ro_HighVolt_Zero_Offset_SpinBox->setGeometry(QRect(112, 157, 110, 38));
        ro_HighVolt_Zero_Offset_SpinBox->setFont(font);
        ro_HighVolt_Zero_Offset_SpinBox->setDecimals(0);
        ro_HighVolt_Zero_Offset_SpinBox->setMinimum(-25000);
        ro_HighVolt_Zero_Offset_SpinBox->setMaximum(25000);
        ro_HighVolt_Zero_Offset_SpinBox->setValue(0);
        ro_HighVolt_Span_Adj_Label = new QLabel(rampoven_cal_zeroClass);
        ro_HighVolt_Span_Adj_Label->setObjectName(QString::fromUtf8("ro_HighVolt_Span_Adj_Label"));
        ro_HighVolt_Span_Adj_Label->setGeometry(QRect(230, 157, 126, 36));
        ro_HighVolt_Span_Adj_SpinBox = new QDoubleSpinBox(rampoven_cal_zeroClass);
        ro_HighVolt_Span_Adj_SpinBox->setObjectName(QString::fromUtf8("ro_HighVolt_Span_Adj_SpinBox"));
        ro_HighVolt_Span_Adj_SpinBox->setGeometry(QRect(362, 157, 47, 38));
        ro_HighVolt_Span_Adj_SpinBox->setFont(font);
        ro_HighVolt_Span_Adj_SpinBox->setDecimals(0);
        ro_HighVolt_Span_Adj_SpinBox->setMinimum(0);
        ro_HighVolt_Span_Adj_SpinBox->setMaximum(2);
        ro_HighVolt_Span_Adj_SpinBox->setValue(1);

        retranslateUi(rampoven_cal_zeroClass);

        QMetaObject::connectSlotsByName(rampoven_cal_zeroClass);
    } // setupUi

    void retranslateUi(QDialog *rampoven_cal_zeroClass)
    {
        rampoven_cal_zeroClass->setWindowTitle(QApplication::translate("rampoven_cal_zeroClass", "rampoven_cal_zero", 0, QApplication::UnicodeUTF8));
        ro_Thermo_Zero_Offset_label->setText(QApplication::translate("rampoven_cal_zeroClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Thermocouple</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Zero Offset</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        ro_Thermo_Span_Adj_Label->setText(QApplication::translate("rampoven_cal_zeroClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Thermocouple </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Span Adjustment</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        ro_RTD_Zero_Offset_label->setText(QApplication::translate("rampoven_cal_zeroClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">RTD</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Zero Offset</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        ro_RTD_Span_Adj_Label->setText(QApplication::translate("rampoven_cal_zeroClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">RTD </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Span Adjustment</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        ro_LowVolt_Zero_Offset_label->setText(QApplication::translate("rampoven_cal_zeroClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Low-Voltage</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Zero Offset</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        ro_LowVolt_Span_Adj_Label->setText(QApplication::translate("rampoven_cal_zeroClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Low-Voltage </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Span Adjustment</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        ro_HighVolt_Zero_Offset_label->setText(QApplication::translate("rampoven_cal_zeroClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">High-Voltage</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Zero Offset</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        ro_HighVolt_Span_Adj_Label->setText(QApplication::translate("rampoven_cal_zeroClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">High-Voltage </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Span Adjustment</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class rampoven_cal_zeroClass: public Ui_rampoven_cal_zeroClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAMPOVEN_CAL_ZERO_H
