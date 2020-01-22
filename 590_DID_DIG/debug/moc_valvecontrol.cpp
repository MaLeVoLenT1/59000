/****************************************************************************
** Meta object code from reading C++ file 'valvecontrol.h'
**
** Created: Wed Jan 8 09:19:10 2020
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../valvecontrol.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'valvecontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_valveControl[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x0a,
      33,   13,   13,   13, 0x0a,
      52,   13,   47,   13, 0x0a,
      73,   13,   13,   13, 0x0a,
      84,   13,   13,   13, 0x0a,
      91,   13,   13,   13, 0x0a,
      98,   13,   13,   13, 0x0a,
     105,   13,   13,   13, 0x0a,
     112,   13,   13,   13, 0x0a,
     119,   13,   13,   13, 0x0a,
     126,   13,   13,   13, 0x0a,
     133,   13,   13,   13, 0x0a,
     140,   13,   13,   13, 0x0a,
     148,   13,   13,   13, 0x0a,
     156,   13,   13,   13, 0x0a,
     164,   13,   13,   13, 0x0a,
     172,   13,   13,   13, 0x0a,
     180,   13,   13,   13, 0x0a,
     188,   13,   13,   13, 0x0a,
     196,   13,   13,   13, 0x0a,
     204,   13,   13,   13, 0x0a,
     212,   13,   13,   13, 0x0a,
     220,   13,   13,   13, 0x0a,
     228,   13,   13,   13, 0x0a,
     236,   13,   13,   13, 0x0a,
     244,   13,   13,   13, 0x0a,
     252,   13,   13,   13, 0x0a,
     260,   13,   13,   13, 0x0a,
     268,   13,   13,   13, 0x0a,
     276,   13,   13,   13, 0x0a,
     284,   13,   13,   13, 0x0a,
     292,   13,   13,   13, 0x0a,
     300,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_valveControl[] = {
    "valveControl\0\0remoteCalTrigger()\0"
    "testRdInput()\0uint\0fidH2BypassRdInput()\0"
    "configIO()\0IO5a()\0IO5b()\0IO6a()\0IO6b()\0"
    "IO7a()\0IO7b()\0IO8a()\0IO8b()\0IO11a()\0"
    "IO11b()\0IO12a()\0IO12b()\0IO13a()\0IO13b()\0"
    "IO14a()\0IO14b()\0IO15a()\0IO15b()\0IO16a()\0"
    "IO16b()\0IO17a()\0IO17b()\0IO18a()\0IO18b()\0"
    "IO19a()\0IO19b()\0IO20a()\0IO20b()\0"
    "readValveState()\0"
};

const QMetaObject valveControl::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_valveControl,
      qt_meta_data_valveControl, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &valveControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *valveControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *valveControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_valveControl))
        return static_cast<void*>(const_cast< valveControl*>(this));
    return QDialog::qt_metacast(_clname);
}

int valveControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: remoteCalTrigger(); break;
        case 1: testRdInput(); break;
        case 2: { uint _r = fidH2BypassRdInput();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 3: configIO(); break;
        case 4: IO5a(); break;
        case 5: IO5b(); break;
        case 6: IO6a(); break;
        case 7: IO6b(); break;
        case 8: IO7a(); break;
        case 9: IO7b(); break;
        case 10: IO8a(); break;
        case 11: IO8b(); break;
        case 12: IO11a(); break;
        case 13: IO11b(); break;
        case 14: IO12a(); break;
        case 15: IO12b(); break;
        case 16: IO13a(); break;
        case 17: IO13b(); break;
        case 18: IO14a(); break;
        case 19: IO14b(); break;
        case 20: IO15a(); break;
        case 21: IO15b(); break;
        case 22: IO16a(); break;
        case 23: IO16b(); break;
        case 24: IO17a(); break;
        case 25: IO17b(); break;
        case 26: IO18a(); break;
        case 27: IO18b(); break;
        case 28: IO19a(); break;
        case 29: IO19b(); break;
        case 30: IO20a(); break;
        case 31: IO20b(); break;
        case 32: readValveState(); break;
        default: ;
        }
        _id -= 33;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
