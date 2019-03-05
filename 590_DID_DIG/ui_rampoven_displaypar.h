/********************************************************************************
** Form generated from reading UI file 'rampoven_displaypar.ui'
**
** Created: Tue Mar 5 14:05:07 2019
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RAMPOVEN_DISPLAYPAR_H
#define UI_RAMPOVEN_DISPLAYPAR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_rampoven_displayparClass
{
public:
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout;
    QLabel *ro_Disply_par_Sdb_nameLabel;
    QDoubleSpinBox *ro_Disply_par_Sdb_SpinBox;
    QGridLayout *gridLayout_3;
    QLabel *ro_Disply_par_Um_nameLabel;
    QDoubleSpinBox *ro_Disply_par_Um_SpinBox;
    QGridLayout *gridLayout_2;
    QLabel *ro_Disply_par_MaxDp_nameLabel;
    QDoubleSpinBox *ro_Disply_par_MaxDp_SpinBox;
    QGridLayout *gridLayout_4;
    QLabel *ro_Disply_par_Df_nameLabel;
    QDoubleSpinBox *ro_Disply_par_Df_SpinBox;
    QGridLayout *gridLayout_5;
    QLabel *ro_Disply_par_dp_nameLabel;
    QDoubleSpinBox *ro_Disply_par_dp_SpinBox;
    QPushButton *ro_displayPar_writeCurrentButton;
    QPushButton *ro_displayPar_getCurrentButton;
    QPushButton *closeButton;

    void setupUi(QDialog *rampoven_displayparClass)
    {
        if (rampoven_displayparClass->objectName().isEmpty())
            rampoven_displayparClass->setObjectName(QString::fromUtf8("rampoven_displayparClass"));
        rampoven_displayparClass->resize(453, 363);
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
        rampoven_displayparClass->setPalette(palette);
        gridLayout_6 = new QGridLayout(rampoven_displayparClass);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        ro_Disply_par_Sdb_nameLabel = new QLabel(rampoven_displayparClass);
        ro_Disply_par_Sdb_nameLabel->setObjectName(QString::fromUtf8("ro_Disply_par_Sdb_nameLabel"));

        gridLayout->addWidget(ro_Disply_par_Sdb_nameLabel, 0, 0, 1, 1);

        ro_Disply_par_Sdb_SpinBox = new QDoubleSpinBox(rampoven_displayparClass);
        ro_Disply_par_Sdb_SpinBox->setObjectName(QString::fromUtf8("ro_Disply_par_Sdb_SpinBox"));
        ro_Disply_par_Sdb_SpinBox->setMinimumSize(QSize(91, 31));
        ro_Disply_par_Sdb_SpinBox->setMaximumSize(QSize(91, 31));
        QFont font;
        font.setPointSize(18);
        ro_Disply_par_Sdb_SpinBox->setFont(font);
        ro_Disply_par_Sdb_SpinBox->setDecimals(0);
        ro_Disply_par_Sdb_SpinBox->setMinimum(9);
        ro_Disply_par_Sdb_SpinBox->setMaximum(9999);
        ro_Disply_par_Sdb_SpinBox->setValue(9);

        gridLayout->addWidget(ro_Disply_par_Sdb_SpinBox, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout, 0, 1, 1, 2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        ro_Disply_par_Um_nameLabel = new QLabel(rampoven_displayparClass);
        ro_Disply_par_Um_nameLabel->setObjectName(QString::fromUtf8("ro_Disply_par_Um_nameLabel"));

        gridLayout_3->addWidget(ro_Disply_par_Um_nameLabel, 0, 0, 1, 1);

        ro_Disply_par_Um_SpinBox = new QDoubleSpinBox(rampoven_displayparClass);
        ro_Disply_par_Um_SpinBox->setObjectName(QString::fromUtf8("ro_Disply_par_Um_SpinBox"));
        ro_Disply_par_Um_SpinBox->setMinimumSize(QSize(81, 31));
        ro_Disply_par_Um_SpinBox->setMaximumSize(QSize(81, 31));
        ro_Disply_par_Um_SpinBox->setFont(font);
        ro_Disply_par_Um_SpinBox->setDecimals(0);
        ro_Disply_par_Um_SpinBox->setMinimum(1);
        ro_Disply_par_Um_SpinBox->setMaximum(3);
        ro_Disply_par_Um_SpinBox->setValue(2);

        gridLayout_3->addWidget(ro_Disply_par_Um_SpinBox, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_3, 1, 1, 1, 2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        ro_Disply_par_MaxDp_nameLabel = new QLabel(rampoven_displayparClass);
        ro_Disply_par_MaxDp_nameLabel->setObjectName(QString::fromUtf8("ro_Disply_par_MaxDp_nameLabel"));

        gridLayout_2->addWidget(ro_Disply_par_MaxDp_nameLabel, 0, 0, 1, 1);

        ro_Disply_par_MaxDp_SpinBox = new QDoubleSpinBox(rampoven_displayparClass);
        ro_Disply_par_MaxDp_SpinBox->setObjectName(QString::fromUtf8("ro_Disply_par_MaxDp_SpinBox"));
        ro_Disply_par_MaxDp_SpinBox->setMinimumSize(QSize(61, 31));
        ro_Disply_par_MaxDp_SpinBox->setMaximumSize(QSize(61, 31));
        ro_Disply_par_MaxDp_SpinBox->setFont(font);
        ro_Disply_par_MaxDp_SpinBox->setDecimals(0);
        ro_Disply_par_MaxDp_SpinBox->setMaximum(3);
        ro_Disply_par_MaxDp_SpinBox->setValue(0);

        gridLayout_2->addWidget(ro_Disply_par_MaxDp_SpinBox, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_2, 2, 1, 1, 2);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        ro_Disply_par_Df_nameLabel = new QLabel(rampoven_displayparClass);
        ro_Disply_par_Df_nameLabel->setObjectName(QString::fromUtf8("ro_Disply_par_Df_nameLabel"));

        gridLayout_4->addWidget(ro_Disply_par_Df_nameLabel, 0, 0, 1, 1);

        ro_Disply_par_Df_SpinBox = new QDoubleSpinBox(rampoven_displayparClass);
        ro_Disply_par_Df_SpinBox->setObjectName(QString::fromUtf8("ro_Disply_par_Df_SpinBox"));
        ro_Disply_par_Df_SpinBox->setMinimumSize(QSize(81, 31));
        ro_Disply_par_Df_SpinBox->setMaximumSize(QSize(81, 31));
        ro_Disply_par_Df_SpinBox->setFont(font);
        ro_Disply_par_Df_SpinBox->setDecimals(0);
        ro_Disply_par_Df_SpinBox->setMinimum(1);
        ro_Disply_par_Df_SpinBox->setMaximum(100);
        ro_Disply_par_Df_SpinBox->setValue(1);

        gridLayout_4->addWidget(ro_Disply_par_Df_SpinBox, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_4, 3, 2, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        ro_Disply_par_dp_nameLabel = new QLabel(rampoven_displayparClass);
        ro_Disply_par_dp_nameLabel->setObjectName(QString::fromUtf8("ro_Disply_par_dp_nameLabel"));

        gridLayout_5->addWidget(ro_Disply_par_dp_nameLabel, 0, 0, 1, 1);

        ro_Disply_par_dp_SpinBox = new QDoubleSpinBox(rampoven_displayparClass);
        ro_Disply_par_dp_SpinBox->setObjectName(QString::fromUtf8("ro_Disply_par_dp_SpinBox"));
        ro_Disply_par_dp_SpinBox->setMinimumSize(QSize(61, 31));
        ro_Disply_par_dp_SpinBox->setMaximumSize(QSize(71, 31));
        ro_Disply_par_dp_SpinBox->setFont(font);
        ro_Disply_par_dp_SpinBox->setDecimals(0);
        ro_Disply_par_dp_SpinBox->setMaximum(1);
        ro_Disply_par_dp_SpinBox->setValue(0);

        gridLayout_5->addWidget(ro_Disply_par_dp_SpinBox, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 4, 1, 1, 2);

        ro_displayPar_writeCurrentButton = new QPushButton(rampoven_displayparClass);
        ro_displayPar_writeCurrentButton->setObjectName(QString::fromUtf8("ro_displayPar_writeCurrentButton"));
        ro_displayPar_writeCurrentButton->setMinimumSize(QSize(81, 71));
        ro_displayPar_writeCurrentButton->setMaximumSize(QSize(81, 300));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush9(QColor(255, 255, 0, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush9);
        QBrush brush10(QColor(255, 255, 127, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush10);
        QBrush brush11(QColor(255, 255, 63, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        QBrush brush12(QColor(127, 127, 0, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush12);
        QBrush brush13(QColor(170, 170, 0, 255));
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
        ro_displayPar_writeCurrentButton->setPalette(palette1);

        gridLayout_6->addWidget(ro_displayPar_writeCurrentButton, 5, 0, 1, 1);

        ro_displayPar_getCurrentButton = new QPushButton(rampoven_displayparClass);
        ro_displayPar_getCurrentButton->setObjectName(QString::fromUtf8("ro_displayPar_getCurrentButton"));
        ro_displayPar_getCurrentButton->setMinimumSize(QSize(81, 71));
        ro_displayPar_getCurrentButton->setMaximumSize(QSize(81, 71));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush14(QColor(0, 255, 0, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush14);
        QBrush brush15(QColor(127, 255, 127, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush15);
        QBrush brush16(QColor(63, 255, 63, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush16);
        QBrush brush17(QColor(0, 127, 0, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush17);
        QBrush brush18(QColor(0, 170, 0, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush18);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush14);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush15);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush14);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush15);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush16);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush17);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush18);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush14);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush17);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush14);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush15);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush16);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush17);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush18);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush17);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush17);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush14);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush14);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush14);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        ro_displayPar_getCurrentButton->setPalette(palette2);

        gridLayout_6->addWidget(ro_displayPar_getCurrentButton, 5, 1, 1, 1);

        closeButton = new QPushButton(rampoven_displayparClass);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setMinimumSize(QSize(111, 71));
        closeButton->setMaximumSize(QSize(111, 72));

        gridLayout_6->addWidget(closeButton, 5, 2, 1, 1);


        retranslateUi(rampoven_displayparClass);
        QObject::connect(closeButton, SIGNAL(clicked()), rampoven_displayparClass, SLOT(close()));
        QObject::connect(ro_displayPar_writeCurrentButton, SIGNAL(clicked()), rampoven_displayparClass, SLOT(ro_disPar_write_recipe()));
        QObject::connect(ro_displayPar_getCurrentButton, SIGNAL(clicked()), rampoven_displayparClass, SLOT(ro_dispPar_ReadZoneRampSoakParameters()));

        QMetaObject::connectSlotsByName(rampoven_displayparClass);
    } // setupUi

    void retranslateUi(QDialog *rampoven_displayparClass)
    {
        rampoven_displayparClass->setWindowTitle(QApplication::translate("rampoven_displayparClass", "rampoven_displaypar", 0, QApplication::UnicodeUTF8));
        ro_Disply_par_Sdb_nameLabel->setText(QApplication::translate("rampoven_displayparClass", "Setpoint Display Blanking", 0, QApplication::UnicodeUTF8));
        ro_Disply_par_Um_nameLabel->setText(QApplication::translate("rampoven_displayparClass", "Unit of Measure", 0, QApplication::UnicodeUTF8));
        ro_Disply_par_MaxDp_nameLabel->setText(QApplication::translate("rampoven_displayparClass", "Max Decimal Position", 0, QApplication::UnicodeUTF8));
        ro_Disply_par_Df_nameLabel->setText(QApplication::translate("rampoven_displayparClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Display Filter</p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        ro_Disply_par_dp_nameLabel->setText(QApplication::translate("rampoven_displayparClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Decimal Position</p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        ro_displayPar_writeCurrentButton->setText(QApplication::translate("rampoven_displayparClass", "Write\n"
"Recipe", 0, QApplication::UnicodeUTF8));
        ro_displayPar_getCurrentButton->setText(QApplication::translate("rampoven_displayparClass", "GET\n"
"CURRENT", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("rampoven_displayparClass", "CLOSE", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class rampoven_displayparClass: public Ui_rampoven_displayparClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAMPOVEN_DISPLAYPAR_H
