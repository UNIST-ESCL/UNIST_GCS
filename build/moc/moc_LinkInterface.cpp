/****************************************************************************
** Meta object code from reading C++ file 'LinkInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/LinkInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LinkInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LinkInterface_t {
    QByteArrayData data[35];
    char stringdata0[401];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LinkInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LinkInterface_t qt_meta_stringdata_LinkInterface = {
    {
QT_MOC_LITERAL(0, 0, 13), // "LinkInterface"
QT_MOC_LITERAL(1, 14, 18), // "autoconnectChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 11), // "autoconnect"
QT_MOC_LITERAL(4, 46, 13), // "activeChanged"
QT_MOC_LITERAL(5, 60, 14), // "LinkInterface*"
QT_MOC_LITERAL(6, 75, 4), // "link"
QT_MOC_LITERAL(7, 80, 6), // "active"
QT_MOC_LITERAL(8, 87, 10), // "vehicle_id"
QT_MOC_LITERAL(9, 98, 17), // "_invokeWriteBytes"
QT_MOC_LITERAL(10, 116, 18), // "highLatencyChanged"
QT_MOC_LITERAL(11, 135, 11), // "highLatency"
QT_MOC_LITERAL(12, 147, 17), // "connectionRemoved"
QT_MOC_LITERAL(13, 165, 13), // "bytesReceived"
QT_MOC_LITERAL(14, 179, 4), // "data"
QT_MOC_LITERAL(15, 184, 9), // "connected"
QT_MOC_LITERAL(16, 194, 12), // "disconnected"
QT_MOC_LITERAL(17, 207, 11), // "nameChanged"
QT_MOC_LITERAL(18, 219, 4), // "name"
QT_MOC_LITERAL(19, 224, 18), // "communicationError"
QT_MOC_LITERAL(20, 243, 5), // "title"
QT_MOC_LITERAL(21, 249, 5), // "error"
QT_MOC_LITERAL(22, 255, 19), // "communicationUpdate"
QT_MOC_LITERAL(23, 275, 8), // "linkname"
QT_MOC_LITERAL(24, 284, 4), // "text"
QT_MOC_LITERAL(25, 289, 14), // "writeBytesSafe"
QT_MOC_LITERAL(26, 304, 11), // "const char*"
QT_MOC_LITERAL(27, 316, 5), // "bytes"
QT_MOC_LITERAL(28, 322, 6), // "length"
QT_MOC_LITERAL(29, 329, 11), // "_writeBytes"
QT_MOC_LITERAL(30, 341, 14), // "_activeChanged"
QT_MOC_LITERAL(31, 356, 11), // "link_active"
QT_MOC_LITERAL(32, 368, 14), // "getHighLatency"
QT_MOC_LITERAL(33, 383, 7), // "getName"
QT_MOC_LITERAL(34, 391, 9) // "isPX4Flow"

    },
    "LinkInterface\0autoconnectChanged\0\0"
    "autoconnect\0activeChanged\0LinkInterface*\0"
    "link\0active\0vehicle_id\0_invokeWriteBytes\0"
    "highLatencyChanged\0highLatency\0"
    "connectionRemoved\0bytesReceived\0data\0"
    "connected\0disconnected\0nameChanged\0"
    "name\0communicationError\0title\0error\0"
    "communicationUpdate\0linkname\0text\0"
    "writeBytesSafe\0const char*\0bytes\0"
    "length\0_writeBytes\0_activeChanged\0"
    "link_active\0getHighLatency\0getName\0"
    "isPX4Flow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LinkInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       2,  156, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       4,    3,  102,    2, 0x06 /* Public */,
       9,    1,  109,    2, 0x06 /* Public */,
      10,    1,  112,    2, 0x06 /* Public */,
      12,    1,  115,    2, 0x06 /* Public */,
      13,    2,  118,    2, 0x06 /* Public */,
      15,    0,  123,    2, 0x06 /* Public */,
      16,    0,  124,    2, 0x06 /* Public */,
      17,    1,  125,    2, 0x06 /* Public */,
      19,    2,  128,    2, 0x06 /* Public */,
      22,    2,  133,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      25,    2,  138,    2, 0x0a /* Public */,
      29,    1,  143,    2, 0x08 /* Private */,
      30,    2,  146,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      31,    1,  151,    2, 0x02 /* Public */,
      32,    0,  154,    2, 0x02 /* Public */,
      33,    0,  155,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Bool, QMetaType::Int,    6,    7,    8,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QByteArray,    6,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   20,   21,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   23,   24,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 26, QMetaType::Int,   27,   28,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int,    7,    8,

 // methods: parameters
    QMetaType::Bool, QMetaType::Int,    8,
    QMetaType::Bool,
    QMetaType::QString,

 // properties: name, type, flags
       7, QMetaType::Bool, 0x00495001,
      34, QMetaType::Bool, 0x00095401,

 // properties: notify_signal_id
       1,
       0,

       0        // eod
};

void LinkInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LinkInterface *_t = static_cast<LinkInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->autoconnectChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->activeChanged((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->_invokeWriteBytes((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 3: _t->highLatencyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->connectionRemoved((*reinterpret_cast< LinkInterface*(*)>(_a[1]))); break;
        case 5: _t->bytesReceived((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 6: _t->connected(); break;
        case 7: _t->disconnected(); break;
        case 8: _t->nameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->communicationError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: _t->communicationUpdate((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 11: _t->writeBytesSafe((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->_writeBytes((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 13: _t->_activeChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: { bool _r = _t->link_active((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 15: { bool _r = _t->getHighLatency();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 16: { QString _r = _t->getName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 5:
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
            typedef void (LinkInterface::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkInterface::autoconnectChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (LinkInterface::*_t)(LinkInterface * , bool , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkInterface::activeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (LinkInterface::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkInterface::_invokeWriteBytes)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (LinkInterface::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkInterface::highLatencyChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (LinkInterface::*_t)(LinkInterface * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkInterface::connectionRemoved)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (LinkInterface::*_t)(LinkInterface * , QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkInterface::bytesReceived)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (LinkInterface::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkInterface::connected)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (LinkInterface::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkInterface::disconnected)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (LinkInterface::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkInterface::nameChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (LinkInterface::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkInterface::communicationError)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (LinkInterface::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkInterface::communicationUpdate)) {
                *result = 10;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        LinkInterface *_t = static_cast<LinkInterface *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->active(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isPX4Flow(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject LinkInterface::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_LinkInterface.data,
      qt_meta_data_LinkInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LinkInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LinkInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LinkInterface.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int LinkInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
void LinkInterface::autoconnectChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LinkInterface::activeChanged(LinkInterface * _t1, bool _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LinkInterface::_invokeWriteBytes(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void LinkInterface::highLatencyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void LinkInterface::connectionRemoved(LinkInterface * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void LinkInterface::bytesReceived(LinkInterface * _t1, QByteArray _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void LinkInterface::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void LinkInterface::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void LinkInterface::nameChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void LinkInterface::communicationError(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void LinkInterface::communicationUpdate(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
