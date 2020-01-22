/****************************************************************************
** Meta object code from reading C++ file 'new_did_inbox.h'
**
** Created: Tue Dec 17 16:32:33 2019
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../new_did_inbox.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'new_did_inbox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NEW_DID_INBOX[] = {

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
      15,   14,   14,   14, 0x0a,
      26,   14,   14,   14, 0x0a,
      34,   14,   14,   14, 0x0a,
      41,   14,   14,   14, 0x0a,
      50,   14,   14,   14, 0x0a,
      62,   14,   14,   14, 0x0a,
      72,   14,   14,   14, 0x0a,
      92,   14,   14,   14, 0x0a,
     112,   14,   14,   14, 0x0a,
     135,   14,   14,   14, 0x0a,
     154,   14,   14,   14, 0x0a,
     169,   14,   14,   14, 0x0a,
     184,   14,   14,   14, 0x0a,
     199,   14,   14,   14, 0x0a,
     213,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_NEW_DID_INBOX[] = {
    "NEW_DID_INBOX\0\0calibrat()\0outpt()\0"
    "data()\0detcfg()\0oGainCtrl()\0measure()\0"
    "displayStatusBusy()\0displayStatusDone()\0"
    "killSampFuelMethFlow()\0callMain_datalog()\0"
    "sendSerial_3()\0callViewSigs()\0"
    "initSettings()\0shutdownNow()\0shutDwnMsg()\0"
};

const QMetaObject NEW_DID_INBOX::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_NEW_DID_INBOX,
      qt_meta_data_NEW_DID_INBOX, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NEW_DID_INBOX::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NEW_DID_INBOX::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NEW_DID_INBOX::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NEW_DID_INBOX))
        return static_cast<void*>(const_cast< NEW_DID_INBOX*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int NEW_DID_INBOX::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: calibrat(); break;
        case 1: outpt(); break;
        case 2: data(); break;
        case 3: detcfg(); break;
        case 4: oGainCtrl(); break;
        case 5: measure(); break;
        case 6: displayStatusBusy(); break;
        case 7: displayStatusDone(); break;
        case 8: killSampFuelMethFlow(); break;
        case 9: callMain_datalog(); break;
        case 10: sendSerial_3(); break;
        case 11: callViewSigs(); break;
        case 12: initSettings(); break;
        case 13: shutdownNow(); break;
        case 14: shutDwnMsg(); break;
        default: ;
        }
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
