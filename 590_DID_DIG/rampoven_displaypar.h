#ifndef RAMPOVEN_DISPLAYPAR_H
#define RAMPOVEN_DISPLAYPAR_H

#include <QtGui/QDialog>
#include "ui_rampoven_displaypar.h"

class rampoven_displaypar : public QDialog
{
    Q_OBJECT

public:
    rampoven_displaypar(QWidget *parent = 0);
    ~rampoven_displaypar();

public slots:
	void ro_disPar_write_recipe(void);
	void ro_dispPar_ReadZoneRampSoakParameters(void);

private:
    Ui::rampoven_displayparClass ui;
};

#endif // RAMPOVEN_DISPLAYPAR_H
