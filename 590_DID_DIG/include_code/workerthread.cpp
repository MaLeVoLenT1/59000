#include "workerthread.h"
#include "constants.h"
#include "iio-utils.h"
#include "temp-control.h"
#include "gpio-utils.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdio.h>
#include <unistd.h>
#include <QDebug>
#include <QSettings>

WorkerThread::WorkerThread(QObject *parent)
    : QThread(parent)
{
    restart = false;
}

void WorkerThread::run()
{
    QSettings s("/home/root/Settings/Gow-Mac/2300.conf", QSettings::NativeFormat);
    forever
    {
        error = false;
        errNum = 0;

        sampleCurTemp = readCurTemp(MODBUS_SAMPLE_ID);
        //sampleSetTemp = readSetTemp(MODBUS_SAMPLE_ID);
        sampleSetTemp = s.value("sampTemp_hi").toInt();
        fidCurTemp = readCurTemp(MODBUS_FID_ID);
        //fidSetTemp = readSetTemp(MODBUS_FID_ID);
        fidSetTemp = s.value("fidTemp_hi").toInt();

        int max = s.value("airFlow_hi").toInt();
        airFlow = (getMAXADC(MASS_AIR_IN)/(double)4095) * max;

        max = s.value("fuelFlow_hi").toInt();
        fuelFlow = (getMAXADC(MASS_FUEL_IN)/(double)4095) * max;

        max = s.value("sampFlow_hi").toInt();
        sampleFlow = (getMAXADC(MASS_SAMPLE_IN)/(double)4095) * max;

        sleep(1);

        if ((sampleCurTemp < sampleSetTemp - 1) || (sampleCurTemp > sampleSetTemp + 1) ||
               (fidCurTemp < fidSetTemp - 1) || (fidCurTemp > fidSetTemp + 1))
        {
            error = true;
            errNum |= 1 << 2;
        }

        if ( gpiotools_get(INTERFACE_GPIO_CHIP,FLAME_READ))
        {
            errNum |= 1 << 3;
        }

        /*else if ( ! gpiotools_get(INTERFACE_GPIO_CHIP,CAL_IN))
            emit workDone(true, 3);*/

        emit workDone(error,errNum);

        /*char* dev_dir_name;
        int adcReading = 0;
        int ret = 0;
        asprintf(&dev_dir_name, "%siio:device%d", IIO_DIR, MAX_ADC_DEV);

        //sleep(5);
        for( int i=0; i<10; i++)
        {
            ret = read_sysfs_posint(POL_IN,dev_dir_name);
           // qDebug() << ret;
            if( i > 1)
                adcReading += ret;
        }*/

        //emit workDone(false, 0);
    }
}

WorkerThread::~WorkerThread()
{

}
