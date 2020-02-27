/****************************************************************************
** Meta object code from reading C++ file 'setup.h'
**
** Created: Mon Feb 24 15:59:05 2020
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../setup.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'setup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_setup[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x0a,
      19,    6,    6,    6, 0x0a,
      32,    6,    6,    6, 0x0a,
      45,    6,    6,    6, 0x0a,
      59,    6,    6,    6, 0x0a,
      72,    6,    6,    6, 0x0a,
      84,    6,    6,    6, 0x0a,
      96,    6,    6,    6, 0x0a,
     119,    6,  114,    6, 0x0a,
     134,  132,    6,    6, 0x0a,
     162,    6,    6,    6, 0x0a,
     174,    6,    6,    6, 0x0a,
     194,  185,    6,    6, 0x0a,
     229,  185,    6,    6, 0x0a,
     262,    6,    6,    6, 0x0a,
     272,    6,    6,    6, 0x0a,
     281,    6,    6,    6, 0x0a,
     298,    6,    6,    6, 0x0a,
     314,    6,    6,    6, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_setup[] = {
    "setup\0\0setH2Flow()\0setCH4Flow()\0"
    "setAirFlow()\0setSampFlow()\0setPolVolt()\0"
    "igniteDet()\0sTsetTemp()\0readAlarmOutput()\0"
    "bool\0checkFlame()\0e\0keyReleaseEvent(QKeyEvent*)\0"
    "saveAlarm()\0getAlarm()\0line,nex\0"
    "processAlarm_line(QByteArray,uint)\0"
    "processGas_line(QByteArray,uint)\0"
    "saveGas()\0getGas()\0killFlowSafety()\0"
    "setSampToZero()\0resetSamp()\0"
};

const QMetaObject setup::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_setup,
      qt_meta_data_setup, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &setup::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *setup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *setup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_setup))
        return static_cast<void*>(const_cast< setup*>(this));
    return QDialog::qt_metacast(_clname);
}

int setup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setH2Flow(); break;
        case 1: setCH4Flow(); break;
        case 2: setAirFlow(); break;
        case 3: setSampFlow(); break;
        case 4: setPolVolt(); break;
        case 5: igniteDet(); break;
        case 6: sTsetTemp(); break;
        case 7: readAlarmOutput(); break;
        case 8: { bool _r = checkFlame();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: keyReleaseEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 10: saveAlarm(); break;
        case 11: getAlarm(); break;
        case 12: processAlarm_line((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 13: processGas_line((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 14: saveGas(); break;
        case 15: getGas(); break;
        case 16: killFlowSafety(); break;
        case 17: setSampToZero(); break;
        case 18: resetSamp(); break;
        default: ;
        }
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
