/********************************************************************************
** Form generated from reading UI file 'configuredialog.ui'
**
** Created: Wed Jan 8 09:17:35 2020
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGUREDIALOG_H
#define UI_CONFIGUREDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConfigureDialog
{
public:
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QListView *partListView;
    QVBoxLayout *verticalLayout;
    QPushButton *addDetector;
    QPushButton *addInlet;
    QPushButton *addColumn;
    QPushButton *addInjector;
    QVBoxLayout *verticalLayout_2;
    QPushButton *deleteDetector;
    QPushButton *deleteInlet;
    QPushButton *deleteColumn;
    QPushButton *deleteInjector;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *ConfigureDialog)
    {
        if (ConfigureDialog->objectName().isEmpty())
            ConfigureDialog->setObjectName(QString::fromUtf8("ConfigureDialog"));
        ConfigureDialog->resize(480, 400);
        horizontalLayout_4 = new QHBoxLayout(ConfigureDialog);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        partListView = new QListView(ConfigureDialog);
        partListView->setObjectName(QString::fromUtf8("partListView"));
        QFont font;
        font.setPointSize(18);
        partListView->setFont(font);

        horizontalLayout_3->addWidget(partListView);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        addDetector = new QPushButton(ConfigureDialog);
        addDetector->setObjectName(QString::fromUtf8("addDetector"));
        addDetector->setMinimumSize(QSize(141, 41));

        verticalLayout->addWidget(addDetector);

        addInlet = new QPushButton(ConfigureDialog);
        addInlet->setObjectName(QString::fromUtf8("addInlet"));
        addInlet->setMinimumSize(QSize(141, 41));

        verticalLayout->addWidget(addInlet);

        addColumn = new QPushButton(ConfigureDialog);
        addColumn->setObjectName(QString::fromUtf8("addColumn"));
        addColumn->setMinimumSize(QSize(141, 41));

        verticalLayout->addWidget(addColumn);

        addInjector = new QPushButton(ConfigureDialog);
        addInjector->setObjectName(QString::fromUtf8("addInjector"));
        addInjector->setMinimumSize(QSize(141, 41));

        verticalLayout->addWidget(addInjector);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        deleteDetector = new QPushButton(ConfigureDialog);
        deleteDetector->setObjectName(QString::fromUtf8("deleteDetector"));
        deleteDetector->setMinimumSize(QSize(141, 41));

        verticalLayout_2->addWidget(deleteDetector);

        deleteInlet = new QPushButton(ConfigureDialog);
        deleteInlet->setObjectName(QString::fromUtf8("deleteInlet"));
        deleteInlet->setMinimumSize(QSize(141, 41));

        verticalLayout_2->addWidget(deleteInlet);

        deleteColumn = new QPushButton(ConfigureDialog);
        deleteColumn->setObjectName(QString::fromUtf8("deleteColumn"));
        deleteColumn->setMinimumSize(QSize(141, 41));

        verticalLayout_2->addWidget(deleteColumn);

        deleteInjector = new QPushButton(ConfigureDialog);
        deleteInjector->setObjectName(QString::fromUtf8("deleteInjector"));
        deleteInjector->setMinimumSize(QSize(141, 41));

        verticalLayout_2->addWidget(deleteInjector);


        horizontalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(298, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        okButton = new QPushButton(ConfigureDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout->addWidget(okButton);

        cancelButton = new QPushButton(ConfigureDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout->addWidget(cancelButton);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(ConfigureDialog);

        QMetaObject::connectSlotsByName(ConfigureDialog);
    } // setupUi

    void retranslateUi(QDialog *ConfigureDialog)
    {
        ConfigureDialog->setWindowTitle(QApplication::translate("ConfigureDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        addDetector->setText(QApplication::translate("ConfigureDialog", "ADD Detector", 0, QApplication::UnicodeUTF8));
        addInlet->setText(QApplication::translate("ConfigureDialog", "ADD Inlet", 0, QApplication::UnicodeUTF8));
        addColumn->setText(QApplication::translate("ConfigureDialog", "ADD Column", 0, QApplication::UnicodeUTF8));
        addInjector->setText(QApplication::translate("ConfigureDialog", "ADD Injector", 0, QApplication::UnicodeUTF8));
        deleteDetector->setText(QApplication::translate("ConfigureDialog", "DELETE Detector", 0, QApplication::UnicodeUTF8));
        deleteInlet->setText(QApplication::translate("ConfigureDialog", "DELETE Inlet", 0, QApplication::UnicodeUTF8));
        deleteColumn->setText(QApplication::translate("ConfigureDialog", "DELETE Column", 0, QApplication::UnicodeUTF8));
        deleteInjector->setText(QApplication::translate("ConfigureDialog", "DELETE Injector", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("ConfigureDialog", "&OK", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("ConfigureDialog", "&Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ConfigureDialog: public Ui_ConfigureDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGUREDIALOG_H
