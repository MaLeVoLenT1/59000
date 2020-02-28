/****************************************************************************
** Meta object code from reading C++ file 'outputgainctrl.h'
**
** Created: Mon Feb 24 15:59:06 2020
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../outputgainctrl.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'outputgainctrl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OutputGainCtrl[] = {

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
      16,   15,   15,   15, 0x0a,
      31,   15,   15,   15, 0x0a,
      46,   15,   15,   15, 0x0a,
      61,   15,   15,   15, 0x0a,
      76,   15,   15,   15, 0x0a,
      89,   87,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_OutputGainCtrl[] = {
    "OutputGainCtrl\0\0outputRange1()\0"
    "outputRange2()\0outputRange3()\0"
    "outputRange4()\0dwConfig()\0e\0"
    "keyReleaseEvent(QKeyEvent*)\0"
};

const QMetaObject OutputGainCtrl::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_OutputGainCtrl,
      qt_meta_data_OutputGainCtrl, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OutputGainCtrl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OutputGainCtrl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OutputGainCtrl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OutputGainCtrl))
        return static_cast<void*>(const_cast< OutputGainCtrl*>(this));
    return QDialog::qt_metacast(_clname);
}

int OutputGainCtrl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: outputRange1(); break;
        case 1: outputRange2(); break;
        case 2: outputRange3(); break;
        case 3: outputRange4(); break;
        case 4: dwConfig(); break;
        case 5: keyReleaseEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
