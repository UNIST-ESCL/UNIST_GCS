/****************************************************************************
** Meta object code from reading C++ file 'Vehicle.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Vehicle/Vehicle.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Vehicle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VehicleDistanceSensorFactGroup_t {
    QByteArrayData data[12];
    char stringdata0[186];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VehicleDistanceSensorFactGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VehicleDistanceSensorFactGroup_t qt_meta_stringdata_VehicleDistanceSensorFactGroup = {
    {
QT_MOC_LITERAL(0, 0, 30), // "VehicleDistanceSensorFactGroup"
QT_MOC_LITERAL(1, 31, 12), // "rotationNone"
QT_MOC_LITERAL(2, 44, 5), // "Fact*"
QT_MOC_LITERAL(3, 50, 13), // "rotationYaw45"
QT_MOC_LITERAL(4, 64, 13), // "rotationYaw90"
QT_MOC_LITERAL(5, 78, 14), // "rotationYaw135"
QT_MOC_LITERAL(6, 93, 14), // "rotationYaw180"
QT_MOC_LITERAL(7, 108, 14), // "rotationYaw225"
QT_MOC_LITERAL(8, 123, 14), // "rotationYaw270"
QT_MOC_LITERAL(9, 138, 14), // "rotationYaw315"
QT_MOC_LITERAL(10, 153, 15), // "rotationPitch90"
QT_MOC_LITERAL(11, 169, 16) // "rotationPitch270"

    },
    "VehicleDistanceSensorFactGroup\0"
    "rotationNone\0Fact*\0rotationYaw45\0"
    "rotationYaw90\0rotationYaw135\0"
    "rotationYaw180\0rotationYaw225\0"
    "rotationYaw270\0rotationYaw315\0"
    "rotationPitch90\0rotationPitch270"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VehicleDistanceSensorFactGroup[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      10,   14, // properties
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

       0        // eod
};

void VehicleDistanceSensorFactGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
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
        VehicleDistanceSensorFactGroup *_t = static_cast<VehicleDistanceSensorFactGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->rotationNone(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->rotationYaw45(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->rotationYaw90(); break;
        case 3: *reinterpret_cast< Fact**>(_v) = _t->rotationYaw135(); break;
        case 4: *reinterpret_cast< Fact**>(_v) = _t->rotationYaw180(); break;
        case 5: *reinterpret_cast< Fact**>(_v) = _t->rotationYaw225(); break;
        case 6: *reinterpret_cast< Fact**>(_v) = _t->rotationYaw270(); break;
        case 7: *reinterpret_cast< Fact**>(_v) = _t->rotationYaw315(); break;
        case 8: *reinterpret_cast< Fact**>(_v) = _t->rotationPitch90(); break;
        case 9: *reinterpret_cast< Fact**>(_v) = _t->rotationPitch270(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

const QMetaObject VehicleDistanceSensorFactGroup::staticMetaObject = {
    { &FactGroup::staticMetaObject, qt_meta_stringdata_VehicleDistanceSensorFactGroup.data,
      qt_meta_data_VehicleDistanceSensorFactGroup,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *VehicleDistanceSensorFactGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VehicleDistanceSensorFactGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleDistanceSensorFactGroup.stringdata0))
        return static_cast<void*>(this);
    return FactGroup::qt_metacast(_clname);
}

int VehicleDistanceSensorFactGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_VehicleSetpointFactGroup_t {
    QByteArrayData data[8];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VehicleSetpointFactGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VehicleSetpointFactGroup_t qt_meta_stringdata_VehicleSetpointFactGroup = {
    {
QT_MOC_LITERAL(0, 0, 24), // "VehicleSetpointFactGroup"
QT_MOC_LITERAL(1, 25, 4), // "roll"
QT_MOC_LITERAL(2, 30, 5), // "Fact*"
QT_MOC_LITERAL(3, 36, 5), // "pitch"
QT_MOC_LITERAL(4, 42, 3), // "yaw"
QT_MOC_LITERAL(5, 46, 8), // "rollRate"
QT_MOC_LITERAL(6, 55, 9), // "pitchRate"
QT_MOC_LITERAL(7, 65, 7) // "yawRate"

    },
    "VehicleSetpointFactGroup\0roll\0Fact*\0"
    "pitch\0yaw\0rollRate\0pitchRate\0yawRate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VehicleSetpointFactGroup[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
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

       0        // eod
};

void VehicleSetpointFactGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
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
        VehicleSetpointFactGroup *_t = static_cast<VehicleSetpointFactGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->roll(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->pitch(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->yaw(); break;
        case 3: *reinterpret_cast< Fact**>(_v) = _t->rollRate(); break;
        case 4: *reinterpret_cast< Fact**>(_v) = _t->pitchRate(); break;
        case 5: *reinterpret_cast< Fact**>(_v) = _t->yawRate(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

const QMetaObject VehicleSetpointFactGroup::staticMetaObject = {
    { &FactGroup::staticMetaObject, qt_meta_stringdata_VehicleSetpointFactGroup.data,
      qt_meta_data_VehicleSetpointFactGroup,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *VehicleSetpointFactGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VehicleSetpointFactGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleSetpointFactGroup.stringdata0))
        return static_cast<void*>(this);
    return FactGroup::qt_metacast(_clname);
}

int VehicleSetpointFactGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_VehicleVibrationFactGroup_t {
    QByteArrayData data[8];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VehicleVibrationFactGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VehicleVibrationFactGroup_t qt_meta_stringdata_VehicleVibrationFactGroup = {
    {
QT_MOC_LITERAL(0, 0, 25), // "VehicleVibrationFactGroup"
QT_MOC_LITERAL(1, 26, 5), // "xAxis"
QT_MOC_LITERAL(2, 32, 5), // "Fact*"
QT_MOC_LITERAL(3, 38, 5), // "yAxis"
QT_MOC_LITERAL(4, 44, 5), // "zAxis"
QT_MOC_LITERAL(5, 50, 10), // "clipCount1"
QT_MOC_LITERAL(6, 61, 10), // "clipCount2"
QT_MOC_LITERAL(7, 72, 10) // "clipCount3"

    },
    "VehicleVibrationFactGroup\0xAxis\0Fact*\0"
    "yAxis\0zAxis\0clipCount1\0clipCount2\0"
    "clipCount3"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VehicleVibrationFactGroup[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
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

       0        // eod
};

void VehicleVibrationFactGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
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
        VehicleVibrationFactGroup *_t = static_cast<VehicleVibrationFactGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->xAxis(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->yAxis(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->zAxis(); break;
        case 3: *reinterpret_cast< Fact**>(_v) = _t->clipCount1(); break;
        case 4: *reinterpret_cast< Fact**>(_v) = _t->clipCount2(); break;
        case 5: *reinterpret_cast< Fact**>(_v) = _t->clipCount3(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

const QMetaObject VehicleVibrationFactGroup::staticMetaObject = {
    { &FactGroup::staticMetaObject, qt_meta_stringdata_VehicleVibrationFactGroup.data,
      qt_meta_data_VehicleVibrationFactGroup,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *VehicleVibrationFactGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VehicleVibrationFactGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleVibrationFactGroup.stringdata0))
        return static_cast<void*>(this);
    return FactGroup::qt_metacast(_clname);
}

int VehicleVibrationFactGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_VehicleWindFactGroup_t {
    QByteArrayData data[5];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VehicleWindFactGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VehicleWindFactGroup_t qt_meta_stringdata_VehicleWindFactGroup = {
    {
QT_MOC_LITERAL(0, 0, 20), // "VehicleWindFactGroup"
QT_MOC_LITERAL(1, 21, 9), // "direction"
QT_MOC_LITERAL(2, 31, 5), // "Fact*"
QT_MOC_LITERAL(3, 37, 5), // "speed"
QT_MOC_LITERAL(4, 43, 13) // "verticalSpeed"

    },
    "VehicleWindFactGroup\0direction\0Fact*\0"
    "speed\0verticalSpeed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VehicleWindFactGroup[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00095409,
       3, 0x80000000 | 2, 0x00095409,
       4, 0x80000000 | 2, 0x00095409,

       0        // eod
};

void VehicleWindFactGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        VehicleWindFactGroup *_t = static_cast<VehicleWindFactGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->direction(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->speed(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->verticalSpeed(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

const QMetaObject VehicleWindFactGroup::staticMetaObject = {
    { &FactGroup::staticMetaObject, qt_meta_stringdata_VehicleWindFactGroup.data,
      qt_meta_data_VehicleWindFactGroup,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *VehicleWindFactGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VehicleWindFactGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleWindFactGroup.stringdata0))
        return static_cast<void*>(this);
    return FactGroup::qt_metacast(_clname);
}

int VehicleWindFactGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_VehicleGPSFactGroup_t {
    QByteArrayData data[9];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VehicleGPSFactGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VehicleGPSFactGroup_t qt_meta_stringdata_VehicleGPSFactGroup = {
    {
QT_MOC_LITERAL(0, 0, 19), // "VehicleGPSFactGroup"
QT_MOC_LITERAL(1, 20, 3), // "lat"
QT_MOC_LITERAL(2, 24, 5), // "Fact*"
QT_MOC_LITERAL(3, 30, 3), // "lon"
QT_MOC_LITERAL(4, 34, 4), // "hdop"
QT_MOC_LITERAL(5, 39, 4), // "vdop"
QT_MOC_LITERAL(6, 44, 16), // "courseOverGround"
QT_MOC_LITERAL(7, 61, 5), // "count"
QT_MOC_LITERAL(8, 67, 4) // "lock"

    },
    "VehicleGPSFactGroup\0lat\0Fact*\0lon\0"
    "hdop\0vdop\0courseOverGround\0count\0lock"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VehicleGPSFactGroup[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       7,   14, // properties
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

       0        // eod
};

void VehicleGPSFactGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
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
        VehicleGPSFactGroup *_t = static_cast<VehicleGPSFactGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->lat(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->lon(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->hdop(); break;
        case 3: *reinterpret_cast< Fact**>(_v) = _t->vdop(); break;
        case 4: *reinterpret_cast< Fact**>(_v) = _t->courseOverGround(); break;
        case 5: *reinterpret_cast< Fact**>(_v) = _t->count(); break;
        case 6: *reinterpret_cast< Fact**>(_v) = _t->lock(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

const QMetaObject VehicleGPSFactGroup::staticMetaObject = {
    { &FactGroup::staticMetaObject, qt_meta_stringdata_VehicleGPSFactGroup.data,
      qt_meta_data_VehicleGPSFactGroup,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *VehicleGPSFactGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VehicleGPSFactGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleGPSFactGroup.stringdata0))
        return static_cast<void*>(this);
    return FactGroup::qt_metacast(_clname);
}

int VehicleGPSFactGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_VehicleBatteryFactGroup_t {
    QByteArrayData data[11];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VehicleBatteryFactGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VehicleBatteryFactGroup_t qt_meta_stringdata_VehicleBatteryFactGroup = {
    {
QT_MOC_LITERAL(0, 0, 23), // "VehicleBatteryFactGroup"
QT_MOC_LITERAL(1, 24, 7), // "voltage"
QT_MOC_LITERAL(2, 32, 5), // "Fact*"
QT_MOC_LITERAL(3, 38, 16), // "percentRemaining"
QT_MOC_LITERAL(4, 55, 11), // "mahConsumed"
QT_MOC_LITERAL(5, 67, 7), // "current"
QT_MOC_LITERAL(6, 75, 11), // "temperature"
QT_MOC_LITERAL(7, 87, 9), // "cellCount"
QT_MOC_LITERAL(8, 97, 12), // "instantPower"
QT_MOC_LITERAL(9, 110, 13), // "timeRemaining"
QT_MOC_LITERAL(10, 124, 11) // "chargeState"

    },
    "VehicleBatteryFactGroup\0voltage\0Fact*\0"
    "percentRemaining\0mahConsumed\0current\0"
    "temperature\0cellCount\0instantPower\0"
    "timeRemaining\0chargeState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VehicleBatteryFactGroup[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       9,   14, // properties
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

       0        // eod
};

void VehicleBatteryFactGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
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
        VehicleBatteryFactGroup *_t = static_cast<VehicleBatteryFactGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->voltage(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->percentRemaining(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->mahConsumed(); break;
        case 3: *reinterpret_cast< Fact**>(_v) = _t->current(); break;
        case 4: *reinterpret_cast< Fact**>(_v) = _t->temperature(); break;
        case 5: *reinterpret_cast< Fact**>(_v) = _t->cellCount(); break;
        case 6: *reinterpret_cast< Fact**>(_v) = _t->instantPower(); break;
        case 7: *reinterpret_cast< Fact**>(_v) = _t->timeRemaining(); break;
        case 8: *reinterpret_cast< Fact**>(_v) = _t->chargeState(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

const QMetaObject VehicleBatteryFactGroup::staticMetaObject = {
    { &FactGroup::staticMetaObject, qt_meta_stringdata_VehicleBatteryFactGroup.data,
      qt_meta_data_VehicleBatteryFactGroup,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *VehicleBatteryFactGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VehicleBatteryFactGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleBatteryFactGroup.stringdata0))
        return static_cast<void*>(this);
    return FactGroup::qt_metacast(_clname);
}

int VehicleBatteryFactGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_VehicleTemperatureFactGroup_t {
    QByteArrayData data[5];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VehicleTemperatureFactGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VehicleTemperatureFactGroup_t qt_meta_stringdata_VehicleTemperatureFactGroup = {
    {
QT_MOC_LITERAL(0, 0, 27), // "VehicleTemperatureFactGroup"
QT_MOC_LITERAL(1, 28, 12), // "temperature1"
QT_MOC_LITERAL(2, 41, 5), // "Fact*"
QT_MOC_LITERAL(3, 47, 12), // "temperature2"
QT_MOC_LITERAL(4, 60, 12) // "temperature3"

    },
    "VehicleTemperatureFactGroup\0temperature1\0"
    "Fact*\0temperature2\0temperature3"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VehicleTemperatureFactGroup[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00095409,
       3, 0x80000000 | 2, 0x00095409,
       4, 0x80000000 | 2, 0x00095409,

       0        // eod
};

void VehicleTemperatureFactGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        VehicleTemperatureFactGroup *_t = static_cast<VehicleTemperatureFactGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->temperature1(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->temperature2(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->temperature3(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

const QMetaObject VehicleTemperatureFactGroup::staticMetaObject = {
    { &FactGroup::staticMetaObject, qt_meta_stringdata_VehicleTemperatureFactGroup.data,
      qt_meta_data_VehicleTemperatureFactGroup,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *VehicleTemperatureFactGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VehicleTemperatureFactGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleTemperatureFactGroup.stringdata0))
        return static_cast<void*>(this);
    return FactGroup::qt_metacast(_clname);
}

int VehicleTemperatureFactGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_VehicleClockFactGroup_t {
    QByteArrayData data[6];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VehicleClockFactGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VehicleClockFactGroup_t qt_meta_stringdata_VehicleClockFactGroup = {
    {
QT_MOC_LITERAL(0, 0, 21), // "VehicleClockFactGroup"
QT_MOC_LITERAL(1, 22, 16), // "_updateAllValues"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 11), // "currentTime"
QT_MOC_LITERAL(4, 52, 5), // "Fact*"
QT_MOC_LITERAL(5, 58, 11) // "currentDate"

    },
    "VehicleClockFactGroup\0_updateAllValues\0"
    "\0currentTime\0Fact*\0currentDate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VehicleClockFactGroup[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       2,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, 0x80000000 | 4, 0x00095409,
       5, 0x80000000 | 4, 0x00095409,

       0        // eod
};

void VehicleClockFactGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VehicleClockFactGroup *_t = static_cast<VehicleClockFactGroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->_updateAllValues(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        VehicleClockFactGroup *_t = static_cast<VehicleClockFactGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->currentTime(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->currentDate(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject VehicleClockFactGroup::staticMetaObject = {
    { &FactGroup::staticMetaObject, qt_meta_stringdata_VehicleClockFactGroup.data,
      qt_meta_data_VehicleClockFactGroup,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *VehicleClockFactGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VehicleClockFactGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VehicleClockFactGroup.stringdata0))
        return static_cast<void*>(this);
    return FactGroup::qt_metacast(_clname);
}

int VehicleClockFactGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactGroup::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Vehicle_t {
    QByteArrayData data[374];
    char stringdata0[6138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Vehicle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Vehicle_t qt_meta_stringdata_Vehicle = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Vehicle"
QT_MOC_LITERAL(1, 8, 16), // "allLinksInactive"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 8), // "Vehicle*"
QT_MOC_LITERAL(4, 35, 7), // "vehicle"
QT_MOC_LITERAL(5, 43, 17), // "coordinateChanged"
QT_MOC_LITERAL(6, 61, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(7, 76, 10), // "coordinate"
QT_MOC_LITERAL(8, 87, 19), // "joystickModeChanged"
QT_MOC_LITERAL(9, 107, 4), // "mode"
QT_MOC_LITERAL(10, 112, 22), // "joystickEnabledChanged"
QT_MOC_LITERAL(11, 135, 7), // "enabled"
QT_MOC_LITERAL(12, 143, 13), // "activeChanged"
QT_MOC_LITERAL(13, 157, 6), // "active"
QT_MOC_LITERAL(14, 164, 22), // "mavlinkMessageReceived"
QT_MOC_LITERAL(15, 187, 17), // "mavlink_message_t"
QT_MOC_LITERAL(16, 205, 7), // "message"
QT_MOC_LITERAL(17, 213, 19), // "homePositionChanged"
QT_MOC_LITERAL(18, 233, 12), // "homePosition"
QT_MOC_LITERAL(19, 246, 12), // "armedChanged"
QT_MOC_LITERAL(20, 259, 5), // "armed"
QT_MOC_LITERAL(21, 265, 17), // "flightModeChanged"
QT_MOC_LITERAL(22, 283, 10), // "flightMode"
QT_MOC_LITERAL(23, 294, 14), // "hilModeChanged"
QT_MOC_LITERAL(24, 309, 7), // "hilMode"
QT_MOC_LITERAL(25, 317, 26), // "hilActuatorControlsChanged"
QT_MOC_LITERAL(26, 344, 4), // "time"
QT_MOC_LITERAL(27, 349, 5), // "flags"
QT_MOC_LITERAL(28, 355, 5), // "ctl_0"
QT_MOC_LITERAL(29, 361, 5), // "ctl_1"
QT_MOC_LITERAL(30, 367, 5), // "ctl_2"
QT_MOC_LITERAL(31, 373, 5), // "ctl_3"
QT_MOC_LITERAL(32, 379, 5), // "ctl_4"
QT_MOC_LITERAL(33, 385, 5), // "ctl_5"
QT_MOC_LITERAL(34, 391, 5), // "ctl_6"
QT_MOC_LITERAL(35, 397, 5), // "ctl_7"
QT_MOC_LITERAL(36, 403, 5), // "ctl_8"
QT_MOC_LITERAL(37, 409, 5), // "ctl_9"
QT_MOC_LITERAL(38, 415, 6), // "ctl_10"
QT_MOC_LITERAL(39, 422, 6), // "ctl_11"
QT_MOC_LITERAL(40, 429, 6), // "ctl_12"
QT_MOC_LITERAL(41, 436, 6), // "ctl_13"
QT_MOC_LITERAL(42, 443, 6), // "ctl_14"
QT_MOC_LITERAL(43, 450, 6), // "ctl_15"
QT_MOC_LITERAL(44, 457, 21), // "connectionLostChanged"
QT_MOC_LITERAL(45, 479, 14), // "connectionLost"
QT_MOC_LITERAL(46, 494, 28), // "connectionLostEnabledChanged"
QT_MOC_LITERAL(47, 523, 21), // "connectionLostEnabled"
QT_MOC_LITERAL(48, 545, 21), // "autoDisconnectChanged"
QT_MOC_LITERAL(49, 567, 13), // "flyingChanged"
QT_MOC_LITERAL(50, 581, 6), // "flying"
QT_MOC_LITERAL(51, 588, 14), // "landingChanged"
QT_MOC_LITERAL(52, 603, 7), // "landing"
QT_MOC_LITERAL(53, 611, 17), // "guidedModeChanged"
QT_MOC_LITERAL(54, 629, 10), // "guidedMode"
QT_MOC_LITERAL(55, 640, 22), // "vtolInFwdFlightChanged"
QT_MOC_LITERAL(56, 663, 15), // "vtolInFwdFlight"
QT_MOC_LITERAL(57, 679, 18), // "prearmErrorChanged"
QT_MOC_LITERAL(58, 698, 11), // "prearmError"
QT_MOC_LITERAL(59, 710, 19), // "soloFirmwareChanged"
QT_MOC_LITERAL(60, 730, 12), // "soloFirmware"
QT_MOC_LITERAL(61, 743, 23), // "unhealthySensorsChanged"
QT_MOC_LITERAL(62, 767, 25), // "defaultCruiseSpeedChanged"
QT_MOC_LITERAL(63, 793, 11), // "cruiseSpeed"
QT_MOC_LITERAL(64, 805, 24), // "defaultHoverSpeedChanged"
QT_MOC_LITERAL(65, 830, 10), // "hoverSpeed"
QT_MOC_LITERAL(66, 841, 19), // "firmwareTypeChanged"
QT_MOC_LITERAL(67, 861, 18), // "vehicleTypeChanged"
QT_MOC_LITERAL(68, 880, 21), // "dynamicCamerasChanged"
QT_MOC_LITERAL(69, 902, 17), // "hobbsMeterChanged"
QT_MOC_LITERAL(70, 920, 24), // "capabilitiesKnownChanged"
QT_MOC_LITERAL(71, 945, 17), // "capabilitiesKnown"
QT_MOC_LITERAL(72, 963, 33), // "initialPlanRequestCompleteCha..."
QT_MOC_LITERAL(73, 997, 26), // "initialPlanRequestComplete"
QT_MOC_LITERAL(74, 1024, 21), // "capabilityBitsChanged"
QT_MOC_LITERAL(75, 1046, 8), // "uint64_t"
QT_MOC_LITERAL(76, 1055, 14), // "capabilityBits"
QT_MOC_LITERAL(77, 1070, 24), // "toolBarIndicatorsChanged"
QT_MOC_LITERAL(78, 1095, 22), // "highLatencyLinkChanged"
QT_MOC_LITERAL(79, 1118, 15), // "highLatencyLink"
QT_MOC_LITERAL(80, 1134, 23), // "priorityLinkNameChanged"
QT_MOC_LITERAL(81, 1158, 16), // "priorityLinkName"
QT_MOC_LITERAL(82, 1175, 12), // "linksChanged"
QT_MOC_LITERAL(83, 1188, 22), // "linksPropertiesChanged"
QT_MOC_LITERAL(84, 1211, 23), // "messagesReceivedChanged"
QT_MOC_LITERAL(85, 1235, 19), // "messagesSentChanged"
QT_MOC_LITERAL(86, 1255, 19), // "messagesLostChanged"
QT_MOC_LITERAL(87, 1275, 26), // "_sendMessageOnLinkOnThread"
QT_MOC_LITERAL(88, 1302, 14), // "LinkInterface*"
QT_MOC_LITERAL(89, 1317, 4), // "link"
QT_MOC_LITERAL(90, 1322, 18), // "messageTypeChanged"
QT_MOC_LITERAL(91, 1341, 22), // "newMessageCountChanged"
QT_MOC_LITERAL(92, 1364, 19), // "messageCountChanged"
QT_MOC_LITERAL(93, 1384, 23), // "formatedMessagesChanged"
QT_MOC_LITERAL(94, 1408, 22), // "formatedMessageChanged"
QT_MOC_LITERAL(95, 1431, 18), // "latestErrorChanged"
QT_MOC_LITERAL(96, 1450, 16), // "longitudeChanged"
QT_MOC_LITERAL(97, 1467, 20), // "currentConfigChanged"
QT_MOC_LITERAL(98, 1488, 21), // "flowImageIndexChanged"
QT_MOC_LITERAL(99, 1510, 13), // "rcRSSIChanged"
QT_MOC_LITERAL(100, 1524, 6), // "rcRSSI"
QT_MOC_LITERAL(101, 1531, 21), // "telemetryRRSSIChanged"
QT_MOC_LITERAL(102, 1553, 5), // "value"
QT_MOC_LITERAL(103, 1559, 21), // "telemetryLRSSIChanged"
QT_MOC_LITERAL(104, 1581, 24), // "telemetryRXErrorsChanged"
QT_MOC_LITERAL(105, 1606, 21), // "telemetryFixedChanged"
QT_MOC_LITERAL(106, 1628, 24), // "telemetryTXBufferChanged"
QT_MOC_LITERAL(107, 1653, 22), // "telemetryLNoiseChanged"
QT_MOC_LITERAL(108, 1676, 22), // "telemetryRNoiseChanged"
QT_MOC_LITERAL(109, 1699, 17), // "autoDisarmChanged"
QT_MOC_LITERAL(110, 1717, 18), // "flightModesChanged"
QT_MOC_LITERAL(111, 1736, 25), // "sensorsPresentBitsChanged"
QT_MOC_LITERAL(112, 1762, 18), // "sensorsPresentBits"
QT_MOC_LITERAL(113, 1781, 25), // "sensorsEnabledBitsChanged"
QT_MOC_LITERAL(114, 1807, 18), // "sensorsEnabledBits"
QT_MOC_LITERAL(115, 1826, 24), // "sensorsHealthBitsChanged"
QT_MOC_LITERAL(116, 1851, 17), // "sensorsHealthBits"
QT_MOC_LITERAL(117, 1869, 27), // "sensorsUnhealthyBitsChanged"
QT_MOC_LITERAL(118, 1897, 20), // "sensorsUnhealthyBits"
QT_MOC_LITERAL(119, 1918, 22), // "firmwareVersionChanged"
QT_MOC_LITERAL(120, 1941, 28), // "firmwareCustomVersionChanged"
QT_MOC_LITERAL(121, 1970, 14), // "gitHashChanged"
QT_MOC_LITERAL(122, 1985, 4), // "hash"
QT_MOC_LITERAL(123, 1990, 17), // "vehicleUIDChanged"
QT_MOC_LITERAL(124, 2008, 17), // "rcChannelsChanged"
QT_MOC_LITERAL(125, 2026, 12), // "channelCount"
QT_MOC_LITERAL(126, 2039, 19), // "int[cMaxRcChannels]"
QT_MOC_LITERAL(127, 2059, 9), // "pwmValues"
QT_MOC_LITERAL(128, 2069, 24), // "remoteControlRSSIChanged"
QT_MOC_LITERAL(129, 2094, 7), // "uint8_t"
QT_MOC_LITERAL(130, 2102, 4), // "rssi"
QT_MOC_LITERAL(131, 2107, 13), // "mavlinkRawImu"
QT_MOC_LITERAL(132, 2121, 17), // "mavlinkScaledImu1"
QT_MOC_LITERAL(133, 2139, 17), // "mavlinkScaledImu2"
QT_MOC_LITERAL(134, 2157, 17), // "mavlinkScaledImu3"
QT_MOC_LITERAL(135, 2175, 14), // "mavlinkLogData"
QT_MOC_LITERAL(136, 2190, 13), // "target_system"
QT_MOC_LITERAL(137, 2204, 16), // "target_component"
QT_MOC_LITERAL(138, 2221, 8), // "uint16_t"
QT_MOC_LITERAL(139, 2230, 8), // "sequence"
QT_MOC_LITERAL(140, 2239, 13), // "first_message"
QT_MOC_LITERAL(141, 2253, 4), // "data"
QT_MOC_LITERAL(142, 2258, 5), // "acked"
QT_MOC_LITERAL(143, 2264, 16), // "mavCommandResult"
QT_MOC_LITERAL(144, 2281, 9), // "vehicleId"
QT_MOC_LITERAL(145, 2291, 9), // "component"
QT_MOC_LITERAL(146, 2301, 7), // "command"
QT_MOC_LITERAL(147, 2309, 6), // "result"
QT_MOC_LITERAL(148, 2316, 20), // "noReponseFromVehicle"
QT_MOC_LITERAL(149, 2337, 20), // "mavlinkSerialControl"
QT_MOC_LITERAL(150, 2358, 6), // "device"
QT_MOC_LITERAL(151, 2365, 7), // "timeout"
QT_MOC_LITERAL(152, 2373, 8), // "uint32_t"
QT_MOC_LITERAL(153, 2382, 8), // "baudrate"
QT_MOC_LITERAL(154, 2391, 22), // "requestProtocolVersion"
QT_MOC_LITERAL(155, 2414, 7), // "version"
QT_MOC_LITERAL(156, 2422, 23), // "_mavlinkMessageReceived"
QT_MOC_LITERAL(157, 2446, 22), // "_linkInactiveOrDeleted"
QT_MOC_LITERAL(158, 2469, 18), // "_sendMessageOnLink"
QT_MOC_LITERAL(159, 2488, 24), // "_sendMessageMultipleNext"
QT_MOC_LITERAL(160, 2513, 25), // "_addNewMapTrajectoryPoint"
QT_MOC_LITERAL(161, 2539, 16), // "_parametersReady"
QT_MOC_LITERAL(162, 2556, 15), // "parametersReady"
QT_MOC_LITERAL(163, 2572, 25), // "_remoteControlRSSIChanged"
QT_MOC_LITERAL(164, 2598, 24), // "_handleFlightModeChanged"
QT_MOC_LITERAL(165, 2623, 21), // "_announceArmedChanged"
QT_MOC_LITERAL(166, 2645, 34), // "_offlineFirmwareTypeSettingCh..."
QT_MOC_LITERAL(167, 2680, 33), // "_offlineVehicleTypeSettingCha..."
QT_MOC_LITERAL(168, 2714, 33), // "_offlineCruiseSpeedSettingCha..."
QT_MOC_LITERAL(169, 2748, 32), // "_offlineHoverSpeedSettingChanged"
QT_MOC_LITERAL(170, 2781, 22), // "_updateHighLatencyLink"
QT_MOC_LITERAL(171, 2804, 11), // "sendCommand"
QT_MOC_LITERAL(172, 2816, 18), // "_handleTextMessage"
QT_MOC_LITERAL(173, 2835, 8), // "newCount"
QT_MOC_LITERAL(174, 2844, 26), // "_handletextMessageReceived"
QT_MOC_LITERAL(175, 2871, 11), // "UASMessage*"
QT_MOC_LITERAL(176, 2883, 11), // "_imageReady"
QT_MOC_LITERAL(177, 2895, 13), // "UASInterface*"
QT_MOC_LITERAL(178, 2909, 3), // "uas"
QT_MOC_LITERAL(179, 2913, 19), // "_prearmErrorTimeout"
QT_MOC_LITERAL(180, 2933, 20), // "_missionLoadComplete"
QT_MOC_LITERAL(181, 2954, 21), // "_geoFenceLoadComplete"
QT_MOC_LITERAL(182, 2976, 23), // "_rallyPointLoadComplete"
QT_MOC_LITERAL(183, 3000, 20), // "_sendMavCommandAgain"
QT_MOC_LITERAL(184, 3021, 22), // "_clearTrajectoryPoints"
QT_MOC_LITERAL(185, 3044, 25), // "_clearCameraTriggerPoints"
QT_MOC_LITERAL(186, 3070, 21), // "_updateDistanceToHome"
QT_MOC_LITERAL(187, 3092, 17), // "_updateHobbsMeter"
QT_MOC_LITERAL(188, 3110, 19), // "_vehicleParamLoaded"
QT_MOC_LITERAL(189, 3130, 5), // "ready"
QT_MOC_LITERAL(190, 3136, 21), // "_sendQGCTimeToVehicle"
QT_MOC_LITERAL(191, 3158, 13), // "resetCounters"
QT_MOC_LITERAL(192, 3172, 13), // "resetMessages"
QT_MOC_LITERAL(193, 3186, 26), // "virtualTabletJoystickValue"
QT_MOC_LITERAL(194, 3213, 4), // "roll"
QT_MOC_LITERAL(195, 3218, 5), // "pitch"
QT_MOC_LITERAL(196, 3224, 3), // "yaw"
QT_MOC_LITERAL(197, 3228, 6), // "thrust"
QT_MOC_LITERAL(198, 3235, 25), // "disconnectInactiveVehicle"
QT_MOC_LITERAL(199, 3261, 13), // "guidedModeRTL"
QT_MOC_LITERAL(200, 3275, 14), // "guidedModeLand"
QT_MOC_LITERAL(201, 3290, 17), // "guidedModeTakeoff"
QT_MOC_LITERAL(202, 3308, 16), // "altitudeRelative"
QT_MOC_LITERAL(203, 3325, 22), // "minimumTakeoffAltitude"
QT_MOC_LITERAL(204, 3348, 22), // "guidedModeGotoLocation"
QT_MOC_LITERAL(205, 3371, 9), // "gotoCoord"
QT_MOC_LITERAL(206, 3381, 24), // "guidedModeChangeAltitude"
QT_MOC_LITERAL(207, 3406, 14), // "altitudeChange"
QT_MOC_LITERAL(208, 3421, 15), // "guidedModeOrbit"
QT_MOC_LITERAL(209, 3437, 11), // "centerCoord"
QT_MOC_LITERAL(210, 3449, 6), // "radius"
QT_MOC_LITERAL(211, 3456, 8), // "velocity"
QT_MOC_LITERAL(212, 3465, 8), // "altitude"
QT_MOC_LITERAL(213, 3474, 12), // "pauseVehicle"
QT_MOC_LITERAL(214, 3487, 13), // "emergencyStop"
QT_MOC_LITERAL(215, 3501, 12), // "abortLanding"
QT_MOC_LITERAL(216, 3514, 16), // "climbOutAltitude"
QT_MOC_LITERAL(217, 3531, 12), // "startMission"
QT_MOC_LITERAL(218, 3544, 25), // "setCurrentMissionSequence"
QT_MOC_LITERAL(219, 3570, 3), // "seq"
QT_MOC_LITERAL(220, 3574, 13), // "rebootVehicle"
QT_MOC_LITERAL(221, 3588, 13), // "clearMessages"
QT_MOC_LITERAL(222, 3602, 13), // "triggerCamera"
QT_MOC_LITERAL(223, 3616, 8), // "sendPlan"
QT_MOC_LITERAL(224, 3625, 8), // "planFile"
QT_MOC_LITERAL(225, 3634, 15), // "vehicleTypeName"
QT_MOC_LITERAL(226, 3650, 9), // "showError"
QT_MOC_LITERAL(227, 3660, 6), // "param1"
QT_MOC_LITERAL(228, 3667, 6), // "param2"
QT_MOC_LITERAL(229, 3674, 6), // "param3"
QT_MOC_LITERAL(230, 3681, 6), // "param4"
QT_MOC_LITERAL(231, 3688, 6), // "param5"
QT_MOC_LITERAL(232, 3695, 6), // "param6"
QT_MOC_LITERAL(233, 3702, 6), // "param7"
QT_MOC_LITERAL(234, 3709, 2), // "id"
QT_MOC_LITERAL(235, 3712, 9), // "autopilot"
QT_MOC_LITERAL(236, 3722, 16), // "AutoPilotPlugin*"
QT_MOC_LITERAL(237, 3739, 10), // "autoDisarm"
QT_MOC_LITERAL(238, 3750, 22), // "flightModeSetAvailable"
QT_MOC_LITERAL(239, 3773, 11), // "flightModes"
QT_MOC_LITERAL(240, 3785, 16), // "trajectoryPoints"
QT_MOC_LITERAL(241, 3802, 19), // "QmlObjectListModel*"
QT_MOC_LITERAL(242, 3822, 19), // "cameraTriggerPoints"
QT_MOC_LITERAL(243, 3842, 8), // "latitude"
QT_MOC_LITERAL(244, 3851, 9), // "longitude"
QT_MOC_LITERAL(245, 3861, 15), // "messageTypeNone"
QT_MOC_LITERAL(246, 3877, 17), // "messageTypeNormal"
QT_MOC_LITERAL(247, 3895, 18), // "messageTypeWarning"
QT_MOC_LITERAL(248, 3914, 16), // "messageTypeError"
QT_MOC_LITERAL(249, 3931, 15), // "newMessageCount"
QT_MOC_LITERAL(250, 3947, 12), // "messageCount"
QT_MOC_LITERAL(251, 3960, 16), // "formatedMessages"
QT_MOC_LITERAL(252, 3977, 15), // "formatedMessage"
QT_MOC_LITERAL(253, 3993, 11), // "latestError"
QT_MOC_LITERAL(254, 4005, 12), // "joystickMode"
QT_MOC_LITERAL(255, 4018, 13), // "joystickModes"
QT_MOC_LITERAL(256, 4032, 15), // "joystickEnabled"
QT_MOC_LITERAL(257, 4048, 14), // "flowImageIndex"
QT_MOC_LITERAL(258, 4063, 11), // "px4Firmware"
QT_MOC_LITERAL(259, 4075, 11), // "apmFirmware"
QT_MOC_LITERAL(260, 4087, 15), // "genericFirmware"
QT_MOC_LITERAL(261, 4103, 16), // "messagesReceived"
QT_MOC_LITERAL(262, 4120, 12), // "messagesSent"
QT_MOC_LITERAL(263, 4133, 12), // "messagesLost"
QT_MOC_LITERAL(264, 4146, 9), // "fixedWing"
QT_MOC_LITERAL(265, 4156, 10), // "multiRotor"
QT_MOC_LITERAL(266, 4167, 4), // "vtol"
QT_MOC_LITERAL(267, 4172, 5), // "rover"
QT_MOC_LITERAL(268, 4178, 3), // "sub"
QT_MOC_LITERAL(269, 4182, 30), // "supportsThrottleModeCenterZero"
QT_MOC_LITERAL(270, 4213, 22), // "supportsNegativeThrust"
QT_MOC_LITERAL(271, 4236, 16), // "supportsJSButton"
QT_MOC_LITERAL(272, 4253, 13), // "supportsRadio"
QT_MOC_LITERAL(273, 4267, 25), // "supportsMotorInterference"
QT_MOC_LITERAL(274, 4293, 14), // "autoDisconnect"
QT_MOC_LITERAL(275, 4308, 10), // "motorCount"
QT_MOC_LITERAL(276, 4319, 13), // "coaxialMotors"
QT_MOC_LITERAL(277, 4333, 13), // "xConfigMotors"
QT_MOC_LITERAL(278, 4347, 23), // "isOfflineEditingVehicle"
QT_MOC_LITERAL(279, 4371, 16), // "brandImageIndoor"
QT_MOC_LITERAL(280, 4388, 17), // "brandImageOutdoor"
QT_MOC_LITERAL(281, 4406, 16), // "unhealthySensors"
QT_MOC_LITERAL(282, 4423, 17), // "missionFlightMode"
QT_MOC_LITERAL(283, 4441, 15), // "pauseFlightMode"
QT_MOC_LITERAL(284, 4457, 13), // "rtlFlightMode"
QT_MOC_LITERAL(285, 4471, 14), // "landFlightMode"
QT_MOC_LITERAL(286, 4486, 21), // "takeControlFlightMode"
QT_MOC_LITERAL(287, 4508, 18), // "firmwareTypeString"
QT_MOC_LITERAL(288, 4527, 17), // "vehicleTypeString"
QT_MOC_LITERAL(289, 4545, 18), // "vehicleImageOpaque"
QT_MOC_LITERAL(290, 4564, 19), // "vehicleImageOutline"
QT_MOC_LITERAL(291, 4584, 19), // "vehicleImageCompass"
QT_MOC_LITERAL(292, 4604, 14), // "telemetryRRSSI"
QT_MOC_LITERAL(293, 4619, 14), // "telemetryLRSSI"
QT_MOC_LITERAL(294, 4634, 17), // "telemetryRXErrors"
QT_MOC_LITERAL(295, 4652, 14), // "telemetryFixed"
QT_MOC_LITERAL(296, 4667, 17), // "telemetryTXBuffer"
QT_MOC_LITERAL(297, 4685, 15), // "telemetryLNoise"
QT_MOC_LITERAL(298, 4701, 15), // "telemetryRNoise"
QT_MOC_LITERAL(299, 4717, 17), // "toolBarIndicators"
QT_MOC_LITERAL(300, 4735, 12), // "adsbVehicles"
QT_MOC_LITERAL(301, 4748, 16), // "staticCameraList"
QT_MOC_LITERAL(302, 4765, 14), // "dynamicCameras"
QT_MOC_LITERAL(303, 4780, 17), // "QGCCameraManager*"
QT_MOC_LITERAL(304, 4798, 10), // "hobbsMeter"
QT_MOC_LITERAL(305, 4809, 20), // "supportsTerrainFrame"
QT_MOC_LITERAL(306, 4830, 5), // "links"
QT_MOC_LITERAL(307, 4836, 12), // "priorityLink"
QT_MOC_LITERAL(308, 4849, 19), // "guidedModeSupported"
QT_MOC_LITERAL(309, 4869, 21), // "pauseVehicleSupported"
QT_MOC_LITERAL(310, 4891, 18), // "orbitModeSupported"
QT_MOC_LITERAL(311, 4910, 23), // "takeoffVehicleSupported"
QT_MOC_LITERAL(312, 4934, 16), // "parameterManager"
QT_MOC_LITERAL(313, 4951, 17), // "ParameterManager*"
QT_MOC_LITERAL(314, 4969, 5), // "Fact*"
QT_MOC_LITERAL(315, 4975, 7), // "heading"
QT_MOC_LITERAL(316, 4983, 8), // "rollRate"
QT_MOC_LITERAL(317, 4992, 9), // "pitchRate"
QT_MOC_LITERAL(318, 5002, 7), // "yawRate"
QT_MOC_LITERAL(319, 5010, 11), // "groundSpeed"
QT_MOC_LITERAL(320, 5022, 8), // "airSpeed"
QT_MOC_LITERAL(321, 5031, 9), // "climbRate"
QT_MOC_LITERAL(322, 5041, 12), // "altitudeAMSL"
QT_MOC_LITERAL(323, 5054, 14), // "flightDistance"
QT_MOC_LITERAL(324, 5069, 14), // "distanceToHome"
QT_MOC_LITERAL(325, 5084, 5), // "hobbs"
QT_MOC_LITERAL(326, 5090, 3), // "gps"
QT_MOC_LITERAL(327, 5094, 10), // "FactGroup*"
QT_MOC_LITERAL(328, 5105, 7), // "battery"
QT_MOC_LITERAL(329, 5113, 8), // "battery2"
QT_MOC_LITERAL(330, 5122, 4), // "wind"
QT_MOC_LITERAL(331, 5127, 9), // "vibration"
QT_MOC_LITERAL(332, 5137, 11), // "temperature"
QT_MOC_LITERAL(333, 5149, 5), // "clock"
QT_MOC_LITERAL(334, 5155, 8), // "setpoint"
QT_MOC_LITERAL(335, 5164, 20), // "firmwareMajorVersion"
QT_MOC_LITERAL(336, 5185, 20), // "firmwareMinorVersion"
QT_MOC_LITERAL(337, 5206, 20), // "firmwarePatchVersion"
QT_MOC_LITERAL(338, 5227, 19), // "firmwareVersionType"
QT_MOC_LITERAL(339, 5247, 25), // "firmwareVersionTypeString"
QT_MOC_LITERAL(340, 5273, 26), // "firmwareCustomMajorVersion"
QT_MOC_LITERAL(341, 5300, 26), // "firmwareCustomMinorVersion"
QT_MOC_LITERAL(342, 5327, 26), // "firmwareCustomPatchVersion"
QT_MOC_LITERAL(343, 5354, 7), // "gitHash"
QT_MOC_LITERAL(344, 5362, 10), // "vehicleUID"
QT_MOC_LITERAL(345, 5373, 13), // "vehicleUIDStr"
QT_MOC_LITERAL(346, 5387, 32), // "manualControlReservedButtonCount"
QT_MOC_LITERAL(347, 5420, 16), // "MavlinkSysStatus"
QT_MOC_LITERAL(348, 5437, 21), // "SysStatusSensor3dGyro"
QT_MOC_LITERAL(349, 5459, 22), // "SysStatusSensor3dAccel"
QT_MOC_LITERAL(350, 5482, 20), // "SysStatusSensor3dMag"
QT_MOC_LITERAL(351, 5503, 31), // "SysStatusSensorAbsolutePressure"
QT_MOC_LITERAL(352, 5535, 35), // "SysStatusSensorDifferentialPr..."
QT_MOC_LITERAL(353, 5571, 18), // "SysStatusSensorGPS"
QT_MOC_LITERAL(354, 5590, 26), // "SysStatusSensorOpticalFlow"
QT_MOC_LITERAL(355, 5617, 29), // "SysStatusSensorVisionPosition"
QT_MOC_LITERAL(356, 5647, 28), // "SysStatusSensorLaserPosition"
QT_MOC_LITERAL(357, 5676, 34), // "SysStatusSensorExternalGround..."
QT_MOC_LITERAL(358, 5711, 33), // "SysStatusSensorAngularRateCon..."
QT_MOC_LITERAL(359, 5745, 36), // "SysStatusSensorAttitudeStabil..."
QT_MOC_LITERAL(360, 5782, 26), // "SysStatusSensorYawPosition"
QT_MOC_LITERAL(361, 5809, 31), // "SysStatusSensorZAltitudeControl"
QT_MOC_LITERAL(362, 5841, 32), // "SysStatusSensorXYPositionControl"
QT_MOC_LITERAL(363, 5874, 27), // "SysStatusSensorMotorOutputs"
QT_MOC_LITERAL(364, 5902, 25), // "SysStatusSensorRCReceiver"
QT_MOC_LITERAL(365, 5928, 22), // "SysStatusSensor3dGyro2"
QT_MOC_LITERAL(366, 5951, 23), // "SysStatusSensor3dAccel2"
QT_MOC_LITERAL(367, 5975, 21), // "SysStatusSensor3dMag2"
QT_MOC_LITERAL(368, 5997, 23), // "SysStatusSensorGeoFence"
QT_MOC_LITERAL(369, 6021, 19), // "SysStatusSensorAHRS"
QT_MOC_LITERAL(370, 6041, 22), // "SysStatusSensorTerrain"
QT_MOC_LITERAL(371, 6064, 27), // "SysStatusSensorReverseMotor"
QT_MOC_LITERAL(372, 6092, 22), // "SysStatusSensorLogging"
QT_MOC_LITERAL(373, 6115, 22) // "SysStatusSensorBattery"

    },
    "Vehicle\0allLinksInactive\0\0Vehicle*\0"
    "vehicle\0coordinateChanged\0QGeoCoordinate\0"
    "coordinate\0joystickModeChanged\0mode\0"
    "joystickEnabledChanged\0enabled\0"
    "activeChanged\0active\0mavlinkMessageReceived\0"
    "mavlink_message_t\0message\0homePositionChanged\0"
    "homePosition\0armedChanged\0armed\0"
    "flightModeChanged\0flightMode\0"
    "hilModeChanged\0hilMode\0"
    "hilActuatorControlsChanged\0time\0flags\0"
    "ctl_0\0ctl_1\0ctl_2\0ctl_3\0ctl_4\0ctl_5\0"
    "ctl_6\0ctl_7\0ctl_8\0ctl_9\0ctl_10\0ctl_11\0"
    "ctl_12\0ctl_13\0ctl_14\0ctl_15\0"
    "connectionLostChanged\0connectionLost\0"
    "connectionLostEnabledChanged\0"
    "connectionLostEnabled\0autoDisconnectChanged\0"
    "flyingChanged\0flying\0landingChanged\0"
    "landing\0guidedModeChanged\0guidedMode\0"
    "vtolInFwdFlightChanged\0vtolInFwdFlight\0"
    "prearmErrorChanged\0prearmError\0"
    "soloFirmwareChanged\0soloFirmware\0"
    "unhealthySensorsChanged\0"
    "defaultCruiseSpeedChanged\0cruiseSpeed\0"
    "defaultHoverSpeedChanged\0hoverSpeed\0"
    "firmwareTypeChanged\0vehicleTypeChanged\0"
    "dynamicCamerasChanged\0hobbsMeterChanged\0"
    "capabilitiesKnownChanged\0capabilitiesKnown\0"
    "initialPlanRequestCompleteChanged\0"
    "initialPlanRequestComplete\0"
    "capabilityBitsChanged\0uint64_t\0"
    "capabilityBits\0toolBarIndicatorsChanged\0"
    "highLatencyLinkChanged\0highLatencyLink\0"
    "priorityLinkNameChanged\0priorityLinkName\0"
    "linksChanged\0linksPropertiesChanged\0"
    "messagesReceivedChanged\0messagesSentChanged\0"
    "messagesLostChanged\0_sendMessageOnLinkOnThread\0"
    "LinkInterface*\0link\0messageTypeChanged\0"
    "newMessageCountChanged\0messageCountChanged\0"
    "formatedMessagesChanged\0formatedMessageChanged\0"
    "latestErrorChanged\0longitudeChanged\0"
    "currentConfigChanged\0flowImageIndexChanged\0"
    "rcRSSIChanged\0rcRSSI\0telemetryRRSSIChanged\0"
    "value\0telemetryLRSSIChanged\0"
    "telemetryRXErrorsChanged\0telemetryFixedChanged\0"
    "telemetryTXBufferChanged\0"
    "telemetryLNoiseChanged\0telemetryRNoiseChanged\0"
    "autoDisarmChanged\0flightModesChanged\0"
    "sensorsPresentBitsChanged\0sensorsPresentBits\0"
    "sensorsEnabledBitsChanged\0sensorsEnabledBits\0"
    "sensorsHealthBitsChanged\0sensorsHealthBits\0"
    "sensorsUnhealthyBitsChanged\0"
    "sensorsUnhealthyBits\0firmwareVersionChanged\0"
    "firmwareCustomVersionChanged\0"
    "gitHashChanged\0hash\0vehicleUIDChanged\0"
    "rcChannelsChanged\0channelCount\0"
    "int[cMaxRcChannels]\0pwmValues\0"
    "remoteControlRSSIChanged\0uint8_t\0rssi\0"
    "mavlinkRawImu\0mavlinkScaledImu1\0"
    "mavlinkScaledImu2\0mavlinkScaledImu3\0"
    "mavlinkLogData\0target_system\0"
    "target_component\0uint16_t\0sequence\0"
    "first_message\0data\0acked\0mavCommandResult\0"
    "vehicleId\0component\0command\0result\0"
    "noReponseFromVehicle\0mavlinkSerialControl\0"
    "device\0timeout\0uint32_t\0baudrate\0"
    "requestProtocolVersion\0version\0"
    "_mavlinkMessageReceived\0_linkInactiveOrDeleted\0"
    "_sendMessageOnLink\0_sendMessageMultipleNext\0"
    "_addNewMapTrajectoryPoint\0_parametersReady\0"
    "parametersReady\0_remoteControlRSSIChanged\0"
    "_handleFlightModeChanged\0_announceArmedChanged\0"
    "_offlineFirmwareTypeSettingChanged\0"
    "_offlineVehicleTypeSettingChanged\0"
    "_offlineCruiseSpeedSettingChanged\0"
    "_offlineHoverSpeedSettingChanged\0"
    "_updateHighLatencyLink\0sendCommand\0"
    "_handleTextMessage\0newCount\0"
    "_handletextMessageReceived\0UASMessage*\0"
    "_imageReady\0UASInterface*\0uas\0"
    "_prearmErrorTimeout\0_missionLoadComplete\0"
    "_geoFenceLoadComplete\0_rallyPointLoadComplete\0"
    "_sendMavCommandAgain\0_clearTrajectoryPoints\0"
    "_clearCameraTriggerPoints\0"
    "_updateDistanceToHome\0_updateHobbsMeter\0"
    "_vehicleParamLoaded\0ready\0"
    "_sendQGCTimeToVehicle\0resetCounters\0"
    "resetMessages\0virtualTabletJoystickValue\0"
    "roll\0pitch\0yaw\0thrust\0disconnectInactiveVehicle\0"
    "guidedModeRTL\0guidedModeLand\0"
    "guidedModeTakeoff\0altitudeRelative\0"
    "minimumTakeoffAltitude\0guidedModeGotoLocation\0"
    "gotoCoord\0guidedModeChangeAltitude\0"
    "altitudeChange\0guidedModeOrbit\0"
    "centerCoord\0radius\0velocity\0altitude\0"
    "pauseVehicle\0emergencyStop\0abortLanding\0"
    "climbOutAltitude\0startMission\0"
    "setCurrentMissionSequence\0seq\0"
    "rebootVehicle\0clearMessages\0triggerCamera\0"
    "sendPlan\0planFile\0vehicleTypeName\0"
    "showError\0param1\0param2\0param3\0param4\0"
    "param5\0param6\0param7\0id\0autopilot\0"
    "AutoPilotPlugin*\0autoDisarm\0"
    "flightModeSetAvailable\0flightModes\0"
    "trajectoryPoints\0QmlObjectListModel*\0"
    "cameraTriggerPoints\0latitude\0longitude\0"
    "messageTypeNone\0messageTypeNormal\0"
    "messageTypeWarning\0messageTypeError\0"
    "newMessageCount\0messageCount\0"
    "formatedMessages\0formatedMessage\0"
    "latestError\0joystickMode\0joystickModes\0"
    "joystickEnabled\0flowImageIndex\0"
    "px4Firmware\0apmFirmware\0genericFirmware\0"
    "messagesReceived\0messagesSent\0"
    "messagesLost\0fixedWing\0multiRotor\0"
    "vtol\0rover\0sub\0supportsThrottleModeCenterZero\0"
    "supportsNegativeThrust\0supportsJSButton\0"
    "supportsRadio\0supportsMotorInterference\0"
    "autoDisconnect\0motorCount\0coaxialMotors\0"
    "xConfigMotors\0isOfflineEditingVehicle\0"
    "brandImageIndoor\0brandImageOutdoor\0"
    "unhealthySensors\0missionFlightMode\0"
    "pauseFlightMode\0rtlFlightMode\0"
    "landFlightMode\0takeControlFlightMode\0"
    "firmwareTypeString\0vehicleTypeString\0"
    "vehicleImageOpaque\0vehicleImageOutline\0"
    "vehicleImageCompass\0telemetryRRSSI\0"
    "telemetryLRSSI\0telemetryRXErrors\0"
    "telemetryFixed\0telemetryTXBuffer\0"
    "telemetryLNoise\0telemetryRNoise\0"
    "toolBarIndicators\0adsbVehicles\0"
    "staticCameraList\0dynamicCameras\0"
    "QGCCameraManager*\0hobbsMeter\0"
    "supportsTerrainFrame\0links\0priorityLink\0"
    "guidedModeSupported\0pauseVehicleSupported\0"
    "orbitModeSupported\0takeoffVehicleSupported\0"
    "parameterManager\0ParameterManager*\0"
    "Fact*\0heading\0rollRate\0pitchRate\0"
    "yawRate\0groundSpeed\0airSpeed\0climbRate\0"
    "altitudeAMSL\0flightDistance\0distanceToHome\0"
    "hobbs\0gps\0FactGroup*\0battery\0battery2\0"
    "wind\0vibration\0temperature\0clock\0"
    "setpoint\0firmwareMajorVersion\0"
    "firmwareMinorVersion\0firmwarePatchVersion\0"
    "firmwareVersionType\0firmwareVersionTypeString\0"
    "firmwareCustomMajorVersion\0"
    "firmwareCustomMinorVersion\0"
    "firmwareCustomPatchVersion\0gitHash\0"
    "vehicleUID\0vehicleUIDStr\0"
    "manualControlReservedButtonCount\0"
    "MavlinkSysStatus\0SysStatusSensor3dGyro\0"
    "SysStatusSensor3dAccel\0SysStatusSensor3dMag\0"
    "SysStatusSensorAbsolutePressure\0"
    "SysStatusSensorDifferentialPressure\0"
    "SysStatusSensorGPS\0SysStatusSensorOpticalFlow\0"
    "SysStatusSensorVisionPosition\0"
    "SysStatusSensorLaserPosition\0"
    "SysStatusSensorExternalGroundTruth\0"
    "SysStatusSensorAngularRateControl\0"
    "SysStatusSensorAttitudeStabilization\0"
    "SysStatusSensorYawPosition\0"
    "SysStatusSensorZAltitudeControl\0"
    "SysStatusSensorXYPositionControl\0"
    "SysStatusSensorMotorOutputs\0"
    "SysStatusSensorRCReceiver\0"
    "SysStatusSensor3dGyro2\0SysStatusSensor3dAccel2\0"
    "SysStatusSensor3dMag2\0SysStatusSensorGeoFence\0"
    "SysStatusSensorAHRS\0SysStatusSensorTerrain\0"
    "SysStatusSensorReverseMotor\0"
    "SysStatusSensorLogging\0SysStatusSensorBattery"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Vehicle[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     138,   14, // methods
     132, 1192, // properties
       1, 1720, // enums/sets
       0,    0, // constructors
       0,       // flags
      76,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  704,    2, 0x06 /* Public */,
       5,    1,  707,    2, 0x06 /* Public */,
       8,    1,  710,    2, 0x06 /* Public */,
      10,    1,  713,    2, 0x06 /* Public */,
      12,    1,  716,    2, 0x06 /* Public */,
      14,    1,  719,    2, 0x06 /* Public */,
      17,    1,  722,    2, 0x06 /* Public */,
      19,    1,  725,    2, 0x06 /* Public */,
      21,    1,  728,    2, 0x06 /* Public */,
      23,    1,  731,    2, 0x06 /* Public */,
      25,   19,  734,    2, 0x06 /* Public */,
      44,    1,  773,    2, 0x06 /* Public */,
      46,    1,  776,    2, 0x06 /* Public */,
      48,    1,  779,    2, 0x06 /* Public */,
      49,    1,  782,    2, 0x06 /* Public */,
      51,    1,  785,    2, 0x06 /* Public */,
      53,    1,  788,    2, 0x06 /* Public */,
      55,    1,  791,    2, 0x06 /* Public */,
      57,    1,  794,    2, 0x06 /* Public */,
      59,    1,  797,    2, 0x06 /* Public */,
      61,    0,  800,    2, 0x06 /* Public */,
      62,    1,  801,    2, 0x06 /* Public */,
      64,    1,  804,    2, 0x06 /* Public */,
      66,    0,  807,    2, 0x06 /* Public */,
      67,    0,  808,    2, 0x06 /* Public */,
      68,    0,  809,    2, 0x06 /* Public */,
      69,    0,  810,    2, 0x06 /* Public */,
      70,    1,  811,    2, 0x06 /* Public */,
      72,    1,  814,    2, 0x06 /* Public */,
      74,    1,  817,    2, 0x06 /* Public */,
      77,    0,  820,    2, 0x06 /* Public */,
      78,    1,  821,    2, 0x06 /* Public */,
      80,    1,  824,    2, 0x06 /* Public */,
      82,    0,  827,    2, 0x06 /* Public */,
      83,    0,  828,    2, 0x06 /* Public */,
      84,    0,  829,    2, 0x06 /* Public */,
      85,    0,  830,    2, 0x06 /* Public */,
      86,    0,  831,    2, 0x06 /* Public */,
      87,    2,  832,    2, 0x06 /* Public */,
      90,    0,  837,    2, 0x06 /* Public */,
      91,    0,  838,    2, 0x06 /* Public */,
      92,    0,  839,    2, 0x06 /* Public */,
      93,    0,  840,    2, 0x06 /* Public */,
      94,    0,  841,    2, 0x06 /* Public */,
      95,    0,  842,    2, 0x06 /* Public */,
      96,    0,  843,    2, 0x06 /* Public */,
      97,    0,  844,    2, 0x06 /* Public */,
      98,    0,  845,    2, 0x06 /* Public */,
      99,    1,  846,    2, 0x06 /* Public */,
     101,    1,  849,    2, 0x06 /* Public */,
     103,    1,  852,    2, 0x06 /* Public */,
     104,    1,  855,    2, 0x06 /* Public */,
     105,    1,  858,    2, 0x06 /* Public */,
     106,    1,  861,    2, 0x06 /* Public */,
     107,    1,  864,    2, 0x06 /* Public */,
     108,    1,  867,    2, 0x06 /* Public */,
     109,    0,  870,    2, 0x06 /* Public */,
     110,    0,  871,    2, 0x06 /* Public */,
     111,    1,  872,    2, 0x06 /* Public */,
     113,    1,  875,    2, 0x06 /* Public */,
     115,    1,  878,    2, 0x06 /* Public */,
     117,    1,  881,    2, 0x06 /* Public */,
     119,    0,  884,    2, 0x06 /* Public */,
     120,    0,  885,    2, 0x06 /* Public */,
     121,    1,  886,    2, 0x06 /* Public */,
     123,    0,  889,    2, 0x06 /* Public */,
     124,    2,  890,    2, 0x06 /* Public */,
     128,    1,  895,    2, 0x06 /* Public */,
     131,    1,  898,    2, 0x06 /* Public */,
     132,    1,  901,    2, 0x06 /* Public */,
     133,    1,  904,    2, 0x06 /* Public */,
     134,    1,  907,    2, 0x06 /* Public */,
     135,    7,  910,    2, 0x06 /* Public */,
     143,    5,  925,    2, 0x06 /* Public */,
     149,    5,  936,    2, 0x06 /* Public */,
     154,    1,  947,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
     156,    2,  950,    2, 0x08 /* Private */,
     157,    1,  955,    2, 0x08 /* Private */,
     158,    2,  958,    2, 0x08 /* Private */,
     159,    0,  963,    2, 0x08 /* Private */,
     160,    0,  964,    2, 0x08 /* Private */,
     161,    1,  965,    2, 0x08 /* Private */,
     163,    1,  968,    2, 0x08 /* Private */,
     164,    1,  971,    2, 0x08 /* Private */,
     165,    1,  974,    2, 0x08 /* Private */,
     166,    1,  977,    2, 0x08 /* Private */,
     167,    1,  980,    2, 0x08 /* Private */,
     168,    1,  983,    2, 0x08 /* Private */,
     169,    1,  986,    2, 0x08 /* Private */,
     170,    1,  989,    2, 0x08 /* Private */,
     170,    0,  992,    2, 0x28 /* Private | MethodCloned */,
     172,    1,  993,    2, 0x08 /* Private */,
     174,    1,  996,    2, 0x08 /* Private */,
     176,    1,  999,    2, 0x08 /* Private */,
     179,    0, 1002,    2, 0x08 /* Private */,
     180,    0, 1003,    2, 0x08 /* Private */,
     181,    0, 1004,    2, 0x08 /* Private */,
     182,    0, 1005,    2, 0x08 /* Private */,
     183,    0, 1006,    2, 0x08 /* Private */,
     184,    0, 1007,    2, 0x08 /* Private */,
     185,    0, 1008,    2, 0x08 /* Private */,
     186,    0, 1009,    2, 0x08 /* Private */,
     187,    0, 1010,    2, 0x08 /* Private */,
     188,    1, 1011,    2, 0x08 /* Private */,
     190,    0, 1014,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
     191,    0, 1015,    2, 0x02 /* Public */,
     192,    0, 1016,    2, 0x02 /* Public */,
     193,    4, 1017,    2, 0x02 /* Public */,
     198,    0, 1026,    2, 0x02 /* Public */,
     199,    0, 1027,    2, 0x02 /* Public */,
     200,    0, 1028,    2, 0x02 /* Public */,
     201,    1, 1029,    2, 0x02 /* Public */,
     203,    0, 1032,    2, 0x02 /* Public */,
     204,    1, 1033,    2, 0x02 /* Public */,
     206,    1, 1036,    2, 0x02 /* Public */,
     208,    4, 1039,    2, 0x02 /* Public */,
     208,    3, 1048,    2, 0x22 /* Public | MethodCloned */,
     208,    2, 1055,    2, 0x22 /* Public | MethodCloned */,
     208,    1, 1060,    2, 0x22 /* Public | MethodCloned */,
     208,    0, 1063,    2, 0x22 /* Public | MethodCloned */,
     213,    0, 1064,    2, 0x02 /* Public */,
     214,    0, 1065,    2, 0x02 /* Public */,
     215,    1, 1066,    2, 0x02 /* Public */,
     217,    0, 1069,    2, 0x02 /* Public */,
     218,    1, 1070,    2, 0x02 /* Public */,
     220,    0, 1073,    2, 0x02 /* Public */,
     221,    0, 1074,    2, 0x02 /* Public */,
     222,    0, 1075,    2, 0x02 /* Public */,
     223,    1, 1076,    2, 0x02 /* Public */,
     225,    0, 1079,    2, 0x02 /* Public */,
     171,   10, 1080,    2, 0x02 /* Public */,
     171,    9, 1101,    2, 0x22 /* Public | MethodCloned */,
     171,    8, 1120,    2, 0x22 /* Public | MethodCloned */,
     171,    7, 1137,    2, 0x22 /* Public | MethodCloned */,
     171,    6, 1152,    2, 0x22 /* Public | MethodCloned */,
     171,    5, 1165,    2, 0x22 /* Public | MethodCloned */,
     171,    4, 1176,    2, 0x22 /* Public | MethodCloned */,
     171,    3, 1185,    2, 0x22 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 6,   18,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::UChar,   26,   27,   28,   29,   30,   31,   32,   33,   34,   35,   36,   37,   38,   39,   40,   41,   42,   43,    9,
    QMetaType::Void, QMetaType::Bool,   45,
    QMetaType::Void, QMetaType::Bool,   47,
    QMetaType::Void, QMetaType::Bool,   48,
    QMetaType::Void, QMetaType::Bool,   50,
    QMetaType::Void, QMetaType::Bool,   52,
    QMetaType::Void, QMetaType::Bool,   54,
    QMetaType::Void, QMetaType::Bool,   56,
    QMetaType::Void, QMetaType::QString,   58,
    QMetaType::Void, QMetaType::Bool,   60,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   63,
    QMetaType::Void, QMetaType::Double,   65,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   71,
    QMetaType::Void, QMetaType::Bool,   73,
    QMetaType::Void, 0x80000000 | 75,   76,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   79,
    QMetaType::Void, QMetaType::QString,   81,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 88, 0x80000000 | 15,   89,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  100,
    QMetaType::Void, QMetaType::Int,  102,
    QMetaType::Void, QMetaType::Int,  102,
    QMetaType::Void, QMetaType::UInt,  102,
    QMetaType::Void, QMetaType::UInt,  102,
    QMetaType::Void, QMetaType::UInt,  102,
    QMetaType::Void, QMetaType::Int,  102,
    QMetaType::Void, QMetaType::Int,  102,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  112,
    QMetaType::Void, QMetaType::Int,  114,
    QMetaType::Void, QMetaType::Int,  116,
    QMetaType::Void, QMetaType::Int,  118,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  122,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 126,  125,  127,
    QMetaType::Void, 0x80000000 | 129,  130,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 129, 0x80000000 | 129, 0x80000000 | 138, 0x80000000 | 129, QMetaType::QByteArray, QMetaType::Bool,    4,  136,  137,  139,  140,  141,  142,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool,  144,  145,  146,  147,  148,
    QMetaType::Void, 0x80000000 | 129, 0x80000000 | 129, 0x80000000 | 138, 0x80000000 | 152, QMetaType::QByteArray,  150,   27,  151,  153,  141,
    QMetaType::Void, QMetaType::UInt,  155,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 88, 0x80000000 | 15,   89,   16,
    QMetaType::Void, 0x80000000 | 88,   89,
    QMetaType::Void, 0x80000000 | 88, 0x80000000 | 15,   89,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  162,
    QMetaType::Void, 0x80000000 | 129,  130,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void, QMetaType::QVariant,  102,
    QMetaType::Void, QMetaType::QVariant,  102,
    QMetaType::Void, QMetaType::QVariant,  102,
    QMetaType::Void, QMetaType::QVariant,  102,
    QMetaType::Void, QMetaType::Bool,  171,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  173,
    QMetaType::Void, 0x80000000 | 175,   16,
    QMetaType::Void, 0x80000000 | 177,  178,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  189,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,  194,  195,  196,  197,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,  202,
    QMetaType::Double,
    QMetaType::Void, 0x80000000 | 6,  205,
    QMetaType::Void, QMetaType::Double,  207,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Double, QMetaType::Double, QMetaType::Double,  209,  210,  211,  212,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Double, QMetaType::Double,  209,  210,  211,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Double,  209,  210,
    QMetaType::Void, 0x80000000 | 6,  209,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,  216,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  219,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  224,
    QMetaType::QString,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,  145,  146,  226,  227,  228,  229,  230,  231,  232,  233,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,  145,  146,  226,  227,  228,  229,  230,  231,  232,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,  145,  146,  226,  227,  228,  229,  230,  231,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,  145,  146,  226,  227,  228,  229,  230,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Double, QMetaType::Double, QMetaType::Double,  145,  146,  226,  227,  228,  229,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Double, QMetaType::Double,  145,  146,  226,  227,  228,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Double,  145,  146,  226,  227,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool,  145,  146,  226,

 // properties: name, type, flags
     234, QMetaType::Int, 0x00095401,
     235, 0x80000000 | 236, 0x00095409,
       7, 0x80000000 | 6, 0x00495009,
      18, 0x80000000 | 6, 0x00495009,
      20, QMetaType::Bool, 0x00495103,
     237, QMetaType::Bool, 0x00495001,
     238, QMetaType::Bool, 0x00095401,
     239, QMetaType::QStringList, 0x00495001,
      22, QMetaType::QString, 0x00495103,
      24, QMetaType::Bool, 0x00495103,
     240, 0x80000000 | 241, 0x00095409,
     242, 0x80000000 | 241, 0x00095409,
     243, QMetaType::Float, 0x00495001,
     244, QMetaType::Float, 0x00495001,
     245, QMetaType::Bool, 0x00495001,
     246, QMetaType::Bool, 0x00495001,
     247, QMetaType::Bool, 0x00495001,
     248, QMetaType::Bool, 0x00495001,
     249, QMetaType::Int, 0x00495001,
     250, QMetaType::Int, 0x00495001,
     251, QMetaType::QString, 0x00495001,
     252, QMetaType::QString, 0x00495001,
     253, QMetaType::QString, 0x00495001,
     254, QMetaType::Int, 0x00495103,
     255, QMetaType::QStringList, 0x00095401,
     256, QMetaType::Bool, 0x00495103,
      13, QMetaType::Bool, 0x00495103,
     257, QMetaType::Int, 0x00495001,
     100, QMetaType::Int, 0x00495001,
     258, QMetaType::Bool, 0x00495001,
     259, QMetaType::Bool, 0x00495001,
      60, QMetaType::Bool, 0x00495103,
     260, QMetaType::Bool, 0x00095401,
      45, QMetaType::Bool, 0x00495001,
      47, QMetaType::Bool, 0x00495103,
     261, QMetaType::UInt, 0x00495001,
     262, QMetaType::UInt, 0x00495001,
     263, QMetaType::UInt, 0x00495001,
     264, QMetaType::Bool, 0x00495001,
     265, QMetaType::Bool, 0x00495001,
     266, QMetaType::Bool, 0x00495001,
     267, QMetaType::Bool, 0x00495001,
     268, QMetaType::Bool, 0x00495001,
     269, QMetaType::Bool, 0x00095401,
     270, QMetaType::Bool, 0x00095401,
     271, QMetaType::Bool, 0x00095401,
     272, QMetaType::Bool, 0x00095401,
     273, QMetaType::Bool, 0x00095401,
     274, QMetaType::Bool, 0x00495003,
      58, QMetaType::QString, 0x00495103,
     275, QMetaType::Int, 0x00095401,
     276, QMetaType::Bool, 0x00095401,
     277, QMetaType::Bool, 0x00095401,
     278, QMetaType::Bool, 0x00095401,
     279, QMetaType::QString, 0x00495001,
     280, QMetaType::QString, 0x00495001,
     281, QMetaType::QStringList, 0x00495001,
     112, QMetaType::Int, 0x00495001,
     114, QMetaType::Int, 0x00495001,
     116, QMetaType::Int, 0x00495001,
     118, QMetaType::Int, 0x00495001,
     282, QMetaType::QString, 0x00095401,
     283, QMetaType::QString, 0x00095401,
     284, QMetaType::QString, 0x00095401,
     285, QMetaType::QString, 0x00095401,
     286, QMetaType::QString, 0x00095401,
     287, QMetaType::QString, 0x00495001,
     288, QMetaType::QString, 0x00495001,
     289, QMetaType::QString, 0x00095401,
     290, QMetaType::QString, 0x00095401,
     291, QMetaType::QString, 0x00095401,
     292, QMetaType::Int, 0x00495001,
     293, QMetaType::Int, 0x00495001,
     294, QMetaType::UInt, 0x00495001,
     295, QMetaType::UInt, 0x00495001,
     296, QMetaType::UInt, 0x00495001,
     297, QMetaType::Int, 0x00495001,
     298, QMetaType::Int, 0x00495001,
     299, QMetaType::QVariantList, 0x00495001,
     300, 0x80000000 | 241, 0x00095409,
      73, QMetaType::Bool, 0x00495001,
     301, QMetaType::QVariantList, 0x00095401,
     302, 0x80000000 | 303, 0x00495009,
     304, QMetaType::QString, 0x00495001,
      56, QMetaType::Bool, 0x00495103,
      79, QMetaType::Bool, 0x00495001,
     305, QMetaType::Bool, 0x00495001,
      81, QMetaType::QString, 0x00495003,
     306, QMetaType::QVariantList, 0x00495001,
     307, 0x80000000 | 88, 0x00495009,
      50, QMetaType::Bool, 0x00495001,
      52, QMetaType::Bool, 0x00495001,
      54, QMetaType::Bool, 0x00495103,
     308, QMetaType::Bool, 0x00095401,
     309, QMetaType::Bool, 0x00095401,
     310, QMetaType::Bool, 0x00095401,
     311, QMetaType::Bool, 0x00095401,
     312, 0x80000000 | 313, 0x00095409,
     194, 0x80000000 | 314, 0x00095409,
     195, 0x80000000 | 314, 0x00095409,
     315, 0x80000000 | 314, 0x00095409,
     316, 0x80000000 | 314, 0x00095409,
     317, 0x80000000 | 314, 0x00095409,
     318, 0x80000000 | 314, 0x00095409,
     319, 0x80000000 | 314, 0x00095409,
     320, 0x80000000 | 314, 0x00095409,
     321, 0x80000000 | 314, 0x00095409,
     202, 0x80000000 | 314, 0x00095409,
     322, 0x80000000 | 314, 0x00095409,
     323, 0x80000000 | 314, 0x00095409,
     324, 0x80000000 | 314, 0x00095409,
     325, 0x80000000 | 314, 0x00095409,
     326, 0x80000000 | 327, 0x00095409,
     328, 0x80000000 | 327, 0x00095409,
     329, 0x80000000 | 327, 0x00095409,
     330, 0x80000000 | 327, 0x00095409,
     331, 0x80000000 | 327, 0x00095409,
     332, 0x80000000 | 327, 0x00095409,
     333, 0x80000000 | 327, 0x00095409,
     334, 0x80000000 | 327, 0x00095409,
     335, QMetaType::Int, 0x00495001,
     336, QMetaType::Int, 0x00495001,
     337, QMetaType::Int, 0x00495001,
     338, QMetaType::Int, 0x00495001,
     339, QMetaType::QString, 0x00495001,
     340, QMetaType::Int, 0x00495001,
     341, QMetaType::Int, 0x00495001,
     342, QMetaType::Int, 0x00495001,
     343, QMetaType::QString, 0x00495001,
     344, QMetaType::ULongLong, 0x00495001,
     345, QMetaType::QString, 0x00495001,
     346, QMetaType::Int, 0x00095401,

 // properties: notify_signal_id
       0,
       0,
       1,
       6,
       7,
      56,
       0,
      57,
       8,
       9,
       0,
       0,
       1,
       1,
      39,
      39,
      39,
      39,
      40,
      41,
      42,
      43,
      44,
       2,
       0,
       3,
       4,
      47,
      48,
      23,
      23,
      19,
       0,
      11,
      12,
      35,
      36,
      37,
      24,
      24,
      24,
      24,
      24,
       0,
       0,
       0,
       0,
       0,
      13,
      18,
       0,
       0,
       0,
       0,
      23,
      23,
      20,
      58,
      59,
      60,
      61,
       0,
       0,
       0,
       0,
       0,
      23,
      24,
       0,
       0,
       0,
      49,
      50,
      51,
      52,
      53,
      54,
      55,
      30,
       0,
      28,
       0,
      25,
      26,
      17,
      31,
      23,
      32,
      33,
      32,
      14,
      15,
      16,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
      62,
      62,
      62,
      62,
      62,
      63,
      63,
      63,
      64,
      65,
      65,
       0,

 // enums: name, flags, count, data
     347, 0x0,   26, 1724,

 // enum data: key, value
     348, uint(Vehicle::SysStatusSensor3dGyro),
     349, uint(Vehicle::SysStatusSensor3dAccel),
     350, uint(Vehicle::SysStatusSensor3dMag),
     351, uint(Vehicle::SysStatusSensorAbsolutePressure),
     352, uint(Vehicle::SysStatusSensorDifferentialPressure),
     353, uint(Vehicle::SysStatusSensorGPS),
     354, uint(Vehicle::SysStatusSensorOpticalFlow),
     355, uint(Vehicle::SysStatusSensorVisionPosition),
     356, uint(Vehicle::SysStatusSensorLaserPosition),
     357, uint(Vehicle::SysStatusSensorExternalGroundTruth),
     358, uint(Vehicle::SysStatusSensorAngularRateControl),
     359, uint(Vehicle::SysStatusSensorAttitudeStabilization),
     360, uint(Vehicle::SysStatusSensorYawPosition),
     361, uint(Vehicle::SysStatusSensorZAltitudeControl),
     362, uint(Vehicle::SysStatusSensorXYPositionControl),
     363, uint(Vehicle::SysStatusSensorMotorOutputs),
     364, uint(Vehicle::SysStatusSensorRCReceiver),
     365, uint(Vehicle::SysStatusSensor3dGyro2),
     366, uint(Vehicle::SysStatusSensor3dAccel2),
     367, uint(Vehicle::SysStatusSensor3dMag2),
     368, uint(Vehicle::SysStatusSensorGeoFence),
     369, uint(Vehicle::SysStatusSensorAHRS),
     370, uint(Vehicle::SysStatusSensorTerrain),
     371, uint(Vehicle::SysStatusSensorReverseMotor),
     372, uint(Vehicle::SysStatusSensorLogging),
     373, uint(Vehicle::SysStatusSensorBattery),

       0        // eod
};

void Vehicle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Vehicle *_t = static_cast<Vehicle *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->allLinksInactive((*reinterpret_cast< Vehicle*(*)>(_a[1]))); break;
        case 1: _t->coordinateChanged((*reinterpret_cast< QGeoCoordinate(*)>(_a[1]))); break;
        case 2: _t->joystickModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->joystickEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->activeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->mavlinkMessageReceived((*reinterpret_cast< const mavlink_message_t(*)>(_a[1]))); break;
        case 6: _t->homePositionChanged((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        case 7: _t->armedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->flightModeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->hilModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->hilActuatorControlsChanged((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< float(*)>(_a[9])),(*reinterpret_cast< float(*)>(_a[10])),(*reinterpret_cast< float(*)>(_a[11])),(*reinterpret_cast< float(*)>(_a[12])),(*reinterpret_cast< float(*)>(_a[13])),(*reinterpret_cast< float(*)>(_a[14])),(*reinterpret_cast< float(*)>(_a[15])),(*reinterpret_cast< float(*)>(_a[16])),(*reinterpret_cast< float(*)>(_a[17])),(*reinterpret_cast< float(*)>(_a[18])),(*reinterpret_cast< quint8(*)>(_a[19]))); break;
        case 11: _t->connectionLostChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->connectionLostEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->autoDisconnectChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->flyingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->landingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->guidedModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->vtolInFwdFlightChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->prearmErrorChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: _t->soloFirmwareChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->unhealthySensorsChanged(); break;
        case 21: _t->defaultCruiseSpeedChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 22: _t->defaultHoverSpeedChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 23: _t->firmwareTypeChanged(); break;
        case 24: _t->vehicleTypeChanged(); break;
        case 25: _t->dynamicCamerasChanged(); break;
        case 26: _t->hobbsMeterChanged(); break;
        case 27: _t->capabilitiesKnownChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->initialPlanRequestCompleteChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->capabilityBitsChanged((*reinterpret_cast< uint64_t(*)>(_a[1]))); break;
        case 30: _t->toolBarIndicatorsChanged(); break;
        case 31: _t->highLatencyLinkChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->priorityLinkNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 33: _t->linksChanged(); break;
        case 34: _t->linksPropertiesChanged(); break;
        case 35: _t->messagesReceivedChanged(); break;
        case 36: _t->messagesSentChanged(); break;
        case 37: _t->messagesLostChanged(); break;
        case 38: _t->_sendMessageOnLinkOnThread((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< mavlink_message_t(*)>(_a[2]))); break;
        case 39: _t->messageTypeChanged(); break;
        case 40: _t->newMessageCountChanged(); break;
        case 41: _t->messageCountChanged(); break;
        case 42: _t->formatedMessagesChanged(); break;
        case 43: _t->formatedMessageChanged(); break;
        case 44: _t->latestErrorChanged(); break;
        case 45: _t->longitudeChanged(); break;
        case 46: _t->currentConfigChanged(); break;
        case 47: _t->flowImageIndexChanged(); break;
        case 48: _t->rcRSSIChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 49: _t->telemetryRRSSIChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 50: _t->telemetryLRSSIChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 51: _t->telemetryRXErrorsChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 52: _t->telemetryFixedChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 53: _t->telemetryTXBufferChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 54: _t->telemetryLNoiseChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 55: _t->telemetryRNoiseChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 56: _t->autoDisarmChanged(); break;
        case 57: _t->flightModesChanged(); break;
        case 58: _t->sensorsPresentBitsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 59: _t->sensorsEnabledBitsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 60: _t->sensorsHealthBitsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 61: _t->sensorsUnhealthyBitsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 62: _t->firmwareVersionChanged(); break;
        case 63: _t->firmwareCustomVersionChanged(); break;
        case 64: _t->gitHashChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 65: _t->vehicleUIDChanged(); break;
        case 66: _t->rcChannelsChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)[cMaxRcChannels]>(_a[2]))); break;
        case 67: _t->remoteControlRSSIChanged((*reinterpret_cast< uint8_t(*)>(_a[1]))); break;
        case 68: _t->mavlinkRawImu((*reinterpret_cast< mavlink_message_t(*)>(_a[1]))); break;
        case 69: _t->mavlinkScaledImu1((*reinterpret_cast< mavlink_message_t(*)>(_a[1]))); break;
        case 70: _t->mavlinkScaledImu2((*reinterpret_cast< mavlink_message_t(*)>(_a[1]))); break;
        case 71: _t->mavlinkScaledImu3((*reinterpret_cast< mavlink_message_t(*)>(_a[1]))); break;
        case 72: _t->mavlinkLogData((*reinterpret_cast< Vehicle*(*)>(_a[1])),(*reinterpret_cast< uint8_t(*)>(_a[2])),(*reinterpret_cast< uint8_t(*)>(_a[3])),(*reinterpret_cast< uint16_t(*)>(_a[4])),(*reinterpret_cast< uint8_t(*)>(_a[5])),(*reinterpret_cast< QByteArray(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7]))); break;
        case 73: _t->mavCommandResult((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 74: _t->mavlinkSerialControl((*reinterpret_cast< uint8_t(*)>(_a[1])),(*reinterpret_cast< uint8_t(*)>(_a[2])),(*reinterpret_cast< uint16_t(*)>(_a[3])),(*reinterpret_cast< uint32_t(*)>(_a[4])),(*reinterpret_cast< QByteArray(*)>(_a[5]))); break;
        case 75: _t->requestProtocolVersion((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 76: _t->_mavlinkMessageReceived((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< mavlink_message_t(*)>(_a[2]))); break;
        case 77: _t->_linkInactiveOrDeleted((*reinterpret_cast< LinkInterface*(*)>(_a[1]))); break;
        case 78: _t->_sendMessageOnLink((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< mavlink_message_t(*)>(_a[2]))); break;
        case 79: _t->_sendMessageMultipleNext(); break;
        case 80: _t->_addNewMapTrajectoryPoint(); break;
        case 81: _t->_parametersReady((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 82: _t->_remoteControlRSSIChanged((*reinterpret_cast< uint8_t(*)>(_a[1]))); break;
        case 83: _t->_handleFlightModeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 84: _t->_announceArmedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 85: _t->_offlineFirmwareTypeSettingChanged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 86: _t->_offlineVehicleTypeSettingChanged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 87: _t->_offlineCruiseSpeedSettingChanged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 88: _t->_offlineHoverSpeedSettingChanged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 89: _t->_updateHighLatencyLink((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 90: _t->_updateHighLatencyLink(); break;
        case 91: _t->_handleTextMessage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 92: _t->_handletextMessageReceived((*reinterpret_cast< UASMessage*(*)>(_a[1]))); break;
        case 93: _t->_imageReady((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 94: _t->_prearmErrorTimeout(); break;
        case 95: _t->_missionLoadComplete(); break;
        case 96: _t->_geoFenceLoadComplete(); break;
        case 97: _t->_rallyPointLoadComplete(); break;
        case 98: _t->_sendMavCommandAgain(); break;
        case 99: _t->_clearTrajectoryPoints(); break;
        case 100: _t->_clearCameraTriggerPoints(); break;
        case 101: _t->_updateDistanceToHome(); break;
        case 102: _t->_updateHobbsMeter(); break;
        case 103: _t->_vehicleParamLoaded((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 104: _t->_sendQGCTimeToVehicle(); break;
        case 105: _t->resetCounters(); break;
        case 106: _t->resetMessages(); break;
        case 107: _t->virtualTabletJoystickValue((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 108: _t->disconnectInactiveVehicle(); break;
        case 109: _t->guidedModeRTL(); break;
        case 110: _t->guidedModeLand(); break;
        case 111: _t->guidedModeTakeoff((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 112: { double _r = _t->minimumTakeoffAltitude();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 113: _t->guidedModeGotoLocation((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        case 114: _t->guidedModeChangeAltitude((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 115: _t->guidedModeOrbit((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 116: _t->guidedModeOrbit((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 117: _t->guidedModeOrbit((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 118: _t->guidedModeOrbit((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        case 119: _t->guidedModeOrbit(); break;
        case 120: _t->pauseVehicle(); break;
        case 121: _t->emergencyStop(); break;
        case 122: _t->abortLanding((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 123: _t->startMission(); break;
        case 124: _t->setCurrentMissionSequence((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 125: _t->rebootVehicle(); break;
        case 126: _t->clearMessages(); break;
        case 127: _t->triggerCamera(); break;
        case 128: _t->sendPlan((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 129: { QString _r = _t->vehicleTypeName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 130: _t->sendCommand((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10]))); break;
        case 131: _t->sendCommand((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9]))); break;
        case 132: _t->sendCommand((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8]))); break;
        case 133: _t->sendCommand((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7]))); break;
        case 134: _t->sendCommand((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 135: _t->sendCommand((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5]))); break;
        case 136: _t->sendCommand((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 137: _t->sendCommand((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vehicle* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 38:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 72:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vehicle* >(); break;
            }
            break;
        case 76:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 77:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 78:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 113:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 115:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 116:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 117:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 118:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Vehicle::*_t)(Vehicle * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::allLinksInactive)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(QGeoCoordinate );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::coordinateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::joystickModeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::joystickEnabledChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::activeChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(const mavlink_message_t & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::mavlinkMessageReceived)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(const QGeoCoordinate & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::homePositionChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::armedChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::flightModeChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::hilModeChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(quint64 , quint64 , float , float , float , float , float , float , float , float , float , float , float , float , float , float , float , float , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::hilActuatorControlsChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::connectionLostChanged)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::connectionLostEnabledChanged)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::autoDisconnectChanged)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::flyingChanged)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::landingChanged)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::guidedModeChanged)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::vtolInFwdFlightChanged)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::prearmErrorChanged)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::soloFirmwareChanged)) {
                *result = 19;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::unhealthySensorsChanged)) {
                *result = 20;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::defaultCruiseSpeedChanged)) {
                *result = 21;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::defaultHoverSpeedChanged)) {
                *result = 22;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::firmwareTypeChanged)) {
                *result = 23;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::vehicleTypeChanged)) {
                *result = 24;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::dynamicCamerasChanged)) {
                *result = 25;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::hobbsMeterChanged)) {
                *result = 26;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::capabilitiesKnownChanged)) {
                *result = 27;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::initialPlanRequestCompleteChanged)) {
                *result = 28;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(uint64_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::capabilityBitsChanged)) {
                *result = 29;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::toolBarIndicatorsChanged)) {
                *result = 30;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::highLatencyLinkChanged)) {
                *result = 31;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::priorityLinkNameChanged)) {
                *result = 32;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::linksChanged)) {
                *result = 33;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::linksPropertiesChanged)) {
                *result = 34;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::messagesReceivedChanged)) {
                *result = 35;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::messagesSentChanged)) {
                *result = 36;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::messagesLostChanged)) {
                *result = 37;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(LinkInterface * , mavlink_message_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::_sendMessageOnLinkOnThread)) {
                *result = 38;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::messageTypeChanged)) {
                *result = 39;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::newMessageCountChanged)) {
                *result = 40;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::messageCountChanged)) {
                *result = 41;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::formatedMessagesChanged)) {
                *result = 42;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::formatedMessageChanged)) {
                *result = 43;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::latestErrorChanged)) {
                *result = 44;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::longitudeChanged)) {
                *result = 45;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::currentConfigChanged)) {
                *result = 46;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::flowImageIndexChanged)) {
                *result = 47;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::rcRSSIChanged)) {
                *result = 48;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::telemetryRRSSIChanged)) {
                *result = 49;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::telemetryLRSSIChanged)) {
                *result = 50;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::telemetryRXErrorsChanged)) {
                *result = 51;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::telemetryFixedChanged)) {
                *result = 52;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::telemetryTXBufferChanged)) {
                *result = 53;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::telemetryLNoiseChanged)) {
                *result = 54;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::telemetryRNoiseChanged)) {
                *result = 55;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::autoDisarmChanged)) {
                *result = 56;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::flightModesChanged)) {
                *result = 57;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::sensorsPresentBitsChanged)) {
                *result = 58;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::sensorsEnabledBitsChanged)) {
                *result = 59;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::sensorsHealthBitsChanged)) {
                *result = 60;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::sensorsUnhealthyBitsChanged)) {
                *result = 61;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::firmwareVersionChanged)) {
                *result = 62;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::firmwareCustomVersionChanged)) {
                *result = 63;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::gitHashChanged)) {
                *result = 64;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::vehicleUIDChanged)) {
                *result = 65;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(int , int [cMaxRcChannels]);
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::rcChannelsChanged)) {
                *result = 66;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(uint8_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::remoteControlRSSIChanged)) {
                *result = 67;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(mavlink_message_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::mavlinkRawImu)) {
                *result = 68;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(mavlink_message_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::mavlinkScaledImu1)) {
                *result = 69;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(mavlink_message_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::mavlinkScaledImu2)) {
                *result = 70;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(mavlink_message_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::mavlinkScaledImu3)) {
                *result = 71;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(Vehicle * , uint8_t , uint8_t , uint16_t , uint8_t , QByteArray , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::mavlinkLogData)) {
                *result = 72;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(int , int , int , int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::mavCommandResult)) {
                *result = 73;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(uint8_t , uint8_t , uint16_t , uint32_t , QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::mavlinkSerialControl)) {
                *result = 74;
                return;
            }
        }
        {
            typedef void (Vehicle::*_t)(unsigned  );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Vehicle::requestProtocolVersion)) {
                *result = 75;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 111:
        case 110:
        case 109:
        case 108:
        case 107:
        case 106:
        case 105:
        case 104:
        case 103:
        case 102:
        case 101:
        case 100:
        case 99:
        case 98:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        case 119:
        case 118:
        case 117:
        case 116:
        case 115:
        case 114:
        case 113:
        case 112:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FactGroup* >(); break;
        case 89:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
        case 3:
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        case 79:
        case 11:
        case 10:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Vehicle *_t = static_cast<Vehicle *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->id(); break;
        case 1: *reinterpret_cast< AutoPilotPlugin**>(_v) = _t->_autopilotPlugin; break;
        case 2: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->coordinate(); break;
        case 3: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->homePosition(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->armed(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->autoDisarm(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->flightModeSetAvailable(); break;
        case 7: *reinterpret_cast< QStringList*>(_v) = _t->flightModes(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->flightMode(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->hilMode(); break;
        case 10: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->trajectoryPoints(); break;
        case 11: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->cameraTriggerPoints(); break;
        case 12: *reinterpret_cast< float*>(_v) = _t->latitude(); break;
        case 13: *reinterpret_cast< float*>(_v) = _t->longitude(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->messageTypeNone(); break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->messageTypeNormal(); break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->messageTypeWarning(); break;
        case 17: *reinterpret_cast< bool*>(_v) = _t->messageTypeError(); break;
        case 18: *reinterpret_cast< int*>(_v) = _t->newMessageCount(); break;
        case 19: *reinterpret_cast< int*>(_v) = _t->messageCount(); break;
        case 20: *reinterpret_cast< QString*>(_v) = _t->formatedMessages(); break;
        case 21: *reinterpret_cast< QString*>(_v) = _t->formatedMessage(); break;
        case 22: *reinterpret_cast< QString*>(_v) = _t->latestError(); break;
        case 23: *reinterpret_cast< int*>(_v) = _t->joystickMode(); break;
        case 24: *reinterpret_cast< QStringList*>(_v) = _t->joystickModes(); break;
        case 25: *reinterpret_cast< bool*>(_v) = _t->joystickEnabled(); break;
        case 26: *reinterpret_cast< bool*>(_v) = _t->active(); break;
        case 27: *reinterpret_cast< int*>(_v) = _t->flowImageIndex(); break;
        case 28: *reinterpret_cast< int*>(_v) = _t->rcRSSI(); break;
        case 29: *reinterpret_cast< bool*>(_v) = _t->px4Firmware(); break;
        case 30: *reinterpret_cast< bool*>(_v) = _t->apmFirmware(); break;
        case 31: *reinterpret_cast< bool*>(_v) = _t->soloFirmware(); break;
        case 32: *reinterpret_cast< bool*>(_v) = _t->genericFirmware(); break;
        case 33: *reinterpret_cast< bool*>(_v) = _t->connectionLost(); break;
        case 34: *reinterpret_cast< bool*>(_v) = _t->connectionLostEnabled(); break;
        case 35: *reinterpret_cast< uint*>(_v) = _t->messagesReceived(); break;
        case 36: *reinterpret_cast< uint*>(_v) = _t->messagesSent(); break;
        case 37: *reinterpret_cast< uint*>(_v) = _t->messagesLost(); break;
        case 38: *reinterpret_cast< bool*>(_v) = _t->fixedWing(); break;
        case 39: *reinterpret_cast< bool*>(_v) = _t->multiRotor(); break;
        case 40: *reinterpret_cast< bool*>(_v) = _t->vtol(); break;
        case 41: *reinterpret_cast< bool*>(_v) = _t->rover(); break;
        case 42: *reinterpret_cast< bool*>(_v) = _t->sub(); break;
        case 43: *reinterpret_cast< bool*>(_v) = _t->supportsThrottleModeCenterZero(); break;
        case 44: *reinterpret_cast< bool*>(_v) = _t->supportsNegativeThrust(); break;
        case 45: *reinterpret_cast< bool*>(_v) = _t->supportsJSButton(); break;
        case 46: *reinterpret_cast< bool*>(_v) = _t->supportsRadio(); break;
        case 47: *reinterpret_cast< bool*>(_v) = _t->supportsMotorInterference(); break;
        case 48: *reinterpret_cast< bool*>(_v) = _t->_autoDisconnect; break;
        case 49: *reinterpret_cast< QString*>(_v) = _t->prearmError(); break;
        case 50: *reinterpret_cast< int*>(_v) = _t->motorCount(); break;
        case 51: *reinterpret_cast< bool*>(_v) = _t->coaxialMotors(); break;
        case 52: *reinterpret_cast< bool*>(_v) = _t->xConfigMotors(); break;
        case 53: *reinterpret_cast< bool*>(_v) = _t->isOfflineEditingVehicle(); break;
        case 54: *reinterpret_cast< QString*>(_v) = _t->brandImageIndoor(); break;
        case 55: *reinterpret_cast< QString*>(_v) = _t->brandImageOutdoor(); break;
        case 56: *reinterpret_cast< QStringList*>(_v) = _t->unhealthySensors(); break;
        case 57: *reinterpret_cast< int*>(_v) = _t->sensorsPresentBits(); break;
        case 58: *reinterpret_cast< int*>(_v) = _t->sensorsEnabledBits(); break;
        case 59: *reinterpret_cast< int*>(_v) = _t->sensorsHealthBits(); break;
        case 60: *reinterpret_cast< int*>(_v) = _t->sensorsUnhealthyBits(); break;
        case 61: *reinterpret_cast< QString*>(_v) = _t->missionFlightMode(); break;
        case 62: *reinterpret_cast< QString*>(_v) = _t->pauseFlightMode(); break;
        case 63: *reinterpret_cast< QString*>(_v) = _t->rtlFlightMode(); break;
        case 64: *reinterpret_cast< QString*>(_v) = _t->landFlightMode(); break;
        case 65: *reinterpret_cast< QString*>(_v) = _t->takeControlFlightMode(); break;
        case 66: *reinterpret_cast< QString*>(_v) = _t->firmwareTypeString(); break;
        case 67: *reinterpret_cast< QString*>(_v) = _t->vehicleTypeString(); break;
        case 68: *reinterpret_cast< QString*>(_v) = _t->vehicleImageOpaque(); break;
        case 69: *reinterpret_cast< QString*>(_v) = _t->vehicleImageOutline(); break;
        case 70: *reinterpret_cast< QString*>(_v) = _t->vehicleImageCompass(); break;
        case 71: *reinterpret_cast< int*>(_v) = _t->telemetryRRSSI(); break;
        case 72: *reinterpret_cast< int*>(_v) = _t->telemetryLRSSI(); break;
        case 73: *reinterpret_cast< uint*>(_v) = _t->telemetryRXErrors(); break;
        case 74: *reinterpret_cast< uint*>(_v) = _t->telemetryFixed(); break;
        case 75: *reinterpret_cast< uint*>(_v) = _t->telemetryTXBuffer(); break;
        case 76: *reinterpret_cast< int*>(_v) = _t->telemetryLNoise(); break;
        case 77: *reinterpret_cast< int*>(_v) = _t->telemetryRNoise(); break;
        case 78: *reinterpret_cast< QVariantList*>(_v) = _t->toolBarIndicators(); break;
        case 79: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->adsbVehicles(); break;
        case 80: *reinterpret_cast< bool*>(_v) = _t->initialPlanRequestComplete(); break;
        case 81: *reinterpret_cast< QVariantList*>(_v) = _t->staticCameraList(); break;
        case 82: *reinterpret_cast< QGCCameraManager**>(_v) = _t->dynamicCameras(); break;
        case 83: *reinterpret_cast< QString*>(_v) = _t->hobbsMeter(); break;
        case 84: *reinterpret_cast< bool*>(_v) = _t->vtolInFwdFlight(); break;
        case 85: *reinterpret_cast< bool*>(_v) = _t->highLatencyLink(); break;
        case 86: *reinterpret_cast< bool*>(_v) = _t->supportsTerrainFrame(); break;
        case 87: *reinterpret_cast< QString*>(_v) = _t->priorityLinkName(); break;
        case 88: *reinterpret_cast< QVariantList*>(_v) = _t->links(); break;
        case 89: *reinterpret_cast< LinkInterface**>(_v) = _t->priorityLink(); break;
        case 90: *reinterpret_cast< bool*>(_v) = _t->flying(); break;
        case 91: *reinterpret_cast< bool*>(_v) = _t->landing(); break;
        case 92: *reinterpret_cast< bool*>(_v) = _t->guidedMode(); break;
        case 93: *reinterpret_cast< bool*>(_v) = _t->guidedModeSupported(); break;
        case 94: *reinterpret_cast< bool*>(_v) = _t->pauseVehicleSupported(); break;
        case 95: *reinterpret_cast< bool*>(_v) = _t->orbitModeSupported(); break;
        case 96: *reinterpret_cast< bool*>(_v) = _t->takeoffVehicleSupported(); break;
        case 97: *reinterpret_cast< ParameterManager**>(_v) = _t->parameterManager(); break;
        case 98: *reinterpret_cast< Fact**>(_v) = _t->roll(); break;
        case 99: *reinterpret_cast< Fact**>(_v) = _t->pitch(); break;
        case 100: *reinterpret_cast< Fact**>(_v) = _t->heading(); break;
        case 101: *reinterpret_cast< Fact**>(_v) = _t->rollRate(); break;
        case 102: *reinterpret_cast< Fact**>(_v) = _t->pitchRate(); break;
        case 103: *reinterpret_cast< Fact**>(_v) = _t->yawRate(); break;
        case 104: *reinterpret_cast< Fact**>(_v) = _t->groundSpeed(); break;
        case 105: *reinterpret_cast< Fact**>(_v) = _t->airSpeed(); break;
        case 106: *reinterpret_cast< Fact**>(_v) = _t->climbRate(); break;
        case 107: *reinterpret_cast< Fact**>(_v) = _t->altitudeRelative(); break;
        case 108: *reinterpret_cast< Fact**>(_v) = _t->altitudeAMSL(); break;
        case 109: *reinterpret_cast< Fact**>(_v) = _t->flightDistance(); break;
        case 110: *reinterpret_cast< Fact**>(_v) = _t->distanceToHome(); break;
        case 111: *reinterpret_cast< Fact**>(_v) = _t->hobbs(); break;
        case 112: *reinterpret_cast< FactGroup**>(_v) = _t->gpsFactGroup(); break;
        case 113: *reinterpret_cast< FactGroup**>(_v) = _t->battery1FactGroup(); break;
        case 114: *reinterpret_cast< FactGroup**>(_v) = _t->battery2FactGroup(); break;
        case 115: *reinterpret_cast< FactGroup**>(_v) = _t->windFactGroup(); break;
        case 116: *reinterpret_cast< FactGroup**>(_v) = _t->vibrationFactGroup(); break;
        case 117: *reinterpret_cast< FactGroup**>(_v) = _t->temperatureFactGroup(); break;
        case 118: *reinterpret_cast< FactGroup**>(_v) = _t->clockFactGroup(); break;
        case 119: *reinterpret_cast< FactGroup**>(_v) = _t->setpointFactGroup(); break;
        case 120: *reinterpret_cast< int*>(_v) = _t->firmwareMajorVersion(); break;
        case 121: *reinterpret_cast< int*>(_v) = _t->firmwareMinorVersion(); break;
        case 122: *reinterpret_cast< int*>(_v) = _t->firmwarePatchVersion(); break;
        case 123: *reinterpret_cast< int*>(_v) = _t->firmwareVersionType(); break;
        case 124: *reinterpret_cast< QString*>(_v) = _t->firmwareVersionTypeString(); break;
        case 125: *reinterpret_cast< int*>(_v) = _t->firmwareCustomMajorVersion(); break;
        case 126: *reinterpret_cast< int*>(_v) = _t->firmwareCustomMinorVersion(); break;
        case 127: *reinterpret_cast< int*>(_v) = _t->firmwareCustomPatchVersion(); break;
        case 128: *reinterpret_cast< QString*>(_v) = _t->gitHash(); break;
        case 129: *reinterpret_cast< quint64*>(_v) = _t->vehicleUID(); break;
        case 130: *reinterpret_cast< QString*>(_v) = _t->vehicleUIDStr(); break;
        case 131: *reinterpret_cast< int*>(_v) = _t->manualControlReservedButtonCount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Vehicle *_t = static_cast<Vehicle *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 4: _t->setArmed(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setFlightMode(*reinterpret_cast< QString*>(_v)); break;
        case 9: _t->setHilMode(*reinterpret_cast< bool*>(_v)); break;
        case 23: _t->setJoystickMode(*reinterpret_cast< int*>(_v)); break;
        case 25: _t->setJoystickEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 26: _t->setActive(*reinterpret_cast< bool*>(_v)); break;
        case 31: _t->setSoloFirmware(*reinterpret_cast< bool*>(_v)); break;
        case 34: _t->setConnectionLostEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 48:
            if (_t->_autoDisconnect != *reinterpret_cast< bool*>(_v)) {
                _t->_autoDisconnect = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->autoDisconnectChanged(_t->_autoDisconnect);
            }
            break;
        case 49: _t->setPrearmError(*reinterpret_cast< QString*>(_v)); break;
        case 84: _t->setVtolInFwdFlight(*reinterpret_cast< bool*>(_v)); break;
        case 87: _t->setPriorityLinkByName(*reinterpret_cast< QString*>(_v)); break;
        case 92: _t->setGuidedMode(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Vehicle::staticMetaObject = {
    { &FactGroup::staticMetaObject, qt_meta_stringdata_Vehicle.data,
      qt_meta_data_Vehicle,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Vehicle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Vehicle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Vehicle.stringdata0))
        return static_cast<void*>(this);
    return FactGroup::qt_metacast(_clname);
}

int Vehicle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 138)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 138;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 138)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 138;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 132;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 132;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 132;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 132;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 132;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 132;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Vehicle::allLinksInactive(Vehicle * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Vehicle::coordinateChanged(QGeoCoordinate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Vehicle::joystickModeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Vehicle::joystickEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Vehicle::activeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Vehicle::mavlinkMessageReceived(const mavlink_message_t & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Vehicle::homePositionChanged(const QGeoCoordinate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Vehicle::armedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Vehicle::flightModeChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Vehicle::hilModeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Vehicle::hilActuatorControlsChanged(quint64 _t1, quint64 _t2, float _t3, float _t4, float _t5, float _t6, float _t7, float _t8, float _t9, float _t10, float _t11, float _t12, float _t13, float _t14, float _t15, float _t16, float _t17, float _t18, quint8 _t19)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)), const_cast<void*>(reinterpret_cast<const void*>(&_t11)), const_cast<void*>(reinterpret_cast<const void*>(&_t12)), const_cast<void*>(reinterpret_cast<const void*>(&_t13)), const_cast<void*>(reinterpret_cast<const void*>(&_t14)), const_cast<void*>(reinterpret_cast<const void*>(&_t15)), const_cast<void*>(reinterpret_cast<const void*>(&_t16)), const_cast<void*>(reinterpret_cast<const void*>(&_t17)), const_cast<void*>(reinterpret_cast<const void*>(&_t18)), const_cast<void*>(reinterpret_cast<const void*>(&_t19)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Vehicle::connectionLostChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Vehicle::connectionLostEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Vehicle::autoDisconnectChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Vehicle::flyingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Vehicle::landingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void Vehicle::guidedModeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void Vehicle::vtolInFwdFlightChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void Vehicle::prearmErrorChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void Vehicle::soloFirmwareChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void Vehicle::unhealthySensorsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void Vehicle::defaultCruiseSpeedChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void Vehicle::defaultHoverSpeedChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void Vehicle::firmwareTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void Vehicle::vehicleTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void Vehicle::dynamicCamerasChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void Vehicle::hobbsMeterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void Vehicle::capabilitiesKnownChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void Vehicle::initialPlanRequestCompleteChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void Vehicle::capabilityBitsChanged(uint64_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void Vehicle::toolBarIndicatorsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 30, nullptr);
}

// SIGNAL 31
void Vehicle::highLatencyLinkChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void Vehicle::priorityLinkNameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void Vehicle::linksChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 33, nullptr);
}

// SIGNAL 34
void Vehicle::linksPropertiesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 34, nullptr);
}

// SIGNAL 35
void Vehicle::messagesReceivedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 35, nullptr);
}

// SIGNAL 36
void Vehicle::messagesSentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 36, nullptr);
}

// SIGNAL 37
void Vehicle::messagesLostChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 37, nullptr);
}

// SIGNAL 38
void Vehicle::_sendMessageOnLinkOnThread(LinkInterface * _t1, mavlink_message_t _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void Vehicle::messageTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 39, nullptr);
}

// SIGNAL 40
void Vehicle::newMessageCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 40, nullptr);
}

// SIGNAL 41
void Vehicle::messageCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 41, nullptr);
}

// SIGNAL 42
void Vehicle::formatedMessagesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 42, nullptr);
}

// SIGNAL 43
void Vehicle::formatedMessageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 43, nullptr);
}

// SIGNAL 44
void Vehicle::latestErrorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 44, nullptr);
}

// SIGNAL 45
void Vehicle::longitudeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 45, nullptr);
}

// SIGNAL 46
void Vehicle::currentConfigChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 46, nullptr);
}

// SIGNAL 47
void Vehicle::flowImageIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 47, nullptr);
}

// SIGNAL 48
void Vehicle::rcRSSIChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void Vehicle::telemetryRRSSIChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void Vehicle::telemetryLRSSIChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void Vehicle::telemetryRXErrorsChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void Vehicle::telemetryFixedChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void Vehicle::telemetryTXBufferChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void Vehicle::telemetryLNoiseChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void Vehicle::telemetryRNoiseChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}

// SIGNAL 56
void Vehicle::autoDisarmChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 56, nullptr);
}

// SIGNAL 57
void Vehicle::flightModesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 57, nullptr);
}

// SIGNAL 58
void Vehicle::sensorsPresentBitsChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 58, _a);
}

// SIGNAL 59
void Vehicle::sensorsEnabledBitsChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 59, _a);
}

// SIGNAL 60
void Vehicle::sensorsHealthBitsChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 60, _a);
}

// SIGNAL 61
void Vehicle::sensorsUnhealthyBitsChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 61, _a);
}

// SIGNAL 62
void Vehicle::firmwareVersionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 62, nullptr);
}

// SIGNAL 63
void Vehicle::firmwareCustomVersionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 63, nullptr);
}

// SIGNAL 64
void Vehicle::gitHashChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 64, _a);
}

// SIGNAL 65
void Vehicle::vehicleUIDChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 65, nullptr);
}

// SIGNAL 66
void Vehicle::rcChannelsChanged(int _t1, int _t2[cMaxRcChannels])
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 66, _a);
}

// SIGNAL 67
void Vehicle::remoteControlRSSIChanged(uint8_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 67, _a);
}

// SIGNAL 68
void Vehicle::mavlinkRawImu(mavlink_message_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 68, _a);
}

// SIGNAL 69
void Vehicle::mavlinkScaledImu1(mavlink_message_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 69, _a);
}

// SIGNAL 70
void Vehicle::mavlinkScaledImu2(mavlink_message_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 70, _a);
}

// SIGNAL 71
void Vehicle::mavlinkScaledImu3(mavlink_message_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 71, _a);
}

// SIGNAL 72
void Vehicle::mavlinkLogData(Vehicle * _t1, uint8_t _t2, uint8_t _t3, uint16_t _t4, uint8_t _t5, QByteArray _t6, bool _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 72, _a);
}

// SIGNAL 73
void Vehicle::mavCommandResult(int _t1, int _t2, int _t3, int _t4, bool _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 73, _a);
}

// SIGNAL 74
void Vehicle::mavlinkSerialControl(uint8_t _t1, uint8_t _t2, uint16_t _t3, uint32_t _t4, QByteArray _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 74, _a);
}

// SIGNAL 75
void Vehicle::requestProtocolVersion(unsigned  _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 75, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
