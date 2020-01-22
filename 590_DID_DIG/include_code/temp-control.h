#include <modbus/modbus.h>

#ifndef TEMPCONTROL_H
#define TEMPCONTROL_H

int readRegister(int addr, int slave, uint16_t *dest);
int readTemp(int addr, int slave);
double readCurTemp(int slave);
double readSetTemp(int slave);
int setRegister(int addr, int slave, int value);
int setTemp(int slave, int value);
modbus_t *initModbus(int slave);
int setRS485Mode();

#define RS485_PORT              "/dev/ttyO1"
#define MODBUS_FID_ID           1
#define MODBUS_SAMPLE_ID        2
#define MODBUS_METH_ID          3
#define MODBUS_COLUMN_ID        4

#define SERIAL_GPIO_CHIP        "gpiochip8"
#define RS232_POWER_OFFSET      10
#define RXDIS_OFFSET            24
#define RS232N485_SEL_OFFSET    25

#endif // TEMPCONTROL_H
