#ifndef RAMPOVEN_BOARD_SECRUITY_H
#define RAMPOVEN_BOARD_SECRUITY_H

#include <QtGui/QDialog>
#include "ui_rampoven_board_secruity.h"

class rampoven_board_Secruity : public QDialog
{
    Q_OBJECT

public:
    rampoven_board_Secruity(QWidget *parent = 0);
    ~rampoven_board_Secruity();
public slots:
	void WriteDataButton(void);
	void ReadDataButton(void);

private:
    Ui::rampoven_board_SecruityClass ui;
};

#endif // RAMPOVEN_BOARD_SECRUITY_H
