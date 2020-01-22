/****************************************************************************
** Meta object code from reading C++ file 'calibrate.h'
**
** Created: Thu Aug 22 14:28:09 2019
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../calibrate.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calibrate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_calibrate[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x0a,
      24,   10,   10,   10, 0x0a,
      31,   10,   10,   10, 0x0a,
      38,   10,   10,   10, 0x0a,
      52,   50,   10,   10, 0x0a,
      80,   10,   10,   10, 0x0a,
      93,   10,   10,   10, 0x0a,
     107,   10,   10,   10, 0x0a,
     120,   10,   10,   10, 0x0a,
     134,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_calibrate[] = {
    "calibrate\0\0readSignal()\0zero()\0span()\0"
    "remoteCal()\0e\0keyReleaseEvent(QKeyEvent*)\0"
    "calRangeHi()\0calRangeMid()\0calRangeLo()\0"
    "calRangeMin()\0calZero()\0"
};

const QMetaObject calibrate::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_calibrate,
      qt_meta_data_calibrate, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &calibrate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *calibrate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *calibrate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_calibrate))
        return static_cast<void*>(const_cast< calibrate*>(this));
    return QDialog::qt_metacast(_clname);
}

int calibrate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: readSignal(); break;
        case 1: zero(); break;
        case 2: span(); break;
        case 3: remoteCal(); break;
        case 4: keyReleaseEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 5: calRangeHi(); break;
        case 6: calRangeMid(); break;
        case 7: calRangeLo(); break;
        case 8: calRangeMin(); break;
        case 9: calZero(); break;
        default: ;
        }
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
