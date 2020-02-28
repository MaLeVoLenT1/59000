/****************************************************************************
** Meta object code from reading C++ file 'settemp.h'
**
** Created: Fri Feb 28 11:21:04 2020
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../settemp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settemp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_setTemp[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x0a,
      20,    8,    8,    8, 0x0a,
      37,   32,    8,    8, 0x0a,
      56,   32,    8,    8, 0x0a,
      79,   32,    8,    8, 0x0a,
      99,   32,    8,    8, 0x0a,
     127,  118,    8,    8, 0x0a,
     161,    8,    8,    8, 0x0a,
     172,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_setTemp[] = {
    "setTemp\0\0readTemp()\0writeTemp()\0temp\0"
    "setDetTemp(double)\0setSampTeeTemp(double)\0"
    "setMethTemp(double)\0setColTemp(double)\0"
    "line,nex\0processTemp_line(QByteArray,uint)\0"
    "saveTemp()\0getTemp()\0"
};

const QMetaObject setTemp::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_setTemp,
      qt_meta_data_setTemp, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &setTemp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *setTemp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *setTemp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_setTemp))
        return static_cast<void*>(const_cast< setTemp*>(this));
    return QDialog::qt_metacast(_clname);
}

int setTemp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: readTemp(); break;
        case 1: writeTemp(); break;
        case 2: setDetTemp((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: setSampTeeTemp((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: setMethTemp((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: setColTemp((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: processTemp_line((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 7: saveTemp(); break;
        case 8: getTemp(); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
