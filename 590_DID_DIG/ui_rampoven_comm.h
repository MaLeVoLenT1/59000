/********************************************************************************
** Form generated from reading UI file 'rampoven_comm.ui'
**
** Created: Wed Jan 15 09:50:58 2020
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RAMPOVEN_COMM_H
#define UI_RAMPOVEN_COMM_H

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

class Ui_Rampoven_commClass
{
public:
    QPushButton *closeButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *ro_comm_nameLabel;
    QDoubleSpinBox *ro_comm_protocol_SpinBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *ro_id_num_nameLabel;
    QDoubleSpinBox *ro_comm_ID_SpinBox;
    QVBoxLayout *verticalLayout_3;
    QLabel *ro_comm_baud_nameLabel;
    QDoubleSpinBox *ro_comm_baud_SpinBox;
    QVBoxLayout *verticalLayout_4;
    QLabel *ro_comm_parity_nameLabel;
    QDoubleSpinBox *ro_comm_parity_SpinBox;
    QVBoxLayout *verticalLayout_5;
    QLabel *ro_comm_regordering_nameLabel;
    QDoubleSpinBox *ro_comm_regordering_SpinBox;
    QPushButton *ro_comm_getCurrentButton;

    void setupUi(QDialog *Rampoven_commClass)
    {
        if (Rampoven_commClass->objectName().isEmpty())
            Rampoven_commClass->setObjectName(QString::fromUtf8("Rampoven_commClass"));
        Rampoven_commClass->resize(461, 210);
        closeButton = new QPushButton(Rampoven_commClass);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(340, 160, 111, 41));
        closeButton->setMinimumSize(QSize(111, 41));
        closeButton->setMaximumSize(QSize(111, 41));
        layoutWidget = new QWidget(Rampoven_commClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(14, 12, 441, 81));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ro_comm_nameLabel = new QLabel(layoutWidget);
        ro_comm_nameLabel->setObjectName(QString::fromUtf8("ro_comm_nameLabel"));

        verticalLayout->addWidget(ro_comm_nameLabel);

        ro_comm_protocol_SpinBox = new QDoubleSpinBox(layoutWidget);
        ro_comm_protocol_SpinBox->setObjectName(QString::fromUtf8("ro_comm_protocol_SpinBox"));
        ro_comm_protocol_SpinBox->setMinimumSize(QSize(41, 31));
        ro_comm_protocol_SpinBox->setMaximumSize(QSize(41, 31));
        QFont font;
        font.setPointSize(18);
        ro_comm_protocol_SpinBox->setFont(font);
        ro_comm_protocol_SpinBox->setDecimals(0);
        ro_comm_protocol_SpinBox->setMaximum(5);
        ro_comm_protocol_SpinBox->setSingleStep(1);
        ro_comm_protocol_SpinBox->setValue(4);

        verticalLayout->addWidget(ro_comm_protocol_SpinBox);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        ro_id_num_nameLabel = new QLabel(layoutWidget);
        ro_id_num_nameLabel->setObjectName(QString::fromUtf8("ro_id_num_nameLabel"));
        ro_id_num_nameLabel->setContextMenuPolicy(Qt::CustomContextMenu);

        verticalLayout_2->addWidget(ro_id_num_nameLabel);

        ro_comm_ID_SpinBox = new QDoubleSpinBox(layoutWidget);
        ro_comm_ID_SpinBox->setObjectName(QString::fromUtf8("ro_comm_ID_SpinBox"));
        ro_comm_ID_SpinBox->setMinimumSize(QSize(81, 31));
        ro_comm_ID_SpinBox->setMaximumSize(QSize(81, 31));
        ro_comm_ID_SpinBox->setFont(font);
        ro_comm_ID_SpinBox->setDecimals(0);
        ro_comm_ID_SpinBox->setMaximum(247);
        ro_comm_ID_SpinBox->setValue(1);

        verticalLayout_2->addWidget(ro_comm_ID_SpinBox);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        ro_comm_baud_nameLabel = new QLabel(layoutWidget);
        ro_comm_baud_nameLabel->setObjectName(QString::fromUtf8("ro_comm_baud_nameLabel"));

        verticalLayout_3->addWidget(ro_comm_baud_nameLabel);

        ro_comm_baud_SpinBox = new QDoubleSpinBox(layoutWidget);
        ro_comm_baud_SpinBox->setObjectName(QString::fromUtf8("ro_comm_baud_SpinBox"));
        ro_comm_baud_SpinBox->setMinimumSize(QSize(41, 31));
        ro_comm_baud_SpinBox->setMaximumSize(QSize(41, 31));
        ro_comm_baud_SpinBox->setFont(font);
        ro_comm_baud_SpinBox->setDecimals(0);
        ro_comm_baud_SpinBox->setMinimum(1);
        ro_comm_baud_SpinBox->setMaximum(7);
        ro_comm_baud_SpinBox->setValue(7);

        verticalLayout_3->addWidget(ro_comm_baud_SpinBox);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        ro_comm_parity_nameLabel = new QLabel(layoutWidget);
        ro_comm_parity_nameLabel->setObjectName(QString::fromUtf8("ro_comm_parity_nameLabel"));

        verticalLayout_4->addWidget(ro_comm_parity_nameLabel);

        ro_comm_parity_SpinBox = new QDoubleSpinBox(layoutWidget);
        ro_comm_parity_SpinBox->setObjectName(QString::fromUtf8("ro_comm_parity_SpinBox"));
        ro_comm_parity_SpinBox->setMinimumSize(QSize(41, 31));
        ro_comm_parity_SpinBox->setMaximumSize(QSize(41, 31));
        ro_comm_parity_SpinBox->setFont(font);
        ro_comm_parity_SpinBox->setDecimals(0);
        ro_comm_parity_SpinBox->setMinimum(0);
        ro_comm_parity_SpinBox->setMaximum(2);
        ro_comm_parity_SpinBox->setValue(0);

        verticalLayout_4->addWidget(ro_comm_parity_SpinBox);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        ro_comm_regordering_nameLabel = new QLabel(layoutWidget);
        ro_comm_regordering_nameLabel->setObjectName(QString::fromUtf8("ro_comm_regordering_nameLabel"));

        verticalLayout_5->addWidget(ro_comm_regordering_nameLabel);

        ro_comm_regordering_SpinBox = new QDoubleSpinBox(layoutWidget);
        ro_comm_regordering_SpinBox->setObjectName(QString::fromUtf8("ro_comm_regordering_SpinBox"));
        ro_comm_regordering_SpinBox->setMinimumSize(QSize(41, 31));
        ro_comm_regordering_SpinBox->setMaximumSize(QSize(41, 31));
        ro_comm_regordering_SpinBox->setFont(font);
        ro_comm_regordering_SpinBox->setCursor(QCursor(Qt::ArrowCursor));
        ro_comm_regordering_SpinBox->setDecimals(0);
        ro_comm_regordering_SpinBox->setMaximum(1);
        ro_comm_regordering_SpinBox->setValue(1);

        verticalLayout_5->addWidget(ro_comm_regordering_SpinBox);


        horizontalLayout->addLayout(verticalLayout_5);

        ro_comm_getCurrentButton = new QPushButton(Rampoven_commClass);
        ro_comm_getCurrentButton->setObjectName(QString::fromUtf8("ro_comm_getCurrentButton"));
        ro_comm_getCurrentButton->setGeometry(QRect(10, 130, 81, 71));
        ro_comm_getCurrentButton->setMinimumSize(QSize(81, 71));
        ro_comm_getCurrentButton->setMaximumSize(QSize(81, 71));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 255, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(127, 255, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(63, 255, 63, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(0, 127, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(0, 170, 0, 255));
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
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
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
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
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
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        ro_comm_getCurrentButton->setPalette(palette);

        retranslateUi(Rampoven_commClass);
        QObject::connect(closeButton, SIGNAL(clicked()), Rampoven_commClass, SLOT(close()));
        QObject::connect(Rampoven_commClass, SIGNAL(accepted()), Rampoven_commClass, SLOT(ReadROCommParameters()));
        QObject::connect(ro_comm_getCurrentButton, SIGNAL(clicked()), Rampoven_commClass, SLOT(ReadROCommParameters()));

        QMetaObject::connectSlotsByName(Rampoven_commClass);
    } // setupUi

    void retranslateUi(QDialog *Rampoven_commClass)
    {
        Rampoven_commClass->setWindowTitle(QApplication::translate("Rampoven_commClass", "Rampoven_comm", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("Rampoven_commClass", "CLOSE", 0, QApplication::UnicodeUTF8));
        ro_comm_nameLabel->setText(QApplication::translate("Rampoven_commClass", "Protocol", 0, QApplication::UnicodeUTF8));
        ro_id_num_nameLabel->setText(QApplication::translate("Rampoven_commClass", "ID Number", 0, QApplication::UnicodeUTF8));
        ro_comm_baud_nameLabel->setText(QApplication::translate("Rampoven_commClass", "BAUD", 0, QApplication::UnicodeUTF8));
        ro_comm_parity_nameLabel->setText(QApplication::translate("Rampoven_commClass", "Parity", 0, QApplication::UnicodeUTF8));
        ro_comm_regordering_nameLabel->setText(QApplication::translate("Rampoven_commClass", "IEEE Reg Ordering", 0, QApplication::UnicodeUTF8));
        ro_comm_getCurrentButton->setText(QApplication::translate("Rampoven_commClass", "GET\n"
"CURRENT", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Rampoven_commClass: public Ui_Rampoven_commClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAMPOVEN_COMM_H
