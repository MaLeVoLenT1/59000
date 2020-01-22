#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <asm-generic/ioctls.h>
#include "temp-control.h"
#include "include/serial.h"
#include "gpio-utils.h"

int readRegister(int addr, int slave, uint16_t *values)
{
    modbus_t *ctx = NULL;
    int rc;

    ctx = initModbus(slave);
    rc = modbus_read_registers(ctx, addr, 2, values);

    /* Close the connection */
    modbus_close(ctx);
    modbus_free(ctx);

    return 0;
}

int readTemp(int slave, uint16_t *values)
{
    readRegister(1000,slave,values);
    return 0;
}

double readCurTemp(int slave)
{
    uint16_t temp_reg[2];
    readTemp(slave, temp_reg);
    return (double)temp_reg[0]/10;
}

double readSetTemp(int slave)
{
    uint16_t temp_reg[2];
    readTemp(slave, temp_reg);
    return (double)temp_reg[1]/10;
}

int setTemp(int slave, int value)
{
    setRegister(1001,slave,value);
}

int setRegister(int addr, int slave, int value)
{
    modbus_t *ctx = NULL;
    int rc;

    ctx = initModbus(slave);

    rc = modbus_write_register(ctx,addr,value);
    /* Close the connection */
    modbus_close(ctx);
    modbus_free(ctx);

    return 0;
}

modbus_t *initModbus(int slave)
{
    int rc;
    modbus_t *ctx = NULL;
    ctx = modbus_new_rtu(RS485_PORT, 9600, 'N', 8, 1);

    if (ctx == NULL) {
        fprintf(stderr, "Unable to allocate libmodbus context\n");
        return NULL;
    }
    //modbus_set_debug(ctx, TRUE);

    modbus_set_slave(ctx, slave);
    modbus_rtu_set_serial_mode(ctx, MODBUS_RTU_RS485);
    rc = modbus_set_response_timeout(ctx,1,0);

    if (modbus_connect(ctx) == -1) {
        fprintf(stderr, "Connection failed: %s\n", modbus_strerror(errno));
        modbus_free(ctx);
        return NULL;
    }
    return ctx;
}

int setRS485Mode(){
    struct serial_rs485 rs485conf;
    int fd;

    gpiotools_set(SERIAL_GPIO_CHIP,RS232_POWER_OFFSET, 0);
    gpiotools_set(SERIAL_GPIO_CHIP,RXDIS_OFFSET, 0);
    gpiotools_set(SERIAL_GPIO_CHIP,RS232N485_SEL_OFFSET, 1);

    fd = open (RS485_PORT, O_RDWR);
    if (fd < 0) {
        printf("Error: Cannot open: %s\n", RS485_PORT);
        return -1;
    }

    if (ioctl (fd, TIOCGRS485, &rs485conf) < 0) {
        printf("Error: TIOCGRS485 ioctl not supported.\n");
        return -1;
    }

    rs485conf.flags |= SER_RS485_ENABLED;
    rs485conf.delay_rts_before_send = 0;
    rs485conf.delay_rts_after_send = 0;

    if (ioctl (fd, TIOCSRS485, &rs485conf) < 0) {
        printf("Error: TIOCGRS485 ioctl not supported.\n");
        return -1;
    }

    close (fd);
    return 0;
}
