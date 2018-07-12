/****************************************************************************
** Meta object code from reading C++ file 'FirmwarePlugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/FirmwarePlugin/FirmwarePlugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FirmwarePlugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FirmwarePlugin_t {
    QByteArrayData data[3];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FirmwarePlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FirmwarePlugin_t qt_meta_stringdata_FirmwarePlugin = {
    {
QT_MOC_LITERAL(0, 0, 14), // "FirmwarePlugin"
QT_MOC_LITERAL(1, 15, 24), // "toolbarIndicatorsChanged"
QT_MOC_LITERAL(2, 40, 0) // ""

    },
    "FirmwarePlugin\0toolbarIndicatorsChanged\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FirmwarePlugin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void FirmwarePlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FirmwarePlugin *_t = static_cast<FirmwarePlugin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->toolbarIndicatorsChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (FirmwarePlugin::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwarePlugin::toolbarIndicatorsChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject FirmwarePlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FirmwarePlugin.data,
      qt_meta_data_FirmwarePlugin,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FirmwarePlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FirmwarePlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FirmwarePlugin.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FirmwarePlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void FirmwarePlugin::toolbarIndicatorsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_FirmwarePluginFactory_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FirmwarePluginFactory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FirmwarePluginFactory_t qt_meta_stringdata_FirmwarePluginFactory = {
    {
QT_MOC_LITERAL(0, 0, 21) // "FirmwarePluginFactory"

    },
    "FirmwarePluginFactory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FirmwarePluginFactory[] = {

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

void FirmwarePluginFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject FirmwarePluginFactory::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FirmwarePluginFactory.data,
      qt_meta_data_FirmwarePluginFactory,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FirmwarePluginFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FirmwarePluginFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FirmwarePluginFactory.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FirmwarePluginFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FirmwarePluginFactoryRegister_t {
    QByteArrayData data[1];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FirmwarePluginFactoryRegister_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FirmwarePluginFactoryRegister_t qt_meta_stringdata_FirmwarePluginFactoryRegister = {
    {
QT_MOC_LITERAL(0, 0, 29) // "FirmwarePluginFactoryRegister"

    },
    "FirmwarePluginFactoryRegister"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FirmwarePluginFactoryRegister[] = {

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

void FirmwarePluginFactoryRegister::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject FirmwarePluginFactoryRegister::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FirmwarePluginFactoryRegister.data,
      qt_meta_data_FirmwarePluginFactoryRegister,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FirmwarePluginFactoryRegister::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FirmwarePluginFactoryRegister::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FirmwarePluginFactoryRegister.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FirmwarePluginFactoryRegister::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
