#ifndef SETTEMP_H
#define SETTEMP_H

#include <QtGui/QDialog>
#include "ui_settemp.h"
#include "mainwindow.h"

class setTemp : public QDialog
{
    Q_OBJECT

public:
    setTemp(QWidget *parent = 0);
    ~setTemp();
    MainWindow mw;
public slots:
	void readTemp(void);
	void writeTemp(void);
	void setDetTemp(double temp);
	void setSampTeeTemp(double temp);
	void setMethTemp(double temp);
	void setColTemp(double temp);
	void processTemp_line(QByteArray line, unsigned int nex);
	void saveTemp(void);
	void getTemp(void);
protected:
    void keyReleaseEvent(QKeyEvent *e);

private:
    Ui::setTempClass ui;
};

#endif // SETTEMP_H
