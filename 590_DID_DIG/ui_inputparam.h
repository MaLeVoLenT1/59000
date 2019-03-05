/********************************************************************************
** Form generated from reading UI file 'inputparam.ui'
**
** Created: Tue Mar 5 14:05:07 2019
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTPARAM_H
#define UI_INPUTPARAM_H

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

class Ui_inputParamClass
{
public:
    QPushButton *closeButton;
    QPushButton *ro_inputPar_getCurrentButton;
    QPushButton *writeDataButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_8;
    QLabel *ro_inparm_type_nameLabel;
    QDoubleSpinBox *ro_inpar_type_SpinBox;
    QHBoxLayout *horizontalLayout_7;
    QLabel *ro_inpar_indeb_nameLabel;
    QDoubleSpinBox *ro_inpar_indeb_SpinBox;
    QHBoxLayout *horizontalLayout_6;
    QLabel *ro_inpar_inbias_nameLabel;
    QDoubleSpinBox *ro_inpar_inbias_SpinBox;
    QHBoxLayout *horizontalLayout;
    QLabel *ro_inpar_lisll_nameLabel;
    QDoubleSpinBox *ro_inpar_lisll_SpinBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *ro_inpar_lishl_nameLabel;
    QDoubleSpinBox *ro_inpar_lishl_SpinBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *ro_inpar_spll_nameLabel;
    QDoubleSpinBox *ro_inpar_spll_SpinBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *ro_inpar_sphl_nameLabel;
    QDoubleSpinBox *ro_inpar_sphl_SpinBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *ro_inpar_infilter_nameLabel;
    QDoubleSpinBox *ro_inpar_infilter_SpinBox;

    void setupUi(QDialog *inputParamClass)
    {
        if (inputParamClass->objectName().isEmpty())
            inputParamClass->setObjectName(QString::fromUtf8("inputParamClass"));
        inputParamClass->resize(414, 315);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(85, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(213, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(149, 255, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(42, 127, 127, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(56, 170, 170, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(170, 255, 255, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        inputParamClass->setPalette(palette);
        closeButton = new QPushButton(inputParamClass);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(320, 90, 81, 41));
        closeButton->setMinimumSize(QSize(0, 0));
        closeButton->setMaximumSize(QSize(111, 41));
        ro_inputPar_getCurrentButton = new QPushButton(inputParamClass);
        ro_inputPar_getCurrentButton->setObjectName(QString::fromUtf8("ro_inputPar_getCurrentButton"));
        ro_inputPar_getCurrentButton->setGeometry(QRect(320, 10, 81, 41));
        ro_inputPar_getCurrentButton->setMinimumSize(QSize(0, 0));
        ro_inputPar_getCurrentButton->setMaximumSize(QSize(81, 71));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush9(QColor(0, 255, 0, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush9);
        QBrush brush10(QColor(127, 255, 127, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush10);
        QBrush brush11(QColor(63, 255, 63, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        QBrush brush12(QColor(0, 127, 0, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush12);
        QBrush brush13(QColor(0, 170, 0, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        ro_inputPar_getCurrentButton->setPalette(palette1);
        writeDataButton = new QPushButton(inputParamClass);
        writeDataButton->setObjectName(QString::fromUtf8("writeDataButton"));
        writeDataButton->setGeometry(QRect(320, 50, 81, 41));
        writeDataButton->setMinimumSize(QSize(0, 0));
        writeDataButton->setMaximumSize(QSize(111, 41));
        widget = new QWidget(inputParamClass);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 315, 308));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        ro_inparm_type_nameLabel = new QLabel(widget);
        ro_inparm_type_nameLabel->setObjectName(QString::fromUtf8("ro_inparm_type_nameLabel"));
        ro_inparm_type_nameLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(ro_inparm_type_nameLabel);

        ro_inpar_type_SpinBox = new QDoubleSpinBox(widget);
        ro_inpar_type_SpinBox->setObjectName(QString::fromUtf8("ro_inpar_type_SpinBox"));
        ro_inpar_type_SpinBox->setMinimumSize(QSize(51, 31));
        ro_inpar_type_SpinBox->setMaximumSize(QSize(61, 31));
        QFont font;
        font.setPointSize(18);
        ro_inpar_type_SpinBox->setFont(font);
        ro_inpar_type_SpinBox->setDecimals(0);
        ro_inpar_type_SpinBox->setMaximum(22);
        ro_inpar_type_SpinBox->setSingleStep(1);
        ro_inpar_type_SpinBox->setValue(11);

        horizontalLayout_8->addWidget(ro_inpar_type_SpinBox);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        ro_inpar_indeb_nameLabel = new QLabel(widget);
        ro_inpar_indeb_nameLabel->setObjectName(QString::fromUtf8("ro_inpar_indeb_nameLabel"));
        ro_inpar_indeb_nameLabel->setContextMenuPolicy(Qt::CustomContextMenu);
        ro_inpar_indeb_nameLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(ro_inpar_indeb_nameLabel);

        ro_inpar_indeb_SpinBox = new QDoubleSpinBox(widget);
        ro_inpar_indeb_SpinBox->setObjectName(QString::fromUtf8("ro_inpar_indeb_SpinBox"));
        ro_inpar_indeb_SpinBox->setMinimumSize(QSize(81, 31));
        ro_inpar_indeb_SpinBox->setMaximumSize(QSize(81, 31));
        ro_inpar_indeb_SpinBox->setFont(font);
        ro_inpar_indeb_SpinBox->setDecimals(0);
        ro_inpar_indeb_SpinBox->setMaximum(100);
        ro_inpar_indeb_SpinBox->setValue(3);

        horizontalLayout_7->addWidget(ro_inpar_indeb_SpinBox);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        ro_inpar_inbias_nameLabel = new QLabel(widget);
        ro_inpar_inbias_nameLabel->setObjectName(QString::fromUtf8("ro_inpar_inbias_nameLabel"));
        ro_inpar_inbias_nameLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(ro_inpar_inbias_nameLabel);

        ro_inpar_inbias_SpinBox = new QDoubleSpinBox(widget);
        ro_inpar_inbias_SpinBox->setObjectName(QString::fromUtf8("ro_inpar_inbias_SpinBox"));
        ro_inpar_inbias_SpinBox->setMinimumSize(QSize(81, 31));
        ro_inpar_inbias_SpinBox->setMaximumSize(QSize(41, 31));
        ro_inpar_inbias_SpinBox->setFont(font);
        ro_inpar_inbias_SpinBox->setDecimals(0);
        ro_inpar_inbias_SpinBox->setMinimum(-556);
        ro_inpar_inbias_SpinBox->setMaximum(556);
        ro_inpar_inbias_SpinBox->setValue(0);

        horizontalLayout_6->addWidget(ro_inpar_inbias_SpinBox);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ro_inpar_lisll_nameLabel = new QLabel(widget);
        ro_inpar_lisll_nameLabel->setObjectName(QString::fromUtf8("ro_inpar_lisll_nameLabel"));

        horizontalLayout->addWidget(ro_inpar_lisll_nameLabel);

        ro_inpar_lisll_SpinBox = new QDoubleSpinBox(widget);
        ro_inpar_lisll_SpinBox->setObjectName(QString::fromUtf8("ro_inpar_lisll_SpinBox"));
        ro_inpar_lisll_SpinBox->setMinimumSize(QSize(41, 31));
        ro_inpar_lisll_SpinBox->setMaximumSize(QSize(91, 31));
        ro_inpar_lisll_SpinBox->setFont(font);
        ro_inpar_lisll_SpinBox->setDecimals(0);
        ro_inpar_lisll_SpinBox->setMinimum(-1999);
        ro_inpar_lisll_SpinBox->setMaximum(9999);
        ro_inpar_lisll_SpinBox->setValue(9999);

        horizontalLayout->addWidget(ro_inpar_lisll_SpinBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        ro_inpar_lishl_nameLabel = new QLabel(widget);
        ro_inpar_lishl_nameLabel->setObjectName(QString::fromUtf8("ro_inpar_lishl_nameLabel"));

        horizontalLayout_2->addWidget(ro_inpar_lishl_nameLabel);

        ro_inpar_lishl_SpinBox = new QDoubleSpinBox(widget);
        ro_inpar_lishl_SpinBox->setObjectName(QString::fromUtf8("ro_inpar_lishl_SpinBox"));
        ro_inpar_lishl_SpinBox->setMinimumSize(QSize(0, 0));
        ro_inpar_lishl_SpinBox->setMaximumSize(QSize(91, 31));
        ro_inpar_lishl_SpinBox->setFont(font);
        ro_inpar_lishl_SpinBox->setDecimals(0);
        ro_inpar_lishl_SpinBox->setMinimum(-1999);
        ro_inpar_lishl_SpinBox->setMaximum(9999);
        ro_inpar_lishl_SpinBox->setValue(9999);

        horizontalLayout_2->addWidget(ro_inpar_lishl_SpinBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        ro_inpar_spll_nameLabel = new QLabel(widget);
        ro_inpar_spll_nameLabel->setObjectName(QString::fromUtf8("ro_inpar_spll_nameLabel"));

        horizontalLayout_3->addWidget(ro_inpar_spll_nameLabel);

        ro_inpar_spll_SpinBox = new QDoubleSpinBox(widget);
        ro_inpar_spll_SpinBox->setObjectName(QString::fromUtf8("ro_inpar_spll_SpinBox"));
        ro_inpar_spll_SpinBox->setMinimumSize(QSize(41, 31));
        ro_inpar_spll_SpinBox->setMaximumSize(QSize(91, 31));
        ro_inpar_spll_SpinBox->setFont(font);
        ro_inpar_spll_SpinBox->setDecimals(0);
        ro_inpar_spll_SpinBox->setMinimum(-1400);
        ro_inpar_spll_SpinBox->setMaximum(1400);
        ro_inpar_spll_SpinBox->setSingleStep(1);
        ro_inpar_spll_SpinBox->setValue(-328);

        horizontalLayout_3->addWidget(ro_inpar_spll_SpinBox);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        ro_inpar_sphl_nameLabel = new QLabel(widget);
        ro_inpar_sphl_nameLabel->setObjectName(QString::fromUtf8("ro_inpar_sphl_nameLabel"));

        horizontalLayout_4->addWidget(ro_inpar_sphl_nameLabel);

        ro_inpar_sphl_SpinBox = new QDoubleSpinBox(widget);
        ro_inpar_sphl_SpinBox->setObjectName(QString::fromUtf8("ro_inpar_sphl_SpinBox"));
        ro_inpar_sphl_SpinBox->setMinimumSize(QSize(41, 31));
        ro_inpar_sphl_SpinBox->setMaximumSize(QSize(91, 31));
        ro_inpar_sphl_SpinBox->setFont(font);
        ro_inpar_sphl_SpinBox->setDecimals(0);
        ro_inpar_sphl_SpinBox->setMinimum(-1400);
        ro_inpar_sphl_SpinBox->setMaximum(1400);
        ro_inpar_sphl_SpinBox->setSingleStep(1);
        ro_inpar_sphl_SpinBox->setValue(1400);

        horizontalLayout_4->addWidget(ro_inpar_sphl_SpinBox);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        ro_inpar_infilter_nameLabel = new QLabel(widget);
        ro_inpar_infilter_nameLabel->setObjectName(QString::fromUtf8("ro_inpar_infilter_nameLabel"));
        ro_inpar_infilter_nameLabel->setContextMenuPolicy(Qt::CustomContextMenu);

        horizontalLayout_5->addWidget(ro_inpar_infilter_nameLabel);

        ro_inpar_infilter_SpinBox = new QDoubleSpinBox(widget);
        ro_inpar_infilter_SpinBox->setObjectName(QString::fromUtf8("ro_inpar_infilter_SpinBox"));
        ro_inpar_infilter_SpinBox->setMinimumSize(QSize(81, 31));
        ro_inpar_infilter_SpinBox->setMaximumSize(QSize(81, 31));
        ro_inpar_infilter_SpinBox->setFont(font);
        ro_inpar_infilter_SpinBox->setDecimals(0);
        ro_inpar_infilter_SpinBox->setMinimum(1);
        ro_inpar_infilter_SpinBox->setMaximum(100);
        ro_inpar_infilter_SpinBox->setValue(5);

        horizontalLayout_5->addWidget(ro_inpar_infilter_SpinBox);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(inputParamClass);
        QObject::connect(closeButton, SIGNAL(clicked()), inputParamClass, SLOT(close()));
        QObject::connect(ro_inputPar_getCurrentButton, SIGNAL(clicked()), inputParamClass, SLOT(ReadROinputparameters()));
        QObject::connect(writeDataButton, SIGNAL(clicked()), inputParamClass, SLOT(WriteDataButton()));

        QMetaObject::connectSlotsByName(inputParamClass);
    } // setupUi

    void retranslateUi(QDialog *inputParamClass)
    {
        inputParamClass->setWindowTitle(QApplication::translate("inputParamClass", "inputParam", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("inputParamClass", "CLOSE", 0, QApplication::UnicodeUTF8));
        ro_inputPar_getCurrentButton->setText(QApplication::translate("inputParamClass", "GET\n"
"CURRENT", 0, QApplication::UnicodeUTF8));
        writeDataButton->setText(QApplication::translate("inputParamClass", "Write", 0, QApplication::UnicodeUTF8));
        ro_inparm_type_nameLabel->setText(QApplication::translate("inputParamClass", "Input Type", 0, QApplication::UnicodeUTF8));
        ro_inpar_indeb_nameLabel->setText(QApplication::translate("inputParamClass", "Input Debounce", 0, QApplication::UnicodeUTF8));
        ro_inpar_inbias_nameLabel->setText(QApplication::translate("inputParamClass", "Input Bias", 0, QApplication::UnicodeUTF8));
        ro_inpar_lisll_nameLabel->setText(QApplication::translate("inputParamClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Linear Input Scaling Lower Limit</p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        ro_inpar_lishl_nameLabel->setText(QApplication::translate("inputParamClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Linear Input Scaling High Limit</p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        ro_inpar_spll_nameLabel->setText(QApplication::translate("inputParamClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Setpoint Lower Limit</p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        ro_inpar_sphl_nameLabel->setText(QApplication::translate("inputParamClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Setpoint High Limit</p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        ro_inpar_infilter_nameLabel->setText(QApplication::translate("inputParamClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Input Filter</p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class inputParamClass: public Ui_inputParamClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTPARAM_H
