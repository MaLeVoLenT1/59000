#ifndef DATA_H
#define DATA_H

#include <QtGui/QDialog>
#include "ui_data.h"
#include "mainwindow.h"// added because data has no conflicts with .h's that have mainwindow.h etc..

class data : public QDialog
{
    Q_OBJECT

public:
    data(QWidget *parent = 0);
    ~data();

public slots:
    void dlConfig(void);
	void saveDatalog(void);
	void getDatalog(void);
	void processDatalog_line(QByteArray line, unsigned int nex);
	void setSystemDateTime(void);
	void keyReleaseEvent(QKeyEvent *event);
private:
    Ui::dataClass ui;
};

#endif // DATA_H
