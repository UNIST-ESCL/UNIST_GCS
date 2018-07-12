/****************************************************************************
** Meta object code from reading C++ file 'AutoPilotPlugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/AutoPilotPlugins/AutoPilotPlugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AutoPilotPlugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AutoPilotPlugin_t {
    QByteArrayData data[10];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AutoPilotPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AutoPilotPlugin_t qt_meta_stringdata_AutoPilotPlugin = {
    {
QT_MOC_LITERAL(0, 0, 15), // "AutoPilotPlugin"
QT_MOC_LITERAL(1, 16, 20), // "setupCompleteChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 13), // "setupComplete"
QT_MOC_LITERAL(4, 52, 24), // "vehicleComponentsChanged"
QT_MOC_LITERAL(5, 77, 20), // "_recalcSetupComplete"
QT_MOC_LITERAL(6, 98, 17), // "prerequisiteSetup"
QT_MOC_LITERAL(7, 116, 17), // "VehicleComponent*"
QT_MOC_LITERAL(8, 134, 9), // "component"
QT_MOC_LITERAL(9, 144, 17) // "vehicleComponents"

    },
    "AutoPilotPlugin\0setupCompleteChanged\0"
    "\0setupComplete\0vehicleComponentsChanged\0"
    "_recalcSetupComplete\0prerequisiteSetup\0"
    "VehicleComponent*\0component\0"
    "vehicleComponents"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AutoPilotPlugin[] = {

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
       1,    1,   34,    2, 0x06 /* Public */,
       4,    0,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   38,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       6,    1,   39,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::QString, 0x80000000 | 7,    8,

 // properties: name, type, flags
       9, QMetaType::QVariantList, 0x00495001,
       3, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       1,
       0,

       0        // eod
};

void AutoPilotPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AutoPilotPlugin *_t = static_cast<AutoPilotPlugin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setupCompleteChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->vehicleComponentsChanged(); break;
        case 2: _t->_recalcSetupComplete(); break;
        case 3: { QString _r = _t->prerequisiteSetup((*reinterpret_cast< VehicleComponent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< VehicleComponent* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (AutoPilotPlugin::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AutoPilotPlugin::setupCompleteChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AutoPilotPlugin::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AutoPilotPlugin::vehicleComponentsChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        AutoPilotPlugin *_t = static_cast<AutoPilotPlugin *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantList*>(_v) = _t->vehicleComponents(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->setupComplete(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject AutoPilotPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AutoPilotPlugin.data,
      qt_meta_data_AutoPilotPlugin,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AutoPilotPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutoPilotPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AutoPilotPlugin.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AutoPilotPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void AutoPilotPlugin::setupCompleteChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AutoPilotPlugin::vehicleComponentsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
