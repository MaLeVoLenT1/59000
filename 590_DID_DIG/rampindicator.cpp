#include "rampindicator.h"
#include "ui_rampindicator.h"

rampIndicator::rampIndicator(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rampIndicator)
{
    ui->setupUi(this);
}

rampIndicator::~rampIndicator()
{
    delete ui;
}
