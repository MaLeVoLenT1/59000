/****************************************************************************
** Meta object code from reading C++ file 'rampmonitor.h'
**
** Created: Tue Mar 5 14:06:12 2019
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../rampmonitor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rampmonitor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_rampMonitor[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,
      26,   12,   12,   12, 0x0a,
      58,   45,   41,   12, 0x0a,
      88,   81,   12,   12, 0x0a,
     105,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_rampMonitor[] = {
    "rampMonitor\0\0monitorRun()\0monitorabort()\0"
    "int\0recipe_state\0read_recipeStatus(int)\0"
    "monSec\0slotTimeout(int)\0waitForTgr()\0"
};

const QMetaObject rampMonitor::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_rampMonitor,
      qt_meta_data_rampMonitor, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &rampMonitor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *rampMonitor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *rampMonitor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_rampMonitor))
        return static_cast<void*>(const_cast< rampMonitor*>(this));
    return QDialog::qt_metacast(_clname);
}

int rampMonitor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: monitorRun(); break;
        case 1: monitorabort(); break;
        case 2: { int _r = read_recipeStatus((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: slotTimeout((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: waitForTgr(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
