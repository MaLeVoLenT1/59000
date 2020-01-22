/****************************************************************************
** Meta object code from reading C++ file 'configuredialog2.h'
**
** Created: Thu Jan 16 07:30:14 2020
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../configuredialog2.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'configuredialog2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ConfigureDialog2[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      32,   17,   17,   17, 0x08,
      56,   17,   17,   17, 0x08,
      82,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ConfigureDialog2[] = {
    "ConfigureDialog2\0\0finalAccept()\0"
    "on_nextButton_clicked()\0"
    "on_cancelButton_clicked()\0"
    "on_acceptConfig_clicked()\0"
};

const QMetaObject ConfigureDialog2::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ConfigureDialog2,
      qt_meta_data_ConfigureDialog2, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ConfigureDialog2::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ConfigureDialog2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ConfigureDialog2::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ConfigureDialog2))
        return static_cast<void*>(const_cast< ConfigureDialog2*>(this));
    return QDialog::qt_metacast(_clname);
}

int ConfigureDialog2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: finalAccept(); break;
        case 1: on_nextButton_clicked(); break;
        case 2: on_cancelButton_clicked(); break;
        case 3: on_acceptConfig_clicked(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void ConfigureDialog2::finalAccept()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
