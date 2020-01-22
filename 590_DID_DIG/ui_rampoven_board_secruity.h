/********************************************************************************
** Form generated from reading UI file 'rampoven_board_secruity.ui'
**
** Created: Tue Jan 7 12:49:34 2020
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RAMPOVEN_BOARD_SECRUITY_H
#define UI_RAMPOVEN_BOARD_SECRUITY_H

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

class Ui_rampoven_board_SecruityClass
{
public:
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_11;
    QLabel *ro_AccessLevel_label;
    QDoubleSpinBox *ro_AccessLevel_SpinBox;
    QPushButton *writeDataButton;
    QPushButton *ReadDataButton;
    QPushButton *closeButton;

    void setupUi(QDialog *rampoven_board_SecruityClass)
    {
        if (rampoven_board_SecruityClass->objectName().isEmpty())
            rampoven_board_SecruityClass->setObjectName(QString::fromUtf8("rampoven_board_SecruityClass"));
        rampoven_board_SecruityClass->resize(400, 129);
        layoutWidget_2 = new QWidget(rampoven_board_SecruityClass);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(110, 20, 172, 40));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        ro_AccessLevel_label = new QLabel(layoutWidget_2);
        ro_AccessLevel_label->setObjectName(QString::fromUtf8("ro_AccessLevel_label"));

        horizontalLayout_11->addWidget(ro_AccessLevel_label);

        ro_AccessLevel_SpinBox = new QDoubleSpinBox(layoutWidget_2);
        ro_AccessLevel_SpinBox->setObjectName(QString::fromUtf8("ro_AccessLevel_SpinBox"));
        QFont font;
        font.setPointSize(18);
        ro_AccessLevel_SpinBox->setFont(font);
        ro_AccessLevel_SpinBox->setDecimals(0);
        ro_AccessLevel_SpinBox->setMinimum(1);
        ro_AccessLevel_SpinBox->setMaximum(6);
        ro_AccessLevel_SpinBox->setValue(6);

        horizontalLayout_11->addWidget(ro_AccessLevel_SpinBox);

        writeDataButton = new QPushButton(rampoven_board_SecruityClass);
        writeDataButton->setObjectName(QString::fromUtf8("writeDataButton"));
        writeDataButton->setGeometry(QRect(10, 80, 111, 41));
        writeDataButton->setMinimumSize(QSize(111, 41));
        writeDataButton->setMaximumSize(QSize(111, 41));
        ReadDataButton = new QPushButton(rampoven_board_SecruityClass);
        ReadDataButton->setObjectName(QString::fromUtf8("ReadDataButton"));
        ReadDataButton->setGeometry(QRect(140, 80, 111, 41));
        ReadDataButton->setMinimumSize(QSize(111, 41));
        ReadDataButton->setMaximumSize(QSize(111, 41));
        closeButton = new QPushButton(rampoven_board_SecruityClass);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(280, 80, 111, 41));
        closeButton->setMinimumSize(QSize(111, 41));
        closeButton->setMaximumSize(QSize(111, 41));

        retranslateUi(rampoven_board_SecruityClass);
        QObject::connect(closeButton, SIGNAL(clicked()), rampoven_board_SecruityClass, SLOT(close()));
        QObject::connect(writeDataButton, SIGNAL(clicked()), rampoven_board_SecruityClass, SLOT(WriteDataButton()));
        QObject::connect(ReadDataButton, SIGNAL(clicked()), rampoven_board_SecruityClass, SLOT(ReadDataButton()));

        QMetaObject::connectSlotsByName(rampoven_board_SecruityClass);
    } // setupUi

    void retranslateUi(QDialog *rampoven_board_SecruityClass)
    {
        rampoven_board_SecruityClass->setWindowTitle(QApplication::translate("rampoven_board_SecruityClass", "rampoven_board_Secruity", 0, QApplication::UnicodeUTF8));
        ro_AccessLevel_label->setText(QApplication::translate("rampoven_board_SecruityClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Access</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Level</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        writeDataButton->setText(QApplication::translate("rampoven_board_SecruityClass", "Write", 0, QApplication::UnicodeUTF8));
        ReadDataButton->setText(QApplication::translate("rampoven_board_SecruityClass", "Read", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("rampoven_board_SecruityClass", "CLOSE", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class rampoven_board_SecruityClass: public Ui_rampoven_board_SecruityClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAMPOVEN_BOARD_SECRUITY_H
