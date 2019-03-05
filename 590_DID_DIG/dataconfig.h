#ifndef DATACONFIG_H
#define DATACONFIG_H

#include <QtGui/QDialog>
#include "ui_dataconfig.h"

class dataConfig : public QDialog
{
    Q_OBJECT

public:
    dataConfig(QWidget *parent = 0);
    ~dataConfig();
	void keyReleaseEvent(QKeyEvent *e);
	void saveDatalog(void);
	void getDatalog(void);
	void processDatalog_line(QByteArray line, unsigned int nex);
	void setSystemDateTime(void);

private:
    Ui::dataConfigClass ui;
};

#endif // DATACONFIG_H
