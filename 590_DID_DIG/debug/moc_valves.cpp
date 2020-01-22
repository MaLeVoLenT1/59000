/****************************************************************************
** Meta object code from reading C++ file 'valves.h'
**
** Created: Wed Jan 8 09:19:21 2020
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../valves.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'valves.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Valves[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x0a,
      23,    7,    7,    7, 0x0a,
      38,    7,    7,    7, 0x0a,
      53,    7,    7,    7, 0x0a,
      64,    7,    7,    7, 0x0a,
      75,    7,    7,    7, 0x0a,
      92,   86,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Valves[] = {
    "Valves\0\0sampValveCtl()\0zeroValveCtl()\0"
    "spanValveCtl()\0gsValve1()\0gsValve2()\0"
    "gsValve3()\0event\0keyReleaseEvent(QKeyEvent*)\0"
};

const QMetaObject Valves::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Valves,
      qt_meta_data_Valves, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Valves::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Valves::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Valves::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Valves))
        return static_cast<void*>(const_cast< Valves*>(this));
    return QDialog::qt_metacast(_clname);
}

int Valves::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: sampValveCtl(); break;
        case 1: zeroValveCtl(); break;
        case 2: spanValveCtl(); break;
        case 3: gsValve1(); break;
        case 4: gsValve2(); break;
        case 5: gsValve3(); break;
        case 6: keyReleaseEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
