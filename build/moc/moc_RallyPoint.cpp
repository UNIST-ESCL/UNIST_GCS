/****************************************************************************
** Meta object code from reading C++ file 'RallyPoint.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/RallyPoint.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RallyPoint.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RallyPoint_t {
    QByteArrayData data[9];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RallyPoint_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RallyPoint_t qt_meta_stringdata_RallyPoint = {
    {
QT_MOC_LITERAL(0, 0, 10), // "RallyPoint"
QT_MOC_LITERAL(1, 11, 17), // "coordinateChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(4, 45, 10), // "coordinate"
QT_MOC_LITERAL(5, 56, 12), // "dirtyChanged"
QT_MOC_LITERAL(6, 69, 5), // "dirty"
QT_MOC_LITERAL(7, 75, 22), // "_sendCoordinateChanged"
QT_MOC_LITERAL(8, 98, 14) // "textFieldFacts"

    },
    "RallyPoint\0coordinateChanged\0\0"
    "QGeoCoordinate\0coordinate\0dirtyChanged\0"
    "dirty\0_sendCoordinateChanged\0"
    "textFieldFacts"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RallyPoint[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   36, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       5,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x0049510b,
       6, QMetaType::Bool, 0x00495103,
       8, QMetaType::QVariantList, 0x00095401,

 // properties: notify_signal_id
       0,
       1,
       0,

       0        // eod
};

void RallyPoint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RallyPoint *_t = static_cast<RallyPoint *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->coordinateChanged((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        case 1: _t->dirtyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->_sendCoordinateChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
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
            typedef void (RallyPoint::*_t)(const QGeoCoordinate & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RallyPoint::coordinateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (RallyPoint::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RallyPoint::dirtyChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        RallyPoint *_t = static_cast<RallyPoint *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->coordinate(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->dirty(); break;
        case 2: *reinterpret_cast< QVariantList*>(_v) = _t->_textFieldFacts; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        RallyPoint *_t = static_cast<RallyPoint *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCoordinate(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        case 1: _t->setDirty(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject RallyPoint::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RallyPoint.data,
      qt_meta_data_RallyPoint,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RallyPoint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RallyPoint::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RallyPoint.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RallyPoint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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

// SIGNAL 0
void RallyPoint::coordinateChanged(const QGeoCoordinate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RallyPoint::dirtyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
