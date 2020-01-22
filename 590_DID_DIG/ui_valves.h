/********************************************************************************
** Form generated from reading UI file 'valves.ui'
**
** Created: Mon Aug 19 13:25:32 2019
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VALVES_H
#define UI_VALVES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ValvesClass
{
public:
    QPushButton *sampleValvesButton;
    QPushButton *zerpValveButton;
    QPushButton *SpanValveButton;
    QPushButton *valve1Button;
    QPushButton *valve2Button;
    QPushButton *valve3Button;
    QPushButton *endButton;
    QCheckBox *vValve1CheckBox;
    QCheckBox *vValve2CheckBox;
    QCheckBox *vValve3CheckBox;
    QCheckBox *vSampleCheckBox;
    QCheckBox *vZeroCheckBox;
    QCheckBox *vSpanCheckBox;
    QLineEdit *busyLineEdit;

    void setupUi(QDialog *ValvesClass)
    {
        if (ValvesClass->objectName().isEmpty())
            ValvesClass->setObjectName(QString::fromUtf8("ValvesClass"));
        ValvesClass->resize(480, 272);
        sampleValvesButton = new QPushButton(ValvesClass);
        sampleValvesButton->setObjectName(QString::fromUtf8("sampleValvesButton"));
        sampleValvesButton->setGeometry(QRect(90, 10, 81, 41));
        sampleValvesButton->setMinimumSize(QSize(55, 22));
        sampleValvesButton->setMaximumSize(QSize(111, 41));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 170, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        QBrush brush2(QColor(121, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        sampleValvesButton->setPalette(palette);
        zerpValveButton = new QPushButton(ValvesClass);
        zerpValveButton->setObjectName(QString::fromUtf8("zerpValveButton"));
        zerpValveButton->setGeometry(QRect(90, 80, 81, 41));
        zerpValveButton->setMinimumSize(QSize(55, 22));
        zerpValveButton->setMaximumSize(QSize(111, 41));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        zerpValveButton->setPalette(palette1);
        SpanValveButton = new QPushButton(ValvesClass);
        SpanValveButton->setObjectName(QString::fromUtf8("SpanValveButton"));
        SpanValveButton->setGeometry(QRect(90, 150, 81, 41));
        SpanValveButton->setMinimumSize(QSize(55, 22));
        SpanValveButton->setMaximumSize(QSize(111, 41));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        SpanValveButton->setPalette(palette2);
        SpanValveButton->setContextMenuPolicy(Qt::ActionsContextMenu);
        valve1Button = new QPushButton(ValvesClass);
        valve1Button->setObjectName(QString::fromUtf8("valve1Button"));
        valve1Button->setGeometry(QRect(310, 10, 81, 41));
        valve1Button->setMinimumSize(QSize(55, 22));
        valve1Button->setMaximumSize(QSize(111, 41));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        valve1Button->setPalette(palette3);
        valve2Button = new QPushButton(ValvesClass);
        valve2Button->setObjectName(QString::fromUtf8("valve2Button"));
        valve2Button->setGeometry(QRect(310, 80, 81, 41));
        valve2Button->setMinimumSize(QSize(55, 22));
        valve2Button->setMaximumSize(QSize(111, 41));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        valve2Button->setPalette(palette4);
        valve3Button = new QPushButton(ValvesClass);
        valve3Button->setObjectName(QString::fromUtf8("valve3Button"));
        valve3Button->setGeometry(QRect(310, 150, 81, 41));
        valve3Button->setMinimumSize(QSize(55, 22));
        valve3Button->setMaximumSize(QSize(111, 41));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        valve3Button->setPalette(palette5);
        endButton = new QPushButton(ValvesClass);
        endButton->setObjectName(QString::fromUtf8("endButton"));
        endButton->setGeometry(QRect(390, 220, 71, 41));
        endButton->setMinimumSize(QSize(55, 22));
        endButton->setMaximumSize(QSize(111, 41));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        endButton->setPalette(palette6);
        vValve1CheckBox = new QCheckBox(ValvesClass);
        vValve1CheckBox->setObjectName(QString::fromUtf8("vValve1CheckBox"));
        vValve1CheckBox->setGeometry(QRect(280, 20, 31, 31));
        vValve1CheckBox->setMinimumSize(QSize(31, 31));
        QFont font;
        font.setPointSize(12);
        vValve1CheckBox->setFont(font);
        vValve1CheckBox->setAcceptDrops(false);
        vValve2CheckBox = new QCheckBox(ValvesClass);
        vValve2CheckBox->setObjectName(QString::fromUtf8("vValve2CheckBox"));
        vValve2CheckBox->setGeometry(QRect(280, 90, 31, 31));
        vValve2CheckBox->setMinimumSize(QSize(31, 31));
        vValve2CheckBox->setFont(font);
        vValve2CheckBox->setAcceptDrops(false);
        vValve3CheckBox = new QCheckBox(ValvesClass);
        vValve3CheckBox->setObjectName(QString::fromUtf8("vValve3CheckBox"));
        vValve3CheckBox->setGeometry(QRect(280, 160, 31, 31));
        vValve3CheckBox->setMinimumSize(QSize(31, 31));
        vValve3CheckBox->setFont(font);
        vValve3CheckBox->setAcceptDrops(false);
        vSampleCheckBox = new QCheckBox(ValvesClass);
        vSampleCheckBox->setObjectName(QString::fromUtf8("vSampleCheckBox"));
        vSampleCheckBox->setGeometry(QRect(60, 20, 31, 31));
        vSampleCheckBox->setMinimumSize(QSize(31, 31));
        vSampleCheckBox->setFont(font);
        vSampleCheckBox->setAcceptDrops(false);
        vZeroCheckBox = new QCheckBox(ValvesClass);
        vZeroCheckBox->setObjectName(QString::fromUtf8("vZeroCheckBox"));
        vZeroCheckBox->setGeometry(QRect(60, 90, 31, 31));
        vZeroCheckBox->setMinimumSize(QSize(31, 31));
        vZeroCheckBox->setFont(font);
        vZeroCheckBox->setAcceptDrops(false);
        vSpanCheckBox = new QCheckBox(ValvesClass);
        vSpanCheckBox->setObjectName(QString::fromUtf8("vSpanCheckBox"));
        vSpanCheckBox->setGeometry(QRect(60, 160, 31, 31));
        vSpanCheckBox->setMinimumSize(QSize(31, 31));
        vSpanCheckBox->setFont(font);
        vSpanCheckBox->setAcceptDrops(false);
        busyLineEdit = new QLineEdit(ValvesClass);
        busyLineEdit->setObjectName(QString::fromUtf8("busyLineEdit"));
        busyLineEdit->setGeometry(QRect(90, 230, 281, 27));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        busyLineEdit->setFont(font1);

        retranslateUi(ValvesClass);
        QObject::connect(sampleValvesButton, SIGNAL(released()), ValvesClass, SLOT(sampValveCtl()));
        QObject::connect(zerpValveButton, SIGNAL(released()), ValvesClass, SLOT(zeroValveCtl()));
        QObject::connect(SpanValveButton, SIGNAL(released()), ValvesClass, SLOT(spanValveCtl()));
        QObject::connect(endButton, SIGNAL(released()), ValvesClass, SLOT(close()));
        QObject::connect(valve1Button, SIGNAL(released()), ValvesClass, SLOT(gsValve1()));
        QObject::connect(valve2Button, SIGNAL(released()), ValvesClass, SLOT(gsValve2()));
        QObject::connect(valve3Button, SIGNAL(released()), ValvesClass, SLOT(gsValve3()));

        QMetaObject::connectSlotsByName(ValvesClass);
    } // setupUi

    void retranslateUi(QDialog *ValvesClass)
    {
        ValvesClass->setWindowTitle(QApplication::translate("ValvesClass", "Valves", 0, QApplication::UnicodeUTF8));
        sampleValvesButton->setText(QApplication::translate("ValvesClass", "Sample", 0, QApplication::UnicodeUTF8));
        zerpValveButton->setText(QApplication::translate("ValvesClass", "Zero", 0, QApplication::UnicodeUTF8));
        SpanValveButton->setText(QApplication::translate("ValvesClass", "SPAN", 0, QApplication::UnicodeUTF8));
        valve1Button->setText(QApplication::translate("ValvesClass", "METH 0/1", 0, QApplication::UnicodeUTF8));
        valve2Button->setText(QApplication::translate("ValvesClass", "VALVE 2", 0, QApplication::UnicodeUTF8));
        valve3Button->setText(QApplication::translate("ValvesClass", "VALVE 3", 0, QApplication::UnicodeUTF8));
        endButton->setText(QApplication::translate("ValvesClass", "ENTER", 0, QApplication::UnicodeUTF8));
        vValve1CheckBox->setText(QString());
        vValve2CheckBox->setText(QString());
        vValve3CheckBox->setText(QString());
        vSampleCheckBox->setText(QString());
        vZeroCheckBox->setText(QString());
        vSpanCheckBox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ValvesClass: public Ui_ValvesClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VALVES_H
