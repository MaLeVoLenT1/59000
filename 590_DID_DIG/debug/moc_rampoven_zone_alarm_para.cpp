/****************************************************************************
** Meta object code from reading C++ file 'rampoven_zone_alarm_para.h'
**
** Created: Tue Mar 5 14:49:48 2019
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../rampoven_zone_alarm_para.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rampoven_zone_alarm_para.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_rampoven_Zone_Alarm_para[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x0a,
      44,   25,   25,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_rampoven_Zone_Alarm_para[] = {
    "rampoven_Zone_Alarm_para\0\0WriteDataButton()\0"
    "ReadDataButton()\0"
};

const QMetaObject rampoven_Zone_Alarm_para::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_rampoven_Zone_Alarm_para,
      qt_meta_data_rampoven_Zone_Alarm_para, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &rampoven_Zone_Alarm_para::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *rampoven_Zone_Alarm_para::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *rampoven_Zone_Alarm_para::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_rampoven_Zone_Alarm_para))
        return static_cast<void*>(const_cast< rampoven_Zone_Alarm_para*>(this));
    return QDialog::qt_metacast(_clname);
}

int rampoven_Zone_Alarm_para::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: WriteDataButton(); break;
        case 1: ReadDataButton(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
