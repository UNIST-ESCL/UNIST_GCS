/****************************************************************************
** Meta object code from reading C++ file 'PowerComponentController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/AutoPilotPlugins/PX4/PowerComponentController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PowerComponentController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PowerComponentController_t {
    QByteArrayData data[20];
    char stringdata0[308];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PowerComponentController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PowerComponentController_t qt_meta_stringdata_PowerComponentController = {
    {
QT_MOC_LITERAL(0, 0, 24), // "PowerComponentController"
QT_MOC_LITERAL(1, 25, 11), // "oldFirmware"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 13), // "newerFirmware"
QT_MOC_LITERAL(4, 52, 29), // "incorrectFirmwareRevReporting"
QT_MOC_LITERAL(5, 82, 14), // "connectBattery"
QT_MOC_LITERAL(6, 97, 17), // "disconnectBattery"
QT_MOC_LITERAL(7, 115, 16), // "batteryConnected"
QT_MOC_LITERAL(8, 132, 17), // "calibrationFailed"
QT_MOC_LITERAL(9, 150, 12), // "errorMessage"
QT_MOC_LITERAL(10, 163, 18), // "calibrationSuccess"
QT_MOC_LITERAL(11, 182, 15), // "warningMessages"
QT_MOC_LITERAL(12, 198, 21), // "_handleUASTextMessage"
QT_MOC_LITERAL(13, 220, 5), // "uasId"
QT_MOC_LITERAL(14, 226, 6), // "compId"
QT_MOC_LITERAL(15, 233, 8), // "severity"
QT_MOC_LITERAL(16, 242, 4), // "text"
QT_MOC_LITERAL(17, 247, 12), // "calibrateEsc"
QT_MOC_LITERAL(18, 260, 21), // "busConfigureActuators"
QT_MOC_LITERAL(19, 282, 25) // "stopBusConfigureActuators"

    },
    "PowerComponentController\0oldFirmware\0"
    "\0newerFirmware\0incorrectFirmwareRevReporting\0"
    "connectBattery\0disconnectBattery\0"
    "batteryConnected\0calibrationFailed\0"
    "errorMessage\0calibrationSuccess\0"
    "warningMessages\0_handleUASTextMessage\0"
    "uasId\0compId\0severity\0text\0calibrateEsc\0"
    "busConfigureActuators\0stopBusConfigureActuators"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PowerComponentController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    0,   76,    2, 0x06 /* Public */,
       5,    0,   77,    2, 0x06 /* Public */,
       6,    0,   78,    2, 0x06 /* Public */,
       7,    0,   79,    2, 0x06 /* Public */,
       8,    1,   80,    2, 0x06 /* Public */,
      10,    1,   83,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    4,   86,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      17,    0,   95,    2, 0x02 /* Public */,
      18,    0,   96,    2, 0x02 /* Public */,
      19,    0,   97,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QStringList,   11,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString,   13,   14,   15,   16,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PowerComponentController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PowerComponentController *_t = static_cast<PowerComponentController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->oldFirmware(); break;
        case 1: _t->newerFirmware(); break;
        case 2: _t->incorrectFirmwareRevReporting(); break;
        case 3: _t->connectBattery(); break;
        case 4: _t->disconnectBattery(); break;
        case 5: _t->batteryConnected(); break;
        case 6: _t->calibrationFailed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->calibrationSuccess((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 8: _t->_handleUASTextMessage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 9: _t->calibrateEsc(); break;
        case 10: _t->busConfigureActuators(); break;
        case 11: _t->stopBusConfigureActuators(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (PowerComponentController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PowerComponentController::oldFirmware)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PowerComponentController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PowerComponentController::newerFirmware)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PowerComponentController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PowerComponentController::incorrectFirmwareRevReporting)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (PowerComponentController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PowerComponentController::connectBattery)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (PowerComponentController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PowerComponentController::disconnectBattery)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (PowerComponentController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PowerComponentController::batteryConnected)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (PowerComponentController::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PowerComponentController::calibrationFailed)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (PowerComponentController::*_t)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PowerComponentController::calibrationSuccess)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject PowerComponentController::staticMetaObject = {
    { &FactPanelController::staticMetaObject, qt_meta_stringdata_PowerComponentController.data,
      qt_meta_data_PowerComponentController,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PowerComponentController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PowerComponentController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PowerComponentController.stringdata0))
        return static_cast<void*>(this);
    return FactPanelController::qt_metacast(_clname);
}

int PowerComponentController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactPanelController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void PowerComponentController::oldFirmware()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PowerComponentController::newerFirmware()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PowerComponentController::incorrectFirmwareRevReporting()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PowerComponentController::connectBattery()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void PowerComponentController::disconnectBattery()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void PowerComponentController::batteryConnected()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void PowerComponentController::calibrationFailed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void PowerComponentController::calibrationSuccess(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
