#ifndef RAMPINDICATOR_H
#define RAMPINDICATOR_H

#include <QDialog>

namespace Ui {
class rampIndicator;
}

class rampIndicator : public QDialog
{
    Q_OBJECT
    
public:
    explicit rampIndicator(QWidget *parent = 0);
    ~rampIndicator();
    
private:
    Ui::rampIndicator *ui;
};

#endif // RAMPINDICATOR_H
