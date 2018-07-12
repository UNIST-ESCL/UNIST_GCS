/****************************************************************************
** Meta object code from reading C++ file 'SpeedSection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/SpeedSection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SpeedSection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SpeedSection_t {
    QByteArrayData data[9];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpeedSection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpeedSection_t qt_meta_stringdata_SpeedSection = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SpeedSection"
QT_MOC_LITERAL(1, 13, 25), // "specifyFlightSpeedChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 18), // "specifyFlightSpeed"
QT_MOC_LITERAL(4, 59, 27), // "specifiedFlightSpeedChanged"
QT_MOC_LITERAL(5, 87, 11), // "flightSpeed"
QT_MOC_LITERAL(6, 99, 27), // "_updateSpecifiedFlightSpeed"
QT_MOC_LITERAL(7, 127, 19), // "_flightSpeedChanged"
QT_MOC_LITERAL(8, 147, 5) // "Fact*"

    },
    "SpeedSection\0specifyFlightSpeedChanged\0"
    "\0specifyFlightSpeed\0specifiedFlightSpeedChanged\0"
    "flightSpeed\0_updateSpecifiedFlightSpeed\0"
    "_flightSpeedChanged\0Fact*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpeedSection[] = {

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
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   40,    2, 0x08 /* Private */,
       7,    0,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Double,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00495103,
       5, 0x80000000 | 8, 0x00095409,

 // properties: notify_signal_id
       0,
       0,

       0        // eod
};

void SpeedSection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SpeedSection *_t = static_cast<SpeedSection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->specifyFlightSpeedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->specifiedFlightSpeedChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->_updateSpecifiedFlightSpeed(); break;
        case 3: _t->_flightSpeedChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SpeedSection::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SpeedSection::specifyFlightSpeedChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SpeedSection::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SpeedSection::specifiedFlightSpeedChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        SpeedSection *_t = static_cast<SpeedSection *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->specifyFlightSpeed(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->flightSpeed(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        SpeedSection *_t = static_cast<SpeedSection *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSpecifyFlightSpeed(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject SpeedSection::staticMetaObject = {
    { &Section::staticMetaObject, qt_meta_stringdata_SpeedSection.data,
      qt_meta_data_SpeedSection,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SpeedSection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpeedSection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SpeedSection.stringdata0))
        return static_cast<void*>(this);
    return Section::qt_metacast(_clname);
}

int SpeedSection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Section::qt_metacall(_c, _id, _a);
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
void SpeedSection::specifyFlightSpeedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SpeedSection::specifiedFlightSpeedChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
