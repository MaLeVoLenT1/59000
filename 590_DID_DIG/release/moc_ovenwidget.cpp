/****************************************************************************
** Meta object code from reading C++ file 'ovenwidget.h'
**
** Created: Thu Jan 16 07:30:19 2020
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ovenwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ovenwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OvenWidget[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   12,   11,   11, 0x05,
      57,   49,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      92,   79,   11,   11, 0x0a,
     132,  113,   11,   11, 0x0a,
     155,   11,   11,   11, 0x0a,
     172,   11,   11,   11, 0x0a,
     190,   11,   11,   11, 0x0a,
     201,   11,   11,   11, 0x0a,
     218,   11,   11,   11, 0x0a,
     231,   11,   11,   11, 0x0a,
     252,   11,   11,   11, 0x0a,
     270,   11,   11,   11, 0x0a,
     286,   11,   11,   11, 0x0a,
     307,  301,   11,   11, 0x0a,
     339,  329,   11,   11, 0x08,
     361,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_OvenWidget[] = {
    "OvenWidget\0\0slaveID,tempSP\0"
    "tempSetPoint(int,int)\0slaveID\0"
    "tempProcessValue(int)\0tempSetpoint\0"
    "setIdealTemp(double)\0slaveID,actualTemp\0"
    "setActualTemp(int,int)\0rampTempButton()\0"
    "rampTempMonitor()\0extEvent()\0"
    "owValveControl()\0owReadFlow()\0"
    "sendRampParameters()\0manualWriteTemp()\0"
    "ovenHeaterOff()\0ovenHeaterOn()\0state\0"
    "ovenHeaterOnOff(bool)\0isEnabled\0"
    "rampTempEnabler(bool)\0"
    "on_actualTempButton_clicked()\0"
};

const QMetaObject OvenWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_OvenWidget,
      qt_meta_data_OvenWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OvenWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OvenWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OvenWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OvenWidget))
        return static_cast<void*>(const_cast< OvenWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int OvenWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: tempSetPoint((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: tempProcessValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: setIdealTemp((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: setActualTemp((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: rampTempButton(); break;
        case 5: rampTempMonitor(); break;
        case 6: extEvent(); break;
        case 7: owValveControl(); break;
        case 8: owReadFlow(); break;
        case 9: sendRampParameters(); break;
        case 10: manualWriteTemp(); break;
        case 11: ovenHeaterOff(); break;
        case 12: ovenHeaterOn(); break;
        case 13: ovenHeaterOnOff((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: rampTempEnabler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: on_actualTempButton_clicked(); break;
        default: ;
        }
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void OvenWidget::tempSetPoint(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OvenWidget::tempProcessValue(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
