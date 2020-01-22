/****************************************************************************
** Meta object code from reading C++ file 'poweroffmessage.h'
**
** Created: Thu Jan 16 07:31:13 2020
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../poweroffmessage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'poweroffmessage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_poweroffmessage[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_poweroffmessage[] = {
    "poweroffmessage\0\0powerOff()\0"
};

const QMetaObject poweroffmessage::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_poweroffmessage,
      qt_meta_data_poweroffmessage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &poweroffmessage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *poweroffmessage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *poweroffmessage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_poweroffmessage))
        return static_cast<void*>(const_cast< poweroffmessage*>(this));
    return QDialog::qt_metacast(_clname);
}

int poweroffmessage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: powerOff(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
