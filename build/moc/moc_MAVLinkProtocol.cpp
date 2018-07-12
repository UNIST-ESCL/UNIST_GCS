/****************************************************************************
** Meta object code from reading C++ file 'MAVLinkProtocol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/MAVLinkProtocol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MAVLinkProtocol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MAVLinkProtocol_t {
    QByteArrayData data[44];
    char stringdata0[570];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MAVLinkProtocol_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MAVLinkProtocol_t qt_meta_stringdata_MAVLinkProtocol = {
    {
QT_MOC_LITERAL(0, 0, 15), // "MAVLinkProtocol"
QT_MOC_LITERAL(1, 16, 20), // "vehicleHeartbeatInfo"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 14), // "LinkInterface*"
QT_MOC_LITERAL(4, 53, 4), // "link"
QT_MOC_LITERAL(5, 58, 9), // "vehicleId"
QT_MOC_LITERAL(6, 68, 11), // "componentId"
QT_MOC_LITERAL(7, 80, 19), // "vehicleFirmwareType"
QT_MOC_LITERAL(8, 100, 11), // "vehicleType"
QT_MOC_LITERAL(9, 112, 15), // "messageReceived"
QT_MOC_LITERAL(10, 128, 17), // "mavlink_message_t"
QT_MOC_LITERAL(11, 146, 7), // "message"
QT_MOC_LITERAL(12, 154, 19), // "versionCheckChanged"
QT_MOC_LITERAL(13, 174, 7), // "enabled"
QT_MOC_LITERAL(14, 182, 21), // "protocolStatusMessage"
QT_MOC_LITERAL(15, 204, 5), // "title"
QT_MOC_LITERAL(16, 210, 15), // "systemIdChanged"
QT_MOC_LITERAL(17, 226, 8), // "systemId"
QT_MOC_LITERAL(18, 235, 25), // "receiveLossPercentChanged"
QT_MOC_LITERAL(19, 261, 5), // "uasId"
QT_MOC_LITERAL(20, 267, 11), // "lossPercent"
QT_MOC_LITERAL(21, 279, 23), // "receiveLossTotalChanged"
QT_MOC_LITERAL(22, 303, 9), // "totalLoss"
QT_MOC_LITERAL(23, 313, 18), // "radioStatusChanged"
QT_MOC_LITERAL(24, 332, 8), // "rxerrors"
QT_MOC_LITERAL(25, 341, 5), // "fixed"
QT_MOC_LITERAL(26, 347, 4), // "rssi"
QT_MOC_LITERAL(27, 352, 7), // "remrssi"
QT_MOC_LITERAL(28, 360, 5), // "txbuf"
QT_MOC_LITERAL(29, 366, 5), // "noise"
QT_MOC_LITERAL(30, 372, 8), // "remnoise"
QT_MOC_LITERAL(31, 381, 16), // "saveTelemetryLog"
QT_MOC_LITERAL(32, 398, 11), // "tempLogfile"
QT_MOC_LITERAL(33, 410, 22), // "checkTelemetrySavePath"
QT_MOC_LITERAL(34, 433, 12), // "receiveBytes"
QT_MOC_LITERAL(35, 446, 1), // "b"
QT_MOC_LITERAL(36, 448, 11), // "setSystemId"
QT_MOC_LITERAL(37, 460, 2), // "id"
QT_MOC_LITERAL(38, 463, 18), // "enableVersionCheck"
QT_MOC_LITERAL(39, 482, 12), // "loadSettings"
QT_MOC_LITERAL(40, 495, 13), // "storeSettings"
QT_MOC_LITERAL(41, 509, 18), // "deleteTempLogFiles"
QT_MOC_LITERAL(42, 528, 20), // "checkForLostLogFiles"
QT_MOC_LITERAL(43, 549, 20) // "_vehicleCountChanged"

    },
    "MAVLinkProtocol\0vehicleHeartbeatInfo\0"
    "\0LinkInterface*\0link\0vehicleId\0"
    "componentId\0vehicleFirmwareType\0"
    "vehicleType\0messageReceived\0"
    "mavlink_message_t\0message\0versionCheckChanged\0"
    "enabled\0protocolStatusMessage\0title\0"
    "systemIdChanged\0systemId\0"
    "receiveLossPercentChanged\0uasId\0"
    "lossPercent\0receiveLossTotalChanged\0"
    "totalLoss\0radioStatusChanged\0rxerrors\0"
    "fixed\0rssi\0remrssi\0txbuf\0noise\0remnoise\0"
    "saveTelemetryLog\0tempLogfile\0"
    "checkTelemetrySavePath\0receiveBytes\0"
    "b\0setSystemId\0id\0enableVersionCheck\0"
    "loadSettings\0storeSettings\0"
    "deleteTempLogFiles\0checkForLostLogFiles\0"
    "_vehicleCountChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MAVLinkProtocol[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,  104,    2, 0x06 /* Public */,
       9,    2,  115,    2, 0x06 /* Public */,
      12,    1,  120,    2, 0x06 /* Public */,
      14,    2,  123,    2, 0x06 /* Public */,
      16,    1,  128,    2, 0x06 /* Public */,
      18,    2,  131,    2, 0x06 /* Public */,
      21,    2,  136,    2, 0x06 /* Public */,
      23,    8,  141,    2, 0x06 /* Public */,
      31,    1,  158,    2, 0x06 /* Public */,
      33,    0,  161,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      34,    2,  162,    2, 0x0a /* Public */,
      36,    1,  167,    2, 0x0a /* Public */,
      38,    1,  170,    2, 0x0a /* Public */,
      39,    0,  173,    2, 0x0a /* Public */,
      40,    0,  174,    2, 0x0a /* Public */,
      41,    0,  175,    2, 0x0a /* Public */,
      42,    0,  176,    2, 0x0a /* Public */,
      43,    0,  177,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    4,    5,    6,    7,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 10,    4,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   15,   11,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int, QMetaType::Float,   19,   20,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   19,   22,
    QMetaType::Void, 0x80000000 | 3, QMetaType::UInt, QMetaType::UInt, QMetaType::Int, QMetaType::Int, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt,    4,   24,   25,   26,   27,   28,   29,   30,
    QMetaType::Void, QMetaType::QString,   32,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QByteArray,    4,   35,
    QMetaType::Void, QMetaType::Int,   37,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MAVLinkProtocol::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MAVLinkProtocol *_t = static_cast<MAVLinkProtocol *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->vehicleHeartbeatInfo((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 1: _t->messageReceived((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< mavlink_message_t(*)>(_a[2]))); break;
        case 2: _t->versionCheckChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->protocolStatusMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->systemIdChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->receiveLossPercentChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 6: _t->receiveLossTotalChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->radioStatusChanged((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< uint(*)>(_a[6])),(*reinterpret_cast< uint(*)>(_a[7])),(*reinterpret_cast< uint(*)>(_a[8]))); break;
        case 8: _t->saveTelemetryLog((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->checkTelemetrySavePath(); break;
        case 10: _t->receiveBytes((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 11: _t->setSystemId((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->enableVersionCheck((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->loadSettings(); break;
        case 14: _t->storeSettings(); break;
        case 15: _t->deleteTempLogFiles(); break;
        case 16: _t->checkForLostLogFiles(); break;
        case 17: _t->_vehicleCountChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MAVLinkProtocol::*_t)(LinkInterface * , int , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkProtocol::vehicleHeartbeatInfo)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MAVLinkProtocol::*_t)(LinkInterface * , mavlink_message_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkProtocol::messageReceived)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MAVLinkProtocol::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkProtocol::versionCheckChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MAVLinkProtocol::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkProtocol::protocolStatusMessage)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MAVLinkProtocol::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkProtocol::systemIdChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (MAVLinkProtocol::*_t)(int , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkProtocol::receiveLossPercentChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (MAVLinkProtocol::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkProtocol::receiveLossTotalChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (MAVLinkProtocol::*_t)(LinkInterface * , unsigned  , unsigned  , int , int , unsigned  , unsigned  , unsigned  );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkProtocol::radioStatusChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (MAVLinkProtocol::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkProtocol::saveTelemetryLog)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (MAVLinkProtocol::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkProtocol::checkTelemetrySavePath)) {
                *result = 9;
                return;
            }
        }
    }
}

const QMetaObject MAVLinkProtocol::staticMetaObject = {
    { &QGCTool::staticMetaObject, qt_meta_stringdata_MAVLinkProtocol.data,
      qt_meta_data_MAVLinkProtocol,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MAVLinkProtocol::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MAVLinkProtocol::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MAVLinkProtocol.stringdata0))
        return static_cast<void*>(this);
    return QGCTool::qt_metacast(_clname);
}

int MAVLinkProtocol::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void MAVLinkProtocol::vehicleHeartbeatInfo(LinkInterface * _t1, int _t2, int _t3, int _t4, int _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MAVLinkProtocol::messageReceived(LinkInterface * _t1, mavlink_message_t _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MAVLinkProtocol::versionCheckChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MAVLinkProtocol::protocolStatusMessage(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MAVLinkProtocol::systemIdChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MAVLinkProtocol::receiveLossPercentChanged(int _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MAVLinkProtocol::receiveLossTotalChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MAVLinkProtocol::radioStatusChanged(LinkInterface * _t1, unsigned  _t2, unsigned  _t3, int _t4, int _t5, unsigned  _t6, unsigned  _t7, unsigned  _t8)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MAVLinkProtocol::saveTelemetryLog(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MAVLinkProtocol::checkTelemetrySavePath()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
