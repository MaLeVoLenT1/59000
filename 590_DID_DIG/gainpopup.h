#ifndef GAINPOPUP_H
#define GAINPOPUP_H

#include <QtGui/QDialog>
#include "ui_gainpopup.h"
#include "detconfigure.h"

class gainPopUp : public QDialog
{
    Q_OBJECT

public:
    gainPopUp(QWidget *parent = 0);
    ~gainPopUp();
    detConfigure transfer;
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
    Ui::gainPopUpClass ui;
};

#endif // GAINPOPUP_H
