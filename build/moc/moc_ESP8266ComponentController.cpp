/****************************************************************************
** Meta object code from reading C++ file 'ESP8266ComponentController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/AutoPilotPlugins/Common/ESP8266ComponentController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ESP8266ComponentController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ESP8266ComponentController_t {
    QByteArrayData data[35];
    char stringdata0[451];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ESP8266ComponentController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ESP8266ComponentController_t qt_meta_stringdata_ESP8266ComponentController = {
    {
QT_MOC_LITERAL(0, 0, 26), // "ESP8266ComponentController"
QT_MOC_LITERAL(1, 27, 14), // "versionChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 15), // "wifiSSIDChanged"
QT_MOC_LITERAL(4, 59, 19), // "wifiPasswordChanged"
QT_MOC_LITERAL(5, 79, 18), // "wifiSSIDStaChanged"
QT_MOC_LITERAL(6, 98, 22), // "wifiPasswordStaChanged"
QT_MOC_LITERAL(7, 121, 16), // "baudIndexChanged"
QT_MOC_LITERAL(8, 138, 11), // "busyChanged"
QT_MOC_LITERAL(9, 150, 17), // "_mavCommandResult"
QT_MOC_LITERAL(10, 168, 9), // "vehicleId"
QT_MOC_LITERAL(11, 178, 9), // "component"
QT_MOC_LITERAL(12, 188, 7), // "command"
QT_MOC_LITERAL(13, 196, 6), // "result"
QT_MOC_LITERAL(14, 203, 20), // "noReponseFromVehicle"
QT_MOC_LITERAL(15, 224, 12), // "_ssidChanged"
QT_MOC_LITERAL(16, 237, 5), // "value"
QT_MOC_LITERAL(17, 243, 16), // "_passwordChanged"
QT_MOC_LITERAL(18, 260, 12), // "_baudChanged"
QT_MOC_LITERAL(19, 273, 15), // "_versionChanged"
QT_MOC_LITERAL(20, 289, 15), // "restoreDefaults"
QT_MOC_LITERAL(21, 305, 6), // "reboot"
QT_MOC_LITERAL(22, 312, 11), // "componentID"
QT_MOC_LITERAL(23, 324, 7), // "version"
QT_MOC_LITERAL(24, 332, 13), // "wifiIPAddress"
QT_MOC_LITERAL(25, 346, 8), // "wifiSSID"
QT_MOC_LITERAL(26, 355, 12), // "wifiPassword"
QT_MOC_LITERAL(27, 368, 11), // "wifiSSIDSta"
QT_MOC_LITERAL(28, 380, 15), // "wifiPasswordSta"
QT_MOC_LITERAL(29, 396, 12), // "wifiChannels"
QT_MOC_LITERAL(30, 409, 9), // "baudRates"
QT_MOC_LITERAL(31, 419, 9), // "baudIndex"
QT_MOC_LITERAL(32, 429, 4), // "busy"
QT_MOC_LITERAL(33, 434, 7), // "vehicle"
QT_MOC_LITERAL(34, 442, 8) // "Vehicle*"

    },
    "ESP8266ComponentController\0versionChanged\0"
    "\0wifiSSIDChanged\0wifiPasswordChanged\0"
    "wifiSSIDStaChanged\0wifiPasswordStaChanged\0"
    "baudIndexChanged\0busyChanged\0"
    "_mavCommandResult\0vehicleId\0component\0"
    "command\0result\0noReponseFromVehicle\0"
    "_ssidChanged\0value\0_passwordChanged\0"
    "_baudChanged\0_versionChanged\0"
    "restoreDefaults\0reboot\0componentID\0"
    "version\0wifiIPAddress\0wifiSSID\0"
    "wifiPassword\0wifiSSIDSta\0wifiPasswordSta\0"
    "wifiChannels\0baudRates\0baudIndex\0busy\0"
    "vehicle\0Vehicle*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ESP8266ComponentController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
      12,  116, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    0,   85,    2, 0x06 /* Public */,
       4,    0,   86,    2, 0x06 /* Public */,
       5,    0,   87,    2, 0x06 /* Public */,
       6,    0,   88,    2, 0x06 /* Public */,
       7,    0,   89,    2, 0x06 /* Public */,
       8,    0,   90,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    5,   91,    2, 0x08 /* Private */,
      15,    1,  102,    2, 0x08 /* Private */,
      17,    1,  105,    2, 0x08 /* Private */,
      18,    1,  108,    2, 0x08 /* Private */,
      19,    1,  111,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      20,    0,  114,    2, 0x02 /* Public */,
      21,    0,  115,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   10,   11,   12,   13,   14,
    QMetaType::Void, QMetaType::QVariant,   16,
    QMetaType::Void, QMetaType::QVariant,   16,
    QMetaType::Void, QMetaType::QVariant,   16,
    QMetaType::Void, QMetaType::QVariant,   16,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      22, QMetaType::Int, 0x00095401,
      23, QMetaType::QString, 0x00495001,
      24, QMetaType::QString, 0x00095401,
      25, QMetaType::QString, 0x00495103,
      26, QMetaType::QString, 0x00495103,
      27, QMetaType::QString, 0x00495103,
      28, QMetaType::QString, 0x00495103,
      29, QMetaType::QStringList, 0x00095401,
      30, QMetaType::QStringList, 0x00095401,
      31, QMetaType::Int, 0x00495103,
      32, QMetaType::Bool, 0x00495001,
      33, 0x80000000 | 34, 0x00095409,

 // properties: notify_signal_id
       0,
       0,
       0,
       1,
       2,
       3,
       4,
       0,
       0,
       5,
       6,
       0,

       0        // eod
};

void ESP8266ComponentController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ESP8266ComponentController *_t = static_cast<ESP8266ComponentController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->versionChanged(); break;
        case 1: _t->wifiSSIDChanged(); break;
        case 2: _t->wifiPasswordChanged(); break;
        case 3: _t->wifiSSIDStaChanged(); break;
        case 4: _t->wifiPasswordStaChanged(); break;
        case 5: _t->baudIndexChanged(); break;
        case 6: _t->busyChanged(); break;
        case 7: _t->_mavCommandResult((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 8: _t->_ssidChanged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 9: _t->_passwordChanged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 10: _t->_baudChanged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 11: _t->_versionChanged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 12: _t->restoreDefaults(); break;
        case 13: _t->reboot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ESP8266ComponentController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ESP8266ComponentController::versionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ESP8266ComponentController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ESP8266ComponentController::wifiSSIDChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ESP8266ComponentController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ESP8266ComponentController::wifiPasswordChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ESP8266ComponentController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ESP8266ComponentController::wifiSSIDStaChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (ESP8266ComponentController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ESP8266ComponentController::wifiPasswordStaChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (ESP8266ComponentController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ESP8266ComponentController::baudIndexChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (ESP8266ComponentController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ESP8266ComponentController::busyChanged)) {
                *result = 6;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 11:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vehicle* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ESP8266ComponentController *_t = static_cast<ESP8266ComponentController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->componentID(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->version(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->wifiIPAddress(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->wifiSSID(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->wifiPassword(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->wifiSSIDSta(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->wifiPasswordSta(); break;
        case 7: *reinterpret_cast< QStringList*>(_v) = _t->wifiChannels(); break;
        case 8: *reinterpret_cast< QStringList*>(_v) = _t->baudRates(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->baudIndex(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->busy(); break;
        case 11: *reinterpret_cast< Vehicle**>(_v) = _t->vehicle(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        ESP8266ComponentController *_t = static_cast<ESP8266ComponentController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setWifiSSID(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setWifiPassword(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setWifiSSIDSta(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setWifiPasswordSta(*reinterpret_cast< QString*>(_v)); break;
        case 9: _t->setBaudIndex(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject ESP8266ComponentController::staticMetaObject = {
    { &FactPanelController::staticMetaObject, qt_meta_stringdata_ESP8266ComponentController.data,
      qt_meta_data_ESP8266ComponentController,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ESP8266ComponentController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ESP8266ComponentController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ESP8266ComponentController.stringdata0))
        return static_cast<void*>(this);
    return FactPanelController::qt_metacast(_clname);
}

int ESP8266ComponentController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactPanelController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 12;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ESP8266ComponentController::versionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ESP8266ComponentController::wifiSSIDChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ESP8266ComponentController::wifiPasswordChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ESP8266ComponentController::wifiSSIDStaChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ESP8266ComponentController::wifiPasswordStaChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ESP8266ComponentController::baudIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ESP8266ComponentController::busyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
