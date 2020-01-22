/****************************************************************************
** Meta object code from reading C++ file 'rampoven_zone_control.h'
**
** Created: Tue Jan 7 13:02:44 2020
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../rampoven_zone_control.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rampoven_zone_control.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_rampoven_zone_control[] = {

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
      23,   22,   22,   22, 0x0a,
      41,   22,   22,   22, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_rampoven_zone_control[] = {
    "rampoven_zone_control\0\0WriteDataButton()\0"
    "ReadDataButton()\0"
};

const QMetaObject rampoven_zone_control::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_rampoven_zone_control,
      qt_meta_data_rampoven_zone_control, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &rampoven_zone_control::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *rampoven_zone_control::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *rampoven_zone_control::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_rampoven_zone_control))
        return static_cast<void*>(const_cast< rampoven_zone_control*>(this));
    return QDialog::qt_metacast(_clname);
}

int rampoven_zone_control::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
