/****************************************************************************
** Meta object code from reading C++ file 'voltagenumpopup.h'
**
** Created: Fri Feb 28 12:07:44 2020
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../voltagenumpopup.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'voltagenumpopup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_voltageNumPopUp[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x0a,
      40,   16,   32,   16, 0x0a,
      59,   16,   16,   16, 0x0a,
      67,   16,   16,   16, 0x0a,
      75,   16,   16,   16, 0x0a,
      83,   16,   16,   16, 0x0a,
      91,   16,   16,   16, 0x0a,
      99,   16,   16,   16, 0x0a,
     107,   16,   16,   16, 0x0a,
     115,   16,   16,   16, 0x0a,
     123,   16,   16,   16, 0x0a,
     131,   16,   16,   16, 0x0a,
     139,   16,   16,   16, 0x0a,
     151,   16,   16,   16, 0x0a,
     164,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_voltageNumPopUp[] = {
    "voltageNumPopUp\0\0processNumIn()\0QString\0"
    "popupNumInReturn()\0num_1()\0num_2()\0"
    "num_3()\0num_4()\0num_5()\0num_6()\0num_7()\0"
    "num_8()\0num_9()\0num_0()\0num_minus()\0"
    "num_period()\0num_clear()\0"
};

const QMetaObject voltageNumPopUp::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_voltageNumPopUp,
      qt_meta_data_voltageNumPopUp, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &voltageNumPopUp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *voltageNumPopUp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *voltageNumPopUp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_voltageNumPopUp))
        return static_cast<void*>(const_cast< voltageNumPopUp*>(this));
    return QDialog::qt_metacast(_clname);
}

int voltageNumPopUp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: processNumIn(); break;
        case 1: { QString _r = popupNumInReturn();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 2: num_1(); break;
        case 3: num_2(); break;
        case 4: num_3(); break;
        case 5: num_4(); break;
        case 6: num_5(); break;
        case 7: num_6(); break;
        case 8: num_7(); break;
        case 9: num_8(); break;
        case 10: num_9(); break;
        case 11: num_0(); break;
        case 12: num_minus(); break;
        case 13: num_period(); break;
        case 14: num_clear(); break;
        default: ;
        }
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
