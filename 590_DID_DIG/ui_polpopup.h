/********************************************************************************
** Form generated from reading UI file 'polpopup.ui'
**
** Created: Wed Jan 15 09:50:59 2020
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLPOPUP_H
#define UI_POLPOPUP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_polPopUpClass
{
public:
    QPushButton *pushButton_10;
    QPushButton *pushButton_Clear;
    QPushButton *pushButton_1;
    QPushButton *enterButton;
    QPushButton *pushButton_11;
    QPushButton *pushButton_7;
    QLineEdit *lineEdit;
    QPushButton *pushButton_9;
    QPushButton *pushButton_12;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *detOkButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_8;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QLabel *rangelabel;

    void setupUi(QDialog *polPopUpClass)
    {
        if (polPopUpClass->objectName().isEmpty())
            polPopUpClass->setObjectName(QString::fromUtf8("polPopUpClass"));
        polPopUpClass->resize(361, 238);
        pushButton_10 = new QPushButton(polPopUpClass);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(10, 180, 40, 40));
        pushButton_10->setCursor(QCursor(Qt::BlankCursor));
        pushButton_Clear = new QPushButton(polPopUpClass);
        pushButton_Clear->setObjectName(QString::fromUtf8("pushButton_Clear"));
        pushButton_Clear->setGeometry(QRect(200, 80, 98, 40));
        pushButton_Clear->setCursor(QCursor(Qt::BlankCursor));
        pushButton_1 = new QPushButton(polPopUpClass);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(10, 30, 40, 40));
        pushButton_1->setCursor(QCursor(Qt::BlankCursor));
        enterButton = new QPushButton(polPopUpClass);
        enterButton->setObjectName(QString::fromUtf8("enterButton"));
        enterButton->setGeometry(QRect(200, 140, 51, 41));
        enterButton->setMinimumSize(QSize(1, 1));
        enterButton->setCursor(QCursor(Qt::BlankCursor));
        enterButton->setFocusPolicy(Qt::NoFocus);
        pushButton_11 = new QPushButton(polPopUpClass);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(70, 180, 40, 40));
        pushButton_11->setCursor(QCursor(Qt::BlankCursor));
        pushButton_7 = new QPushButton(polPopUpClass);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(10, 130, 40, 40));
        pushButton_7->setCursor(QCursor(Qt::BlankCursor));
        lineEdit = new QLineEdit(polPopUpClass);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(200, 10, 151, 40));
        pushButton_9 = new QPushButton(polPopUpClass);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(130, 130, 40, 40));
        pushButton_9->setCursor(QCursor(Qt::BlankCursor));
        pushButton_12 = new QPushButton(polPopUpClass);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(130, 180, 40, 40));
        pushButton_12->setCursor(QCursor(Qt::BlankCursor));
        pushButton_6 = new QPushButton(polPopUpClass);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(130, 80, 40, 40));
        pushButton_6->setCursor(QCursor(Qt::BlankCursor));
        pushButton_5 = new QPushButton(polPopUpClass);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(70, 80, 40, 40));
        pushButton_5->setCursor(QCursor(Qt::BlankCursor));
        detOkButton = new QPushButton(polPopUpClass);
        detOkButton->setObjectName(QString::fromUtf8("detOkButton"));
        detOkButton->setGeometry(QRect(280, 140, 51, 41));
        detOkButton->setMinimumSize(QSize(1, 1));
        detOkButton->setCursor(QCursor(Qt::BlankCursor));
        detOkButton->setFocusPolicy(Qt::NoFocus);
        pushButton_3 = new QPushButton(polPopUpClass);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(130, 30, 40, 40));
        pushButton_3->setCursor(QCursor(Qt::BlankCursor));
        pushButton_8 = new QPushButton(polPopUpClass);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(70, 130, 40, 40));
        pushButton_8->setCursor(QCursor(Qt::BlankCursor));
        pushButton_2 = new QPushButton(polPopUpClass);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 30, 40, 40));
        pushButton_2->setCursor(QCursor(Qt::BlankCursor));
        pushButton_4 = new QPushButton(polPopUpClass);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 80, 40, 40));
        pushButton_4->setCursor(QCursor(Qt::BlankCursor));
        rangelabel = new QLabel(polPopUpClass);
        rangelabel->setObjectName(QString::fromUtf8("rangelabel"));
        rangelabel->setGeometry(QRect(10, 0, 111, 31));
        QFont font;
        font.setPointSize(9);
        rangelabel->setFont(font);

        retranslateUi(polPopUpClass);
        QObject::connect(enterButton, SIGNAL(pressed()), polPopUpClass, SLOT(processNumIn()));
        QObject::connect(detOkButton, SIGNAL(pressed()), polPopUpClass, SLOT(close()));
        QObject::connect(pushButton_Clear, SIGNAL(pressed()), polPopUpClass, SLOT(num_Clear()));
        QObject::connect(pushButton_11, SIGNAL(pressed()), polPopUpClass, SLOT(num_0()));
        QObject::connect(pushButton_1, SIGNAL(pressed()), polPopUpClass, SLOT(num_1()));
        QObject::connect(pushButton_2, SIGNAL(pressed()), polPopUpClass, SLOT(num_2()));
        QObject::connect(pushButton_3, SIGNAL(pressed()), polPopUpClass, SLOT(num_3()));
        QObject::connect(pushButton_4, SIGNAL(pressed()), polPopUpClass, SLOT(num_4()));
        QObject::connect(pushButton_5, SIGNAL(pressed()), polPopUpClass, SLOT(num_5()));
        QObject::connect(pushButton_6, SIGNAL(pressed()), polPopUpClass, SLOT(num_6()));
        QObject::connect(pushButton_7, SIGNAL(pressed()), polPopUpClass, SLOT(num_7()));
        QObject::connect(pushButton_8, SIGNAL(pressed()), polPopUpClass, SLOT(num_8()));
        QObject::connect(pushButton_9, SIGNAL(pressed()), polPopUpClass, SLOT(num_9()));
        QObject::connect(pushButton_Clear, SIGNAL(pressed()), polPopUpClass, SLOT(num_Clear()));
        QObject::connect(pushButton_12, SIGNAL(pressed()), polPopUpClass, SLOT(num_minus()));
        QObject::connect(pushButton_10, SIGNAL(pressed()), polPopUpClass, SLOT(num_period()));

        QMetaObject::connectSlotsByName(polPopUpClass);
    } // setupUi

    void retranslateUi(QDialog *polPopUpClass)
    {
        polPopUpClass->setWindowTitle(QApplication::translate("polPopUpClass", "polPopUp", 0, QApplication::UnicodeUTF8));
        pushButton_10->setText(QApplication::translate("polPopUpClass", ".", 0, QApplication::UnicodeUTF8));
        pushButton_Clear->setText(QApplication::translate("polPopUpClass", "CLEAR", 0, QApplication::UnicodeUTF8));
        pushButton_1->setText(QApplication::translate("polPopUpClass", "1", 0, QApplication::UnicodeUTF8));
        enterButton->setText(QApplication::translate("polPopUpClass", "ENTER", 0, QApplication::UnicodeUTF8));
        pushButton_11->setText(QApplication::translate("polPopUpClass", "0", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("polPopUpClass", "7", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QApplication::translate("polPopUpClass", "9", 0, QApplication::UnicodeUTF8));
        pushButton_12->setText(QApplication::translate("polPopUpClass", "-", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("polPopUpClass", "6", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("polPopUpClass", "5", 0, QApplication::UnicodeUTF8));
        detOkButton->setText(QApplication::translate("polPopUpClass", "OK", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("polPopUpClass", "3", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("polPopUpClass", "8", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("polPopUpClass", "2", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("polPopUpClass", "4", 0, QApplication::UnicodeUTF8));
        rangelabel->setText(QApplication::translate("polPopUpClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Oven Temp</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class polPopUpClass: public Ui_polPopUpClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLPOPUP_H
