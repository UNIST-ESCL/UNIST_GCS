/****************************************************************************
** Meta object code from reading C++ file 'UDPLink.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/UDPLink.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UDPLink.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UDPConfiguration_t {
    QByteArrayData data[9];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UDPConfiguration_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UDPConfiguration_t qt_meta_stringdata_UDPConfiguration = {
    {
QT_MOC_LITERAL(0, 0, 16), // "UDPConfiguration"
QT_MOC_LITERAL(1, 17, 16), // "localPortChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 15), // "hostListChanged"
QT_MOC_LITERAL(4, 51, 7), // "addHost"
QT_MOC_LITERAL(5, 59, 4), // "host"
QT_MOC_LITERAL(6, 64, 10), // "removeHost"
QT_MOC_LITERAL(7, 75, 9), // "localPort"
QT_MOC_LITERAL(8, 85, 8) // "hostList"

    },
    "UDPConfiguration\0localPortChanged\0\0"
    "hostListChanged\0addHost\0host\0removeHost\0"
    "localPort\0hostList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UDPConfiguration[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    1,   36,    2, 0x02 /* Public */,
       6,    1,   39,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,

 // properties: name, type, flags
       7, QMetaType::UShort, 0x00495103,
       8, QMetaType::QStringList, 0x00495001,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void UDPConfiguration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UDPConfiguration *_t = static_cast<UDPConfiguration *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->localPortChanged(); break;
        case 1: _t->hostListChanged(); break;
        case 2: _t->addHost((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->removeHost((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (UDPConfiguration::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UDPConfiguration::localPortChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (UDPConfiguration::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UDPConfiguration::hostListChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        UDPConfiguration *_t = static_cast<UDPConfiguration *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint16*>(_v) = _t->localPort(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->hostList(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        UDPConfiguration *_t = static_cast<UDPConfiguration *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLocalPort(*reinterpret_cast< quint16*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject UDPConfiguration::staticMetaObject = {
    { &LinkConfiguration::staticMetaObject, qt_meta_stringdata_UDPConfiguration.data,
      qt_meta_data_UDPConfiguration,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UDPConfiguration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UDPConfiguration::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UDPConfiguration.stringdata0))
        return static_cast<void*>(this);
    return LinkConfiguration::qt_metacast(_clname);
}

int UDPConfiguration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void UDPConfiguration::localPortChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void UDPConfiguration::hostListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_UDPLink_t {
    QByteArrayData data[5];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UDPLink_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UDPLink_t qt_meta_stringdata_UDPLink = {
    {
QT_MOC_LITERAL(0, 0, 7), // "UDPLink"
QT_MOC_LITERAL(1, 8, 9), // "readBytes"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 11), // "_writeBytes"
QT_MOC_LITERAL(4, 31, 4) // "data"

    },
    "UDPLink\0readBytes\0\0_writeBytes\0data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UDPLink[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    1,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    4,

       0        // eod
};

void UDPLink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UDPLink *_t = static_cast<UDPLink *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->readBytes(); break;
        case 1: _t->_writeBytes((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject UDPLink::staticMetaObject = {
    { &LinkInterface::staticMetaObject, qt_meta_stringdata_UDPLink.data,
      qt_meta_data_UDPLink,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UDPLink::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UDPLink::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UDPLink.stringdata0))
        return static_cast<void*>(this);
    return LinkInterface::qt_metacast(_clname);
}

int UDPLink::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LinkInterface::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
