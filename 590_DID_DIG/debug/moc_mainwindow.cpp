/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Tue Mar 5 14:49:33 2019
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
      50,   14, // methods
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
     261,  248,  244,   11, 0x0a,
     286,  248,  244,   11, 0x0a,
     305,   11,   11,   11, 0x0a,
     330,  326,   11,   11, 0x0a,
     352,   11,  244,   11, 0x0a,
     371,  363,  244,   11, 0x0a,
     402,  394,  244,   11, 0x0a,
     438,  427,  244,   11, 0x0a,
     474,  467,  244,   11, 0x0a,
     499,  467,  244,   11, 0x0a,
     536,  525,  244,   11, 0x0a,
     565,  525,  244,   11, 0x0a,
     596,  525,  244,   11, 0x0a,
     627,  427,  244,   11, 0x0a,
     661,  658,  244,   11, 0x0a,
     686,  679,   11,   11, 0x0a,
     711,  658,   11,   11, 0x0a,
     732,  658,   11,   11, 0x0a,
     752,  658,   11,   11, 0x0a,
     784,  772,  244,   11, 0x0a,
     824,  808,  801,   11, 0x0a,
     846,  808,  244,   11, 0x0a,
     870,   11,   11,   11, 0x0a,
     893,  887,  882,   11, 0x0a,
     908,   11,   11,   11, 0x0a,
     919,   11,   11,   11, 0x0a,
     950,  931,   11,   11, 0x0a,
     961,   11,   11,   11, 0x0a,
     974,   11,   11,   11, 0x0a,
     989,   11,   11,   11, 0x0a,
    1009,   11,   11,   11, 0x0a,
    1029,   11,   11,   11, 0x0a,
    1048,   11,   11,   11, 0x0a,
    1068,   11,   11,   11, 0x0a,
    1076,   11,   11,   11, 0x08,
    1095,   11,   11,   11, 0x08,
    1117,   11,   11,   11, 0x08,
    1137,   11,   11,   11, 0x08,
    1157,   11,   11,   11, 0x08,
    1175, 1169,   11,   11, 0x08,
    1206,   11,   11,   11, 0x08,
    1237,   11,   11,   11, 0x08,
    1254,   11,   11,   11, 0x08,

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
    "slaveID,addr\0readRecipeValue(int,int)\0"
    "readRetry(int,int)\0sendRampParameters()\0"
    "a,b\0testMainSlot(int,int)\0init_i2c()\0"
    "fd,addr\0i2c_set_slave(int,int)\0fd,byte\0"
    "i2c_write_byte(int,__u8)\0fd,reg,cmd\0"
    "i2c_write_cmd(int,__u8,__u8)\0fd,val\0"
    "i2c_read_byte(int,__u8*)\0"
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
        case 7: { int _r = readRecipeValue((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { int _r = readRetry((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: sendRampParameters(); break;
        case 10: testMainSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: { int _r = init_i2c();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: { int _r = i2c_set_slave((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: { int _r = i2c_write_byte((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< __u8(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 14: { int _r = i2c_write_cmd((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< __u8(*)>(_a[2])),(*reinterpret_cast< __u8(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 15: { int _r = i2c_read_byte((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< __u8*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 16: { int _r = i2c_read_byte4((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< __u8*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 17: { int _r = i2c_read_reg((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< __u8*(*)>(_a[2])),(*reinterpret_cast< __u8(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 18: { int _r = i2c_read_reg2((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< __u16*(*)>(_a[2])),(*reinterpret_cast< __u8(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 19: { int _r = i2c_read_reg4((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< __u16*(*)>(_a[2])),(*reinterpret_cast< __u8(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 20: { int _r = i2c_write_cmd2((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< __u8(*)>(_a[2])),(*reinterpret_cast< __u16(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 21: { int _r = close_device((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 22: test_set_slave((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 23: test_write_byte((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: test_write_int((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: test_read_byte((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: { int _r = setup_spi((*reinterpret_cast< char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 27: { double _r = getSig_spi((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 28: { int _r = transmit_spi((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 29: close_spi(); break;
        case 30: { __u8 _r = char2hex((*reinterpret_cast< char(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< __u8*>(_a[0]) = _r; }  break;
        case 31: openVent(); break;
        case 32: closeVent(); break;
        case 33: delay((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: heatersOff(); break;
        case 35: TriggerOnOff(); break;
        case 36: displayStatusBusy(); break;
        case 37: displayStatusDone(); break;
        case 38: externalValvesOn(); break;
        case 39: externalValvesOff(); break;
        case 40: dtlog(); break;
        case 41: newConfiguration(); break;
        case 42: modifyConfiguration(); break;
        case 43: loadConfiguration(); break;
        case 44: saveConfiguration(); break;
        case 45: closePrep(); break;
        case 46: listViewActivated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 47: on_loginLogoutButton_clicked(); break;
        case 48: loginSuperUser(); break;
        case 49: logoutSuperUser(); break;
        default: ;
        }
        _id -= 50;
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
