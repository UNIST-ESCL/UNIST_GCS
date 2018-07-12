/****************************************************************************
** Meta object code from reading C++ file 'APMFirmwarePlugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/FirmwarePlugin/APM/APMFirmwarePlugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'APMFirmwarePlugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_APMFirmwarePlugin_t {
    QByteArrayData data[5];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_APMFirmwarePlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_APMFirmwarePlugin_t qt_meta_stringdata_APMFirmwarePlugin = {
    {
QT_MOC_LITERAL(0, 0, 17), // "APMFirmwarePlugin"
QT_MOC_LITERAL(1, 18, 17), // "_artooSocketError"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(4, 66, 11) // "socketError"

    },
    "APMFirmwarePlugin\0_artooSocketError\0"
    "\0QAbstractSocket::SocketError\0socketError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_APMFirmwarePlugin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void APMFirmwarePlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        APMFirmwarePlugin *_t = static_cast<APMFirmwarePlugin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->_artooSocketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    }
}

const QMetaObject APMFirmwarePlugin::staticMetaObject = {
    { &FirmwarePlugin::staticMetaObject, qt_meta_stringdata_APMFirmwarePlugin.data,
      qt_meta_data_APMFirmwarePlugin,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *APMFirmwarePlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *APMFirmwarePlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_APMFirmwarePlugin.stringdata0))
        return static_cast<void*>(this);
    return FirmwarePlugin::qt_metacast(_clname);
}

int APMFirmwarePlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FirmwarePlugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_APMFirmwarePluginInstanceData_t {
    QByteArrayData data[1];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_APMFirmwarePluginInstanceData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_APMFirmwarePluginInstanceData_t qt_meta_stringdata_APMFirmwarePluginInstanceData = {
    {
QT_MOC_LITERAL(0, 0, 29) // "APMFirmwarePluginInstanceData"

    },
    "APMFirmwarePluginInstanceData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_APMFirmwarePluginInstanceData[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void APMFirmwarePluginInstanceData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject APMFirmwarePluginInstanceData::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_APMFirmwarePluginInstanceData.data,
      qt_meta_data_APMFirmwarePluginInstanceData,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *APMFirmwarePluginInstanceData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *APMFirmwarePluginInstanceData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_APMFirmwarePluginInstanceData.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int APMFirmwarePluginInstanceData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
