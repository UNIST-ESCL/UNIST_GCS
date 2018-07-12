/****************************************************************************
** Meta object code from reading C++ file 'MockLink.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/MockLink.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MockLink.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MockConfiguration_t {
    QByteArrayData data[10];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MockConfiguration_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MockConfiguration_t qt_meta_stringdata_MockConfiguration = {
    {
QT_MOC_LITERAL(0, 0, 17), // "MockConfiguration"
QT_MOC_LITERAL(1, 18, 15), // "firmwareChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 14), // "vehicleChanged"
QT_MOC_LITERAL(4, 50, 17), // "sendStatusChanged"
QT_MOC_LITERAL(5, 68, 18), // "highLatencyChanged"
QT_MOC_LITERAL(6, 87, 8), // "firmware"
QT_MOC_LITERAL(7, 96, 7), // "vehicle"
QT_MOC_LITERAL(8, 104, 10), // "sendStatus"
QT_MOC_LITERAL(9, 115, 11) // "highLatency"

    },
    "MockConfiguration\0firmwareChanged\0\0"
    "vehicleChanged\0sendStatusChanged\0"
    "highLatencyChanged\0firmware\0vehicle\0"
    "sendStatus\0highLatency"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MockConfiguration[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::Int, 0x00495103,
       7, QMetaType::Int, 0x00495103,
       8, QMetaType::Bool, 0x00495003,
       9, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void MockConfiguration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MockConfiguration *_t = static_cast<MockConfiguration *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->firmwareChanged(); break;
        case 1: _t->vehicleChanged(); break;
        case 2: _t->sendStatusChanged(); break;
        case 3: _t->highLatencyChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MockConfiguration::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MockConfiguration::firmwareChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MockConfiguration::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MockConfiguration::vehicleChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MockConfiguration::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MockConfiguration::sendStatusChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MockConfiguration::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MockConfiguration::highLatencyChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        MockConfiguration *_t = static_cast<MockConfiguration *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->firmware(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->vehicle(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->sendStatusText(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->highLatency(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        MockConfiguration *_t = static_cast<MockConfiguration *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFirmware(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setVehicle(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setSendStatusText(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setHighLatency(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject MockConfiguration::staticMetaObject = {
    { &LinkConfiguration::staticMetaObject, qt_meta_stringdata_MockConfiguration.data,
      qt_meta_data_MockConfiguration,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MockConfiguration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MockConfiguration::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MockConfiguration.stringdata0))
        return static_cast<void*>(this);
    return LinkConfiguration::qt_metacast(_clname);
}

int MockConfiguration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LinkConfiguration::qt_metacall(_c, _id, _a);
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
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MockConfiguration::firmwareChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MockConfiguration::vehicleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MockConfiguration::sendStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MockConfiguration::highLatencyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
struct qt_meta_stringdata_MockLink_t {
    QByteArrayData data[7];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MockLink_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MockLink_t qt_meta_stringdata_MockLink = {
    {
QT_MOC_LITERAL(0, 0, 8), // "MockLink"
QT_MOC_LITERAL(1, 9, 11), // "_writeBytes"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 5), // "bytes"
QT_MOC_LITERAL(4, 28, 12), // "_run1HzTasks"
QT_MOC_LITERAL(5, 41, 13), // "_run10HzTasks"
QT_MOC_LITERAL(6, 55, 14) // "_run500HzTasks"

    },
    "MockLink\0_writeBytes\0\0bytes\0_run1HzTasks\0"
    "_run10HzTasks\0_run500HzTasks"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MockLink[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,
       4,    0,   37,    2, 0x08 /* Private */,
       5,    0,   38,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MockLink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MockLink *_t = static_cast<MockLink *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->_writeBytes((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 1: _t->_run1HzTasks(); break;
        case 2: _t->_run10HzTasks(); break;
        case 3: _t->_run500HzTasks(); break;
        default: ;
        }
    }
}

const QMetaObject MockLink::staticMetaObject = {
    { &LinkInterface::staticMetaObject, qt_meta_stringdata_MockLink.data,
      qt_meta_data_MockLink,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MockLink::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MockLink::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MockLink.stringdata0))
        return static_cast<void*>(this);
    return LinkInterface::qt_metacast(_clname);
}

int MockLink::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LinkInterface::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
