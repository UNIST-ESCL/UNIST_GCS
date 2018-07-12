/****************************************************************************
** Meta object code from reading C++ file 'SerialLink.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/SerialLink.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SerialLink.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SerialConfiguration_t {
    QByteArrayData data[18];
    char stringdata0[231];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SerialConfiguration_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SerialConfiguration_t qt_meta_stringdata_SerialConfiguration = {
    {
QT_MOC_LITERAL(0, 0, 19), // "SerialConfiguration"
QT_MOC_LITERAL(1, 20, 11), // "baudChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 15), // "dataBitsChanged"
QT_MOC_LITERAL(4, 49, 18), // "flowControlChanged"
QT_MOC_LITERAL(5, 68, 15), // "stopBitsChanged"
QT_MOC_LITERAL(6, 84, 13), // "parityChanged"
QT_MOC_LITERAL(7, 98, 15), // "portNameChanged"
QT_MOC_LITERAL(8, 114, 22), // "portDisplayNameChanged"
QT_MOC_LITERAL(9, 137, 16), // "usbDirectChanged"
QT_MOC_LITERAL(10, 154, 9), // "usbDirect"
QT_MOC_LITERAL(11, 164, 4), // "baud"
QT_MOC_LITERAL(12, 169, 8), // "dataBits"
QT_MOC_LITERAL(13, 178, 11), // "flowControl"
QT_MOC_LITERAL(14, 190, 8), // "stopBits"
QT_MOC_LITERAL(15, 199, 6), // "parity"
QT_MOC_LITERAL(16, 206, 8), // "portName"
QT_MOC_LITERAL(17, 215, 15) // "portDisplayName"

    },
    "SerialConfiguration\0baudChanged\0\0"
    "dataBitsChanged\0flowControlChanged\0"
    "stopBitsChanged\0parityChanged\0"
    "portNameChanged\0portDisplayNameChanged\0"
    "usbDirectChanged\0usbDirect\0baud\0"
    "dataBits\0flowControl\0stopBits\0parity\0"
    "portName\0portDisplayName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SerialConfiguration[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       8,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,
       6,    0,   58,    2, 0x06 /* Public */,
       7,    0,   59,    2, 0x06 /* Public */,
       8,    0,   60,    2, 0x06 /* Public */,
       9,    1,   61,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,

 // properties: name, type, flags
      11, QMetaType::Int, 0x00495103,
      12, QMetaType::Int, 0x00495103,
      13, QMetaType::Int, 0x00495103,
      14, QMetaType::Int, 0x00495103,
      15, QMetaType::Int, 0x00495103,
      16, QMetaType::QString, 0x00495103,
      17, QMetaType::QString, 0x00495001,
      10, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,

       0        // eod
};

void SerialConfiguration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SerialConfiguration *_t = static_cast<SerialConfiguration *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->baudChanged(); break;
        case 1: _t->dataBitsChanged(); break;
        case 2: _t->flowControlChanged(); break;
        case 3: _t->stopBitsChanged(); break;
        case 4: _t->parityChanged(); break;
        case 5: _t->portNameChanged(); break;
        case 6: _t->portDisplayNameChanged(); break;
        case 7: _t->usbDirectChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SerialConfiguration::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialConfiguration::baudChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SerialConfiguration::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialConfiguration::dataBitsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SerialConfiguration::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialConfiguration::flowControlChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (SerialConfiguration::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialConfiguration::stopBitsChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (SerialConfiguration::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialConfiguration::parityChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (SerialConfiguration::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialConfiguration::portNameChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (SerialConfiguration::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialConfiguration::portDisplayNameChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (SerialConfiguration::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialConfiguration::usbDirectChanged)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        SerialConfiguration *_t = static_cast<SerialConfiguration *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->baud(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->dataBits(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->flowControl(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->stopBits(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->parity(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->portName(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->portDisplayName(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->usbDirect(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        SerialConfiguration *_t = static_cast<SerialConfiguration *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBaud(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setDataBits(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setFlowControl(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setStopBits(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setParity(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setPortName(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setUsbDirect(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject SerialConfiguration::staticMetaObject = {
    { &LinkConfiguration::staticMetaObject, qt_meta_stringdata_SerialConfiguration.data,
      qt_meta_data_SerialConfiguration,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SerialConfiguration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SerialConfiguration::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SerialConfiguration.stringdata0))
        return static_cast<void*>(this);
    return LinkConfiguration::qt_metacast(_clname);
}

int SerialConfiguration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LinkConfiguration::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SerialConfiguration::baudChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SerialConfiguration::dataBitsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SerialConfiguration::flowControlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SerialConfiguration::stopBitsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void SerialConfiguration::parityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void SerialConfiguration::portNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void SerialConfiguration::portDisplayNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void SerialConfiguration::usbDirectChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
struct qt_meta_stringdata_SerialLink_t {
    QByteArrayData data[9];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SerialLink_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SerialLink_t qt_meta_stringdata_SerialLink = {
    {
QT_MOC_LITERAL(0, 0, 10), // "SerialLink"
QT_MOC_LITERAL(1, 11, 16), // "aboutToCloseFlag"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 11), // "_writeBytes"
QT_MOC_LITERAL(4, 41, 4), // "data"
QT_MOC_LITERAL(5, 46, 9), // "linkError"
QT_MOC_LITERAL(6, 56, 28), // "QSerialPort::SerialPortError"
QT_MOC_LITERAL(7, 85, 5), // "error"
QT_MOC_LITERAL(8, 91, 10) // "_readBytes"

    },
    "SerialLink\0aboutToCloseFlag\0\0_writeBytes\0"
    "data\0linkError\0QSerialPort::SerialPortError\0"
    "error\0_readBytes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SerialLink[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   35,    2, 0x08 /* Private */,
       5,    1,   38,    2, 0x0a /* Public */,
       8,    0,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,

       0        // eod
};

void SerialLink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SerialLink *_t = static_cast<SerialLink *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->aboutToCloseFlag(); break;
        case 1: _t->_writeBytes((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 2: _t->linkError((*reinterpret_cast< QSerialPort::SerialPortError(*)>(_a[1]))); break;
        case 3: _t->_readBytes(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSerialPort::SerialPortError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SerialLink::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialLink::aboutToCloseFlag)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject SerialLink::staticMetaObject = {
    { &LinkInterface::staticMetaObject, qt_meta_stringdata_SerialLink.data,
      qt_meta_data_SerialLink,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SerialLink::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SerialLink::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SerialLink.stringdata0))
        return static_cast<void*>(this);
    return LinkInterface::qt_metacast(_clname);
}

int SerialLink::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void SerialLink::aboutToCloseFlag()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
