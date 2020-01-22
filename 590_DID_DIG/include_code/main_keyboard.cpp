#include "mainwindow.h"

void MainWindow::showKeypad(int x, bool decimal)
{
    QLineEdit *line = (QLineEdit *)sender();

    if ( !decimal )
        lineEditkeyboard->hide_decimal();
    lineEditkeyboard->setWindowFlags( Qt::Dialog | Qt::FramelessWindowHint );
    lineEditkeyboard->move(x,40);
    lineEditkeyboard->setLineEdit(line);
    lineEditkeyboard->show();
}

void MainWindow::on_alarm1LowLine_selectionChanged()
{
    showKeypad(210, true);
}

void MainWindow::on_alarm2LowLine_selectionChanged()
{
    showKeypad(210, true);
}

void MainWindow::on_alarm1Set_selectionChanged()
{
    showKeypad(20, true);
}

void MainWindow::on_alarm2Set_selectionChanged()
{
    showKeypad(20, true);
}

void MainWindow::on_airLine_selectionChanged()
{
    showKeypad(230, false);
}

void MainWindow::on_fuelLine_selectionChanged()
{
    showKeypad(230, false);
}

void MainWindow::on_sampleLine_selectionChanged()
{
    showKeypad(230, false);
}

void MainWindow::on_alarmLowSet0_selectionChanged()
{
    showKeypad(200, false);
}

void MainWindow::on_alarmLowSet1_selectionChanged()
{
    showKeypad(200, false);
}

void MainWindow::on_alarmHighSet2_selectionChanged()
{
    showKeypad(50, false);
}

void MainWindow::on_alarmHighSet3_selectionChanged()
{
    showKeypad(50, false);
}

void MainWindow::on_out_4ma_selectionChanged()
{
    showKeypad(200, true);
}

void MainWindow::on_out_20ma_selectionChanged()
{
    showKeypad(200, true);
}

void MainWindow::on_fidTemp_hi1_selectionChanged()
{
    showKeypad(165, false);
}

void MainWindow::on_methTemp_hi3_selectionChanged()
{
    showKeypad(165, false);
}

void MainWindow::on_sampTemp_hi2_selectionChanged()
{
    showKeypad(20, false);
}

void MainWindow::on_colTemp_hi4_selectionChanged()
{
    showKeypad(20, false);
}

void MainWindow::on_cal_zero_ppmSet_selectionChanged()
{
    showKeypad(205, true);
}

void MainWindow::on_cal_span_ppmSet_selectionChanged()
{
    showKeypad(205, true);
}

void MainWindow::on_statusLine_selectionChanged()
{
    showKeypad(200,false);
}

void MainWindow::on_logInterval_selectionChanged()
{
    showKeypad(20,false);
}
