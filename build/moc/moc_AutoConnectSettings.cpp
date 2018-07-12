/****************************************************************************
** Meta object code from reading C++ file 'AutoConnectSettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Settings/AutoConnectSettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AutoConnectSettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AutoConnectSettings_t {
    QByteArrayData data[13];
    char stringdata0[227];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AutoConnectSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AutoConnectSettings_t qt_meta_stringdata_AutoConnectSettings = {
    {
QT_MOC_LITERAL(0, 0, 19), // "AutoConnectSettings"
QT_MOC_LITERAL(1, 20, 14), // "autoConnectUDP"
QT_MOC_LITERAL(2, 35, 5), // "Fact*"
QT_MOC_LITERAL(3, 41, 18), // "autoConnectPixhawk"
QT_MOC_LITERAL(4, 60, 19), // "autoConnectSiKRadio"
QT_MOC_LITERAL(5, 80, 18), // "autoConnectPX4Flow"
QT_MOC_LITERAL(6, 99, 17), // "autoConnectRTKGPS"
QT_MOC_LITERAL(7, 117, 21), // "autoConnectLibrePilot"
QT_MOC_LITERAL(8, 139, 19), // "autoConnectNmeaPort"
QT_MOC_LITERAL(9, 159, 19), // "autoConnectNmeaBaud"
QT_MOC_LITERAL(10, 179, 13), // "udpListenPort"
QT_MOC_LITERAL(11, 193, 15), // "udpTargetHostIP"
QT_MOC_LITERAL(12, 209, 17) // "udpTargetHostPort"

    },
    "AutoConnectSettings\0autoConnectUDP\0"
    "Fact*\0autoConnectPixhawk\0autoConnectSiKRadio\0"
    "autoConnectPX4Flow\0autoConnectRTKGPS\0"
    "autoConnectLibrePilot\0autoConnectNmeaPort\0"
    "autoConnectNmeaBaud\0udpListenPort\0"
    "udpTargetHostIP\0udpTargetHostPort"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AutoConnectSettings[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      11,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00095409,
       3, 0x80000000 | 2, 0x00095409,
       4, 0x80000000 | 2, 0x00095409,
       5, 0x80000000 | 2, 0x00095409,
       6, 0x80000000 | 2, 0x00095409,
       7, 0x80000000 | 2, 0x00095409,
       8, 0x80000000 | 2, 0x00095409,
       9, 0x80000000 | 2, 0x00095409,
      10, 0x80000000 | 2, 0x00095409,
      11, 0x80000000 | 2, 0x00095409,
      12, 0x80000000 | 2, 0x00095409,

       0        // eod
};

void AutoConnectSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
        case 9:
        case 8:
        case 7:
        case 6:
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        AutoConnectSettings *_t = static_cast<AutoConnectSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->autoConnectUDP(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->autoConnectPixhawk(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->autoConnectSiKRadio(); break;
        case 3: *reinterpret_cast< Fact**>(_v) = _t->autoConnectPX4Flow(); break;
        case 4: *reinterpret_cast< Fact**>(_v) = _t->autoConnectRTKGPS(); break;
        case 5: *reinterpret_cast< Fact**>(_v) = _t->autoConnectLibrePilot(); break;
        case 6: *reinterpret_cast< Fact**>(_v) = _t->autoConnectNmeaPort(); break;
        case 7: *reinterpret_cast< Fact**>(_v) = _t->autoConnectNmeaBaud(); break;
        case 8: *reinterpret_cast< Fact**>(_v) = _t->udpListenPort(); break;
        case 9: *reinterpret_cast< Fact**>(_v) = _t->udpTargetHostIP(); break;
        case 10: *reinterpret_cast< Fact**>(_v) = _t->udpTargetHostPort(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

const QMetaObject AutoConnectSettings::staticMetaObject = {
    { &SettingsGroup::staticMetaObject, qt_meta_stringdata_AutoConnectSettings.data,
      qt_meta_data_AutoConnectSettings,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AutoConnectSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutoConnectSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AutoConnectSettings.stringdata0))
        return static_cast<void*>(this);
    return SettingsGroup::qt_metacast(_clname);
}

int AutoConnectSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SettingsGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
