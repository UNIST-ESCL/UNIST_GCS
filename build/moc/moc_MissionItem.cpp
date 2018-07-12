/****************************************************************************
** Meta object code from reading C++ file 'MissionItem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/MissionItem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MissionItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MissionItem_t {
    QByteArrayData data[16];
    char stringdata0[252];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MissionItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MissionItem_t qt_meta_stringdata_MissionItem = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MissionItem"
QT_MOC_LITERAL(1, 12, 20), // "isCurrentItemChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 13), // "isCurrentItem"
QT_MOC_LITERAL(4, 48, 21), // "sequenceNumberChanged"
QT_MOC_LITERAL(5, 70, 14), // "sequenceNumber"
QT_MOC_LITERAL(6, 85, 27), // "specifiedFlightSpeedChanged"
QT_MOC_LITERAL(7, 113, 11), // "flightSpeed"
QT_MOC_LITERAL(8, 125, 25), // "specifiedGimbalYawChanged"
QT_MOC_LITERAL(9, 151, 9), // "gimbalYaw"
QT_MOC_LITERAL(10, 161, 27), // "specifiedGimbalPitchChanged"
QT_MOC_LITERAL(11, 189, 11), // "gimbalPitch"
QT_MOC_LITERAL(12, 201, 14), // "_param1Changed"
QT_MOC_LITERAL(13, 216, 5), // "value"
QT_MOC_LITERAL(14, 222, 14), // "_param2Changed"
QT_MOC_LITERAL(15, 237, 14) // "_param3Changed"

    },
    "MissionItem\0isCurrentItemChanged\0\0"
    "isCurrentItem\0sequenceNumberChanged\0"
    "sequenceNumber\0specifiedFlightSpeedChanged\0"
    "flightSpeed\0specifiedGimbalYawChanged\0"
    "gimbalYaw\0specifiedGimbalPitchChanged\0"
    "gimbalPitch\0_param1Changed\0value\0"
    "_param2Changed\0_param3Changed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MissionItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,
       6,    1,   60,    2, 0x06 /* Public */,
       8,    1,   63,    2, 0x06 /* Public */,
      10,    1,   66,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,   69,    2, 0x08 /* Private */,
      14,    1,   72,    2, 0x08 /* Private */,
      15,    1,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Double,   11,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant,   13,
    QMetaType::Void, QMetaType::QVariant,   13,
    QMetaType::Void, QMetaType::QVariant,   13,

       0        // eod
};

void MissionItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MissionItem *_t = static_cast<MissionItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->isCurrentItemChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->sequenceNumberChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->specifiedFlightSpeedChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->specifiedGimbalYawChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->specifiedGimbalPitchChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->_param1Changed((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 6: _t->_param2Changed((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 7: _t->_param3Changed((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MissionItem::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionItem::isCurrentItemChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MissionItem::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionItem::sequenceNumberChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MissionItem::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionItem::specifiedFlightSpeedChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MissionItem::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionItem::specifiedGimbalYawChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MissionItem::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionItem::specifiedGimbalPitchChanged)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject MissionItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MissionItem.data,
      qt_meta_data_MissionItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MissionItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MissionItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MissionItem.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MissionItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void MissionItem::isCurrentItemChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MissionItem::sequenceNumberChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MissionItem::specifiedFlightSpeedChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MissionItem::specifiedGimbalYawChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MissionItem::specifiedGimbalPitchChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
