/********************************************************************************
** Form generated from reading UI file 'numpopup.ui'
**
** Created: Wed Jan 8 09:17:36 2020
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUMPOPUP_H
#define UI_NUMPOPUP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_numPopUpClass
{
public:
    QPushButton *pushButton_2;
    QPushButton *pushButton_7;
    QPushButton *pushButton_12;
    QPushButton *pushButton_1;
    QPushButton *pushButton_10;
    QPushButton *pushButton_8;
    QPushButton *detOkButton;
    QPushButton *pushButton_Clear;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QPushButton *enterButton;
    QPushButton *pushButton_9;
    QPushButton *pushButton_5;
    QLineEdit *lineEdit;
    QPushButton *pushButton_11;
    QPushButton *pushButton_3;

    void setupUi(QDialog *numPopUpClass)
    {
        if (numPopUpClass->objectName().isEmpty())
            numPopUpClass->setObjectName(QString::fromUtf8("numPopUpClass"));
        numPopUpClass->resize(350, 212);
        pushButton_2 = new QPushButton(numPopUpClass);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 10, 40, 40));
        pushButton_2->setCursor(QCursor(Qt::BlankCursor));
        pushButton_7 = new QPushButton(numPopUpClass);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(10, 110, 40, 40));
        pushButton_7->setCursor(QCursor(Qt::BlankCursor));
        pushButton_12 = new QPushButton(numPopUpClass);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(130, 160, 40, 40));
        pushButton_12->setCursor(QCursor(Qt::BlankCursor));
        pushButton_1 = new QPushButton(numPopUpClass);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(10, 10, 40, 40));
        pushButton_1->setCursor(QCursor(Qt::BlankCursor));
        pushButton_10 = new QPushButton(numPopUpClass);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(10, 160, 40, 40));
        pushButton_10->setCursor(QCursor(Qt::BlankCursor));
        pushButton_8 = new QPushButton(numPopUpClass);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(70, 110, 40, 40));
        pushButton_8->setCursor(QCursor(Qt::BlankCursor));
        detOkButton = new QPushButton(numPopUpClass);
        detOkButton->setObjectName(QString::fromUtf8("detOkButton"));
        detOkButton->setGeometry(QRect(280, 130, 51, 41));
        detOkButton->setMinimumSize(QSize(1, 1));
        detOkButton->setCursor(QCursor(Qt::BlankCursor));
        detOkButton->setFocusPolicy(Qt::NoFocus);
        pushButton_Clear = new QPushButton(numPopUpClass);
        pushButton_Clear->setObjectName(QString::fromUtf8("pushButton_Clear"));
        pushButton_Clear->setGeometry(QRect(200, 70, 98, 40));
        pushButton_Clear->setCursor(QCursor(Qt::BlankCursor));
        pushButton_6 = new QPushButton(numPopUpClass);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(130, 60, 40, 40));
        pushButton_6->setCursor(QCursor(Qt::BlankCursor));
        pushButton_4 = new QPushButton(numPopUpClass);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 60, 40, 40));
        pushButton_4->setCursor(QCursor(Qt::BlankCursor));
        enterButton = new QPushButton(numPopUpClass);
        enterButton->setObjectName(QString::fromUtf8("enterButton"));
        enterButton->setGeometry(QRect(200, 130, 51, 41));
        enterButton->setMinimumSize(QSize(1, 1));
        enterButton->setCursor(QCursor(Qt::BlankCursor));
        enterButton->setFocusPolicy(Qt::NoFocus);
        pushButton_9 = new QPushButton(numPopUpClass);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(130, 110, 40, 40));
        pushButton_9->setCursor(QCursor(Qt::BlankCursor));
        pushButton_5 = new QPushButton(numPopUpClass);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(70, 60, 40, 40));
        pushButton_5->setCursor(QCursor(Qt::BlankCursor));
        lineEdit = new QLineEdit(numPopUpClass);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(180, 10, 151, 40));
        pushButton_11 = new QPushButton(numPopUpClass);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(70, 160, 40, 40));
        pushButton_11->setCursor(QCursor(Qt::BlankCursor));
        pushButton_3 = new QPushButton(numPopUpClass);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(130, 10, 40, 40));
        pushButton_3->setCursor(QCursor(Qt::BlankCursor));

        retranslateUi(numPopUpClass);
        QObject::connect(pushButton_1, SIGNAL(pressed()), numPopUpClass, SLOT(num_1()));
        QObject::connect(pushButton_2, SIGNAL(pressed()), numPopUpClass, SLOT(num_2()));
        QObject::connect(pushButton_3, SIGNAL(pressed()), numPopUpClass, SLOT(num_3()));
        QObject::connect(pushButton_4, SIGNAL(pressed()), numPopUpClass, SLOT(num_4()));
        QObject::connect(pushButton_5, SIGNAL(pressed()), numPopUpClass, SLOT(num_5()));
        QObject::connect(pushButton_6, SIGNAL(pressed()), numPopUpClass, SLOT(num_6()));
        QObject::connect(pushButton_7, SIGNAL(pressed()), numPopUpClass, SLOT(num_7()));
        QObject::connect(pushButton_9, SIGNAL(pressed()), numPopUpClass, SLOT(num_9()));
        QObject::connect(pushButton_8, SIGNAL(pressed()), numPopUpClass, SLOT(num_8()));
        QObject::connect(pushButton_11, SIGNAL(pressed()), numPopUpClass, SLOT(num_0()));
        QObject::connect(detOkButton, SIGNAL(pressed()), numPopUpClass, SLOT(close()));
        QObject::connect(pushButton_12, SIGNAL(pressed()), numPopUpClass, SLOT(num_minus()));
        QObject::connect(pushButton_10, SIGNAL(pressed()), numPopUpClass, SLOT(num_period()));
        QObject::connect(pushButton_Clear, SIGNAL(pressed()), numPopUpClass, SLOT(num_clear()));
        QObject::connect(enterButton, SIGNAL(pressed()), numPopUpClass, SLOT(processNumIn()));

        QMetaObject::connectSlotsByName(numPopUpClass);
    } // setupUi

    void retranslateUi(QDialog *numPopUpClass)
    {
        numPopUpClass->setWindowTitle(QApplication::translate("numPopUpClass", "numPopUp", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("numPopUpClass", "2", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("numPopUpClass", "7", 0, QApplication::UnicodeUTF8));
        pushButton_12->setText(QApplication::translate("numPopUpClass", "-", 0, QApplication::UnicodeUTF8));
        pushButton_1->setText(QApplication::translate("numPopUpClass", "1", 0, QApplication::UnicodeUTF8));
        pushButton_10->setText(QApplication::translate("numPopUpClass", ".", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("numPopUpClass", "8", 0, QApplication::UnicodeUTF8));
        detOkButton->setText(QApplication::translate("numPopUpClass", "OK", 0, QApplication::UnicodeUTF8));
        pushButton_Clear->setText(QApplication::translate("numPopUpClass", "CLEAR", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("numPopUpClass", "6", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("numPopUpClass", "4", 0, QApplication::UnicodeUTF8));
        enterButton->setText(QApplication::translate("numPopUpClass", "ENTER", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QApplication::translate("numPopUpClass", "9", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("numPopUpClass", "5", 0, QApplication::UnicodeUTF8));
        pushButton_11->setText(QApplication::translate("numPopUpClass", "0", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("numPopUpClass", "3", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class numPopUpClass: public Ui_numPopUpClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUMPOPUP_H
