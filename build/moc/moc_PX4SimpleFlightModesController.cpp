/****************************************************************************
** Meta object code from reading C++ file 'PX4SimpleFlightModesController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/AutoPilotPlugins/PX4/PX4SimpleFlightModesController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PX4SimpleFlightModesController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PX4SimpleFlightModesController_t {
    QByteArrayData data[11];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PX4SimpleFlightModesController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PX4SimpleFlightModesController_t qt_meta_stringdata_PX4SimpleFlightModesController = {
    {
QT_MOC_LITERAL(0, 0, 30), // "PX4SimpleFlightModesController"
QT_MOC_LITERAL(1, 31, 23), // "activeFlightModeChanged"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 16), // "activeFlightMode"
QT_MOC_LITERAL(4, 73, 27), // "channelOptionEnabledChanged"
QT_MOC_LITERAL(5, 101, 22), // "rcChannelValuesChanged"
QT_MOC_LITERAL(6, 124, 18), // "_rcChannelsChanged"
QT_MOC_LITERAL(7, 143, 12), // "channelCount"
QT_MOC_LITERAL(8, 156, 28), // "int[Vehicle::cMaxRcChannels]"
QT_MOC_LITERAL(9, 185, 9), // "pwmValues"
QT_MOC_LITERAL(10, 195, 15) // "rcChannelValues"

    },
    "PX4SimpleFlightModesController\0"
    "activeFlightModeChanged\0\0activeFlightMode\0"
    "channelOptionEnabledChanged\0"
    "rcChannelValuesChanged\0_rcChannelsChanged\0"
    "channelCount\0int[Vehicle::cMaxRcChannels]\0"
    "pwmValues\0rcChannelValues"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PX4SimpleFlightModesController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    0,   37,    2, 0x06 /* Public */,
       5,    0,   38,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    2,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 8,    7,    9,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00495001,
       7, QMetaType::Int, 0x00095401,
      10, QMetaType::QVariantList, 0x00495003,

 // properties: notify_signal_id
       0,
       0,
       2,

       0        // eod
};

void PX4SimpleFlightModesController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PX4SimpleFlightModesController *_t = static_cast<PX4SimpleFlightModesController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activeFlightModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->channelOptionEnabledChanged(); break;
        case 2: _t->rcChannelValuesChanged(); break;
        case 3: _t->_rcChannelsChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)[Vehicle::cMaxRcChannels]>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (PX4SimpleFlightModesController::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4SimpleFlightModesController::activeFlightModeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PX4SimpleFlightModesController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4SimpleFlightModesController::channelOptionEnabledChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PX4SimpleFlightModesController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4SimpleFlightModesController::rcChannelValuesChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        PX4SimpleFlightModesController *_t = static_cast<PX4SimpleFlightModesController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->activeFlightMode(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->_channelCount; break;
        case 2: *reinterpret_cast< QVariantList*>(_v) = _t->_rcChannelValues; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        PX4SimpleFlightModesController *_t = static_cast<PX4SimpleFlightModesController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2:
            if (_t->_rcChannelValues != *reinterpret_cast< QVariantList*>(_v)) {
                _t->_rcChannelValues = *reinterpret_cast< QVariantList*>(_v);
                Q_EMIT _t->rcChannelValuesChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject PX4SimpleFlightModesController::staticMetaObject = {
    { &FactPanelController::staticMetaObject, qt_meta_stringdata_PX4SimpleFlightModesController.data,
      qt_meta_data_PX4SimpleFlightModesController,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PX4SimpleFlightModesController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PX4SimpleFlightModesController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PX4SimpleFlightModesController.stringdata0))
        return static_cast<void*>(this);
    return FactPanelController::qt_metacast(_clname);
}

int PX4SimpleFlightModesController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactPanelController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void PX4SimpleFlightModesController::activeFlightModeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PX4SimpleFlightModesController::channelOptionEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PX4SimpleFlightModesController::rcChannelValuesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
