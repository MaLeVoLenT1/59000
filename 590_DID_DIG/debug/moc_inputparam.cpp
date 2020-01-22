/****************************************************************************
** Meta object code from reading C++ file 'inputparam.h'
**
** Created: Wed Jan 8 09:19:06 2020
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../inputparam.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inputparam.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_inputParam[] = {

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
      17,   12,   11,   11, 0x0a,
      32,   12,   11,   11, 0x0a,
      51,   12,   11,   11, 0x0a,
      66,   12,   11,   11, 0x0a,
      80,   12,   11,   11, 0x0a,
      94,   12,   11,   11, 0x0a,
     107,   12,   11,   11, 0x0a,
     120,   12,   11,   11, 0x0a,
     137,   11,   11,   11, 0x0a,
     155,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_inputParam[] = {
    "inputParam\0\0valu\0intype(double)\0"
    "indebounce(double)\0inbias(double)\0"
    "lisll(double)\0lishl(double)\0spll(double)\0"
    "sphl(double)\0infilter(double)\0"
    "WriteDataButton()\0ReadROinputparameters()\0"
};

const QMetaObject inputParam::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_inputParam,
      qt_meta_data_inputParam, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &inputParam::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *inputParam::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *inputParam::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_inputParam))
        return static_cast<void*>(const_cast< inputParam*>(this));
    return QDialog::qt_metacast(_clname);
}

int inputParam::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: intype((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: indebounce((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: inbias((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: lisll((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: lishl((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: spll((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: sphl((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: infilter((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: WriteDataButton(); break;
        case 9: ReadROinputparameters(); break;
        default: ;
        }
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
