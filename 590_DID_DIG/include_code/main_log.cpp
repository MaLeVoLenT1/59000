#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::on_btnLog_clicked()
{
    bool log = appSettings->value("log").toBool();

    appSettings->setValue("log",!log);
    appSettings->sync();
    logEnable();
}

void MainWindow::on_serialLogBox_clicked()
{
    appSettings->setValue("con_log",ui->serialLogBox->isChecked());
    appSettings->sync();
}

void MainWindow::on_usbLogBox_clicked()
{
    appSettings->setValue("usb_log",ui->usbLogBox->isChecked());
    appSettings->sync();
}

void MainWindow::on_btnData_clicked()
{
    ui->logInterval->setText(appSettings->value("log_interval").toString());
    ui->serialLogBox->setChecked(appSettings->value("con_log").toBool());
    ui->usbLogBox->setChecked(appSettings->value("usb_log").toBool());
    logEnable();
    ui->mainPane->setCurrentWidget(ui->logPage);
}

void MainWindow::logEnable()
{
    if (appSettings->value("log").toBool()){
        ui->btnLog->setText("Logging: ON");
        ui->serialLogBox->setEnabled(true);
        if (QFileInfo("/dev/sda1").exists())
            ui->usbLogBox->setEnabled(true);
        else
            ui->usbLogBox->setEnabled(false);
    }
    else{
        ui->btnLog->setText("Logging: OFF");
        ui->usbLogBox->setEnabled(false);
        ui->serialLogBox->setEnabled(false);
    }
}

void MainWindow::log_interval_changed(const QString &arg1)
{
    if (((arg1.length() > 0) && (arg1[arg1.length() - 1] == '\n')) || arg1.length() == 3)
    {
        QString value = arg1;
        if (value[value.length() - 1] == '\n')
            value.remove(value.length()-1,value.length());

        set_setting("log_interval", value);
    }
}
