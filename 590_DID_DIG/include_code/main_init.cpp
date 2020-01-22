#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::setPOLDAC(int value)
{
    char* dev_dir_name;
    asprintf(&dev_dir_name, "%siio:device%d", IIO_DIR, POL_AMP_DAC_DEV);
    write_sysfs_int(POL_ADJ,dev_dir_name, value);
}

int MainWindow::initPolarization()
{
    /* Set polarization to 160V */
    printLog("Setting Polarization to 160V");
    int adcReading = 0;
    int value = 18000;
    int times = 0;    
    setPOLDAC(value);
    adcReading = getMAXADC(POL_IN);

    while ((adcReading > 1300 || adcReading < 1290) && times < 9)
    {
        double diff = 0;
        diff = 1300 - adcReading;
        diff = diff * (5/(double) 4095);
        diff = diff * ((double) 65535/5);
        value += diff;
        setPOLDAC(value);
        adcReading = getMAXADC(POL_IN);
        times++;
    }

    if (times == 10){
        printLog("Polarization not set! Max tries exceeded!");
        printLog("ADC Reading: " + QString::number(adcReading));
        setPOLDAC(18000);
        return 1;
    }

    return 0;
}

void MainWindow::initDacs()
{
    char* dev_dir_name;
/* Set Frontend zero to 2.5V, output to 0V */
    asprintf(&dev_dir_name, "%siio:device%d", IIO_DIR, POL_AMP_DAC_DEV);
    write_sysfs_int(FRONT_ZERO,dev_dir_name, 32768);
    printLog("Setting PGA Ref to 0V");

    asprintf(&dev_dir_name, "%siio:device%d", IIO_DIR, MASS_FLOW_DAC_DEV);
    write_sysfs_int(MASS_SAMPLE_OUT,dev_dir_name,0);
    write_sysfs_int(MASS_FUEL_OUT,dev_dir_name,0);
    write_sysfs_int(MASS_AIR_OUT,dev_dir_name,0);
    printLog("Set Flows to zero");
}

void MainWindow::initTemps()
{
    initTemp(MODBUS_SAMPLE_ID, "sampTemp_hi");
    initTemp(MODBUS_FID_ID, "fidTemp_hi");
}

void MainWindow::initTemp(int id, char *config)
{
    double curSetTemp;
    int configTemp;

    curSetTemp = readSetTemp(id);
    configTemp = appSettings->value(config).toInt();

    if ( curSetTemp != configTemp )
    {
        setTemp(id,configTemp * 10);
        curSetTemp = readSetTemp(id);
        printLog(QString("Setting Tempurature controller %1 to %2").arg(id).arg(curSetTemp));
    }
}

void MainWindow::init7176ADC()
{
    int channel;
    spi_init();

    if (! checkADCID())
        printLog("Invalid 24-bit ADC ID!");

    channel = appSettings->value("adc_freq").toInt();
    if(channel == 10)
        setChannel(0,true);
    else if (channel == 100)
        setChannel(1,true);

    printLog("Zeroing 24-bit ADC");
     if (zeroADC())
        printLog("24-bit ADC not zeroed! Max tries exceeded!");
     else
         printLog("24-bit ADC zeroed successfully.");

     ADC_OFFSET = read7176ADC() * (2.5/8388607) -2.5;

     printLog("ADC Offset: " + QString::number(ADC_OFFSET));
}


