#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include "keyboard/keyboard.h"
#include "busy/busyindicator.h"
#include "workerthread.h"
#include "gpio-utils.h"
#include "constants.h"
#include "iio-utils.h"
#include "temp-control.h"
#include "ad7176-spi.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    bool READY;
    bool FLAME;
    double ADC_OFFSET;
    QSettings *appSettings;

private slots:

    void updateClock();
    void threadComplete(bool error, int errNum);
    void init();
    void set_range(int id);

    void on_backButton_clicked();
    void on_homeButton_clicked();
    void labelIndicator(QLabel *label, bool state);
    void on_mainPane_currentChanged(int currentIndex);

    void on_btnTemps_clicked();
    void on_btnFlows_clicked();
    void on_btnH2_clicked();
    void on_btnFuelMix_clicked();

    void on_btnO2Base_clicked();
    void on_btnAirBase_clicked();
    void on_btnH2Base_clicked();
    void on_btnOtherBase_clicked();
    void setSampleFlows(QString baseGas);
    void on_btnRange_clicked();
    void on_btnAutoSetup_clicked();

    void on_btnOutput_clicked();
    void on_btnCal_clicked();
    void on_btnSetup_clicked();

    void on_btnZeroGas_clicked();
    void on_btnSpanGas_clicked();
    void on_btnLog_clicked();
    void on_btnData_clicked();
    void logEnable();

    void on_alarmFIDButton_clicked();
    void on_alarmMethButton_clicked();
    void readAlarms();

    void on_btnRun_clicked();
    void on_btnIgnite_clicked();
    void showKeypad(int x, bool decimal);

    void on_fidTemp_hi1_selectionChanged();
    void on_methTemp_hi3_selectionChanged();
    void on_sampTemp_hi2_selectionChanged();
    void on_colTemp_hi4_selectionChanged();

    void on_alarmButton_clicked();
    void on_alarm1LowLine_selectionChanged();
    void on_alarm1OnBox_clicked();
    void on_alarm2OnBox_clicked();

    void alarms_changed(const QString &arg1);
    void temps_changed(const QString &arg1);
    void set_setting(QString setting, QString value);

    void on_alarm2LowLine_selectionChanged();

    void on_alarm1Set_selectionChanged();
    void on_alarm2Set_selectionChanged();

    void on_airLine_selectionChanged();
    void on_fuelLine_selectionChanged();
    void on_sampleLine_selectionChanged();

    void flows_changed(const QString &arg1);

    void on_alarmLowSet0_selectionChanged();
    void on_alarmLowSet1_selectionChanged();
    void on_alarmHighSet2_selectionChanged();
    void on_alarmHighSet3_selectionChanged();
    void tempAlarms_changed(const QString &arg1);

    void on_out_4ma_selectionChanged();
    void on_out_20ma_selectionChanged();
    void output_changed(const QString &arg1);

    void on_cal_zero_ppmSet_selectionChanged();
    void on_cal_span_ppmSet_selectionChanged();
    void fid_timeout();

    void on_statusLine_selectionChanged();
    void status_changed(const QString &arg1);

    void on_logInterval_selectionChanged();
    void log_interval_changed(const QString &arg1);

    void on_serialLogBox_clicked();
    void on_usbLogBox_clicked();

    void set_gain(int id);

    void on_btnRangeAuto_clicked();
    void printLog(QString message);

    void setPOLDAC(int value);
    int initPolarization();
    void initDacs();
    void initTemp(int id, char *config);
    void initTemps();
    void init7176ADC();
    void updateStatus(int status);

    void readTemps();
    int setFlowsDAC(int flow, const char *channel, QString gas, const char* adcChannel);
    void readFlows();
    void runTimerTimeout();
    void setBaseGas();
    void setTempLabels();
    void switchSampleGas(int gas);

    void on_btnZeroZero_clicked();
    void on_btnZeroSpan_clicked();
    void mydelay(int millisecondsWait);

private:
    Ui::MainWindow *ui;
    QTimer *clockTimer;
    QTimer *tempsTimer;
    QTimer *flowsTimer;
    QTimer *runTimer;
    WorkerThread *workThread;
    QList<int> pageList;
    Keyboard *lineEditkeyboard;

};

#endif // MAINWINDOW_H
