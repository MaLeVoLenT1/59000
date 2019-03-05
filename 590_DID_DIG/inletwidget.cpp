#include "inletwidget.h"
#include "ui_inletwidget.h"

InletWidget::InletWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InletWidget)
{
    ui->setupUi(this);

    ui->inletLabel->setVisible(false);
    ui->inletSetTempSpinBox->setEnabled(false);
    ui->inletSetTempSpinBox->setRange(0,450);

//    connect(ui->inletSetTempSpinBox,SIGNAL(valueChanged(double)),ui->inletActTempLCD,SLOT(display(double)));
    connect(ui->tempCheckBox, SIGNAL(clicked(bool)),ui->inletSetTempSpinBox,SLOT(setEnabled(bool)));
}

InletWidget::~InletWidget()
{
    delete ui;
}

void InletWidget::setIdealTemp(double tempSetpoint)
{
    ui->tempSetTestLabel->setText("(" + QString::number(tempSetpoint) + " , " +
                                  QString::number(m_tempSlaveID) + ")");

//    emit tempSetPoint(m_tempSlaveID, tempSetpoint);
}

void InletWidget::setActualTemp(int slaveID, int actualTemp)
{
    if (slaveID == m_tempSlaveID)
    {
    m_actualTemp = actualTemp;
    ui->inletActTempLCD->display(m_actualTemp);
    }
}

void InletWidget::setLabels(QString nameLabel, QString typeLabel)
{
    ui->nameLabel->setText("<font size=\"5\"><b><u>" + nameLabel + " Settings </u></b></font>");
    ui->typeLabel->setText("<font size=\"4\"><b><u>(" + typeLabel + ")</u></b></font>");
}

void InletWidget::setIsHeated(bool isHeated)
{
    ui->tempCheckBox->setEnabled(isHeated);
    ui->tempCheckBox->setChecked(false);
}

void InletWidget::setConnectsMinsMaxes(InletObject *inlet)
{
    connect(ui->inletSetTempSpinBox,SIGNAL(valueChanged(double)), inlet, SLOT(setIdealTemp(double)));
    connect(ui->inletSetTempSpinBox, SIGNAL(valueChanged(double)), this, SLOT(setIdealTemp(double)));

    QString inletType = inlet->getInletType();

    if (inletType == "Split/Splitless")
    {
        ui->inletSetTempSpinBox->setRange(0,100);
    }
    else if (inletType == "Cool on Column")
    {
        ui->inletSetTempSpinBox->setRange(0,200);
    }
    else if (inletType == "Purged Packed")
    {
        ui->inletSetTempSpinBox->setRange(0,300);
    }
    else if (inletType == "Prog. Temperature Vaporization")
    {
        ui->inletSetTempSpinBox->setRange(0,400);
    }
    else if (inletType == "Volatile Injection")
    {
        ui->inletSetTempSpinBox->setRange(0,500);
    }
    else if (inletType == "None")
    {
        ui->inletSetTempSpinBox->setRange(0,0);
        ui->tempCheckBox->setCheckable(false);
    };
    ui->inletSetTempSpinBox->setValue(0);

}

void InletWidget::setSlaveIDs(int tempSlaveID)
{
    m_tempSlaveID = tempSlaveID;
}

void InletWidget::on_actualTempButton_clicked()
{
    emit tempProcessValue(m_tempSlaveID);
}
void InletWidget::manualWriteTemp(void)
{
	int tempSetpoint;

	tempSetpoint = ui->inletSetTempSpinBox->value();
	emit tempSetPoint(m_tempSlaveID, tempSetpoint);
}
