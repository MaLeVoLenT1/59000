#include "detectorwidget.h"
#include "ui_detectorwidget.h"
#include "detconfigure.h"
#include "mainwindow.h"
#include "valvecontrol.h"
//#include "ovenwidget.h"
#include "objectmgmt.h"
#include "qlistwidget.h"
#include "qtablewidget.h"
#include <QDebug>
#include <QApplication>
#include <QKeyEvent>
#include <QToolBox>

extern unsigned int detNumberDirector;// used to select detector for processing - Temporary find another way

DetectorWidget::DetectorWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DetectorWidget)
{
    ui->setupUi(this);

    ui->detectorLabel->setVisible(true);//false
    ui->detSetTempSpinBox->setEnabled(true);//false
    ui->detSetTempSpinBox->setRange(0,450);//false

    connect(ui->tempCheckBox, SIGNAL(clicked(bool)),ui->detSetTempSpinBox,SLOT(setEnabled(bool)));
}

DetectorWidget::~DetectorWidget()
{
    delete ui;
}
void DetectorWidget::keyReleaseEvent(QKeyEvent *event)
{
	DetectorWidget detKeyPress;
	OvenWidget owValves;
	OvenWidget owReadFl;
	MainWindow parts;

	switch (event->key()){
	case Qt::Key_F1:{
//		closeVent();
		qDebug() << "Released F1 Key";
		break;
	}
	case Qt::Key_F2:{
//		openVent();
		qDebug() << "Released F2 Key";
		break;
	}
	case Qt::Key_F3:{
		qDebug() << "Released F3 Key";
		break;
	}
	case Qt::Key_F4:{
		ui->detConfigButton->click();
		qDebug() << "Released F4 Key";
		break;
	}
	case Qt::Key_F5:{
		qDebug() << "Released F5 Key (DET 1)";
//		ui->partStack->setCurrentWidget(currentWidgetList[1]);
		break;
	}
	case Qt::Key_F6:{
		qDebug() << "Released F6 Key (Oven)";
//		ui->partStack->setCurrentWidget(currentWidgetList[0]);
		break;
	}
	case Qt::Key_F7:{
		owReadFl.owReadFlow();
		qDebug() << "Released F7 Key (Flow)";
		break;
	}
	case Qt::Key_F8:{
		qDebug() << "Released F8 Key (Det 2)";
//		ui->partStack->setCurrentWidget(currentWidgetList[2]);
		break;
	}
	case Qt::Key_F9:{
		owValves.owValveControl();
		qDebug() << "Released F9 Key (Valve)";
		break;
	}
	case Qt::Key_F10:{
		qDebug() << "Released F10 Key (Inj Port)";
//		ui->partStack->setCurrentWidget(currentWidgetList[3]);
		break;
	}
	default:{//
		break;
	}
}
}
void DetectorWidget::dwConfig(void)
{
	detConfigure dwConfigDet(this);// Crerate a dialog
			if (dwConfigDet.exec()) {
				qDebug() << "GOT IN Det Config Button";

			    detConfigure dC;
			    dC.detRead();

//				while (1){// use close button or FKey to end dialog
//					dwConfigDet.detTCD_I_read();
//					qApp->processEvents();// stop and check for any events to be processed
//				}
			}
}

void DetectorWidget::setIdealTemp(double tempSetpoint)
{
    ui->tempSetTestLabel->setText("(" + QString::number(tempSetpoint) + " , " +
                                  QString::number(m_tempSlaveID) + ")");

 //   emit tempSetPoint(m_tempSlaveID, tempSetpoint);
}

void DetectorWidget::setActualTemp(int slaveID, int actualTemp)
{
    if (slaveID == m_tempSlaveID)
    {
    m_actualTemp = actualTemp;
    ui->detActTempLCD->display(m_actualTemp);
    }
}

void DetectorWidget::setLabels(QString nameLabel, QString typeLabel)
{
    ui->nameLabel->setText("<font size=\"5\"><b><u>" + nameLabel + " Settings </u></b></font>");
    ui->typeLabel->setText("<font size=\"4\"><b><u>(" + typeLabel + ")</u></b></font>");
}

void DetectorWidget::setIsHeated(bool isHeated)
{
    ui->tempCheckBox->setEnabled(isHeated);
    ui->tempCheckBox->setChecked(true);//false
}

void DetectorWidget::manualWriteTemp(void)
{
	int tempSetpoint;

	tempSetpoint = ui->detSetTempSpinBox->value();
	emit tempSetPoint(m_tempSlaveID, tempSetpoint);
}

void DetectorWidget::setConnectsMinsMaxes(DetectorObject *detector)
{
    connect(ui->detSetTempSpinBox,SIGNAL(valueChanged(double)), detector, SLOT(setIdealTemp(double)));
    connect(ui->detSetTempSpinBox, SIGNAL(valueChanged(double)), this, SLOT(setIdealTemp(double)));

    QString detType = detector->getDetectorType();

    if (detType == "Discharge Ionization")
    {
        ui->detSetTempSpinBox->setRange(0,100);
    }
    else if (detType == "Flame Ionization")
    {
        ui->detSetTempSpinBox->setRange(0,200);
    }
    else if (detType == "Thermal Conductivity")
    {
        ui->detSetTempSpinBox->setRange(0,300);
    }
    else if (detType == "Nitrogen Phosphorous")
    {
        ui->detSetTempSpinBox->setRange(0,400);
    }
    else if (detType == "Electron Capture")
    {
        ui->detSetTempSpinBox->setRange(0,500);
    }
    else if (detType == "Flame Photometric")
    {
        ui->detSetTempSpinBox->setRange(0,600);
    }
    else if (detType == "None")
    {
        ui->detSetTempSpinBox->setRange(0,0);
        ui->tempCheckBox->setCheckable(false);
    };
}

void DetectorWidget::setSlaveIDs(int tempSlaveID)
{
    m_tempSlaveID = tempSlaveID;
}

void DetectorWidget::on_actualTempButton_clicked()
{
    emit tempProcessValue(m_tempSlaveID);
}
