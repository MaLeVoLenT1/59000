#ifndef RAMPOVENCONTROLPANEL_H
#define RAMPOVENCONTROLPANEL_H

#include <QtGui/QWidget>
#include "ui_rampovencontrolpanel.h"

class RampOvenControlPanel : public QWidget
{
    Q_OBJECT

public:
    RampOvenControlPanel(QWidget *parent = 0);
    ~RampOvenControlPanel();

private:
    Ui::RampOvenControlPanelClass ui;
};

#endif // RAMPOVENCONTROLPANEL_H
