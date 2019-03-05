#ifndef POLPOPUP_H
#define POLPOPUP_H

#include <QtGui/QDialog>
#include "ui_polpopup.h"
#include "detconfigure.h"

class polPopUp : public QDialog
{
    Q_OBJECT

public:
    polPopUp(QWidget *parent = 0);
    ~polPopUp();
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
    Ui::polPopUpClass ui;
};

#endif // POLPOPUP_H
