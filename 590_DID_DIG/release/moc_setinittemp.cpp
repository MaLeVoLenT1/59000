/****************************************************************************
** Meta object code from reading C++ file 'setinittemp.h'
**
** Created: Tue Mar 5 14:06:20 2019
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../setinittemp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'setinittemp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_setinittemp[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,
      31,   12,   12,   12, 0x0a,
      51,   12,   46,   12, 0x0a,
      68,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_setinittemp[] = {
    "setinittemp\0\0write_init_temp()\0"
    "readInitTemp()\0bool\0checkVentState()\0"
    "stopMePlease()\0"
};

const QMetaObject setinittemp::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_setinittemp,
      qt_meta_data_setinittemp, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &setinittemp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *setinittemp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *setinittemp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_setinittemp))
        return static_cast<void*>(const_cast< setinittemp*>(this));
    return QDialog::qt_metacast(_clname);
}

int setinittemp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: write_init_temp(); break;
        case 1: readInitTemp(); break;
        case 2: { bool _r = checkVentState();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: stopMePlease(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
