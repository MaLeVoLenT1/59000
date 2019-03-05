#ifndef SETINITTEMP_H
#define SETINITTEMP_H

#include <QtGui/QDialog>
#include "ui_setinittemp.h"

class setinittemp : public QDialog
{
    Q_OBJECT

public:
    setinittemp(QWidget *parent = 0);
    ~setinittemp();

public slots:
	void write_init_temp(void);
	void readInitTemp(void);
	bool checkVentState(void);
	void stopMePlease(void);

protected:
	void keyReleaseEvent(QKeyEvent *event);

private:
    Ui::setinittempClass ui;
};

#endif // SETINITTEMP_H
