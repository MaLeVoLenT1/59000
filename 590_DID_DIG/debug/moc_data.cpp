/****************************************************************************
** Meta object code from reading C++ file 'data.h'
**
** Created: Wed Feb 19 13:04:39 2020
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../data.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'data.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_data[] = {

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
       6,    5,    5,    5, 0x0a,
      17,    5,    5,    5, 0x0a,
      31,    5,    5,    5, 0x0a,
      53,   44,    5,    5, 0x0a,
      90,    5,    5,    5, 0x0a,
     116,  110,    5,    5, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_data[] = {
    "data\0\0dlConfig()\0saveDatalog()\0"
    "getDatalog()\0line,nex\0"
    "processDatalog_line(QByteArray,uint)\0"
    "setSystemDateTime()\0event\0"
    "keyReleaseEvent(QKeyEvent*)\0"
};

const QMetaObject data::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_data,
      qt_meta_data_data, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &data::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *data::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *data::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_data))
        return static_cast<void*>(const_cast< data*>(this));
    return QDialog::qt_metacast(_clname);
}

int data::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: dlConfig(); break;
        case 1: saveDatalog(); break;
        case 2: getDatalog(); break;
        case 3: processDatalog_line((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 4: setSystemDateTime(); break;
        case 5: keyReleaseEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
