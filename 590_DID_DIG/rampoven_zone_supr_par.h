#ifndef RAMPOVEN_ZONE_SUPR_PAR_H
#define RAMPOVEN_ZONE_SUPR_PAR_H

#include <QtGui/QDialog>
#include "ui_rampoven_zone_supr_par.h"

class rampoven_Zone_Supr_Par : public QDialog
{
    Q_OBJECT

public:
    rampoven_Zone_Supr_Par(QWidget *parent = 0);
    ~rampoven_Zone_Supr_Par();
public slots:
	void WriteDataButton(void);
	void ReadDataButton(void);
private:
    Ui::rampoven_Zone_Supr_ParClass ui;
};

#endif // RAMPOVEN_ZONE_SUPR_PAR_H
