/****************************************************************************
** Meta object code from reading C++ file 'APMFlightModesComponentController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/AutoPilotPlugins/APM/APMFlightModesComponentController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'APMFlightModesComponentController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_APMFlightModesComponentController_t {
    QByteArrayData data[12];
    char stringdata0[229];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_APMFlightModesComponentController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_APMFlightModesComponentController_t qt_meta_stringdata_APMFlightModesComponentController = {
    {
QT_MOC_LITERAL(0, 0, 33), // "APMFlightModesComponentContro..."
QT_MOC_LITERAL(1, 34, 23), // "activeFlightModeChanged"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 16), // "activeFlightMode"
QT_MOC_LITERAL(4, 76, 27), // "channelOptionEnabledChanged"
QT_MOC_LITERAL(5, 104, 18), // "_rcChannelsChanged"
QT_MOC_LITERAL(6, 123, 12), // "channelCount"
QT_MOC_LITERAL(7, 136, 28), // "int[Vehicle::cMaxRcChannels]"
QT_MOC_LITERAL(8, 165, 9), // "pwmValues"
QT_MOC_LITERAL(9, 175, 15), // "modeParamPrefix"
QT_MOC_LITERAL(10, 191, 16), // "modeChannelParam"
QT_MOC_LITERAL(11, 208, 20) // "channelOptionEnabled"

    },
    "APMFlightModesComponentController\0"
    "activeFlightModeChanged\0\0activeFlightMode\0"
    "channelOptionEnabledChanged\0"
    "_rcChannelsChanged\0channelCount\0"
    "int[Vehicle::cMaxRcChannels]\0pwmValues\0"
    "modeParamPrefix\0modeChannelParam\0"
    "channelOptionEnabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_APMFlightModesComponentController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       5,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    0,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 7,    6,    8,

 // properties: name, type, flags
       9, QMetaType::QString, 0x00095401,
      10, QMetaType::QString, 0x00095401,
       3, QMetaType::Int, 0x00495001,
       6, QMetaType::Int, 0x00095401,
      11, QMetaType::QVariantList, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       1,

       0        // eod
};

void APMFlightModesComponentController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        APMFlightModesComponentController *_t = static_cast<APMFlightModesComponentController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activeFlightModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->channelOptionEnabledChanged(); break;
        case 2: _t->_rcChannelsChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)[Vehicle::cMaxRcChannels]>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (APMFlightModesComponentController::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&APMFlightModesComponentController::activeFlightModeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (APMFlightModesComponentController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&APMFlightModesComponentController::channelOptionEnabledChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        APMFlightModesComponentController *_t = static_cast<APMFlightModesComponentController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->_modeParamPrefix; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->_modeChannelParam; break;
        case 2: *reinterpret_cast< int*>(_v) = _t->activeFlightMode(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->_channelCount; break;
        case 4: *reinterpret_cast< QVariantList*>(_v) = _t->channelOptionEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject APMFlightModesComponentController::staticMetaObject = {
    { &FactPanelController::staticMetaObject, qt_meta_stringdata_APMFlightModesComponentController.data,
      qt_meta_data_APMFlightModesComponentController,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *APMFlightModesComponentController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *APMFlightModesComponentController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_APMFlightModesComponentController.stringdata0))
        return static_cast<void*>(this);
    return FactPanelController::qt_metacast(_clname);
}

int APMFlightModesComponentController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactPanelController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void APMFlightModesComponentController::activeFlightModeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void APMFlightModesComponentController::channelOptionEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
