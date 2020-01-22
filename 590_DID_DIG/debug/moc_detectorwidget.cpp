/****************************************************************************
** Meta object code from reading C++ file 'detectorwidget.h'
**
** Created: Mon Aug 19 13:26:40 2019
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../detectorwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'detectorwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DetectorWidget[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   16,   15,   15, 0x05,
      61,   53,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      96,   83,   15,   15, 0x0a,
     136,  117,   15,   15, 0x0a,
     159,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DetectorWidget[] = {
    "DetectorWidget\0\0slaveID,tempSP\0"
    "tempSetPoint(int,int)\0slaveID\0"
    "tempProcessValue(int)\0tempSetpoint\0"
    "setIdealTemp(double)\0slaveID,actualTemp\0"
    "setActualTemp(int,int)\0"
    "on_actualTempButton_clicked()\0"
};

const QMetaObject DetectorWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DetectorWidget,
      qt_meta_data_DetectorWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DetectorWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DetectorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DetectorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DetectorWidget))
        return static_cast<void*>(const_cast< DetectorWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int DetectorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: tempSetPoint((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: tempProcessValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: setIdealTemp((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: setActualTemp((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: on_actualTempButton_clicked(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void DetectorWidget::tempSetPoint(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DetectorWidget::tempProcessValue(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
