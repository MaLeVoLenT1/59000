#ifndef VOLTAGENUMPOPUP_H
#define VOLTAGENUMPOPUP_H

#include <QtGui/QDialog>
#include "ui_voltagenumpopup.h"
#include "detconfigure.h"

class voltageNumPopUp : public QDialog
{
    Q_OBJECT

public:
    voltageNumPopUp(QWidget *parent = 0);
    ~voltageNumPopUp();
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
   void num_clear(void);
private:
    Ui::voltageNumPopUpClass ui;
};

#endif // VOLTAGENUMPOPUP_H
