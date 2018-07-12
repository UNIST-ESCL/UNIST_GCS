/****************************************************************************
** Meta object code from reading C++ file 'MultiVehicleManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Vehicle/MultiVehicleManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MultiVehicleManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MultiVehicleManager_t {
    QByteArrayData data[39];
    char stringdata0[669];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MultiVehicleManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MultiVehicleManager_t qt_meta_stringdata_MultiVehicleManager = {
    {
QT_MOC_LITERAL(0, 0, 19), // "MultiVehicleManager"
QT_MOC_LITERAL(1, 20, 12), // "vehicleAdded"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 8), // "Vehicle*"
QT_MOC_LITERAL(4, 43, 7), // "vehicle"
QT_MOC_LITERAL(5, 51, 14), // "vehicleRemoved"
QT_MOC_LITERAL(6, 66, 29), // "activeVehicleAvailableChanged"
QT_MOC_LITERAL(7, 96, 22), // "activeVehicleAvailable"
QT_MOC_LITERAL(8, 119, 37), // "parameterReadyVehicleAvailabl..."
QT_MOC_LITERAL(9, 157, 30), // "parameterReadyVehicleAvailable"
QT_MOC_LITERAL(10, 188, 20), // "activeVehicleChanged"
QT_MOC_LITERAL(11, 209, 13), // "activeVehicle"
QT_MOC_LITERAL(12, 223, 26), // "gcsHeartBeatEnabledChanged"
QT_MOC_LITERAL(13, 250, 19), // "gcsHeartBeatEnabled"
QT_MOC_LITERAL(14, 270, 26), // "_deleteVehiclePhase2Signal"
QT_MOC_LITERAL(15, 297, 20), // "_deleteVehiclePhase1"
QT_MOC_LITERAL(16, 318, 20), // "_deleteVehiclePhase2"
QT_MOC_LITERAL(17, 339, 23), // "_setActiveVehiclePhase2"
QT_MOC_LITERAL(18, 363, 30), // "_vehicleParametersReadyChanged"
QT_MOC_LITERAL(19, 394, 15), // "parametersReady"
QT_MOC_LITERAL(20, 410, 17), // "_sendGCSHeartbeat"
QT_MOC_LITERAL(21, 428, 21), // "_vehicleHeartbeatInfo"
QT_MOC_LITERAL(22, 450, 14), // "LinkInterface*"
QT_MOC_LITERAL(23, 465, 4), // "link"
QT_MOC_LITERAL(24, 470, 9), // "vehicleId"
QT_MOC_LITERAL(25, 480, 11), // "componentId"
QT_MOC_LITERAL(26, 492, 19), // "vehicleFirmwareType"
QT_MOC_LITERAL(27, 512, 11), // "vehicleType"
QT_MOC_LITERAL(28, 524, 23), // "_requestProtocolVersion"
QT_MOC_LITERAL(29, 548, 7), // "version"
QT_MOC_LITERAL(30, 556, 11), // "saveSetting"
QT_MOC_LITERAL(31, 568, 3), // "key"
QT_MOC_LITERAL(32, 572, 5), // "value"
QT_MOC_LITERAL(33, 578, 11), // "loadSetting"
QT_MOC_LITERAL(34, 590, 12), // "defaultValue"
QT_MOC_LITERAL(35, 603, 14), // "getVehicleById"
QT_MOC_LITERAL(36, 618, 8), // "vehicles"
QT_MOC_LITERAL(37, 627, 19), // "QmlObjectListModel*"
QT_MOC_LITERAL(38, 647, 21) // "offlineEditingVehicle"

    },
    "MultiVehicleManager\0vehicleAdded\0\0"
    "Vehicle*\0vehicle\0vehicleRemoved\0"
    "activeVehicleAvailableChanged\0"
    "activeVehicleAvailable\0"
    "parameterReadyVehicleAvailableChanged\0"
    "parameterReadyVehicleAvailable\0"
    "activeVehicleChanged\0activeVehicle\0"
    "gcsHeartBeatEnabledChanged\0"
    "gcsHeartBeatEnabled\0_deleteVehiclePhase2Signal\0"
    "_deleteVehiclePhase1\0_deleteVehiclePhase2\0"
    "_setActiveVehiclePhase2\0"
    "_vehicleParametersReadyChanged\0"
    "parametersReady\0_sendGCSHeartbeat\0"
    "_vehicleHeartbeatInfo\0LinkInterface*\0"
    "link\0vehicleId\0componentId\0"
    "vehicleFirmwareType\0vehicleType\0"
    "_requestProtocolVersion\0version\0"
    "saveSetting\0key\0value\0loadSetting\0"
    "defaultValue\0getVehicleById\0vehicles\0"
    "QmlObjectListModel*\0offlineEditingVehicle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MultiVehicleManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       6,  154, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       5,    1,  102,    2, 0x06 /* Public */,
       6,    1,  105,    2, 0x06 /* Public */,
       8,    1,  108,    2, 0x06 /* Public */,
      10,    1,  111,    2, 0x06 /* Public */,
      12,    1,  114,    2, 0x06 /* Public */,
      14,    0,  117,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    1,  118,    2, 0x08 /* Private */,
      16,    0,  121,    2, 0x08 /* Private */,
      17,    0,  122,    2, 0x08 /* Private */,
      18,    1,  123,    2, 0x08 /* Private */,
      20,    0,  126,    2, 0x08 /* Private */,
      21,    5,  127,    2, 0x08 /* Private */,
      28,    1,  138,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      30,    2,  141,    2, 0x02 /* Public */,
      33,    2,  146,    2, 0x02 /* Public */,
      35,    1,  151,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, 0x80000000 | 3,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   23,   24,   25,   26,   27,
    QMetaType::Void, QMetaType::UInt,   29,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   31,   32,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,   31,   34,
    0x80000000 | 3, QMetaType::Int,   24,

 // properties: name, type, flags
       7, QMetaType::Bool, 0x00495001,
       9, QMetaType::Bool, 0x00495001,
      11, 0x80000000 | 3, 0x0049510b,
      36, 0x80000000 | 37, 0x00095409,
      13, QMetaType::Bool, 0x00495003,
      38, 0x80000000 | 3, 0x00095409,

 // properties: notify_signal_id
       2,
       3,
       4,
       0,
       5,
       0,

       0        // eod
};

void MultiVehicleManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MultiVehicleManager *_t = static_cast<MultiVehicleManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->vehicleAdded((*reinterpret_cast< Vehicle*(*)>(_a[1]))); break;
        case 1: _t->vehicleRemoved((*reinterpret_cast< Vehicle*(*)>(_a[1]))); break;
        case 2: _t->activeVehicleAvailableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->parameterReadyVehicleAvailableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->activeVehicleChanged((*reinterpret_cast< Vehicle*(*)>(_a[1]))); break;
        case 5: _t->gcsHeartBeatEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->_deleteVehiclePhase2Signal(); break;
        case 7: _t->_deleteVehiclePhase1((*reinterpret_cast< Vehicle*(*)>(_a[1]))); break;
        case 8: _t->_deleteVehiclePhase2(); break;
        case 9: _t->_setActiveVehiclePhase2(); break;
        case 10: _t->_vehicleParametersReadyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->_sendGCSHeartbeat(); break;
        case 12: _t->_vehicleHeartbeatInfo((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 13: _t->_requestProtocolVersion((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 14: _t->saveSetting((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 15: { QString _r = _t->loadSetting((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 16: { Vehicle* _r = _t->getVehicleById((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Vehicle**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vehicle* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vehicle* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vehicle* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vehicle* >(); break;
            }
            break;
        case 12:
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
            typedef void (MultiVehicleManager::*_t)(Vehicle * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiVehicleManager::vehicleAdded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MultiVehicleManager::*_t)(Vehicle * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiVehicleManager::vehicleRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MultiVehicleManager::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiVehicleManager::activeVehicleAvailableChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MultiVehicleManager::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiVehicleManager::parameterReadyVehicleAvailableChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MultiVehicleManager::*_t)(Vehicle * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiVehicleManager::activeVehicleChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (MultiVehicleManager::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiVehicleManager::gcsHeartBeatEnabledChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (MultiVehicleManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiVehicleManager::_deleteVehiclePhase2Signal)) {
                *result = 6;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        case 5:
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vehicle* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        MultiVehicleManager *_t = static_cast<MultiVehicleManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->activeVehicleAvailable(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->parameterReadyVehicleAvailable(); break;
        case 2: *reinterpret_cast< Vehicle**>(_v) = _t->activeVehicle(); break;
        case 3: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->vehicles(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->gcsHeartbeatEnabled(); break;
        case 5: *reinterpret_cast< Vehicle**>(_v) = _t->offlineEditingVehicle(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        MultiVehicleManager *_t = static_cast<MultiVehicleManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setActiveVehicle(*reinterpret_cast< Vehicle**>(_v)); break;
        case 4: _t->setGcsHeartbeatEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject MultiVehicleManager::staticMetaObject = {
    { &QGCTool::staticMetaObject, qt_meta_stringdata_MultiVehicleManager.data,
      qt_meta_data_MultiVehicleManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MultiVehicleManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MultiVehicleManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MultiVehicleManager.stringdata0))
        return static_cast<void*>(this);
    return QGCTool::qt_metacast(_clname);
}

int MultiVehicleManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MultiVehicleManager::vehicleAdded(Vehicle * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MultiVehicleManager::vehicleRemoved(Vehicle * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MultiVehicleManager::activeVehicleAvailableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MultiVehicleManager::parameterReadyVehicleAvailableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MultiVehicleManager::activeVehicleChanged(Vehicle * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MultiVehicleManager::gcsHeartBeatEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MultiVehicleManager::_deleteVehiclePhase2Signal()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
