/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Fri Feb 21 09:30:39 2020
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      56,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      50,   35,   11,   11, 0x05,
      76,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      95,   90,   11,   11, 0x0a,
     132,  117,   11,   11, 0x0a,
     181,  159,   11,   11, 0x0a,
     225,  217,   11,   11, 0x0a,
     248,  217,  244,   11, 0x0a,
     280,  267,  244,   11, 0x0a,
     305,  267,  244,   11, 0x0a,
     324,   11,   11,   11, 0x0a,
     349,  345,   11,   11, 0x0a,
     375,  371,   11,   11, 0x0a,
     399,  371,   11,   11, 0x0a,
     424,   11,   11,   11, 0x0a,
     459,  450,  442,   11, 0x0a,
     498,  481,   11,   11, 0x0a,
     527,   11,  244,   11, 0x0a,
     546,  538,  244,   11, 0x0a,
     577,  569,  244,   11, 0x0a,
     613,  602,  244,   11, 0x0a,
     649,  642,  244,   11, 0x0a,
     674,  642,  244,   11, 0x0a,
     711,  700,  244,   11, 0x0a,
     740,  700,  244,   11, 0x0a,
     771,  700,  244,   11, 0x0a,
     802,  602,  244,   11, 0x0a,
     836,  833,  244,   11, 0x0a,
     861,  854,   11,   11, 0x0a,
     886,  833,   11,   11, 0x0a,
     907,  833,   11,   11, 0x0a,
     927,  833,   11,   11, 0x0a,
     959,  947,  244,   11, 0x0a,
     999,  983,  976,   11, 0x0a,
    1021,  983,  244,   11, 0x0a,
    1045,   11,   11,   11, 0x0a,
    1068, 1062, 1057,   11, 0x0a,
    1083,   11,   11,   11, 0x0a,
    1094,   11,   11,   11, 0x0a,
    1125, 1106,   11,   11, 0x0a,
    1136,   11,   11,   11, 0x0a,
    1149,   11,   11,   11, 0x0a,
    1164,   11,   11,   11, 0x0a,
    1184,   11,   11,   11, 0x0a,
    1204,   11,   11,   11, 0x0a,
    1223,   11,   11,   11, 0x0a,
    1243,   11,   11,   11, 0x0a,
    1251,   11,   11,   11, 0x08,
    1270,   11,   11,   11, 0x08,
    1292,   11,   11,   11, 0x08,
    1312,   11,   11,   11, 0x08,
    1332,   11,   11,   11, 0x08,
    1350, 1344,   11,   11, 0x08,
    1381,   11,   11,   11, 0x08,
    1412,   11,   11,   11, 0x08,
    1429,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0listViewActiveRow(int)\0"
    "slaveID,tempPV\0tempProcessValue(int,int)\0"
    "testMainSig()\0temp\0changeSerialPort(int)\0"
    "slaveID,tempSP\0writeTempSetpoint(int,int)\0"
    "slaveID,addr,recipeSP\0"
    "writeRecipeSetpoint(int,int,double)\0"
    "slaveID\0readTempValue(int)\0int\0"
    "readTrueValue(int)\0slaveID,addr\0"
    "readRecipeValue(int,int)\0readRetry(int,int)\0"
    "sendRampParameters()\0a,b\0testMainSlot(int,int)\0"
    "txt\0setCollumnTemp(QString)\0"
    "setDetectorTemp(QString)\0runOvenCommands()\0"
    "QString\0Filename\0readFromFile(QString)\0"
    "Filename,Content\0writeToFile(QString,QString)\0"
    "init_i2c()\0fd,addr\0i2c_set_slave(int,int)\0"
    "fd,byte\0i2c_write_byte(int,__u8)\0"
    "fd,reg,cmd\0i2c_write_cmd(int,__u8,__u8)\0"
    "fd,val\0i2c_read_byte(int,__u8*)\0"
    "i2c_read_byte4(int,__u8*)\0fd,val,reg\0"
    "i2c_read_reg(int,__u8*,__u8)\0"
    "i2c_read_reg2(int,__u16*,__u8)\0"
    "i2c_read_reg4(int,__u16*,__u8)\0"
    "i2c_write_cmd2(int,__u8,__u16)\0fd\0"
    "close_device(int)\0fd,adr\0"
    "test_set_slave(int,uint)\0test_write_byte(int)\0"
    "test_write_int(int)\0test_read_byte(int)\0"
    "device_file\0setup_spi(char*)\0double\0"
    "length,mosi_str\0getSig_spi(int,char*)\0"
    "transmit_spi(int,char*)\0close_spi()\0"
    "__u8\0value\0char2hex(char)\0openVent()\0"
    "closeVent()\0millisecondsToWait\0"
    "delay(int)\0heatersOff()\0TriggerOnOff()\0"
    "displayStatusBusy()\0displayStatusDone()\0"
    "externalValvesOn()\0externalValvesOff()\0"
    "dtlog()\0newConfiguration()\0"
    "modifyConfiguration()\0loadConfiguration()\0"
    "saveConfiguration()\0closePrep()\0index\0"
    "listViewActivated(QModelIndex)\0"
    "on_loginLogoutButton_clicked()\0"
    "loginSuperUser()\0logoutSuperUser()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: listViewActiveRow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: tempProcessValue((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: testMainSig(); break;
        case 3: changeSerialPort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: writeTempSetpoint((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: writeRecipeSetpoint((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 6: readTempValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: { int _r = readTrueValue((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { int _r = readRecipeValue((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { int _r = readRetry((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: sendRampParameters(); break;
        case 11: testMainSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: setCollumnTemp((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: setDetectorTemp((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: runOvenCommands(); break;
        case 15: { QString _r = readFromFile((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 16: writeToFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 17: { int _r = init_i2c();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 18: { int _r = i2c_set_slave((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 19: { int _r = i2c_write_byte((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< __u8(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 20: { int _r = i2c_write_cmd((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< __u8(*)>(_a[2])),(*reinterpret_cast< __u8(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 21: { int _r = i2c_read_byte((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< __u8*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 22: { int _r = i2c_read_byte4((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< __u8*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 23: { int _r = i2c_read_reg((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< __u8*(*)>(_a[2])),(*reinterpret_cast< __u8(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 24: { int _r = i2c_read_reg2((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< __u16*(*)>(_a[2])),(*reinterpret_cast< __u8(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 25: { int _r = i2c_read_reg4((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< __u16*(*)>(_a[2])),(*reinterpret_cast< __u8(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 26: { int _r = i2c_write_cmd2((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< __u8(*)>(_a[2])),(*reinterpret_cast< __u16(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 27: { int _r = close_device((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 28: test_set_slave((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 29: test_write_byte((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: test_write_int((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: test_read_byte((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: { int _r = setup_spi((*reinterpret_cast< char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 33: { double _r = getSig_spi((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 34: { int _r = transmit_spi((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 35: close_spi(); break;
        case 36: { __u8 _r = char2hex((*reinterpret_cast< char(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< __u8*>(_a[0]) = _r; }  break;
        case 37: openVent(); break;
        case 38: closeVent(); break;
        case 39: delay((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: heatersOff(); break;
        case 41: TriggerOnOff(); break;
        case 42: displayStatusBusy(); break;
        case 43: displayStatusDone(); break;
        case 44: externalValvesOn(); break;
        case 45: externalValvesOff(); break;
        case 46: dtlog(); break;
        case 47: newConfiguration(); break;
        case 48: modifyConfiguration(); break;
        case 49: loadConfiguration(); break;
        case 50: saveConfiguration(); break;
        case 51: closePrep(); break;
        case 52: listViewActivated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 53: on_loginLogoutButton_clicked(); break;
        case 54: loginSuperUser(); break;
        case 55: logoutSuperUser(); break;
        default: ;
        }
        _id -= 56;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::listViewActiveRow(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::tempProcessValue(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::testMainSig()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
