/********************************************************************************
** Form generated from reading UI file 'detectorwidget.ui'
**
** Created: Tue Mar 5 14:05:07 2019
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETECTORWIDGET_H
#define UI_DETECTORWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DetectorWidget
{
public:
    QLabel *detectorLabel;
    QLabel *detCar3Label;
    QLabel *detCarLabel;
    QLCDNumber *detActCar1LCD;
    QLabel *detSetpointLabel;
    QLabel *detCar2Label;
    QLCDNumber *detSetCar3LCD;
    QLCDNumber *detSetCar1LCD;
    QLabel *detTempLabel;
    QLCDNumber *detActCar2LCD;
    QLCDNumber *detActCar3LCD;
    QLabel *detActualLabel;
    QLCDNumber *detSetCar2LCD;
    QCheckBox *tempCheckBox;
    QLabel *detOnOffLabel;
    QDoubleSpinBox *detSetTempSpinBox;
    QLCDNumber *detActTempLCD;
    QLabel *tempSetTestLabel;
    QLabel *typeLabel;
    QLabel *nameLabel;
    QToolButton *actualTempButton;
    QToolButton *detConfigButton;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_10;
    QCheckBox *detHVCheckBox;
    QLCDNumber *detHighVLCD;
    QLabel *detHVLabel;
    QSpacerItem *horizontalSpacer_6;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_7;
    QLCDNumber *detAmpsLCD;
    QLabel *det1AmpsLabel_2;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_8;
    QLabel *detOutputLabel;
    QLCDNumber *detOutputLCD;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *sendTempButton;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_5;
    QPushButton *heaterOffButton;
    QCheckBox *heatOffCheckBox;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_6;
    QPushButton *heaterOnButton;
    QCheckBox *heatOnCheckBox;

    void setupUi(QWidget *DetectorWidget)
    {
        if (DetectorWidget->objectName().isEmpty())
            DetectorWidget->setObjectName(QString::fromUtf8("DetectorWidget"));
        DetectorWidget->resize(470, 522);
        detectorLabel = new QLabel(DetectorWidget);
        detectorLabel->setObjectName(QString::fromUtf8("detectorLabel"));
        detectorLabel->setGeometry(QRect(0, 40, 341, 41));
        detCar3Label = new QLabel(DetectorWidget);
        detCar3Label->setObjectName(QString::fromUtf8("detCar3Label"));
        detCar3Label->setGeometry(QRect(-1, 469, 151, 31));
        detCarLabel = new QLabel(DetectorWidget);
        detCarLabel->setObjectName(QString::fromUtf8("detCarLabel"));
        detCarLabel->setGeometry(QRect(0, 370, 141, 31));
        detActCar1LCD = new QLCDNumber(DetectorWidget);
        detActCar1LCD->setObjectName(QString::fromUtf8("detActCar1LCD"));
        detActCar1LCD->setGeometry(QRect(150, 360, 51, 41));
        detActCar1LCD->setSegmentStyle(QLCDNumber::Flat);
        detSetpointLabel = new QLabel(DetectorWidget);
        detSetpointLabel->setObjectName(QString::fromUtf8("detSetpointLabel"));
        detSetpointLabel->setGeometry(QRect(300, 90, 141, 41));
        detCar2Label = new QLabel(DetectorWidget);
        detCar2Label->setObjectName(QString::fromUtf8("detCar2Label"));
        detCar2Label->setGeometry(QRect(0, 420, 131, 41));
        detSetCar3LCD = new QLCDNumber(DetectorWidget);
        detSetCar3LCD->setObjectName(QString::fromUtf8("detSetCar3LCD"));
        detSetCar3LCD->setGeometry(QRect(290, 460, 51, 41));
        detSetCar3LCD->setSegmentStyle(QLCDNumber::Flat);
        detSetCar1LCD = new QLCDNumber(DetectorWidget);
        detSetCar1LCD->setObjectName(QString::fromUtf8("detSetCar1LCD"));
        detSetCar1LCD->setGeometry(QRect(290, 360, 51, 41));
        detSetCar1LCD->setFrameShape(QFrame::Box);
        detSetCar1LCD->setFrameShadow(QFrame::Raised);
        detSetCar1LCD->setLineWidth(1);
        detSetCar1LCD->setMidLineWidth(0);
        detSetCar1LCD->setSegmentStyle(QLCDNumber::Flat);
        detTempLabel = new QLabel(DetectorWidget);
        detTempLabel->setObjectName(QString::fromUtf8("detTempLabel"));
        detTempLabel->setGeometry(QRect(0, 100, 141, 20));
        detActCar2LCD = new QLCDNumber(DetectorWidget);
        detActCar2LCD->setObjectName(QString::fromUtf8("detActCar2LCD"));
        detActCar2LCD->setGeometry(QRect(150, 410, 51, 41));
        detActCar2LCD->setSegmentStyle(QLCDNumber::Flat);
        detActCar3LCD = new QLCDNumber(DetectorWidget);
        detActCar3LCD->setObjectName(QString::fromUtf8("detActCar3LCD"));
        detActCar3LCD->setGeometry(QRect(150, 460, 51, 41));
        detActCar3LCD->setSegmentStyle(QLCDNumber::Flat);
        detActualLabel = new QLabel(DetectorWidget);
        detActualLabel->setObjectName(QString::fromUtf8("detActualLabel"));
        detActualLabel->setGeometry(QRect(160, 90, 101, 41));
        detSetCar2LCD = new QLCDNumber(DetectorWidget);
        detSetCar2LCD->setObjectName(QString::fromUtf8("detSetCar2LCD"));
        detSetCar2LCD->setGeometry(QRect(290, 410, 51, 41));
        detSetCar2LCD->setSegmentStyle(QLCDNumber::Flat);
        tempCheckBox = new QCheckBox(DetectorWidget);
        tempCheckBox->setObjectName(QString::fromUtf8("tempCheckBox"));
        tempCheckBox->setGeometry(QRect(40, 180, 21, 21));
        detOnOffLabel = new QLabel(DetectorWidget);
        detOnOffLabel->setObjectName(QString::fromUtf8("detOnOffLabel"));
        detOnOffLabel->setGeometry(QRect(0, 130, 91, 31));
        detSetTempSpinBox = new QDoubleSpinBox(DetectorWidget);
        detSetTempSpinBox->setObjectName(QString::fromUtf8("detSetTempSpinBox"));
        detSetTempSpinBox->setGeometry(QRect(300, 140, 81, 41));
        QFont font;
        font.setPointSize(50);
        detSetTempSpinBox->setFont(font);
        detSetTempSpinBox->setDecimals(0);
        detSetTempSpinBox->setMinimum(-1);
        detActTempLCD = new QLCDNumber(DetectorWidget);
        detActTempLCD->setObjectName(QString::fromUtf8("detActTempLCD"));
        detActTempLCD->setGeometry(QRect(160, 140, 81, 41));
        detActTempLCD->setSegmentStyle(QLCDNumber::Flat);
        tempSetTestLabel = new QLabel(DetectorWidget);
        tempSetTestLabel->setObjectName(QString::fromUtf8("tempSetTestLabel"));
        tempSetTestLabel->setGeometry(QRect(320, 280, 46, 13));
        typeLabel = new QLabel(DetectorWidget);
        typeLabel->setObjectName(QString::fromUtf8("typeLabel"));
        typeLabel->setGeometry(QRect(260, 10, 161, 31));
        nameLabel = new QLabel(DetectorWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setGeometry(QRect(0, 0, 231, 31));
        actualTempButton = new QToolButton(DetectorWidget);
        actualTempButton->setObjectName(QString::fromUtf8("actualTempButton"));
        actualTempButton->setGeometry(QRect(90, 140, 51, 41));
        detConfigButton = new QToolButton(DetectorWidget);
        detConfigButton->setObjectName(QString::fromUtf8("detConfigButton"));
        detConfigButton->setGeometry(QRect(0, 240, 81, 31));
        layoutWidget = new QWidget(DetectorWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 580, 301, 90));
        gridLayout_4 = new QGridLayout(layoutWidget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_10 = new QSpacerItem(38, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_10, 0, 0, 1, 1);

        detHVCheckBox = new QCheckBox(layoutWidget);
        detHVCheckBox->setObjectName(QString::fromUtf8("detHVCheckBox"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(true);
        font1.setWeight(50);
        detHVCheckBox->setFont(font1);

        gridLayout->addWidget(detHVCheckBox, 0, 1, 1, 1);

        detHighVLCD = new QLCDNumber(layoutWidget);
        detHighVLCD->setObjectName(QString::fromUtf8("detHighVLCD"));
        detHighVLCD->setMinimumSize(QSize(64, 23));
        detHighVLCD->setMaximumSize(QSize(64, 23));
        detHighVLCD->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(detHighVLCD, 0, 2, 1, 1);

        detHVLabel = new QLabel(layoutWidget);
        detHVLabel->setObjectName(QString::fromUtf8("detHVLabel"));

        gridLayout->addWidget(detHVLabel, 0, 3, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(48, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 0, 4, 1, 1);


        gridLayout_4->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer_7 = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_7, 0, 0, 1, 1);

        detAmpsLCD = new QLCDNumber(layoutWidget);
        detAmpsLCD->setObjectName(QString::fromUtf8("detAmpsLCD"));
        detAmpsLCD->setMinimumSize(QSize(64, 23));
        detAmpsLCD->setMaximumSize(QSize(64, 23));
        detAmpsLCD->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_2->addWidget(detAmpsLCD, 0, 1, 1, 1);

        det1AmpsLabel_2 = new QLabel(layoutWidget);
        det1AmpsLabel_2->setObjectName(QString::fromUtf8("det1AmpsLabel_2"));
        det1AmpsLabel_2->setMinimumSize(QSize(103, 23));
        det1AmpsLabel_2->setMaximumSize(QSize(103, 23));

        gridLayout_2->addWidget(det1AmpsLabel_2, 0, 2, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 1, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalSpacer_8 = new QSpacerItem(58, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_8, 0, 0, 1, 1);

        detOutputLabel = new QLabel(layoutWidget);
        detOutputLabel->setObjectName(QString::fromUtf8("detOutputLabel"));
        detOutputLabel->setMinimumSize(QSize(57, 23));
        detOutputLabel->setMaximumSize(QSize(57, 23));
        QFont font2;
        font2.setPointSize(12);
        detOutputLabel->setFont(font2);

        gridLayout_3->addWidget(detOutputLabel, 0, 1, 1, 1);

        detOutputLCD = new QLCDNumber(layoutWidget);
        detOutputLCD->setObjectName(QString::fromUtf8("detOutputLCD"));
        detOutputLCD->setMinimumSize(QSize(64, 23));
        detOutputLCD->setMaximumSize(QSize(64, 23));
        detOutputLCD->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_3->addWidget(detOutputLCD, 0, 2, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_9, 0, 3, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 2, 0, 1, 1);

        sendTempButton = new QPushButton(DetectorWidget);
        sendTempButton->setObjectName(QString::fromUtf8("sendTempButton"));
        sendTempButton->setGeometry(QRect(320, 230, 71, 21));
        sendTempButton->setMinimumSize(QSize(0, 0));
        sendTempButton->setMaximumSize(QSize(171, 41));
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
        sendTempButton->setPalette(palette);
        QFont font3;
        font3.setPointSize(18);
        sendTempButton->setFont(font3);
        layoutWidget1 = new QWidget(DetectorWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 530, 118, 67));
        gridLayout_5 = new QGridLayout(layoutWidget1);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        heaterOffButton = new QPushButton(layoutWidget1);
        heaterOffButton->setObjectName(QString::fromUtf8("heaterOffButton"));
        heaterOffButton->setMinimumSize(QSize(0, 0));
        heaterOffButton->setMaximumSize(QSize(171, 41));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        heaterOffButton->setPalette(palette1);
        heaterOffButton->setFont(font3);

        gridLayout_5->addWidget(heaterOffButton, 0, 0, 1, 1);

        heatOffCheckBox = new QCheckBox(layoutWidget1);
        heatOffCheckBox->setObjectName(QString::fromUtf8("heatOffCheckBox"));
        heatOffCheckBox->setMinimumSize(QSize(21, 21));
        heatOffCheckBox->setFont(font2);
        heatOffCheckBox->setAcceptDrops(false);

        gridLayout_5->addWidget(heatOffCheckBox, 1, 0, 1, 1);

        layoutWidget2 = new QWidget(DetectorWidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(120, 530, 112, 67));
        gridLayout_6 = new QGridLayout(layoutWidget2);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        heaterOnButton = new QPushButton(layoutWidget2);
        heaterOnButton->setObjectName(QString::fromUtf8("heaterOnButton"));
        heaterOnButton->setMinimumSize(QSize(0, 0));
        heaterOnButton->setMaximumSize(QSize(171, 41));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        heaterOnButton->setPalette(palette2);
        heaterOnButton->setFont(font3);

        gridLayout_6->addWidget(heaterOnButton, 0, 0, 1, 1);

        heatOnCheckBox = new QCheckBox(layoutWidget2);
        heatOnCheckBox->setObjectName(QString::fromUtf8("heatOnCheckBox"));
        heatOnCheckBox->setMinimumSize(QSize(21, 21));
        heatOnCheckBox->setFont(font2);
        heatOnCheckBox->setAcceptDrops(false);

        gridLayout_6->addWidget(heatOnCheckBox, 1, 0, 1, 1);


        retranslateUi(DetectorWidget);

        QMetaObject::connectSlotsByName(DetectorWidget);
    } // setupUi

    void retranslateUi(QWidget *DetectorWidget)
    {
        DetectorWidget->setWindowTitle(QApplication::translate("DetectorWidget", "Form", 0, QApplication::UnicodeUTF8));
        detectorLabel->setText(QApplication::translate("DetectorWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:24pt; font-weight:600; text-decoration: underline;\">Detector Settings:</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        detCar3Label->setText(QApplication::translate("DetectorWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:24pt; font-style:italic; color:#0055ff;\">Carrier 3</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        detCarLabel->setText(QApplication::translate("DetectorWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:24pt; font-style:italic; color:#0055ff;\">Carrier 1</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        detSetpointLabel->setText(QApplication::translate("DetectorWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:24pt; text-decoration: underline;\">Setpoint</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        detCar2Label->setText(QApplication::translate("DetectorWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:22pt; font-style:italic; color:#0055ff;\">Carrier 2</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        detTempLabel->setText(QApplication::translate("DetectorWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-style:italic;\">Temperature (</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-style:italic; color:#ff0000;\">C</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-style:italic;\">)</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        detActualLabel->setText(QApplication::translate("DetectorWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:24pt; text-decoration: underline;\">Actual</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        tempCheckBox->setText(QString());
        detOnOffLabel->setText(QApplication::translate("DetectorWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:18pt; text-decoration: underline;\">ON/OFF</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        tempSetTestLabel->setText(QApplication::translate("DetectorWidget", "( )", 0, QApplication::UnicodeUTF8));
        typeLabel->setText(QApplication::translate("DetectorWidget", "TypeLabel", 0, QApplication::UnicodeUTF8));
        nameLabel->setText(QApplication::translate("DetectorWidget", "NameLabel", 0, QApplication::UnicodeUTF8));
        actualTempButton->setText(QApplication::translate("DetectorWidget", "...", 0, QApplication::UnicodeUTF8));
        detConfigButton->setText(QApplication::translate("DetectorWidget", "config", 0, QApplication::UnicodeUTF8));
        detHVCheckBox->setText(QApplication::translate("DetectorWidget", "HV (En)", 0, QApplication::UnicodeUTF8));
        detHVLabel->setText(QApplication::translate("DetectorWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">Volts</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        det1AmpsLabel_2->setText(QApplication::translate("DetectorWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">Amps (10^-5)</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        detOutputLabel->setText(QApplication::translate("DetectorWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic;\">Output</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        sendTempButton->setText(QApplication::translate("DetectorWidget", "ENTER", 0, QApplication::UnicodeUTF8));
        heaterOffButton->setText(QApplication::translate("DetectorWidget", "Heat Off", 0, QApplication::UnicodeUTF8));
        heatOffCheckBox->setText(QString());
        heaterOnButton->setText(QApplication::translate("DetectorWidget", "Heat On", 0, QApplication::UnicodeUTF8));
        heatOnCheckBox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DetectorWidget: public Ui_DetectorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETECTORWIDGET_H
