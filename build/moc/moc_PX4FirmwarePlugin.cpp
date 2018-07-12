/****************************************************************************
** Meta object code from reading C++ file 'PX4FirmwarePlugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/FirmwarePlugin/PX4/PX4FirmwarePlugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PX4FirmwarePlugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PX4FirmwarePlugin_t {
    QByteArrayData data[8];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PX4FirmwarePlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PX4FirmwarePlugin_t qt_meta_stringdata_PX4FirmwarePlugin = {
    {
QT_MOC_LITERAL(0, 0, 17), // "PX4FirmwarePlugin"
QT_MOC_LITERAL(1, 18, 17), // "_mavCommandResult"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 9), // "vehicleId"
QT_MOC_LITERAL(4, 47, 9), // "component"
QT_MOC_LITERAL(5, 57, 7), // "command"
QT_MOC_LITERAL(6, 65, 6), // "result"
QT_MOC_LITERAL(7, 72, 20) // "noReponseFromVehicle"

    },
    "PX4FirmwarePlugin\0_mavCommandResult\0"
    "\0vehicleId\0component\0command\0result\0"
    "noReponseFromVehicle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PX4FirmwarePlugin[] = {

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
       1,    5,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool,    3,    4,    5,    6,    7,

       0        // eod
};

void PX4FirmwarePlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PX4FirmwarePlugin *_t = static_cast<PX4FirmwarePlugin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->_mavCommandResult((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        default: ;
        }
    }
}

const QMetaObject PX4FirmwarePlugin::staticMetaObject = {
    { &FirmwarePlugin::staticMetaObject, qt_meta_stringdata_PX4FirmwarePlugin.data,
      qt_meta_data_PX4FirmwarePlugin,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PX4FirmwarePlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PX4FirmwarePlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PX4FirmwarePlugin.stringdata0))
        return static_cast<void*>(this);
    return FirmwarePlugin::qt_metacast(_clname);
}

int PX4FirmwarePlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_PX4FirmwarePluginInstanceData_t {
    QByteArrayData data[1];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PX4FirmwarePluginInstanceData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PX4FirmwarePluginInstanceData_t qt_meta_stringdata_PX4FirmwarePluginInstanceData = {
    {
QT_MOC_LITERAL(0, 0, 29) // "PX4FirmwarePluginInstanceData"

    },
    "PX4FirmwarePluginInstanceData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PX4FirmwarePluginInstanceData[] = {

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

void PX4FirmwarePluginInstanceData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject PX4FirmwarePluginInstanceData::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PX4FirmwarePluginInstanceData.data,
      qt_meta_data_PX4FirmwarePluginInstanceData,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PX4FirmwarePluginInstanceData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PX4FirmwarePluginInstanceData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PX4FirmwarePluginInstanceData.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PX4FirmwarePluginInstanceData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
