/********************************************************************************
** Form generated from reading UI file 'rampoven.ui'
**
** Created: Fri Dec 13 10:48:14 2013
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RAMPOVEN_H
#define UI_RAMPOVEN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RampOvenClass
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_14;
    QLabel *rampNumbernameLabel;
    QLabel *numbernameLabel;
    QLabel *numbernameLabel_2;
    QLabel *numbernameLabel_3;
    QLabel *numbernameLabel_4;
    QLabel *numbernameLabel_5;
    QLabel *numbernameLabel_6;
    QLabel *numbernameLabel_7;
    QLabel *numbernameLabel_8;
    QVBoxLayout *verticalLayout;
    QLabel *rampTimenameLabel;
    QDoubleSpinBox *rampTime1SpinBox;
    QDoubleSpinBox *rampTime2SpinBox;
    QDoubleSpinBox *rampTime3SpinBox;
    QDoubleSpinBox *rampTime4SpinBox;
    QDoubleSpinBox *rampTime5SpinBox;
    QDoubleSpinBox *rampTime6SpinBox;
    QDoubleSpinBox *rampTime7SpinBox;
    QDoubleSpinBox *rampTime8SpinBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *rampEventnameLabel;
    QDoubleSpinBox *ovenSetRampE1SpinBox;
    QDoubleSpinBox *ovenSetRampE2SpinBox;
    QDoubleSpinBox *ovenSetRampE3SpinBox;
    QDoubleSpinBox *ovenSetRampE4SpinBox;
    QDoubleSpinBox *ovenSetRampE5SpinBox;
    QDoubleSpinBox *ovenSetRampE6SpinBox;
    QDoubleSpinBox *ovenSetRampE7SpinBox;
    QDoubleSpinBox *ovenSetRampE8SpinBox;
    QVBoxLayout *verticalLayout_3;
    QLabel *soakLevelnameLabel;
    QDoubleSpinBox *ovenSetSoakL1SpinBox;
    QDoubleSpinBox *ovenSetSoakL2SpinBox;
    QDoubleSpinBox *ovenSetSoakL3SpinBox;
    QDoubleSpinBox *ovenSetSoakL4SpinBox;
    QDoubleSpinBox *ovenSetSoakL5SpinBox;
    QDoubleSpinBox *ovenSeSoakL6SpinBox;
    QDoubleSpinBox *ovenSetSoakL7SpinBox;
    QDoubleSpinBox *ovenSetSoakL8SpinBox;
    QVBoxLayout *verticalLayout_4;
    QLabel *soakTimenameLabel;
    QDoubleSpinBox *ovenSetSoakT1SpinBox;
    QDoubleSpinBox *ovenSetSoakT2SpinBox;
    QDoubleSpinBox *ovenSetSoakT3SpinBox;
    QDoubleSpinBox *ovenSetSoakT4SpinBox;
    QDoubleSpinBox *ovenSetSoakT5SpinBox;
    QDoubleSpinBox *ovenSetSoakT6SpinBox;
    QDoubleSpinBox *ovenSetSoakT7SpinBox;
    QDoubleSpinBox *ovenSetSoakT8SpinBox;
    QVBoxLayout *verticalLayout_5;
    QLabel *soakEventnameLabel;
    QDoubleSpinBox *ovenSetSoakE1SpinBox;
    QDoubleSpinBox *ovenSetSoakE2SpinBox;
    QDoubleSpinBox *ovenSetSoakE3SpinBox;
    QDoubleSpinBox *ovenSetSoakE4SpinBox;
    QDoubleSpinBox *ovenSetSoakE5SpinBox;
    QDoubleSpinBox *ovenSetSoakE6SpinBox;
    QDoubleSpinBox *ovenSetSoakE7SpinBox;
    QDoubleSpinBox *ovenSetSoakE8SpinBox;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_6;
    QLabel *recycleNumberknameLabel;
    QDoubleSpinBox *recycleNumberSpinBox;
    QVBoxLayout *verticalLayout_7;
    QLabel *terminationStatenameLabel;
    QDoubleSpinBox *terminationStateSpinBox;
    QVBoxLayout *verticalLayout_8;
    QLabel *recipeOptionnameLabel;
    QDoubleSpinBox *RecipeOptionSpinBox_2;
    QVBoxLayout *verticalLayout_9;
    QLabel *singleStepTimenameLabel;
    QDoubleSpinBox *singleStepRampTimeSpinBox;
    QVBoxLayout *verticalLayout_10;
    QLabel *holdBacknameLabel;
    QDoubleSpinBox *holdBackSpinBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_11;
    QPushButton *commParametersButton;
    QPushButton *zoneOutputButton;
    QPushButton *zoneAutotuneButton;
    QPushButton *boardSecurityButton;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_12;
    QPushButton *zoneInputParametersButton;
    QPushButton *zoneControlButton;
    QPushButton *zoneSupervisorButton;
    QPushButton *zoneProcessValueButton;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_13;
    QPushButton *zoneDisplayButton;
    QPushButton *zoneAlarmButton;
    QPushButton *zoneCalibrationButton;
    QPushButton *zoneApplyButton;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *resumeFromPowerFailurenameLabel;
    QCheckBox *resumepowerfailureCheckBox;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *closeButton;

    void setupUi(QWidget *RampOvenClass)
    {
        if (RampOvenClass->objectName().isEmpty())
            RampOvenClass->setObjectName(QString::fromUtf8("RampOvenClass"));
        RampOvenClass->setWindowModality(Qt::NonModal);
        RampOvenClass->resize(480, 800);
        RampOvenClass->setMouseTracking(false);
        RampOvenClass->setAcceptDrops(false);
        gridLayout = new QGridLayout(RampOvenClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        rampNumbernameLabel = new QLabel(RampOvenClass);
        rampNumbernameLabel->setObjectName(QString::fromUtf8("rampNumbernameLabel"));

        verticalLayout_14->addWidget(rampNumbernameLabel);

        numbernameLabel = new QLabel(RampOvenClass);
        numbernameLabel->setObjectName(QString::fromUtf8("numbernameLabel"));

        verticalLayout_14->addWidget(numbernameLabel);

        numbernameLabel_2 = new QLabel(RampOvenClass);
        numbernameLabel_2->setObjectName(QString::fromUtf8("numbernameLabel_2"));

        verticalLayout_14->addWidget(numbernameLabel_2);

        numbernameLabel_3 = new QLabel(RampOvenClass);
        numbernameLabel_3->setObjectName(QString::fromUtf8("numbernameLabel_3"));

        verticalLayout_14->addWidget(numbernameLabel_3);

        numbernameLabel_4 = new QLabel(RampOvenClass);
        numbernameLabel_4->setObjectName(QString::fromUtf8("numbernameLabel_4"));

        verticalLayout_14->addWidget(numbernameLabel_4);

        numbernameLabel_5 = new QLabel(RampOvenClass);
        numbernameLabel_5->setObjectName(QString::fromUtf8("numbernameLabel_5"));

        verticalLayout_14->addWidget(numbernameLabel_5);

        numbernameLabel_6 = new QLabel(RampOvenClass);
        numbernameLabel_6->setObjectName(QString::fromUtf8("numbernameLabel_6"));

        verticalLayout_14->addWidget(numbernameLabel_6);

        numbernameLabel_7 = new QLabel(RampOvenClass);
        numbernameLabel_7->setObjectName(QString::fromUtf8("numbernameLabel_7"));

        verticalLayout_14->addWidget(numbernameLabel_7);

        numbernameLabel_8 = new QLabel(RampOvenClass);
        numbernameLabel_8->setObjectName(QString::fromUtf8("numbernameLabel_8"));

        verticalLayout_14->addWidget(numbernameLabel_8);


        horizontalLayout_3->addLayout(verticalLayout_14);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        rampTimenameLabel = new QLabel(RampOvenClass);
        rampTimenameLabel->setObjectName(QString::fromUtf8("rampTimenameLabel"));

        verticalLayout->addWidget(rampTimenameLabel);

        rampTime1SpinBox = new QDoubleSpinBox(RampOvenClass);
        rampTime1SpinBox->setObjectName(QString::fromUtf8("rampTime1SpinBox"));
        rampTime1SpinBox->setMinimumSize(QSize(91, 31));
        rampTime1SpinBox->setMaximumSize(QSize(91, 31));
        QFont font;
        font.setPointSize(18);
        rampTime1SpinBox->setFont(font);
        rampTime1SpinBox->setDecimals(0);
        rampTime1SpinBox->setMaximum(9999);
        rampTime1SpinBox->setValue(0);

        verticalLayout->addWidget(rampTime1SpinBox);

        rampTime2SpinBox = new QDoubleSpinBox(RampOvenClass);
        rampTime2SpinBox->setObjectName(QString::fromUtf8("rampTime2SpinBox"));
        rampTime2SpinBox->setMinimumSize(QSize(91, 31));
        rampTime2SpinBox->setMaximumSize(QSize(91, 31));
        rampTime2SpinBox->setFont(font);
        rampTime2SpinBox->setDecimals(0);
        rampTime2SpinBox->setMaximum(9999);

        verticalLayout->addWidget(rampTime2SpinBox);

        rampTime3SpinBox = new QDoubleSpinBox(RampOvenClass);
        rampTime3SpinBox->setObjectName(QString::fromUtf8("rampTime3SpinBox"));
        rampTime3SpinBox->setMinimumSize(QSize(91, 31));
        rampTime3SpinBox->setMaximumSize(QSize(91, 31));
        rampTime3SpinBox->setFont(font);
        rampTime3SpinBox->setDecimals(0);
        rampTime3SpinBox->setMaximum(9999);

        verticalLayout->addWidget(rampTime3SpinBox);

        rampTime4SpinBox = new QDoubleSpinBox(RampOvenClass);
        rampTime4SpinBox->setObjectName(QString::fromUtf8("rampTime4SpinBox"));
        rampTime4SpinBox->setMinimumSize(QSize(91, 31));
        rampTime4SpinBox->setMaximumSize(QSize(91, 31));
        rampTime4SpinBox->setFont(font);
        rampTime4SpinBox->setDecimals(0);
        rampTime4SpinBox->setMaximum(9999);

        verticalLayout->addWidget(rampTime4SpinBox);

        rampTime5SpinBox = new QDoubleSpinBox(RampOvenClass);
        rampTime5SpinBox->setObjectName(QString::fromUtf8("rampTime5SpinBox"));
        rampTime5SpinBox->setMinimumSize(QSize(91, 31));
        rampTime5SpinBox->setMaximumSize(QSize(91, 31));
        rampTime5SpinBox->setFont(font);
        rampTime5SpinBox->setDecimals(0);
        rampTime5SpinBox->setMaximum(9999);

        verticalLayout->addWidget(rampTime5SpinBox);

        rampTime6SpinBox = new QDoubleSpinBox(RampOvenClass);
        rampTime6SpinBox->setObjectName(QString::fromUtf8("rampTime6SpinBox"));
        rampTime6SpinBox->setMinimumSize(QSize(91, 31));
        rampTime6SpinBox->setMaximumSize(QSize(91, 31));
        rampTime6SpinBox->setFont(font);
        rampTime6SpinBox->setDecimals(0);
        rampTime6SpinBox->setMaximum(9999);

        verticalLayout->addWidget(rampTime6SpinBox);

        rampTime7SpinBox = new QDoubleSpinBox(RampOvenClass);
        rampTime7SpinBox->setObjectName(QString::fromUtf8("rampTime7SpinBox"));
        rampTime7SpinBox->setMinimumSize(QSize(91, 31));
        rampTime7SpinBox->setMaximumSize(QSize(91, 31));
        rampTime7SpinBox->setFont(font);
        rampTime7SpinBox->setDecimals(0);
        rampTime7SpinBox->setMaximum(9999);

        verticalLayout->addWidget(rampTime7SpinBox);

        rampTime8SpinBox = new QDoubleSpinBox(RampOvenClass);
        rampTime8SpinBox->setObjectName(QString::fromUtf8("rampTime8SpinBox"));
        rampTime8SpinBox->setMinimumSize(QSize(91, 31));
        rampTime8SpinBox->setMaximumSize(QSize(91, 31));
        rampTime8SpinBox->setFont(font);
        rampTime8SpinBox->setDecimals(0);
        rampTime8SpinBox->setMaximum(9999);

        verticalLayout->addWidget(rampTime8SpinBox);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        rampEventnameLabel = new QLabel(RampOvenClass);
        rampEventnameLabel->setObjectName(QString::fromUtf8("rampEventnameLabel"));

        verticalLayout_2->addWidget(rampEventnameLabel);

        ovenSetRampE1SpinBox = new QDoubleSpinBox(RampOvenClass);
        ovenSetRampE1SpinBox->setObjectName(QString::fromUtf8("ovenSetRampE1SpinBox"));
        ovenSetRampE1SpinBox->setMinimumSize(QSize(41, 31));
        ovenSetRampE1SpinBox->setMaximumSize(QSize(41, 31));
        ovenSetRampE1SpinBox->setFont(font);
        ovenSetRampE1SpinBox->setDecimals(0);
        ovenSetRampE1SpinBox->setMaximum(4);

        verticalLayout_2->addWidget(ovenSetRampE1SpinBox);

        ovenSetRampE2SpinBox = new QDoubleSpinBox(RampOvenClass);
        ovenSetRampE2SpinBox->setObjectName(QString::fromUtf8("ovenSetRampE2SpinBox"));
        ovenSetRampE2SpinBox->setMinimumSize(QSize(41, 31));
        ovenSetRampE2SpinBox->setMaximumSize(QSize(41, 31));
        ovenSetRampE2SpinBox->setFont(font);
        ovenSetRampE2SpinBox->setDecimals(0);
        ovenSetRampE2SpinBox->setMaximum(4);

        verticalLayout_2->addWidget(ovenSetRampE2SpinBox);

        ovenSetRampE3SpinBox = new QDoubleSpinBox(RampOvenClass);
        ovenSetRampE3SpinBox->setObjectName(QString::fromUtf8("ovenSetRampE3SpinBox"));
        ovenSetRampE3SpinBox->setMinimumSize(QSize(41, 31));
        ovenSetRampE3SpinBox->setMaximumSize(QSize(41, 31));
        ovenSetRampE3SpinBox->setFont(font);
        ovenSetRampE3SpinBox->setDecimals(0);
        ovenSetRampE3SpinBox->setMaximum(4);

        verticalLayout_2->addWidget(ovenSetRampE3SpinBox);

        ovenSetRampE4SpinBox = new QDoubleSpinBox(RampOvenClass);
        ovenSetRampE4SpinBox->setObjectName(QString::fromUtf8("ovenSetRampE4SpinBox"));
        ovenSetRampE4SpinBox->setMinimumSize(QSize(41, 31));
        ovenSetRampE4SpinBox->setMaximumSize(QSize(41, 31));
        ovenSetRampE4SpinBox->setFont(font);
        ovenSetRampE4SpinBox->setDecimals(0);
        ovenSetRampE4SpinBox->setMaximum(4);

        verticalLayout_2->addWidget(ovenSetRampE4SpinBox);

        ovenSetRampE5SpinBox = new QDoubleSpinBox(RampOvenClass);
        ovenSetRampE5SpinBox->setObjectName(QString::fromUtf8("ovenSetRampE5SpinBox"));
        ovenSetRampE5SpinBox->setMinimumSize(QSize(41, 31));
        ovenSetRampE5SpinBox->setMaximumSize(QSize(41, 31));
        ovenSetRampE5SpinBox->setFont(font);
        ovenSetRampE5SpinBox->setDecimals(0);
        ovenSetRampE5SpinBox->setMaximum(4);

        verticalLayout_2->addWidget(ovenSetRampE5SpinBox);

        ovenSetRampE6SpinBox = new QDoubleSpinBox(RampOvenClass);
        ovenSetRampE6SpinBox->setObjectName(QString::fromUtf8("ovenSetRampE6SpinBox"));
        ovenSetRampE6SpinBox->setMinimumSize(QSize(41, 31));
        ovenSetRampE6SpinBox->setMaximumSize(QSize(41, 31));
        ovenSetRampE6SpinBox->setFont(font);
        ovenSetRampE6SpinBox->setDecimals(0);
        ovenSetRampE6SpinBox->setMaximum(4);

        verticalLayout_2->addWidget(ovenSetRampE6SpinBox);

        ovenSetRampE7SpinBox = new QDoubleSpinBox(RampOvenClass);
        ovenSetRampE7SpinBox->setObjectName(QString::fromUtf8("ovenSetRampE7SpinBox"));
        ovenSetRampE7SpinBox->setMinimumSize(QSize(41, 31));
        ovenSetRampE7SpinBox->setMaximumSize(QSize(41, 31));
        ovenSetRampE7SpinBox->setFont(font);
        ovenSetRampE7SpinBox->setDecimals(0);
        ovenSetRampE7SpinBox->setMaximum(4);

        verticalLayout_2->addWidget(ovenSetRampE7SpinBox);

        ovenSetRampE8SpinBox = new QDoubleSpinBox(RampOvenClass);
        ovenSetRampE8SpinBox->setObjectName(QString::fromUtf8("ovenSetRampE8SpinBox"));
        ovenSetRampE8SpinBox->setMinimumSize(QSize(41, 31));
        ovenSetRampE8SpinBox->setMaximumSize(QSize(41, 31));
        ovenSetRampE8SpinBox->setFont(font);
        ovenSetRampE8SpinBox->setDecimals(0);
        ovenSetRampE8SpinBox->setMaximum(4);

        verticalLayout_2->addWidget(ovenSetRampE8SpinBox);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        soakLevelnameLabel = new QLabel(RampOvenClass);
        soakLevelnameLabel->setObjectName(QString::fromUtf8("soakLevelnameLabel"));

        verticalLayout_3->addWidget(soakLevelnameLabel);

        ovenSetSoakL1SpinBox = new QDoubleSpinBox(RampOvenClass);
        ovenSetSoakL1SpinBox->setObjectName(QString::fromUtf8("ovenSetSoakL1SpinBox"));
        ovenSetSoakL1SpinBox->setMinimumSize(QSize(71, 31));
        ovenSetSoakL1SpinBox->setMaximumSize(QSize(71, 31));
        ovenSetSoakL1SpinBox->setFont(font);
        ovenSetSoakL1SpinBox->setDecimals(0);
        ovenSetSoakL1SpinBox->setMaximum(450);
        ovenSetSoakL1SpinBox->setValue(25);

        verticalLayout_3->addWidget(ovenSetSoakL1SpinBox);

        ovenSetSoakL2SpinBox = new QDoubleSpinBox(RampOvenClass);
        ovenSetSoakL2SpinBox->setObjectName(QString::fromUtf8("ovenSetSoakL2SpinBox"));
        ovenSetSoakL2SpinBox->setMinimumSize(QSize(71, 31));
        ovenSetSoakL2SpinBox->setMaximumSize(QSize(71, 31));
        ovenSetSoakL2SpinBox->setFont(font);
        ovenSetSoakL2SpinBox->setDecimals(0);
        ovenSetSoakL2SpinBox->setMaximum(450);
        ovenSetSoakL2SpinBox->setValue(25);

        verticalLayout_3->addWidget(ovenSetSoakL2SpinBox);

        ovenSetSoakL3SpinBox = new QDoubleSpinBox(RampOvenClass);
        ovenSetSoakL3SpinBox->setObjectName(QString::fromUtf8("ovenSetSoakL3SpinBox"));
        ovenSetSoakL3SpinBox->setMinimumSize(QSize(71, 31));
        ovenSetSoakL3SpinBox->setMaximumSize(QSize(71, 31));
        ovenSetSoakL3SpinBox->setFont(font);
        ovenSetSoakL3SpinBox->setDecimals(0);
        ovenSetSoakL3SpinBox->setMaximum(450);
        ovenSetSoakL3SpinBox->setValue(25);

        verticalLayout_3->addWidget(ovenSetSoakL3SpinBox);

        ovenSetSoakL4SpinBox = new QDoubleSpinBox(RampOvenClass);
        ovenSetSoakL4SpinBox->setObjectName(QString::fromUtf8("ovenSetSoakL4SpinBox"));
        ovenSetSoakL4SpinBox->setMinimumSize(QSize(71, 31));
        ovenSetSoakL4SpinBox->setMaximumSize(QSize(71, 31));
        ovenSetSoakL4SpinBox->setFont(font);
        ovenSetSoakL4SpinBox->setDecimals(0);
        ovenSetSoakL4SpinBox->setMaximum(450);
        ovenSetSoakL4SpinBox->setValue(25);

        verticalLayout_3->addWidget(ovenSetSoakL4SpinBox);

        ovenSetSoakL5SpinBox = new QDoubleSpinBox(RampOvenClass);
        ovenSetSoakL5SpinBox->setObjectName(QString::fromUtf8("ovenSetSoakL5SpinBox"));
        ovenSetSoakL5SpinBox->setMinimumSize(QSize(71, 31));
        ovenSetSoakL5SpinBox->setMaximumSize(QSize(71, 31));
        ovenSetSoakL5SpinBox->setFont(font);
        ovenSetSoakL5SpinBox->setDecimals(0);
        ovenSetSoakL5SpinBox->setMaximum(450);
        ovenSetSoakL5SpinBox->setValue(25);

        verticalLayout_3->addWidget(ovenSetSoakL5SpinBox);

        ovenSeSoakL6SpinBox = new QDoubleSpinBox(RampOvenClass);
        ovenSeSoakL6SpinBox->setObjectName(QString::fromUtf8("ovenSeSoakL6SpinBox"));
        ovenSeSoakL6SpinBox->setMinimumSize(QSize(71, 31));
        ovenSeSoakL6SpinBox->setMaximumSize(QSize(71, 31));
        ovenSeSoakL6SpinBox->setFont(font);
        ovenSeSoakL6SpinBox->setDecimals(0);
        ovenSeSoakL6SpinBox->setMaximum(450);
        ovenSeSoakL6SpinBox->setValue(25);

        verticalLayout_3->addWidget(ovenSeSoakL6SpinBox);

        ovenSetSoakL7SpinBox = new QDoubleSpinBox(RampOvenClass);
        ovenSetSoakL7SpinBox->setObjectName(QString::fromUtf8("ovenSetSoakL7SpinBox"));
        ovenSetSoakL7SpinBox->setMinimumSize(QSize(71, 31));
        ovenSetSoakL7SpinBox->setMaximumSize(QSize(71, 31));
        ovenSetSoakL7SpinBox->setFont(font);
        ovenSetSoakL7SpinBox->setDecimals(0);
        ovenSetSoakL7SpinBox->setMaximum(450);
        ovenSetSoakL7SpinBox->setValue(25);

        verticalLayout_3->addWidget(ovenSetSoakL7SpinBox);

        ovenSetSoakL8SpinBox = new QDoubleSpinBox(RampOvenClass);
        ovenSetSoakL8SpinBox->setObjectName(QString::fromUtf8("ovenSetSoakL8SpinBox"));
        ovenSetSoakL8SpinBox->setMinimumSize(QSize(71, 31));
        ovenSetSoakL8SpinBox->setMaximumSize(QSize(71, 31));
        ovenSetSoakL8SpinBox->setFont(font);
        ovenSetSoakL8SpinBox->setDecimals(0);
        ovenSetSoakL8SpinBox->setMaximum(450);
        ovenSetSoakL8SpinBox->setValue(25);

        verticalLayout_3->addWidget(ovenSetSoakL8SpinBox);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        soakTimenameLabel = new QLabel(RampOvenClass);
        soakTimenameLabel->setObjectName(QString::fromUtf8("soakTimenameLabel"));

        verticalLayout_4->addWidget(soakTimenameLabel);

        ovenSetSoakT1SpinBox = new QDoubleSpinBox(RampOvenClass);
        ovenSetSoakT1SpinBox->setObjectName(QString::fromUtf8("ovenSetSoakT1SpinBox"));
        ovenSetSoakT1SpinBox->setMinimumSize(QSize(91, 31));
        ovenSetSoakT1SpinBox->setMaximumSize(QSize(91, 31));
        ovenSetSoakT1SpinBox->setFont(font);
        ovenSetSoakT1SpinBox->setDecimals(0);
        ovenSetSoakT1SpinBox->setMaximum(9999);
        ovenSetSoakT1SpinBox->setValue(0);

        verticalLayout_4->addWidget(ovenSetSoakT1SpinBox);

        ovenSetSoakT2SpinBox = new QDoubleSpinBox(RampOvenClass);
        ovenSetSoakT2SpinBox->setObjectName(QString::fromUtf8("ovenSetSoakT2SpinBox"));
        ovenSetSoakT2SpinBox->setMinimumSize(QSize(91, 31));
        ovenSetSoakT2SpinBox->setMaximumSize(QSize(91, 31));
        ovenSetSoakT2SpinBox->setFont(font);
        ovenSetSoakT2SpinBox->setDecimals(0);
        ovenSetSoakT2SpinBox->setMaximum(9999);

        verticalLayout_4->addWidget(ovenSetSoakT2SpinBox);

        ovenSetSoakT3SpinBox = new QDoubleSpinBox(RampOvenClass);
        ovenSetSoakT3SpinBox->setObjectName(QString::fromUtf8("ovenSetSoakT3SpinBox"));
        ovenSetSoakT3SpinBox->setMinimumSize(QSize(91, 31));
        ovenSetSoakT3SpinBox->setMaximumSize(QSize(91, 31));
        ovenSetSoakT3SpinBox->setFont(font);
        ovenSetSoakT3SpinBox->setDecimals(0);
        ovenSetSoakT3SpinBox->setMaximum(9999);

        verticalLayout_4->addWidget(ovenSetSoakT3SpinBox);

        ovenSetSoakT4SpinBox = new QDoubleSpinBox(RampOvenClass);
        ovenSetSoakT4SpinBox->setObjectName(QString::fromUtf8("ovenSetSoakT4SpinBox"));
        ovenSetSoakT4SpinBox->setMinimumSize(QSize(91, 31));
        ovenSetSoakT4SpinBox->setMaximumSize(QSize(91, 31));
        ovenSetSoakT4SpinBox->setFont(font);
        ovenSetSoakT4SpinBox->setDecimals(0);
        ovenSetSoakT4SpinBox->setMaximum(9999);

        verticalLayout_4->addWidget(ovenSetSoakT4SpinBox);

        ovenSetSoakT5SpinBox = new QDoubleSpinBox(RampOvenClass);
        ovenSetSoakT5SpinBox->setObjectName(QString::fromUtf8("ovenSetSoakT5SpinBox"));
        ovenSetSoakT5SpinBox->setMinimumSize(QSize(91, 31));
        ovenSetSoakT5SpinBox->setMaximumSize(QSize(91, 31));
        ovenSetSoakT5SpinBox->setFont(font);
        ovenSetSoakT5SpinBox->setDecimals(0);
        ovenSetSoakT5SpinBox->setMaximum(9999);

        verticalLayout_4->addWidget(ovenSetSoakT5SpinBox);

        ovenSetSoakT6SpinBox = new QDoubleSpinBox(RampOvenClass);
        ovenSetSoakT6SpinBox->setObjectName(QString::fromUtf8("ovenSetSoakT6SpinBox"));
        ovenSetSoakT6SpinBox->setMinimumSize(QSize(91, 31));
        ovenSetSoakT6SpinBox->setMaximumSize(QSize(91, 31));
        ovenSetSoakT6SpinBox->setFont(font);
        ovenSetSoakT6SpinBox->setDecimals(0);
        ovenSetSoakT6SpinBox->setMaximum(9999);

        verticalLayout_4->addWidget(ovenSetSoakT6SpinBox);

        ovenSetSoakT7SpinBox = new QDoubleSpinBox(RampOvenClass);
        ovenSetSoakT7SpinBox->setObjectName(QString::fromUtf8("ovenSetSoakT7SpinBox"));
        ovenSetSoakT7SpinBox->setMinimumSize(QSize(91, 31));
        ovenSetSoakT7SpinBox->setMaximumSize(QSize(91, 31));
        ovenSetSoakT7SpinBox->setFont(font);
        ovenSetSoakT7SpinBox->setDecimals(0);
        ovenSetSoakT7SpinBox->setMaximum(9999);

        verticalLayout_4->addWidget(ovenSetSoakT7SpinBox);

        ovenSetSoakT8SpinBox = new QDoubleSpinBox(RampOvenClass);
        ovenSetSoakT8SpinBox->setObjectName(QString::fromUtf8("ovenSetSoakT8SpinBox"));
        ovenSetSoakT8SpinBox->setMinimumSize(QSize(91, 31));
        ovenSetSoakT8SpinBox->setMaximumSize(QSize(91, 31));
        ovenSetSoakT8SpinBox->setFont(font);
        ovenSetSoakT8SpinBox->setDecimals(0);
        ovenSetSoakT8SpinBox->setMaximum(9999);

        verticalLayout_4->addWidget(ovenSetSoakT8SpinBox);


        horizontalLayout_3->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        soakEventnameLabel = new QLabel(RampOvenClass);
        soakEventnameLabel->setObjectName(QString::fromUtf8("soakEventnameLabel"));

        verticalLayout_5->addWidget(soakEventnameLabel);

        ovenSetSoakE1SpinBox = new QDoubleSpinBox(RampOvenClass);
        ovenSetSoakE1SpinBox->setObjectName(QString::fromUtf8("ovenSetSoakE1SpinBox"));
        ovenSetSoakE1SpinBox->setMinimumSize(QSize(41, 31));
        ovenSetSoakE1SpinBox->setMaximumSize(QSize(41, 31));
        ovenSetSoakE1SpinBox->setFont(font);
        ovenSetSoakE1SpinBox->setDecimals(0);
        ovenSetSoakE1SpinBox->setMaximum(4);

        verticalLayout_5->addWidget(ovenSetSoakE1SpinBox);

        ovenSetSoakE2SpinBox = new QDoubleSpinBox(RampOvenClass);
        ovenSetSoakE2SpinBox->setObjectName(QString::fromUtf8("ovenSetSoakE2SpinBox"));
        ovenSetSoakE2SpinBox->setMinimumSize(QSize(41, 31));
        ovenSetSoakE2SpinBox->setMaximumSize(QSize(41, 31));
        ovenSetSoakE2SpinBox->setFont(font);
        ovenSetSoakE2SpinBox->setDecimals(0);
        ovenSetSoakE2SpinBox->setMaximum(4);

        verticalLayout_5->addWidget(ovenSetSoakE2SpinBox);

        ovenSetSoakE3SpinBox = new QDoubleSpinBox(RampOvenClass);
        ovenSetSoakE3SpinBox->setObjectName(QString::fromUtf8("ovenSetSoakE3SpinBox"));
        ovenSetSoakE3SpinBox->setMinimumSize(QSize(41, 31));
        ovenSetSoakE3SpinBox->setMaximumSize(QSize(41, 31));
        ovenSetSoakE3SpinBox->setFont(font);
        ovenSetSoakE3SpinBox->setDecimals(0);
        ovenSetSoakE3SpinBox->setMaximum(4);

        verticalLayout_5->addWidget(ovenSetSoakE3SpinBox);

        ovenSetSoakE4SpinBox = new QDoubleSpinBox(RampOvenClass);
        ovenSetSoakE4SpinBox->setObjectName(QString::fromUtf8("ovenSetSoakE4SpinBox"));
        ovenSetSoakE4SpinBox->setMinimumSize(QSize(41, 31));
        ovenSetSoakE4SpinBox->setMaximumSize(QSize(41, 31));
        ovenSetSoakE4SpinBox->setFont(font);
        ovenSetSoakE4SpinBox->setDecimals(0);
        ovenSetSoakE4SpinBox->setMaximum(4);

        verticalLayout_5->addWidget(ovenSetSoakE4SpinBox);

        ovenSetSoakE5SpinBox = new QDoubleSpinBox(RampOvenClass);
        ovenSetSoakE5SpinBox->setObjectName(QString::fromUtf8("ovenSetSoakE5SpinBox"));
        ovenSetSoakE5SpinBox->setMinimumSize(QSize(41, 31));
        ovenSetSoakE5SpinBox->setMaximumSize(QSize(41, 31));
        ovenSetSoakE5SpinBox->setFont(font);
        ovenSetSoakE5SpinBox->setDecimals(0);
        ovenSetSoakE5SpinBox->setMaximum(4);

        verticalLayout_5->addWidget(ovenSetSoakE5SpinBox);

        ovenSetSoakE6SpinBox = new QDoubleSpinBox(RampOvenClass);
        ovenSetSoakE6SpinBox->setObjectName(QString::fromUtf8("ovenSetSoakE6SpinBox"));
        ovenSetSoakE6SpinBox->setMinimumSize(QSize(41, 31));
        ovenSetSoakE6SpinBox->setMaximumSize(QSize(41, 31));
        ovenSetSoakE6SpinBox->setFont(font);
        ovenSetSoakE6SpinBox->setDecimals(0);
        ovenSetSoakE6SpinBox->setMaximum(4);

        verticalLayout_5->addWidget(ovenSetSoakE6SpinBox);

        ovenSetSoakE7SpinBox = new QDoubleSpinBox(RampOvenClass);
        ovenSetSoakE7SpinBox->setObjectName(QString::fromUtf8("ovenSetSoakE7SpinBox"));
        ovenSetSoakE7SpinBox->setMinimumSize(QSize(41, 31));
        ovenSetSoakE7SpinBox->setMaximumSize(QSize(41, 31));
        ovenSetSoakE7SpinBox->setFont(font);
        ovenSetSoakE7SpinBox->setDecimals(0);
        ovenSetSoakE7SpinBox->setMaximum(4);

        verticalLayout_5->addWidget(ovenSetSoakE7SpinBox);

        ovenSetSoakE8SpinBox = new QDoubleSpinBox(RampOvenClass);
        ovenSetSoakE8SpinBox->setObjectName(QString::fromUtf8("ovenSetSoakE8SpinBox"));
        ovenSetSoakE8SpinBox->setMinimumSize(QSize(41, 31));
        ovenSetSoakE8SpinBox->setMaximumSize(QSize(41, 31));
        ovenSetSoakE8SpinBox->setFont(font);
        ovenSetSoakE8SpinBox->setDecimals(0);
        ovenSetSoakE8SpinBox->setMaximum(4);

        verticalLayout_5->addWidget(ovenSetSoakE8SpinBox);


        horizontalLayout_3->addLayout(verticalLayout_5);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 3);

        verticalSpacer_2 = new QSpacerItem(20, 32, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        recycleNumberknameLabel = new QLabel(RampOvenClass);
        recycleNumberknameLabel->setObjectName(QString::fromUtf8("recycleNumberknameLabel"));

        verticalLayout_6->addWidget(recycleNumberknameLabel);

        recycleNumberSpinBox = new QDoubleSpinBox(RampOvenClass);
        recycleNumberSpinBox->setObjectName(QString::fromUtf8("recycleNumberSpinBox"));
        recycleNumberSpinBox->setMinimumSize(QSize(71, 31));
        recycleNumberSpinBox->setMaximumSize(QSize(71, 31));
        recycleNumberSpinBox->setFont(font);
        recycleNumberSpinBox->setDecimals(0);
        recycleNumberSpinBox->setMaximum(100);
        recycleNumberSpinBox->setValue(0);

        verticalLayout_6->addWidget(recycleNumberSpinBox);


        horizontalLayout->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        terminationStatenameLabel = new QLabel(RampOvenClass);
        terminationStatenameLabel->setObjectName(QString::fromUtf8("terminationStatenameLabel"));

        verticalLayout_7->addWidget(terminationStatenameLabel);

        terminationStateSpinBox = new QDoubleSpinBox(RampOvenClass);
        terminationStateSpinBox->setObjectName(QString::fromUtf8("terminationStateSpinBox"));
        terminationStateSpinBox->setMinimumSize(QSize(41, 31));
        terminationStateSpinBox->setMaximumSize(QSize(41, 31));
        terminationStateSpinBox->setFont(font);
        terminationStateSpinBox->setDecimals(0);
        terminationStateSpinBox->setMaximum(2);
        terminationStateSpinBox->setValue(2);

        verticalLayout_7->addWidget(terminationStateSpinBox);


        horizontalLayout->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        recipeOptionnameLabel = new QLabel(RampOvenClass);
        recipeOptionnameLabel->setObjectName(QString::fromUtf8("recipeOptionnameLabel"));

        verticalLayout_8->addWidget(recipeOptionnameLabel);

        RecipeOptionSpinBox_2 = new QDoubleSpinBox(RampOvenClass);
        RecipeOptionSpinBox_2->setObjectName(QString::fromUtf8("RecipeOptionSpinBox_2"));
        RecipeOptionSpinBox_2->setMinimumSize(QSize(41, 31));
        RecipeOptionSpinBox_2->setMaximumSize(QSize(41, 31));
        RecipeOptionSpinBox_2->setFont(font);
        RecipeOptionSpinBox_2->setDecimals(0);
        RecipeOptionSpinBox_2->setMaximum(2);

        verticalLayout_8->addWidget(RecipeOptionSpinBox_2);


        horizontalLayout->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        singleStepTimenameLabel = new QLabel(RampOvenClass);
        singleStepTimenameLabel->setObjectName(QString::fromUtf8("singleStepTimenameLabel"));

        verticalLayout_9->addWidget(singleStepTimenameLabel);

        singleStepRampTimeSpinBox = new QDoubleSpinBox(RampOvenClass);
        singleStepRampTimeSpinBox->setObjectName(QString::fromUtf8("singleStepRampTimeSpinBox"));
        singleStepRampTimeSpinBox->setMinimumSize(QSize(91, 31));
        singleStepRampTimeSpinBox->setMaximumSize(QSize(91, 31));
        singleStepRampTimeSpinBox->setFont(font);
        singleStepRampTimeSpinBox->setDecimals(0);
        singleStepRampTimeSpinBox->setMaximum(9999);
        singleStepRampTimeSpinBox->setValue(1);

        verticalLayout_9->addWidget(singleStepRampTimeSpinBox);


        horizontalLayout->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        holdBacknameLabel = new QLabel(RampOvenClass);
        holdBacknameLabel->setObjectName(QString::fromUtf8("holdBacknameLabel"));

        verticalLayout_10->addWidget(holdBacknameLabel);

        holdBackSpinBox = new QDoubleSpinBox(RampOvenClass);
        holdBackSpinBox->setObjectName(QString::fromUtf8("holdBackSpinBox"));
        holdBackSpinBox->setMinimumSize(QSize(81, 31));
        holdBackSpinBox->setMaximumSize(QSize(81, 31));
        holdBackSpinBox->setFont(font);
        holdBackSpinBox->setDecimals(1);
        holdBackSpinBox->setMaximum(55.6);
        holdBackSpinBox->setValue(10);

        verticalLayout_10->addWidget(holdBackSpinBox);


        horizontalLayout->addLayout(verticalLayout_10);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 3);

        verticalSpacer = new QSpacerItem(20, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        commParametersButton = new QPushButton(RampOvenClass);
        commParametersButton->setObjectName(QString::fromUtf8("commParametersButton"));
        commParametersButton->setMinimumSize(QSize(111, 41));
        commParametersButton->setMaximumSize(QSize(111, 41));

        verticalLayout_11->addWidget(commParametersButton);

        zoneOutputButton = new QPushButton(RampOvenClass);
        zoneOutputButton->setObjectName(QString::fromUtf8("zoneOutputButton"));
        zoneOutputButton->setMinimumSize(QSize(111, 41));
        zoneOutputButton->setMaximumSize(QSize(111, 41));

        verticalLayout_11->addWidget(zoneOutputButton);

        zoneAutotuneButton = new QPushButton(RampOvenClass);
        zoneAutotuneButton->setObjectName(QString::fromUtf8("zoneAutotuneButton"));
        zoneAutotuneButton->setMinimumSize(QSize(111, 41));
        zoneAutotuneButton->setMaximumSize(QSize(111, 41));

        verticalLayout_11->addWidget(zoneAutotuneButton);

        boardSecurityButton = new QPushButton(RampOvenClass);
        boardSecurityButton->setObjectName(QString::fromUtf8("boardSecurityButton"));
        boardSecurityButton->setMinimumSize(QSize(111, 41));
        boardSecurityButton->setMaximumSize(QSize(111, 41));

        verticalLayout_11->addWidget(boardSecurityButton);


        horizontalLayout_4->addLayout(verticalLayout_11);

        horizontalSpacer = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        zoneInputParametersButton = new QPushButton(RampOvenClass);
        zoneInputParametersButton->setObjectName(QString::fromUtf8("zoneInputParametersButton"));
        zoneInputParametersButton->setMinimumSize(QSize(111, 41));
        zoneInputParametersButton->setMaximumSize(QSize(111, 41));

        verticalLayout_12->addWidget(zoneInputParametersButton);

        zoneControlButton = new QPushButton(RampOvenClass);
        zoneControlButton->setObjectName(QString::fromUtf8("zoneControlButton"));
        zoneControlButton->setMinimumSize(QSize(111, 41));
        zoneControlButton->setMaximumSize(QSize(111, 41));

        verticalLayout_12->addWidget(zoneControlButton);

        zoneSupervisorButton = new QPushButton(RampOvenClass);
        zoneSupervisorButton->setObjectName(QString::fromUtf8("zoneSupervisorButton"));
        zoneSupervisorButton->setMinimumSize(QSize(111, 41));
        zoneSupervisorButton->setMaximumSize(QSize(111, 41));

        verticalLayout_12->addWidget(zoneSupervisorButton);

        zoneProcessValueButton = new QPushButton(RampOvenClass);
        zoneProcessValueButton->setObjectName(QString::fromUtf8("zoneProcessValueButton"));
        zoneProcessValueButton->setMinimumSize(QSize(111, 41));
        zoneProcessValueButton->setMaximumSize(QSize(111, 41));

        verticalLayout_12->addWidget(zoneProcessValueButton);


        horizontalLayout_4->addLayout(verticalLayout_12);

        horizontalSpacer_2 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        zoneDisplayButton = new QPushButton(RampOvenClass);
        zoneDisplayButton->setObjectName(QString::fromUtf8("zoneDisplayButton"));
        zoneDisplayButton->setMinimumSize(QSize(111, 41));
        zoneDisplayButton->setMaximumSize(QSize(111, 41));

        verticalLayout_13->addWidget(zoneDisplayButton);

        zoneAlarmButton = new QPushButton(RampOvenClass);
        zoneAlarmButton->setObjectName(QString::fromUtf8("zoneAlarmButton"));
        zoneAlarmButton->setMinimumSize(QSize(111, 41));
        zoneAlarmButton->setMaximumSize(QSize(111, 41));

        verticalLayout_13->addWidget(zoneAlarmButton);

        zoneCalibrationButton = new QPushButton(RampOvenClass);
        zoneCalibrationButton->setObjectName(QString::fromUtf8("zoneCalibrationButton"));
        zoneCalibrationButton->setMinimumSize(QSize(111, 41));
        zoneCalibrationButton->setMaximumSize(QSize(111, 41));

        verticalLayout_13->addWidget(zoneCalibrationButton);

        zoneApplyButton = new QPushButton(RampOvenClass);
        zoneApplyButton->setObjectName(QString::fromUtf8("zoneApplyButton"));
        zoneApplyButton->setMinimumSize(QSize(111, 41));
        zoneApplyButton->setMaximumSize(QSize(111, 41));

        verticalLayout_13->addWidget(zoneApplyButton);


        horizontalLayout_4->addLayout(verticalLayout_13);


        gridLayout->addLayout(horizontalLayout_4, 4, 0, 1, 3);

        verticalSpacer_3 = new QSpacerItem(20, 38, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 5, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        resumeFromPowerFailurenameLabel = new QLabel(RampOvenClass);
        resumeFromPowerFailurenameLabel->setObjectName(QString::fromUtf8("resumeFromPowerFailurenameLabel"));

        horizontalLayout_2->addWidget(resumeFromPowerFailurenameLabel);

        resumepowerfailureCheckBox = new QCheckBox(RampOvenClass);
        resumepowerfailureCheckBox->setObjectName(QString::fromUtf8("resumepowerfailureCheckBox"));
        resumepowerfailureCheckBox->setMinimumSize(QSize(62, 22));
        resumepowerfailureCheckBox->setMaximumSize(QSize(62, 22));

        horizontalLayout_2->addWidget(resumepowerfailureCheckBox);


        gridLayout->addLayout(horizontalLayout_2, 6, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(174, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 6, 1, 1, 1);

        closeButton = new QPushButton(RampOvenClass);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setMinimumSize(QSize(111, 41));
        closeButton->setMaximumSize(QSize(111, 41));

        gridLayout->addWidget(closeButton, 6, 2, 1, 1);


        retranslateUi(RampOvenClass);
        QObject::connect(closeButton, SIGNAL(clicked()), RampOvenClass, SLOT(close()));
        QObject::connect(zoneApplyButton, SIGNAL(clicked()), RampOvenClass, SLOT(sendRampParameters()));

        QMetaObject::connectSlotsByName(RampOvenClass);
    } // setupUi

    void retranslateUi(QWidget *RampOvenClass)
    {
        RampOvenClass->setWindowTitle(QApplication::translate("RampOvenClass", "RampOven", 0, QApplication::UnicodeUTF8));
        rampNumbernameLabel->setText(QApplication::translate("RampOvenClass", "Ramp\n"
"#", 0, QApplication::UnicodeUTF8));
        numbernameLabel->setText(QApplication::translate("RampOvenClass", "1", 0, QApplication::UnicodeUTF8));
        numbernameLabel_2->setText(QApplication::translate("RampOvenClass", "2", 0, QApplication::UnicodeUTF8));
        numbernameLabel_3->setText(QApplication::translate("RampOvenClass", "3", 0, QApplication::UnicodeUTF8));
        numbernameLabel_4->setText(QApplication::translate("RampOvenClass", "4", 0, QApplication::UnicodeUTF8));
        numbernameLabel_5->setText(QApplication::translate("RampOvenClass", "5", 0, QApplication::UnicodeUTF8));
        numbernameLabel_6->setText(QApplication::translate("RampOvenClass", "6", 0, QApplication::UnicodeUTF8));
        numbernameLabel_7->setText(QApplication::translate("RampOvenClass", "7", 0, QApplication::UnicodeUTF8));
        numbernameLabel_8->setText(QApplication::translate("RampOvenClass", "8", 0, QApplication::UnicodeUTF8));
        rampTimenameLabel->setText(QApplication::translate("RampOvenClass", "Ramp\n"
"Time", 0, QApplication::UnicodeUTF8));
        rampEventnameLabel->setText(QApplication::translate("RampOvenClass", "Ramp\n"
"Event", 0, QApplication::UnicodeUTF8));
        soakLevelnameLabel->setText(QApplication::translate("RampOvenClass", "Soak\n"
"Level", 0, QApplication::UnicodeUTF8));
        soakTimenameLabel->setText(QApplication::translate("RampOvenClass", "Soak\n"
"Time", 0, QApplication::UnicodeUTF8));
        soakEventnameLabel->setText(QApplication::translate("RampOvenClass", "Soak\n"
"Event", 0, QApplication::UnicodeUTF8));
        recycleNumberknameLabel->setText(QApplication::translate("RampOvenClass", "Recycle\n"
"Number", 0, QApplication::UnicodeUTF8));
        terminationStatenameLabel->setText(QApplication::translate("RampOvenClass", "Termination\n"
"State", 0, QApplication::UnicodeUTF8));
        recipeOptionnameLabel->setText(QApplication::translate("RampOvenClass", "Recipe\n"
"Option", 0, QApplication::UnicodeUTF8));
        singleStepTimenameLabel->setText(QApplication::translate("RampOvenClass", "Single Step\n"
"Ramp Time", 0, QApplication::UnicodeUTF8));
        holdBacknameLabel->setText(QApplication::translate("RampOvenClass", "Holdback", 0, QApplication::UnicodeUTF8));
        commParametersButton->setText(QApplication::translate("RampOvenClass", "COMM", 0, QApplication::UnicodeUTF8));
        zoneOutputButton->setText(QApplication::translate("RampOvenClass", "ZONE\n"
"OUTPUT", 0, QApplication::UnicodeUTF8));
        zoneAutotuneButton->setText(QApplication::translate("RampOvenClass", "ZONE\n"
"AUTOTUNE", 0, QApplication::UnicodeUTF8));
        boardSecurityButton->setText(QApplication::translate("RampOvenClass", "BOARD\n"
"SECURITY", 0, QApplication::UnicodeUTF8));
        zoneInputParametersButton->setText(QApplication::translate("RampOvenClass", "ZONE\n"
"INPUT", 0, QApplication::UnicodeUTF8));
        zoneControlButton->setText(QApplication::translate("RampOvenClass", "ZONE\n"
"CONTROL", 0, QApplication::UnicodeUTF8));
        zoneSupervisorButton->setText(QApplication::translate("RampOvenClass", "ZONE\n"
"SUPERVISOR", 0, QApplication::UnicodeUTF8));
        zoneProcessValueButton->setText(QApplication::translate("RampOvenClass", "ZONE PROCESS\n"
"VALUE", 0, QApplication::UnicodeUTF8));
        zoneDisplayButton->setText(QApplication::translate("RampOvenClass", "ZONE\n"
"DISPLAY", 0, QApplication::UnicodeUTF8));
        zoneAlarmButton->setText(QApplication::translate("RampOvenClass", "ZONE\n"
"ALARM", 0, QApplication::UnicodeUTF8));
        zoneCalibrationButton->setText(QApplication::translate("RampOvenClass", "ZONE\n"
"CALIBRATION", 0, QApplication::UnicodeUTF8));
        zoneApplyButton->setText(QApplication::translate("RampOvenClass", "APPLY", 0, QApplication::UnicodeUTF8));
        resumeFromPowerFailurenameLabel->setText(QApplication::translate("RampOvenClass", "Resume From\n"
"Power Failure", 0, QApplication::UnicodeUTF8));
        resumepowerfailureCheckBox->setText(QApplication::translate("RampOvenClass", "&Y/N?", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("RampOvenClass", "CLOSE", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RampOvenClass: public Ui_RampOvenClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAMPOVEN_H
