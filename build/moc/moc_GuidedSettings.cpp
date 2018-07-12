/****************************************************************************
** Meta object code from reading C++ file 'GuidedSettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Settings/GuidedSettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GuidedSettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GuidedSettings_t {
    QByteArrayData data[6];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GuidedSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GuidedSettings_t qt_meta_stringdata_GuidedSettings = {
    {
QT_MOC_LITERAL(0, 0, 14), // "GuidedSettings"
QT_MOC_LITERAL(1, 15, 24), // "fixedWingMinimumAltitude"
QT_MOC_LITERAL(2, 40, 5), // "Fact*"
QT_MOC_LITERAL(3, 46, 24), // "fixedWingMaximumAltitude"
QT_MOC_LITERAL(4, 71, 22), // "vehicleMinimumAltitude"
QT_MOC_LITERAL(5, 94, 22) // "vehicleMaximumAltitude"

    },
    "GuidedSettings\0fixedWingMinimumAltitude\0"
    "Fact*\0fixedWingMaximumAltitude\0"
    "vehicleMinimumAltitude\0vehicleMaximumAltitude"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GuidedSettings[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00095409,
       3, 0x80000000 | 2, 0x00095409,
       4, 0x80000000 | 2, 0x00095409,
       5, 0x80000000 | 2, 0x00095409,

       0        // eod
};

void GuidedSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        GuidedSettings *_t = static_cast<GuidedSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->fixedWingMinimumAltitude(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->fixedWingMaximumAltitude(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->vehicleMinimumAltitude(); break;
        case 3: *reinterpret_cast< Fact**>(_v) = _t->vehicleMaximumAltitude(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

const QMetaObject GuidedSettings::staticMetaObject = {
    { &SettingsGroup::staticMetaObject, qt_meta_stringdata_GuidedSettings.data,
      qt_meta_data_GuidedSettings,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GuidedSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GuidedSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GuidedSettings.stringdata0))
        return static_cast<void*>(this);
    return SettingsGroup::qt_metacast(_clname);
}

int GuidedSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SettingsGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
