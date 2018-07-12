/****************************************************************************
** Meta object code from reading C++ file 'GPSRTKFactGroup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Vehicle/GPSRTKFactGroup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GPSRTKFactGroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GPSRTKFactGroup_t {
    QByteArrayData data[8];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GPSRTKFactGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GPSRTKFactGroup_t qt_meta_stringdata_GPSRTKFactGroup = {
    {
QT_MOC_LITERAL(0, 0, 15), // "GPSRTKFactGroup"
QT_MOC_LITERAL(1, 16, 9), // "connected"
QT_MOC_LITERAL(2, 26, 5), // "Fact*"
QT_MOC_LITERAL(3, 32, 15), // "currentDuration"
QT_MOC_LITERAL(4, 48, 15), // "currentAccuracy"
QT_MOC_LITERAL(5, 64, 5), // "valid"
QT_MOC_LITERAL(6, 70, 6), // "active"
QT_MOC_LITERAL(7, 77, 13) // "numSatellites"

    },
    "GPSRTKFactGroup\0connected\0Fact*\0"
    "currentDuration\0currentAccuracy\0valid\0"
    "active\0numSatellites"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GPSRTKFactGroup[] = {

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

void GPSRTKFactGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
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
        GPSRTKFactGroup *_t = static_cast<GPSRTKFactGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->connected(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->currentDuration(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->currentAccuracy(); break;
        case 3: *reinterpret_cast< Fact**>(_v) = _t->valid(); break;
        case 4: *reinterpret_cast< Fact**>(_v) = _t->active(); break;
        case 5: *reinterpret_cast< Fact**>(_v) = _t->numSatellites(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

const QMetaObject GPSRTKFactGroup::staticMetaObject = {
    { &FactGroup::staticMetaObject, qt_meta_stringdata_GPSRTKFactGroup.data,
      qt_meta_data_GPSRTKFactGroup,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GPSRTKFactGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GPSRTKFactGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GPSRTKFactGroup.stringdata0))
        return static_cast<void*>(this);
    return FactGroup::qt_metacast(_clname);
}

int GPSRTKFactGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
