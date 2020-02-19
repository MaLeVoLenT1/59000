/****************************************************************************
** Meta object code from reading C++ file 'objectmgmt.h'
**
** Created: Wed Feb 19 13:04:33 2020
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../objectmgmt.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'objectmgmt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ObjectMgmt[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      63,   12,   11,   11, 0x0a,
     124,   11,  111,   11, 0x0a,
     154,   11,  138,   11, 0x0a,
     170,   11,   11,   11, 0x0a,
     185,   11,   11,   11, 0x0a,
     202,   11,   11,   11, 0x0a,
     227,  219,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ObjectMgmt[] = {
    "ObjectMgmt\0\0"
    "partName,partType,partSubtype,isHeated,tempSlaveID\0"
    "createNewPart(QString,QString,QString,bool,int)\0"
    "QList<Part*>\0getPartList()\0QList<QWidget*>\0"
    "getWidgetList()\0holdOldParts()\0"
    "deleteOldParts()\0deleteNewParts()\0"
    "mainWin\0setMainWindow(MainWindow*)\0"
};

const QMetaObject ObjectMgmt::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ObjectMgmt,
      qt_meta_data_ObjectMgmt, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ObjectMgmt::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ObjectMgmt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ObjectMgmt::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ObjectMgmt))
        return static_cast<void*>(const_cast< ObjectMgmt*>(this));
    return QWidget::qt_metacast(_clname);
}

int ObjectMgmt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: createNewPart((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 1: { QList<Part*> _r = getPartList();
            if (_a[0]) *reinterpret_cast< QList<Part*>*>(_a[0]) = _r; }  break;
        case 2: { QList<QWidget*> _r = getWidgetList();
            if (_a[0]) *reinterpret_cast< QList<QWidget*>*>(_a[0]) = _r; }  break;
        case 3: holdOldParts(); break;
        case 4: deleteOldParts(); break;
        case 5: deleteNewParts(); break;
        case 6: setMainWindow((*reinterpret_cast< MainWindow*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
