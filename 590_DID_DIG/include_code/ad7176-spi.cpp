#include <stdint.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <math.h>
#include <sys/ioctl.h>
#include <linux/types.h>
#include <linux/spi/spidev.h>
#include "ad7176-spi.h"
#include "iio-utils.h"
#include "constants.h"
#include <QDebug>

static uint8_t bits = 8;
static uint32_t speed = 500000;

int transfer(uint8_t *tx, uint8_t *rx, int size)
{
	int ret;
    int fd;

    struct spi_ioc_transfer tr = {
        tr.tx_buf = (unsigned long)tx,
        tr.rx_buf = (unsigned long)rx,
        tr.len = size,
        tr.delay_usecs = 0,
        tr.speed_hz = speed,
        tr.bits_per_word = bits,
    };

    fd = open(SPI_DEVICE, O_RDWR);
    ret = ioctl(fd, SPI_IOC_MESSAGE(1), &tr);
    close(fd);

    return ret;
}

bool spi_init()
{
	int ret = 0;
	int fd;

    uint8_t statMsg[] = {0x02, 0x00, 0x40};
    uint8_t rx[3] = {0,};
    uint8_t mode = 0;

    fd = open(SPI_DEVICE, O_RDWR);

	if (fd < 0)
        return false;

     /* spi mode */
    ret = ioctl(fd, SPI_IOC_WR_MODE, &mode);
	if (ret == -1)
        return false;

    ret = ioctl(fd, SPI_IOC_RD_MODE, &mode);
	if (ret == -1)
        return false;

     /* bits per word */
	ret = ioctl(fd, SPI_IOC_WR_BITS_PER_WORD, &bits);
	if (ret == -1)
        return false;

	ret = ioctl(fd, SPI_IOC_RD_BITS_PER_WORD, &bits);
	if (ret == -1)
        return false;

     /* max speed hz */
	ret = ioctl(fd, SPI_IOC_WR_MAX_SPEED_HZ, &speed);
	if (ret == -1)
        return false;

	ret = ioctl(fd, SPI_IOC_RD_MAX_SPEED_HZ, &speed);
	if (ret == -1)
        return false;
    close(fd);

    /* Enable appending of status to data read */
    ret = transfer(statMsg,rx,3);
    if (ret < 1)
        return false;

    return true;
}

bool checkADCID()
{
    int ret;
    uint8_t idMsg[] = {0x47, 0x00, 0x00};
    uint8_t rx[3] = {0,};
    ret = transfer(idMsg,rx,3);

    if (ret < 1)
        return false;

    /* ID is 0x0C 0x94 */
    if ( rx[1] == 12 && rx[2] == 148 )
        return true;

    return false;
}

int setChannel(int channel, bool swap)
{
    int ret;
    uint8_t rx[6] = {0,};

    /* Format [ch addr] [enable] [order] */
    uint8_t chanMsg[] = {0x10, 0x00, 0x01, 0x11, 0x00, 0x43};

    if (channel == 0)
    {
        chanMsg[1] = 0x80;
        chanMsg[4] = 0x00;
    }
    else if (channel == 1)
    {
        chanMsg[1] = 0x00;
        chanMsg[4] = 0x80;
    }

    if (swap)
    {
        chanMsg[2] = 0x20;
        chanMsg[5] = 0x62;
    }

    ret = transfer(chanMsg,rx,6);
    return ret;
}

int read7176ADC()
{
    int ret;
    int value;
    int sum = 0;
    uint8_t rx[5] = {0,};
    uint8_t readMsg[] = {0x44, 0x00, 0x00, 0x00, 0x00};
    /* sleep for 50ms */
    usleep(50000);

    for (int i=0; i<10; i++)
    {
        ret = transfer(readMsg,rx,5);
        if (ret < 5)
            return 0;

        value = (rx[1] << 16) + (rx[2] << 8) + rx[3];
        sum += value;
    }
    value = sum/10;
    return value;
}

int zeroADC()
{
    char* dev_dir_name;
    int countAdj = 0;
    int curCounts = 0;
    int reading = read7176ADC();
    int tries = 0;
    double voltage = (reading * (2.5/8388607)) - 2.5;
    asprintf(&dev_dir_name, "%siio:device%d", IIO_DIR, POL_AMP_DAC_DEV);

    while ((fabs(voltage) > .005) && tries < 100)
    {
        countAdj = fabs(voltage * (65535/5) * .4);
        curCounts = read_sysfs_posint(FRONT_ZERO,dev_dir_name) + countAdj;
        write_sysfs_int(FRONT_ZERO,dev_dir_name, curCounts);
        reading = read7176ADC();
        voltage = reading * (2.5/8388607) -2.5;
        tries++;

       // qDebug() << "adjust" << countAdj;
      //  qDebug() << "cur counts" << curCounts;
      //  qDebug() << "read" << reading;
       // qDebug() << "volt" << voltage;
    }

    if (tries == 100)
        return 1;

    return 0;
}
