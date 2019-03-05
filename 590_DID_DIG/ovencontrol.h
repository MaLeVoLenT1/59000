#ifndef OVENCONTROL_H
#define OVENCONTROL_H

#include "detectorwidget.h"
#include <QProcess>
#include <QtGui/QDialog>
#include "ui_ovencontrol.h"
#include "mainwindow.h"//1/9/14

class MainWindow;// 1/11/14
class QAction;

class ConfigureDialog;
class ConfigureDialog2;

class ObjectMgmt;

class OvenControl : public QDialog
{
    Q_OBJECT

public:
    OvenControl(QWidget *parent = 0);
    ~OvenControl();

//    double* writeZoneRegParameters(modbus_t *ctx, int addr, int nb, uint16_t *dest);//OvenControl::
//    void ZoneRampSoakParameters(void);
public:
//    MainWindow *m_MainWindow;//1/15/14

    double recipeOptionsValue() { return ui.recipeOptionSpinBox->value();}
    double ss_ramp_timeValue() { return ui.singleStepRampTimeSpinBox->value();}
    float holdbackValue() { return ui.holdBackSpinBox->value();}
    double termination_stateValue() {return ui.terminationStateSpinBox->value();}
    double recycle_numberValue() {return ui.recycleNumberSpinBox->value();}
    bool resume_from_pfValue() { return ui.resumepowerfailureCheckBox->isChecked();}

    double ramp_times_1_value() { return ui.rampTime1SpinBox->value();}
    double ramp_times_2_value() { return ui.rampTime2SpinBox->value();}
    double ramp_times_3_value() { return ui.rampTime3SpinBox->value();}
    double ramp_times_4_value() { return ui.rampTime4SpinBox->value();}
    double ramp_times_5_value() { return ui.rampTime5SpinBox->value();}
    double ramp_times_6_value() { return ui.rampTime6SpinBox->value();}
    double ramp_times_7_value() { return ui.rampTime7SpinBox->value();}
    double ramp_times_8_value() { return ui.rampTime8SpinBox->value();}

    double ramp_events_1_value() { return ui.ovenSetRampE1SpinBox->value();}
    double ramp_events_2_value() { return ui.ovenSetRampE2SpinBox->value();}
    double ramp_events_3_value() { return ui.ovenSetRampE3SpinBox->value();}
    double ramp_events_4_value() { return ui.ovenSetRampE4SpinBox->value();}
    double ramp_events_5_value() { return ui.ovenSetRampE5SpinBox->value();}
    double ramp_events_6_value() { return ui.ovenSetRampE6SpinBox->value();}
    double ramp_events_7_value() { return ui.ovenSetRampE7SpinBox->value();}
    double ramp_events_8_value() { return ui.ovenSetRampE8SpinBox->value();}

    double soak_levels_1_value() { return ui.ovenSetSoakL1SpinBox->value();}
    double soak_levels_2_value() { return ui.ovenSetSoakL2SpinBox->value();}
    double soak_levels_3_value() { return ui.ovenSetSoakL3SpinBox->value();}
    double soak_levels_4_value() { return ui.ovenSetSoakL4SpinBox->value();}
    double soak_levels_5_value() { return ui.ovenSetSoakL5SpinBox->value();}
    double soak_levels_6_value() { return ui.ovenSetSoakL6SpinBox->value();}
    double soak_levels_7_value() { return ui.ovenSetSoakL7SpinBox->value();}
    double soak_levels_8_value() { return ui.ovenSetSoakL8SpinBox->value();}

    double soak_times_1_value() { return ui.ovenSetSoakT1SpinBox->value();}
    double soak_times_2_value() { return ui.ovenSetSoakT2SpinBox->value();}
    double soak_times_3_value() { return ui.ovenSetSoakT3SpinBox->value();}
    double soak_times_4_value() { return ui.ovenSetSoakT4SpinBox->value();}
    double soak_times_5_value() { return ui.ovenSetSoakT5SpinBox->value();}
    double soak_times_6_value() { return ui.ovenSetSoakT6SpinBox->value();}
    double soak_times_7_value() { return ui.ovenSetSoakT7SpinBox->value();}
    double soak_times_8_value() { return ui.ovenSetSoakT8SpinBox->value();}

    double soak_events_1_value() { return ui.ovenSetSoakE1SpinBox->value();}
    double soak_events_2_value() { return ui.ovenSetSoakE2SpinBox->value();}
    double soak_events_3_value() { return ui.ovenSetSoakE3SpinBox->value();}
    double soak_events_4_value() { return ui.ovenSetSoakE4SpinBox->value();}
    double soak_events_5_value() { return ui.ovenSetSoakE5SpinBox->value();}
    double soak_events_6_value() { return ui.ovenSetSoakE6SpinBox->value();}
    double soak_events_7_value() { return ui.ovenSetSoakE7SpinBox->value();}
    double soak_events_8_value() { return ui.ovenSetSoakE8SpinBox->value();}

public slots:
//    void sendRampParameters(void);
	double readEmac(double addr);

	void RN(double valu);
	void TS(double valu);
	void RO(double valu);
	void SS(double valu);
	void HB(double valu);
	void RP(bool valu);

	void level1_RT(double valu);
	void level2_RT(double valu);
	void level3_RT(double valu);
	void level4_RT(double valu);
	void level5_RT(double valu);
	void level6_RT(double valu);
	void level7_RT(double valu);
	void level8_RT(double valu);

	void level1_RE(double valu);
	void level2_RE(double valu);
	void level3_RE(double valu);
	void level4_RE(double valu);
	void level5_RE(double valu);
	void level6_RE(double valu);
	void level7_RE(double valu);
	void level8_RE(double valu);

	void level1_SL(double valu);
	void level2_SL(double valu);
	void level3_SL(double valu);
	void level4_SL(double valu);
	void level5_SL(double valu);
	void level6_SL(double valu);
	void level7_SL(double valu);
	void level8_SL(double valu);

	void level1_ST(double valu);
	void level2_ST(double valu);
	void level3_ST(double valu);
	void level4_ST(double valu);
	void level5_ST(double valu);
	void level6_ST(double valu);
	void level7_ST(double valu);
	void level8_ST(double valu);

	void level1_SE(double valu);
	void level2_SE(double valu);
	void level3_SE(double valu);
	void level4_SE(double valu);
	void level5_SE(double valu);
	void level6_SE(double valu);
	void level7_SE(double valu);
	void level8_SE(double valu);

//	void readZoneRegParameters(modbus_t *ctx, int addr, int nb, uint16_t *dest);
    void ReadZoneRampSoakParameters(void);
    void test_slotwtrj(double temp);
    void test_slotwtrj2(void);
    void test_slotwtrj3(int slaveID, int tempPV);

    void comm(void);
    void inputparam(void);
    void run_recipe(void);
    void write_recipe(void);
    void runrecipe_error(void);
    void setSlaveIdD(double valu);
    void runMonitor(void);
    void abortRun(void);
    void zoneDisplay(void);
    void ro_rzDamping(void);
    void outputparam(void);
    void zoneControl(void);
	void zSupar(void);
	void zCalibrate(void);
	void zBoardSecurity(void);
	void zAlarmPar(void);
	void zCalPar(void);
	void zoneRegisters(void);
	void r0SetInitTemp(void);
	void startMonitor(void);
	void resetZone(void);

public: signals:
	void test_sigwtrj(double);// 1/09/14
	void tempProcessValue(int slaveID, int tempPV);//1/14/2014
	void tempSetPoint(int slaveID, int tempSP);//1/15/14
	void recipeWrites(int slaveID, double addr, int valu);

protected:
	void keyReleaseEvent(QKeyEvent *event);

private:
    Ui::OvenControlClass ui;
    MainWindow *m_MainWindow;//1/9/14
    ObjectMgmt *objectMngr;
    modbus_t* m_modbus;
};

#endif // OVENCONTROL_H
