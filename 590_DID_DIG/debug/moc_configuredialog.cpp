/****************************************************************************
** Meta object code from reading C++ file 'configuredialog.h'
**
** Created: Fri Feb 28 12:07:36 2020
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../configuredialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'configuredialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ConfigureDialog[] = {

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
      17,   16,   16,   16, 0x08,
      39,   16,   16,   16, 0x08,
      65,   16,   16,   16, 0x08,
      90,   16,   16,   16, 0x08,
     118,   16,   16,   16, 0x08,
     140,   16,   16,   16, 0x08,
     165,   16,   16,   16, 0x08,
     188,   16,   16,   16, 0x08,
     214,   16,   16,   16, 0x08,
     239,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ConfigureDialog[] = {
    "ConfigureDialog\0\0on_okButton_clicked()\0"
    "on_cancelButton_clicked()\0"
    "on_addDetector_clicked()\0"
    "on_deleteDetector_clicked()\0"
    "on_addInlet_clicked()\0on_deleteInlet_clicked()\0"
    "on_addColumn_clicked()\0on_deleteColumn_clicked()\0"
    "on_addInjector_clicked()\0"
    "on_deleteInjector_clicked()\0"
};

const QMetaObject ConfigureDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ConfigureDialog,
      qt_meta_data_ConfigureDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ConfigureDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ConfigureDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ConfigureDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ConfigureDialog))
        return static_cast<void*>(const_cast< ConfigureDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ConfigureDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_okButton_clicked(); break;
        case 1: on_cancelButton_clicked(); break;
        case 2: on_addDetector_clicked(); break;
        case 3: on_deleteDetector_clicked(); break;
        case 4: on_addInlet_clicked(); break;
        case 5: on_deleteInlet_clicked(); break;
        case 6: on_addColumn_clicked(); break;
        case 7: on_deleteColumn_clicked(); break;
        case 8: on_addInjector_clicked(); break;
        case 9: on_deleteInjector_clicked(); break;
        default: ;
        }
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
