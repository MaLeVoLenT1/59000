/********************************************************************************
** Form generated from reading UI file 'configuredialog2.ui'
**
** Created: Wed Jan 29 12:39:03 2020
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGUREDIALOG2_H
#define UI_CONFIGUREDIALOG2_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConfigureDialog2
{
public:
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QLabel *pageLabel;
    QLabel *curPageLabel;
    QLabel *pageLabel_2;
    QLabel *totPageLabel;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *typeLabel;
    QLabel *totTypeLabel;
    QLabel *partTypeHiddenLabel;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *typeLabel_2;
    QComboBox *typeComboBox;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *heatedLabel;
    QCheckBox *heatedCheckBox;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QSpinBox *tempSlaveIDSpinBox;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_9;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *acceptConfig;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *nextButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *ConfigureDialog2)
    {
        if (ConfigureDialog2->objectName().isEmpty())
            ConfigureDialog2->setObjectName(QString::fromUtf8("ConfigureDialog2"));
        ConfigureDialog2->resize(480, 400);
        horizontalLayout_11 = new QHBoxLayout(ConfigureDialog2);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(ConfigureDialog2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(268, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pageLabel = new QLabel(ConfigureDialog2);
        pageLabel->setObjectName(QString::fromUtf8("pageLabel"));

        horizontalLayout->addWidget(pageLabel);

        curPageLabel = new QLabel(ConfigureDialog2);
        curPageLabel->setObjectName(QString::fromUtf8("curPageLabel"));

        horizontalLayout->addWidget(curPageLabel);

        pageLabel_2 = new QLabel(ConfigureDialog2);
        pageLabel_2->setObjectName(QString::fromUtf8("pageLabel_2"));

        horizontalLayout->addWidget(pageLabel_2);

        totPageLabel = new QLabel(ConfigureDialog2);
        totPageLabel->setObjectName(QString::fromUtf8("totPageLabel"));

        horizontalLayout->addWidget(totPageLabel);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_3 = new QSpacerItem(198, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        typeLabel = new QLabel(ConfigureDialog2);
        typeLabel->setObjectName(QString::fromUtf8("typeLabel"));

        horizontalLayout_2->addWidget(typeLabel);

        totTypeLabel = new QLabel(ConfigureDialog2);
        totTypeLabel->setObjectName(QString::fromUtf8("totTypeLabel"));

        horizontalLayout_2->addWidget(totTypeLabel);

        partTypeHiddenLabel = new QLabel(ConfigureDialog2);
        partTypeHiddenLabel->setObjectName(QString::fromUtf8("partTypeHiddenLabel"));

        horizontalLayout_2->addWidget(partTypeHiddenLabel);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        horizontalSpacer_4 = new QSpacerItem(198, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(ConfigureDialog2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        lineEdit = new QLineEdit(ConfigureDialog2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_3->addWidget(lineEdit);

        horizontalSpacer_2 = new QSpacerItem(298, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        typeLabel_2 = new QLabel(ConfigureDialog2);
        typeLabel_2->setObjectName(QString::fromUtf8("typeLabel_2"));

        horizontalLayout_5->addWidget(typeLabel_2);

        typeComboBox = new QComboBox(ConfigureDialog2);
        typeComboBox->setObjectName(QString::fromUtf8("typeComboBox"));

        horizontalLayout_5->addWidget(typeComboBox);

        horizontalSpacer_10 = new QSpacerItem(178, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);

        label_7 = new QLabel(ConfigureDialog2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_5->addWidget(label_7);

        horizontalSpacer_5 = new QSpacerItem(108, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        heatedLabel = new QLabel(ConfigureDialog2);
        heatedLabel->setObjectName(QString::fromUtf8("heatedLabel"));

        horizontalLayout_6->addWidget(heatedLabel);

        heatedCheckBox = new QCheckBox(ConfigureDialog2);
        heatedCheckBox->setObjectName(QString::fromUtf8("heatedCheckBox"));

        horizontalLayout_6->addWidget(heatedCheckBox);

        horizontalSpacer_6 = new QSpacerItem(428, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_4 = new QLabel(ConfigureDialog2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_7->addWidget(label_4);

        tempSlaveIDSpinBox = new QSpinBox(ConfigureDialog2);
        tempSlaveIDSpinBox->setObjectName(QString::fromUtf8("tempSlaveIDSpinBox"));
        tempSlaveIDSpinBox->setMinimum(1);
        tempSlaveIDSpinBox->setMaximum(247);

        horizontalLayout_7->addWidget(tempSlaveIDSpinBox);

        horizontalSpacer_7 = new QSpacerItem(358, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_9 = new QSpacerItem(338, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_9);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_8 = new QSpacerItem(108, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_8);

        acceptConfig = new QPushButton(ConfigureDialog2);
        acceptConfig->setObjectName(QString::fromUtf8("acceptConfig"));
        acceptConfig->setMinimumSize(QSize(111, 41));
        acceptConfig->setMaximumSize(QSize(111, 41));

        horizontalLayout_9->addWidget(acceptConfig);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        nextButton = new QPushButton(ConfigureDialog2);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));
        nextButton->setMinimumSize(QSize(111, 41));
        nextButton->setMaximumSize(QSize(111, 41));

        horizontalLayout_8->addWidget(nextButton);

        cancelButton = new QPushButton(ConfigureDialog2);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setMinimumSize(QSize(111, 41));
        cancelButton->setMaximumSize(QSize(111, 41));

        horizontalLayout_8->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout_8);


        horizontalLayout_10->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_10);


        horizontalLayout_11->addLayout(verticalLayout_2);

#ifndef QT_NO_SHORTCUT
        label_4->setBuddy(tempSlaveIDSpinBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(lineEdit, typeComboBox);
        QWidget::setTabOrder(typeComboBox, heatedCheckBox);
        QWidget::setTabOrder(heatedCheckBox, tempSlaveIDSpinBox);
        QWidget::setTabOrder(tempSlaveIDSpinBox, nextButton);
        QWidget::setTabOrder(nextButton, acceptConfig);
        QWidget::setTabOrder(acceptConfig, cancelButton);

        retranslateUi(ConfigureDialog2);

        QMetaObject::connectSlotsByName(ConfigureDialog2);
    } // setupUi

    void retranslateUi(QDialog *ConfigureDialog2)
    {
        ConfigureDialog2->setWindowTitle(QApplication::translate("ConfigureDialog2", "Dialog", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ConfigureDialog2", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:600; text-decoration: underline;\">Configuration</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pageLabel->setText(QApplication::translate("ConfigureDialog2", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:600;\">Page</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        curPageLabel->setText(QApplication::translate("ConfigureDialog2", "__", 0, QApplication::UnicodeUTF8));
        pageLabel_2->setText(QApplication::translate("ConfigureDialog2", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:600;\">of</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        totPageLabel->setText(QApplication::translate("ConfigureDialog2", "__", 0, QApplication::UnicodeUTF8));
        typeLabel->setText(QApplication::translate("ConfigureDialog2", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-style:italic; text-decoration: underline;\">Part Type</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        totTypeLabel->setText(QApplication::translate("ConfigureDialog2", "(__)", 0, QApplication::UnicodeUTF8));
        partTypeHiddenLabel->setText(QApplication::translate("ConfigureDialog2", "Part Type", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ConfigureDialog2", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Enter a &amp;Name:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        typeLabel_2->setText(QApplication::translate("ConfigureDialog2", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Type:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("ConfigureDialog2", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Pressure Controls:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        heatedLabel->setText(QApplication::translate("ConfigureDialog2", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Heated Zone:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        heatedCheckBox->setText(QApplication::translate("ConfigureDialog2", "&Y/N?", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ConfigureDialog2", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Temp Slave &amp;ID #:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        acceptConfig->setText(QApplication::translate("ConfigureDialog2", "ACCEPT\n"
"Configuration", 0, QApplication::UnicodeUTF8));
        nextButton->setText(QApplication::translate("ConfigureDialog2", "NEXT Page -->", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("ConfigureDialog2", "Cancel\n"
"Configuration", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ConfigureDialog2: public Ui_ConfigureDialog2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGUREDIALOG2_H
