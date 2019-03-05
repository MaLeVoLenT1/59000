#ifndef READFLOW_H
#define READFLOW_H

#include <QtGui/QDialog>
#include "ui_readflow.h"

class readFlow : public QDialog
{
    Q_OBJECT

public:
    readFlow(QWidget *parent = 0);
    ~readFlow();
public slots:
	void flowMeter(void);
	void flowConfig(void);

protected:
	void keyReleaseEvent(QKeyEvent *event);

private:
    Ui::readFlowClass ui;
};

#endif // READFLOW_H
