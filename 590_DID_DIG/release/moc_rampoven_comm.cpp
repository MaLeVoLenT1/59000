/****************************************************************************
** Meta object code from reading C++ file 'rampoven_comm.h'
**
** Created: Tue Mar 5 14:06:12 2019
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../rampoven_comm.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rampoven_comm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Rampoven_comm[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   15,   14,   14, 0x0a,
      41,   15,   14,   14, 0x0a,
      56,   15,   14,   14, 0x0a,
      73,   15,   14,   14, 0x0a,
      88,   15,   14,   14, 0x0a,
     112,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Rampoven_comm[] = {
    "Rampoven_comm\0\0valu\0commProtocol(double)\0"
    "commID(double)\0baudrate(double)\0"
    "parity(double)\0Ieeeregordering(double)\0"
    "ReadROCommParameters()\0"
};

const QMetaObject Rampoven_comm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Rampoven_comm,
      qt_meta_data_Rampoven_comm, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Rampoven_comm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Rampoven_comm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Rampoven_comm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Rampoven_comm))
        return static_cast<void*>(const_cast< Rampoven_comm*>(this));
    return QDialog::qt_metacast(_clname);
}

int Rampoven_comm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: commProtocol((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: commID((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: baudrate((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: parity((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: Ieeeregordering((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: ReadROCommParameters(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
