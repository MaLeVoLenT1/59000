/****************************************************************************
** Meta object code from reading C++ file 'detconfigure.h'
**
** Created: Tue Mar 5 14:49:45 2019
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../detconfigure.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'detconfigure.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_detConfigure[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      38,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   14,   13,   13, 0x0a,
      48,   13,   13,   13, 0x0a,
      59,   13,   13,   13, 0x0a,
      69,   13,   13,   13, 0x0a,
      84,   13,   13,   13, 0x0a,
      93,   13,   13,   13, 0x0a,
     112,   13,  105,   13, 0x0a,
     124,   13,  105,   13, 0x0a,
     135,   13,  105,   13, 0x0a,
     147,   13,  105,   13, 0x0a,
     162,   13,   13,   13, 0x0a,
     177,   13,   13,   13, 0x0a,
     197,   13,  105,   13, 0x0a,
     213,   13,   13,   13, 0x0a,
     228,   13,  105,   13, 0x0a,
     248,  244,   13,   13, 0x0a,
     263,   13,   13,   13, 0x0a,
     273,   13,   13,   13, 0x0a,
     291,   13,   13,   13, 0x0a,
     309,   13,   13,   13, 0x0a,
     330,   13,  105,   13, 0x0a,
     343,   13,  105,   13, 0x0a,
     357,   13,  105,   13, 0x0a,
     372,   13,  105,   13, 0x0a,
     395,   13,  387,   13, 0x0a,
     403,   13,  387,   13, 0x0a,
     416,   13,  387,   13, 0x0a,
     432,   13,  387,   13, 0x0a,
     449,   13,   13,   13, 0x0a,
     474,  470,   13,   13, 0x0a,
     496,  470,   13,   13, 0x0a,
     519,  470,   13,   13, 0x0a,
     541,   13,   13,   13, 0x0a,
     563,   13,   13,   13, 0x0a,
     577,   13,   13,   13, 0x0a,
     604,  595,   13,   13, 0x0a,
     637,   13,   13,   13, 0x0a,
     654,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_detConfigure[] = {
    "detConfigure\0\0event\0keyReleaseEvent(QKeyEvent*)\0"
    "detRange()\0detGain()\0detDIDIgnite()\0"
    "detIgn()\0detPolSet()\0double\0detPolSig()\0"
    "detHvSig()\0detDIDSig()\0detTCD_I_Sig()\0"
    "detDID_I_Ctl()\0detDID_I_OnOffCtl()\0"
    "detDID_I_read()\0detDID_V_Ctl()\0"
    "detDIDZeroCtl()\0num\0configIO(uint)\0"
    "detRead()\0pleaseWaitForIt()\0"
    "detMoveBaseline()\0detTCDPolarityfCtl()\0"
    "FlowH2read()\0FlowAirread()\0FlowSampread()\0"
    "FlowMethread()\0QString\0numIn()\0"
    "numInPopUp()\0numInPolPopUp()\0"
    "numInGainPopUp()\0deleteNumIn(QString)\0"
    "txt\0deleteNumPop(QString)\0"
    "deleteGainPop(QString)\0deletePolPop(QString)\0"
    "powerOnInitSettings()\0setSettings()\0"
    "saveDetSettings()\0line,nex\0"
    "processDid_line(QByteArray,uint)\0"
    "getDidSettings()\0setSettings2()\0"
};

const QMetaObject detConfigure::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_detConfigure,
      qt_meta_data_detConfigure, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &detConfigure::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *detConfigure::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *detConfigure::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_detConfigure))
        return static_cast<void*>(const_cast< detConfigure*>(this));
    return QDialog::qt_metacast(_clname);
}

int detConfigure::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: keyReleaseEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 1: detRange(); break;
        case 2: detGain(); break;
        case 3: detDIDIgnite(); break;
        case 4: detIgn(); break;
        case 5: detPolSet(); break;
        case 6: { double _r = detPolSig();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 7: { double _r = detHvSig();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 8: { double _r = detDIDSig();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 9: { double _r = detTCD_I_Sig();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 10: detDID_I_Ctl(); break;
        case 11: detDID_I_OnOffCtl(); break;
        case 12: { double _r = detDID_I_read();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 13: detDID_V_Ctl(); break;
        case 14: { double _r = detDIDZeroCtl();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 15: configIO((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 16: detRead(); break;
        case 17: pleaseWaitForIt(); break;
        case 18: detMoveBaseline(); break;
        case 19: detTCDPolarityfCtl(); break;
        case 20: { double _r = FlowH2read();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 21: { double _r = FlowAirread();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 22: { double _r = FlowSampread();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 23: { double _r = FlowMethread();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 24: { QString _r = numIn();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 25: { QString _r = numInPopUp();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 26: { QString _r = numInPolPopUp();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 27: { QString _r = numInGainPopUp();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 28: deleteNumIn((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 29: deleteNumPop((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 30: deleteGainPop((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 31: deletePolPop((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 32: powerOnInitSettings(); break;
        case 33: setSettings(); break;
        case 34: saveDetSettings(); break;
        case 35: processDid_line((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 36: getDidSettings(); break;
        case 37: setSettings2(); break;
        default: ;
        }
        _id -= 38;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
