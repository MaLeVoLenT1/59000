#ifndef TEMPPOPUP_H
#define TEMPPOPUP_H

#include <QtGui/QDialog>
#include "ui_temppopup.h"
#include "detconfigure.h"
#include "mainwindow.h"

class tempPopUp : public QDialog
{
    Q_OBJECT

public:
    tempPopUp(QWidget *parent = 0);
    ~tempPopUp();
    MainWindow setTempMW;
public slots:
    void processNumIn(void);
    QString popupNumInReturn(void);
    void num_1(void);
    void num_2(void);
    void num_3(void);
    void num_4(void);
    void num_5(void);
    void num_6(void);
    void num_7(void);
    void num_8(void);
    void num_9(void);
    void num_0(void);
    void num_minus(void);
    void num_period(void);
    void num_Clear(void);

private:
    Ui::tempPopUpClass ui;
};

#endif // TEMPPOPUP_H
