/****************************************************************************
** Meta object code from reading C++ file 'TCPLink.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/TCPLink.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TCPLink.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TCPConfiguration_t {
    QByteArrayData data[6];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TCPConfiguration_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TCPConfiguration_t qt_meta_stringdata_TCPConfiguration = {
    {
QT_MOC_LITERAL(0, 0, 16), // "TCPConfiguration"
QT_MOC_LITERAL(1, 17, 11), // "portChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 11), // "hostChanged"
QT_MOC_LITERAL(4, 42, 4), // "port"
QT_MOC_LITERAL(5, 47, 4) // "host"

    },
    "TCPConfiguration\0portChanged\0\0hostChanged\0"
    "port\0host"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TCPConfiguration[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   26, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::UShort, 0x00495103,
       5, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void TCPConfiguration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TCPConfiguration *_t = static_cast<TCPConfiguration *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->portChanged(); break;
        case 1: _t->hostChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TCPConfiguration::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TCPConfiguration::portChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TCPConfiguration::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TCPConfiguration::hostChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        TCPConfiguration *_t = static_cast<TCPConfiguration *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint16*>(_v) = _t->port(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->host(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        TCPConfiguration *_t = static_cast<TCPConfiguration *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPort(*reinterpret_cast< quint16*>(_v)); break;
        case 1: _t->setHost(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject TCPConfiguration::staticMetaObject = {
    { &LinkConfiguration::staticMetaObject, qt_meta_stringdata_TCPConfiguration.data,
      qt_meta_data_TCPConfiguration,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TCPConfiguration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TCPConfiguration::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TCPConfiguration.stringdata0))
        return static_cast<void*>(this);
    return LinkConfiguration::qt_metacast(_clname);
}

int TCPConfiguration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LinkConfiguration::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TCPConfiguration::portChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TCPConfiguration::hostChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_TCPLink_t {
    QByteArrayData data[11];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TCPLink_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TCPLink_t qt_meta_stringdata_TCPLink = {
    {
QT_MOC_LITERAL(0, 0, 7), // "TCPLink"
QT_MOC_LITERAL(1, 8, 11), // "_writeBytes"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 4), // "data"
QT_MOC_LITERAL(4, 26, 19), // "waitForBytesWritten"
QT_MOC_LITERAL(5, 46, 5), // "msecs"
QT_MOC_LITERAL(6, 52, 16), // "waitForReadyRead"
QT_MOC_LITERAL(7, 69, 12), // "_socketError"
QT_MOC_LITERAL(8, 82, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(9, 111, 11), // "socketError"
QT_MOC_LITERAL(10, 123, 9) // "readBytes"

    },
    "TCPLink\0_writeBytes\0\0data\0waitForBytesWritten\0"
    "msecs\0waitForReadyRead\0_socketError\0"
    "QAbstractSocket::SocketError\0socketError\0"
    "readBytes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TCPLink[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       4,    1,   42,    2, 0x0a /* Public */,
       6,    1,   45,    2, 0x0a /* Public */,
       7,    1,   48,    2, 0x09 /* Protected */,
      10,    0,   51,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,

       0        // eod
};

void TCPLink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TCPLink *_t = static_cast<TCPLink *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->_writeBytes((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 1: _t->waitForBytesWritten((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->waitForReadyRead((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->_socketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 4: _t->readBytes(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    }
}

const QMetaObject TCPLink::staticMetaObject = {
    { &LinkInterface::staticMetaObject, qt_meta_stringdata_TCPLink.data,
      qt_meta_data_TCPLink,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TCPLink::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TCPLink::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TCPLink.stringdata0))
        return static_cast<void*>(this);
    return LinkInterface::qt_metacast(_clname);
}

int TCPLink::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LinkInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
