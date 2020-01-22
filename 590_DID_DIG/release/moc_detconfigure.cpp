/****************************************************************************
** Meta object code from reading C++ file 'detconfigure.h'
**
** Created: Thu Jan 16 07:30:38 2020
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
      43,   14, // methods
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
     100,   13,   93,   13, 0x0a,
     111,   13,   93,   13, 0x0a,
     123,   13,   93,   13, 0x0a,
     138,   13,   13,   13, 0x0a,
     153,   13,   13,   13, 0x0a,
     173,   13,   93,   13, 0x0a,
     189,   13,   93,   13, 0x0a,
     209,  205,   13,   13, 0x0a,
     224,   13,   13,   13, 0x0a,
     234,   13,   13,   13, 0x0a,
     252,   13,   13,   13, 0x0a,
     270,   13,   13,   13, 0x0a,
     291,   13,   93,   13, 0x0a,
     304,   13,   93,   13, 0x0a,
     318,   13,   93,   13, 0x0a,
     333,   13,   93,   13, 0x0a,
     356,   13,  348,   13, 0x0a,
     364,   13,  348,   13, 0x0a,
     377,   13,  348,   13, 0x0a,
     393,   13,  348,   13, 0x0a,
     410,   13,   13,   13, 0x0a,
     435,  431,   13,   13, 0x0a,
     457,  431,   13,   13, 0x0a,
     480,  431,   13,   13, 0x0a,
     502,   13,   13,   13, 0x0a,
     524,   13,   13,   13, 0x0a,
     538,   13,   13,   13, 0x0a,
     565,  556,   13,   13, 0x0a,
     598,   13,   13,   13, 0x0a,
     615,   13,   13,   13, 0x0a,
     630,   13,   13,   13, 0x0a,
     653,  645,   13,   13, 0x0a,
     672,  431,   13,   13, 0x0a,
     701,   13,  348,   13, 0x0a,
     718,   13,   13,   13, 0x0a,
     730,   13,   93,   13, 0x0a,
     742,  645,   13,   13, 0x0a,
     766,  431,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_detConfigure[] = {
    "detConfigure\0\0event\0keyReleaseEvent(QKeyEvent*)\0"
    "detRange()\0detGain()\0detDIDIgnite()\0"
    "detIgn()\0double\0detHvSig()\0detDIDSig()\0"
    "detTCD_I_Sig()\0detDID_I_Ctl()\0"
    "detDID_I_OnOffCtl()\0detDID_I_read()\0"
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
    "detDID_V_Ctl()\0voltage\0voltageSET(double)\0"
    "deleteVoltageNumPop(QString)\0"
    "callGainAdjust()\0detPolSet()\0detPolSig()\0"
    "polarizationSET(double)\0"
    "passPolarization(QString)\0"
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
        case 5: { double _r = detHvSig();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 6: { double _r = detDIDSig();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 7: { double _r = detTCD_I_Sig();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 8: detDID_I_Ctl(); break;
        case 9: detDID_I_OnOffCtl(); break;
        case 10: { double _r = detDID_I_read();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 11: { double _r = detDIDZeroCtl();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 12: configIO((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 13: detRead(); break;
        case 14: pleaseWaitForIt(); break;
        case 15: detMoveBaseline(); break;
        case 16: detTCDPolarityfCtl(); break;
        case 17: { double _r = FlowH2read();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 18: { double _r = FlowAirread();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 19: { double _r = FlowSampread();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 20: { double _r = FlowMethread();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 21: { QString _r = numIn();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 22: { QString _r = numInPopUp();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 23: { QString _r = numInPolPopUp();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 24: { QString _r = numInGainPopUp();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 25: deleteNumIn((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 26: deleteNumPop((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 27: deleteGainPop((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 28: deletePolPop((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 29: powerOnInitSettings(); break;
        case 30: setSettings(); break;
        case 31: saveDetSettings(); break;
        case 32: processDid_line((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 33: getDidSettings(); break;
        case 34: setSettings2(); break;
        case 35: detDID_V_Ctl(); break;
        case 36: voltageSET((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 37: deleteVoltageNumPop((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 38: { QString _r = callGainAdjust();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 39: detPolSet(); break;
        case 40: { double _r = detPolSig();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 41: polarizationSET((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 42: passPolarization((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 43;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
