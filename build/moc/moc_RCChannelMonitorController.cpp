/****************************************************************************
** Meta object code from reading C++ file 'RCChannelMonitorController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/QmlControls/RCChannelMonitorController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RCChannelMonitorController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RCChannelMonitorController_t {
    QByteArrayData data[10];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RCChannelMonitorController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RCChannelMonitorController_t qt_meta_stringdata_RCChannelMonitorController = {
    {
QT_MOC_LITERAL(0, 0, 26), // "RCChannelMonitorController"
QT_MOC_LITERAL(1, 27, 19), // "channelCountChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 12), // "channelCount"
QT_MOC_LITERAL(4, 61, 21), // "channelRCValueChanged"
QT_MOC_LITERAL(5, 83, 7), // "channel"
QT_MOC_LITERAL(6, 91, 7), // "rcValue"
QT_MOC_LITERAL(7, 99, 18), // "_rcChannelsChanged"
QT_MOC_LITERAL(8, 118, 28), // "int[Vehicle::cMaxRcChannels]"
QT_MOC_LITERAL(9, 147, 9) // "pwmValues"

    },
    "RCChannelMonitorController\0"
    "channelCountChanged\0\0channelCount\0"
    "channelRCValueChanged\0channel\0rcValue\0"
    "_rcChannelsChanged\0int[Vehicle::cMaxRcChannels]\0"
    "pwmValues"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RCChannelMonitorController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    2,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 8,    3,    9,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,

       0        // eod
};

void RCChannelMonitorController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RCChannelMonitorController *_t = static_cast<RCChannelMonitorController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->channelCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->channelRCValueChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->_rcChannelsChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)[Vehicle::cMaxRcChannels]>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (RCChannelMonitorController::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RCChannelMonitorController::channelCountChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (RCChannelMonitorController::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RCChannelMonitorController::channelRCValueChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        RCChannelMonitorController *_t = static_cast<RCChannelMonitorController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->channelCount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject RCChannelMonitorController::staticMetaObject = {
    { &FactPanelController::staticMetaObject, qt_meta_stringdata_RCChannelMonitorController.data,
      qt_meta_data_RCChannelMonitorController,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RCChannelMonitorController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RCChannelMonitorController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RCChannelMonitorController.stringdata0))
        return static_cast<void*>(this);
    return FactPanelController::qt_metacast(_clname);
}

int RCChannelMonitorController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void RCChannelMonitorController::channelCountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RCChannelMonitorController::channelRCValueChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
