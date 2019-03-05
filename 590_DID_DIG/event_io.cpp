#include "event_io.h"
//#include "addressbook.h"
#include "mainwindow.h"
#include "i2c--dev.h"
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/ioctl.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <QProcess>

extern unsigned int i2c_slaveAddr;
extern unsigned int value_1;
extern unsigned int value_2;
extern unsigned int value_3;
extern unsigned int value_4;
//extern __u8 readval[4];


event_io::event_io(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);
//	this->setAttribute(55, true);

	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(configIO()));
	connect(ui.IOapushButton, SIGNAL(clicked()), this, SLOT(IO1a()));
	connect(ui.IObpushButton, SIGNAL(clicked()), this, SLOT(IO1b()));
	connect(ui.IOapushButton_2, SIGNAL(clicked()), this, SLOT(IO2a()));
	connect(ui.IObpushButton_2, SIGNAL(clicked()), this, SLOT(IO2b()));
	connect(ui.IOapushButton_3, SIGNAL(clicked()), this, SLOT(IO3a()));
	connect(ui.IObpushButton_3, SIGNAL(clicked()), this, SLOT(IO3b()));
	connect(ui.IOapushButton_4, SIGNAL(clicked()), this, SLOT(IO4a()));
	connect(ui.IObpushButton_4, SIGNAL(clicked()), this, SLOT(IO4b()));
	connect(ui.IOapushButton_5, SIGNAL(clicked()), this, SLOT(IO5a()));
	connect(ui.IObpushButton_5, SIGNAL(clicked()), this, SLOT(IO5b()));
	connect(ui.IOapushButton_6, SIGNAL(clicked()), this, SLOT(IO6a()));
	connect(ui.IObpushButton_6, SIGNAL(clicked()), this, SLOT(IO6b()));
	connect(ui.IOapushButton_7, SIGNAL(clicked()), this, SLOT(IO7a()));
	connect(ui.IObpushButton_7, SIGNAL(clicked()), this, SLOT(IO7b()));
	connect(ui.IOapushButton_8, SIGNAL(clicked()), this, SLOT(IO8a()));// Ready Signal
	connect(ui.IObpushButton_8, SIGNAL(clicked()), this, SLOT(IO8b()));// Ready Signal
	connect(ui.IOapushButton_9, SIGNAL(clicked()), this, SLOT(IO9a()));
	connect(ui.IObpushButton_9, SIGNAL(clicked()), this, SLOT(IO9b()));
	connect(ui.IOapushButton_10, SIGNAL(clicked()), this, SLOT(IO10a()));
	connect(ui.IObpushButton_10, SIGNAL(clicked()), this, SLOT(IO10b()));
	connect(ui.IOapushButton_11, SIGNAL(clicked()), this, SLOT(IO11a()));
	connect(ui.IObpushButton_11, SIGNAL(clicked()), this, SLOT(IO11b()));
	connect(ui.IOapushButton_12, SIGNAL(clicked()), this, SLOT(IO12a()));
	connect(ui.IObpushButton_12, SIGNAL(clicked()), this, SLOT(IO12b()));
	connect(ui.IOapushButton_13, SIGNAL(clicked()), this, SLOT(IO13a()));// valve 8
	connect(ui.IObpushButton_13, SIGNAL(clicked()), this, SLOT(IO13b()));// valve 8
	connect(ui.IOapushButton_14, SIGNAL(clicked()), this, SLOT(IO14a()));// valve 7
	connect(ui.IObpushButton_14, SIGNAL(clicked()), this, SLOT(IO14b()));// valve 7
	connect(ui.IOapushButton_15, SIGNAL(clicked()), this, SLOT(IO15a()));// valve 6
	connect(ui.IObpushButton_15, SIGNAL(clicked()), this, SLOT(IO15b()));// valve 6
	connect(ui.IOapushButton_16, SIGNAL(clicked()), this, SLOT(IO16a()));// valve 5
	connect(ui.IObpushButton_16, SIGNAL(clicked()), this, SLOT(IO16b()));// valve 5
	connect(ui.IOapushButton_17, SIGNAL(clicked()), this, SLOT(IO17a()));// valve 4
	connect(ui.IObpushButton_17, SIGNAL(clicked()), this, SLOT(IO17b()));// valve 4
	connect(ui.IOapushButton_18, SIGNAL(clicked()), this, SLOT(IO18a()));// valve 3
	connect(ui.IObpushButton_18, SIGNAL(clicked()), this, SLOT(IO18b()));// valve 3
	connect(ui.IOapushButton_19, SIGNAL(clicked()), this, SLOT(IO19a()));// valve 2
	connect(ui.IObpushButton_19, SIGNAL(clicked()), this, SLOT(IO19b()));// valve 2
	connect(ui.IOapushButton_20, SIGNAL(clicked()), this, SLOT(IO20a()));// valve 1
	connect(ui.IObpushButton_20, SIGNAL(clicked()), this, SLOT(IO20b()));// valve 1
}

event_io::~event_io()
{

}

void event_io::configIO(void)// Configure all port as output
{

	MainWindow i2c;
	__u8 buff[3];//__16
	__u8 port_addr;
	unsigned int i;
	int fd;

	i2c_slaveAddr = 0x40;//0x45;//i2c_slaveAddr;i2c.
	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.

	port_addr = 0x09;// set 0x09 and 0x0A
	for(i=0;i<2;++i){
		buff[0] = port_addr;// command for P4-7
		buff[1] = 0x55;// Data to configure ports to output
		if (write(fd, buff, 2) != 2) {
				fprintf(stderr, "i2c_write_command: 0x09 0x0a Error on write: %s\n",
				strerror(errno));
			}
		++port_addr;
	}
//	i2c.close_device(fd);

	port_addr = 0x0E;// set 0x0E and 0x0F
	for(i=0;i<2;++i){
		buff[0] = port_addr;// command for P4-7
		buff[1] = 0x55;// Data to configure ports to output
		if (write(fd, buff, 2) != 2) {
				fprintf(stderr, "i2c_write_command: 0x0e 0x0f Error on write: %s\n",
				strerror(errno));
			}
		++port_addr;
	}
//	i2c.close_device(fd);

	port_addr = 0x0B;
	buff[0] = port_addr;
	buff[1] = 0x5F;
	if (write(fd, buff, 2) != 2) {
		fprintf(stderr, "i2c_write_command: 0x0b Error on write: %s\n",
		strerror(errno));
	}
//	i2c.close_device(fd);

	port_addr = 0x0C;
	buff[0] = port_addr;
	buff[1] = 0x55;
	if (write(fd, buff, 2) != 2) {
		fprintf(stderr, "i2c_write_command: 0x0c Error on write: %s\n",
		strerror(errno));
	}
//	i2c.close_device(fd);

	port_addr = 0x0D;
	buff[0] = port_addr;
	buff[1] = 0x5F;
	if (write(fd, buff, 2) != 2) {
		fprintf(stderr, "i2c_write_command: 0x0d Error on write: %s\n",
		strerror(errno));
	}
//	i2c.close_device(fd);

	port_addr = 0x04;
	buff[0] = port_addr;
	buff[1] = 0x01;
	if (write(fd, buff, 2) != 2) {
		fprintf(stderr, "i2c_write_command: Start Error on write: %s\n",
		strerror(errno));
	}
	i2c.close_device(fd);
}
void event_io::IO1a(void)// On I/O
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x2c;// command for P12
	 buff[1] = 0x01;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void event_io::IO1b(void)// Off I/O
{//MainWindow::
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x2c;// command for P12
	 buff[1] = 0x00;// Data to switch

	 fd = i2c.init_i2c();
	 i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void event_io::IO2a(void)// On I/O
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x2d;// command for P12
	 buff[1] = 0x01;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void event_io::IO2b(void)// Off I/O
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x2d;// command for P12
	 buff[1] = 0x00;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void event_io::IO3a(void)// On I/O
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x2e;// command for P12
	 buff[1] = 0x01;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void event_io::IO3b(void)// Off I/O
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x2e;// command for P12
	 buff[1] = 0x00;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void event_io::IO4a(void)// On I/O
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x2f;// command for P12
	 buff[1] = 0x01;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void event_io::IO4b(void)// Off I/O
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x2f;// command for P12
	 buff[1] = 0x00;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void event_io::IO5a(void)// On I/O
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x30;// command for P12
	 buff[1] = 0x01;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void event_io::IO5b(void)// Off I/O
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x30;// command for P12
	 buff[1] = 0x00;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void event_io::IO6a(void)// On I/O
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x31;// command for P12
	 buff[1] = 0x01;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void event_io::IO6b(void)// Off I/O
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x31;// command for P12
	 buff[1] = 0x00;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void event_io::IO7a(void)// On I/O
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x32;// command for P12
	 buff[1] = 0x01;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void event_io::IO7b(void)// Off I/O
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x32;// command for P12
	 buff[1] = 0x00;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void event_io::IO8a(void)// On I/O READY Signal
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x33;// command for P
	 buff[1] = 0x01;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void event_io::IO8b(void)// Off I/O READY SIGNAL
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x33;// command for P12
	 buff[1] = 0x00;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void event_io::IO9a(void)// On I/O
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x34;// command for P12
	 buff[1] = 0x01;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void event_io::IO9b(void)// Off I/O
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x34;// command for P12
	 buff[1] = 0x00;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void event_io::IO10a(void)// On I/O
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x35;// command for P12
	 buff[1] = 0x01;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void event_io::IO10b(void)// Off I/O
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x35;// command for P12
	 buff[1] = 0x00;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void event_io::IO11a(void)// On I/O
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x36;// command for P12
	 buff[1] = 0x01;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void event_io::IO11b(void)// Off I/O
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x36;// command for P12
	 buff[1] = 0x00;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void event_io::IO12a(void)// On I/O
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x37;// command for P12
	 buff[1] = 0x01;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void event_io::IO12b(void)// Off I/O
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x37;// command for P12
	 buff[1] = 0x00;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void event_io::IO13a(void)// On I/O
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x38;// command for P12
	 buff[1] = 0x01;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void event_io::IO13b(void)// Off I/O
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x38;// command for P12
	 buff[1] = 0x00;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void event_io::IO14a(void)// On I/O
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x39;// command for P12
	 buff[1] = 0x01;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void event_io::IO14b(void)// Off I/O
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x39;// command for P12
	 buff[1] = 0x00;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void event_io::IO15a(void)// On I/O
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x3a;// command for P12
	 buff[1] = 0x01;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void event_io::IO15b(void)// Off I/O
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x3a;// command for P12
	 buff[1] = 0x00;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void event_io::IO16a(void)// On I/O
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x3b;// command for P12
	 buff[1] = 0x01;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void event_io::IO16b(void)// Off I/O
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x3b;// command for P12
	 buff[1] = 0x00;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void event_io::IO17a(void)// On I/O
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x3c;// command for P12
	 buff[1] = 0x01;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void event_io::IO17b(void)// Off I/O
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x3c;// command for P12
	 buff[1] = 0x00;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void event_io::IO18a(void)// On I/O
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x3d;// command for P12
	 buff[1] = 0x01;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void event_io::IO18b(void)// Off I/O
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	buff[0] = 0x3d;// command for P12
	 buff[1] = 0x00;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.

	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void event_io::IO19a(void)// On I/O
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x3e;// command for P12
	 buff[1] = 0x01;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void event_io::IO19b(void)// Off I/O
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x3e;// command for P12
	 buff[1] = 0x00;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void event_io::IO20a(void)// On I/O
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x3f;// command for P12
	 buff[1] = 0x01;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
void event_io::IO20b(void)// Off I/O
{
	MainWindow i2c;
	__u8 buff[3];//__16
	int fd;

	 buff[0] = 0x3f;// command for P12
	 buff[1] = 0x00;// Data to switch

	fd = i2c.init_i2c();
	i2c.test_set_slave(fd, i2c_slaveAddr);//addr = 0x45;i2c.
	if (write(fd, buff, 2) != 2) {
			fprintf(stderr, "i2c_write_command: Error on write: %s\n",
			strerror(errno));
		}
	i2c.close_device(fd);
}
