/****************************************************************************
** Meta object code from reading C++ file 'gainpopup.h'
**
** Created: Wed Jan 8 09:19:30 2020
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gainpopup.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gainpopup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_gainPopUp[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x0a,
      34,   10,   26,   10, 0x0a,
      53,   10,   10,   10, 0x0a,
      61,   10,   10,   10, 0x0a,
      69,   10,   10,   10, 0x0a,
      77,   10,   10,   10, 0x0a,
      85,   10,   10,   10, 0x0a,
      93,   10,   10,   10, 0x0a,
     101,   10,   10,   10, 0x0a,
     109,   10,   10,   10, 0x0a,
     117,   10,   10,   10, 0x0a,
     125,   10,   10,   10, 0x0a,
     133,   10,   10,   10, 0x0a,
     145,   10,   10,   10, 0x0a,
     158,   10,   10,   10, 0x0a,
     176,  170,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_gainPopUp[] = {
    "gainPopUp\0\0processNumIn()\0QString\0"
    "popupNumInReturn()\0num_1()\0num_2()\0"
    "num_3()\0num_4()\0num_5()\0num_6()\0num_7()\0"
    "num_8()\0num_9()\0num_0()\0num_minus()\0"
    "num_period()\0num_Clear()\0Range\0"
    "detectRange(int)\0"
};

const QMetaObject gainPopUp::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_gainPopUp,
      qt_meta_data_gainPopUp, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &gainPopUp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *gainPopUp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *gainPopUp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_gainPopUp))
        return static_cast<void*>(const_cast< gainPopUp*>(this));
    return QDialog::qt_metacast(_clname);
}

int gainPopUp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 14: num_Clear(); break;
        case 15: detectRange((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
