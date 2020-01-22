/********************************************************************************
** Form generated from reading UI file 'settemp.ui'
**
** Created: Wed Jan 8 09:17:36 2020
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTEMP_H
#define UI_SETTEMP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_setTempClass
{
public:
    QLabel *rmInitTemplabel;
    QLabel *rmInitTemplabel_2;
    QLabel *rmInitTemplabel_3;
    QLabel *rmInitTemplabel_4;
    QLabel *rmInitTemplabel_5;
    QLabel *rmInitTemplabel_6;
    QLabel *rmInitTemplabel_7;
    QDoubleSpinBox *tempdetector;
    QLCDNumber *actualdetector;
    QDoubleSpinBox *tempSampTee;
    QLCDNumber *actualmeth;
    QDoubleSpinBox *tempcolumn;
    QLCDNumber *actualcolumn;
    QDoubleSpinBox *tempMeth;
    QLCDNumber *actualaux;
    QLineEdit *busyLineEdit;
    QPushButton *settempEnterButton;
    QPushButton *tempRead;

    void setupUi(QDialog *setTempClass)
    {
        if (setTempClass->objectName().isEmpty())
            setTempClass->setObjectName(QString::fromUtf8("setTempClass"));
        setTempClass->resize(480, 272);
        rmInitTemplabel = new QLabel(setTempClass);
        rmInitTemplabel->setObjectName(QString::fromUtf8("rmInitTemplabel"));
        rmInitTemplabel->setGeometry(QRect(10, 40, 101, 17));
        rmInitTemplabel->setAlignment(Qt::AlignCenter);
        rmInitTemplabel_2 = new QLabel(setTempClass);
        rmInitTemplabel_2->setObjectName(QString::fromUtf8("rmInitTemplabel_2"));
        rmInitTemplabel_2->setGeometry(QRect(170, 40, 101, 17));
        rmInitTemplabel_2->setAlignment(Qt::AlignCenter);
        rmInitTemplabel_3 = new QLabel(setTempClass);
        rmInitTemplabel_3->setObjectName(QString::fromUtf8("rmInitTemplabel_3"));
        rmInitTemplabel_3->setGeometry(QRect(350, 40, 101, 17));
        rmInitTemplabel_3->setAlignment(Qt::AlignCenter);
        rmInitTemplabel_4 = new QLabel(setTempClass);
        rmInitTemplabel_4->setObjectName(QString::fromUtf8("rmInitTemplabel_4"));
        rmInitTemplabel_4->setGeometry(QRect(30, 70, 101, 17));
        rmInitTemplabel_5 = new QLabel(setTempClass);
        rmInitTemplabel_5->setObjectName(QString::fromUtf8("rmInitTemplabel_5"));
        rmInitTemplabel_5->setGeometry(QRect(30, 110, 111, 20));
        rmInitTemplabel_6 = new QLabel(setTempClass);
        rmInitTemplabel_6->setObjectName(QString::fromUtf8("rmInitTemplabel_6"));
        rmInitTemplabel_6->setGeometry(QRect(30, 190, 101, 17));
        rmInitTemplabel_7 = new QLabel(setTempClass);
        rmInitTemplabel_7->setObjectName(QString::fromUtf8("rmInitTemplabel_7"));
        rmInitTemplabel_7->setGeometry(QRect(30, 150, 101, 17));
        tempdetector = new QDoubleSpinBox(setTempClass);
        tempdetector->setObjectName(QString::fromUtf8("tempdetector"));
        tempdetector->setGeometry(QRect(190, 70, 101, 31));
        tempdetector->setMinimumSize(QSize(0, 0));
        tempdetector->setMaximumSize(QSize(101, 61));
        QFont font;
        font.setPointSize(24);
        tempdetector->setFont(font);
        tempdetector->setDecimals(0);
        tempdetector->setMinimum(0);
        tempdetector->setMaximum(250);
        tempdetector->setValue(0);
        actualdetector = new QLCDNumber(setTempClass);
        actualdetector->setObjectName(QString::fromUtf8("actualdetector"));
        actualdetector->setGeometry(QRect(350, 70, 81, 31));
        actualdetector->setMinimumSize(QSize(0, 0));
        actualdetector->setFont(font);
        actualdetector->setProperty("intValue", QVariant(0));
        tempSampTee = new QDoubleSpinBox(setTempClass);
        tempSampTee->setObjectName(QString::fromUtf8("tempSampTee"));
        tempSampTee->setGeometry(QRect(190, 110, 101, 31));
        tempSampTee->setMinimumSize(QSize(0, 0));
        tempSampTee->setMaximumSize(QSize(101, 61));
        tempSampTee->setFont(font);
        tempSampTee->setDecimals(0);
        tempSampTee->setMinimum(0);
        tempSampTee->setMaximum(250);
        tempSampTee->setValue(0);
        actualmeth = new QLCDNumber(setTempClass);
        actualmeth->setObjectName(QString::fromUtf8("actualmeth"));
        actualmeth->setGeometry(QRect(350, 110, 81, 31));
        actualmeth->setMinimumSize(QSize(0, 0));
        actualmeth->setFont(font);
        actualmeth->setProperty("intValue", QVariant(0));
        tempcolumn = new QDoubleSpinBox(setTempClass);
        tempcolumn->setObjectName(QString::fromUtf8("tempcolumn"));
        tempcolumn->setGeometry(QRect(190, 150, 101, 31));
        tempcolumn->setMinimumSize(QSize(0, 0));
        tempcolumn->setMaximumSize(QSize(101, 61));
        tempcolumn->setFont(font);
        tempcolumn->setDecimals(0);
        tempcolumn->setMaximum(300);
        tempcolumn->setValue(0);
        actualcolumn = new QLCDNumber(setTempClass);
        actualcolumn->setObjectName(QString::fromUtf8("actualcolumn"));
        actualcolumn->setGeometry(QRect(350, 150, 81, 31));
        actualcolumn->setMinimumSize(QSize(0, 0));
        actualcolumn->setFont(font);
        actualcolumn->setProperty("intValue", QVariant(0));
        tempMeth = new QDoubleSpinBox(setTempClass);
        tempMeth->setObjectName(QString::fromUtf8("tempMeth"));
        tempMeth->setGeometry(QRect(190, 190, 101, 31));
        tempMeth->setMinimumSize(QSize(0, 0));
        tempMeth->setMaximumSize(QSize(101, 61));
        tempMeth->setFont(font);
        tempMeth->setDecimals(0);
        tempMeth->setMinimum(0);
        tempMeth->setMaximum(450);
        tempMeth->setValue(0);
        actualaux = new QLCDNumber(setTempClass);
        actualaux->setObjectName(QString::fromUtf8("actualaux"));
        actualaux->setGeometry(QRect(350, 190, 81, 31));
        actualaux->setMinimumSize(QSize(0, 0));
        actualaux->setFont(font);
        actualaux->setProperty("intValue", QVariant(0));
        busyLineEdit = new QLineEdit(setTempClass);
        busyLineEdit->setObjectName(QString::fromUtf8("busyLineEdit"));
        busyLineEdit->setGeometry(QRect(180, 0, 111, 31));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        busyLineEdit->setFont(font1);
        settempEnterButton = new QPushButton(setTempClass);
        settempEnterButton->setObjectName(QString::fromUtf8("settempEnterButton"));
        settempEnterButton->setGeometry(QRect(382, 240, 85, 27));
        settempEnterButton->setMinimumSize(QSize(55, 22));
        settempEnterButton->setMaximumSize(QSize(111, 41));
        QPalette palette;
        QBrush brush(QColor(0, 170, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        settempEnterButton->setPalette(palette);
        tempRead = new QPushButton(setTempClass);
        tempRead->setObjectName(QString::fromUtf8("tempRead"));
        tempRead->setGeometry(QRect(10, 240, 85, 27));
        tempRead->setMinimumSize(QSize(55, 22));
        tempRead->setMaximumSize(QSize(111, 41));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        tempRead->setPalette(palette1);

        retranslateUi(setTempClass);
        QObject::connect(settempEnterButton, SIGNAL(released()), setTempClass, SLOT(close()));
        QObject::connect(tempRead, SIGNAL(released()), setTempClass, SLOT(readTemp()));
        QObject::connect(setTempClass, SIGNAL(accepted()), tempRead, SLOT(click()));

        QMetaObject::connectSlotsByName(setTempClass);
    } // setupUi

    void retranslateUi(QDialog *setTempClass)
    {
        setTempClass->setWindowTitle(QApplication::translate("setTempClass", "setTemp", 0, QApplication::UnicodeUTF8));
        rmInitTemplabel->setText(QApplication::translate("setTempClass", "Temp Zone", 0, QApplication::UnicodeUTF8));
        rmInitTemplabel_2->setText(QApplication::translate("setTempClass", "Set Temp", 0, QApplication::UnicodeUTF8));
        rmInitTemplabel_3->setText(QApplication::translate("setTempClass", "ACTUAL TEMP", 0, QApplication::UnicodeUTF8));
        rmInitTemplabel_4->setText(QApplication::translate("setTempClass", "Detector", 0, QApplication::UnicodeUTF8));
        rmInitTemplabel_5->setText(QApplication::translate("setTempClass", "Sample Preheat", 0, QApplication::UnicodeUTF8));
        rmInitTemplabel_6->setText(QApplication::translate("setTempClass", "Methanizer", 0, QApplication::UnicodeUTF8));
        rmInitTemplabel_7->setText(QApplication::translate("setTempClass", "Column", 0, QApplication::UnicodeUTF8));
        settempEnterButton->setText(QApplication::translate("setTempClass", "ENTER", 0, QApplication::UnicodeUTF8));
        tempRead->setText(QApplication::translate("setTempClass", "READ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class setTempClass: public Ui_setTempClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTEMP_H
