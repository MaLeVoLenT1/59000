#ifndef EVENT_IO_H
#define EVENT_IO_H

#include <QtGui/QDialog>
#include "ui_event_io.h"

class event_io : public QDialog
{
    Q_OBJECT

public:
    event_io(QWidget *parent = 0);
    ~event_io();

public slots:

	void configIO(void);
	void IO1a(void);
	void IO1b(void);
	void IO2a(void);
	void IO2b(void);
	void IO3a(void);
	void IO3b(void);
	void IO4a(void);
	void IO4b(void);
	void IO5a(void);
	void IO5b(void);
	void IO6a(void);
	void IO6b(void);
	void IO7a(void);
	void IO7b(void);
	void IO8a(void);
	void IO8b(void);
	void IO9a(void);
	void IO9b(void);
	void IO10a(void);
	void IO10b(void);
	void IO11a(void);
	void IO11b(void);
	void IO12a(void);
	void IO12b(void);
	void IO13a(void);
	void IO13b(void);
	void IO14a(void);
	void IO14b(void);
	void IO15a(void);
	void IO15b(void);
	void IO16a(void);
	void IO16b(void);
	void IO17a(void);
	void IO17b(void);
	void IO18a(void);
	void IO18b(void);
	void IO19a(void);
	void IO19b(void);
	void IO20a(void);
	void IO20b(void);

private:
    Ui::event_ioClass ui;
};

#endif // EVENT_IO_H
