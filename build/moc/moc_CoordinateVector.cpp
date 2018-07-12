/****************************************************************************
** Meta object code from reading C++ file 'CoordinateVector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/QmlControls/CoordinateVector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CoordinateVector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CoordinateVector_t {
    QByteArrayData data[10];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CoordinateVector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CoordinateVector_t qt_meta_stringdata_CoordinateVector = {
    {
QT_MOC_LITERAL(0, 0, 16), // "CoordinateVector"
QT_MOC_LITERAL(1, 17, 18), // "coordinate1Changed"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(4, 52, 10), // "coordinate"
QT_MOC_LITERAL(5, 63, 18), // "coordinate2Changed"
QT_MOC_LITERAL(6, 82, 14), // "setCoordinate1"
QT_MOC_LITERAL(7, 97, 14), // "setCoordinate2"
QT_MOC_LITERAL(8, 112, 11), // "coordinate1"
QT_MOC_LITERAL(9, 124, 11) // "coordinate2"

    },
    "CoordinateVector\0coordinate1Changed\0"
    "\0QGeoCoordinate\0coordinate\0"
    "coordinate2Changed\0setCoordinate1\0"
    "setCoordinate2\0coordinate1\0coordinate2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CoordinateVector[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   40,    2, 0x0a /* Public */,
       7,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // properties: name, type, flags
       8, 0x80000000 | 3, 0x0049500b,
       9, 0x80000000 | 3, 0x0049500b,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void CoordinateVector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CoordinateVector *_t = static_cast<CoordinateVector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->coordinate1Changed((*reinterpret_cast< QGeoCoordinate(*)>(_a[1]))); break;
        case 1: _t->coordinate2Changed((*reinterpret_cast< QGeoCoordinate(*)>(_a[1]))); break;
        case 2: _t->setCoordinate1((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        case 3: _t->setCoordinate2((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
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
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 3:
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
            typedef void (CoordinateVector::*_t)(QGeoCoordinate );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CoordinateVector::coordinate1Changed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CoordinateVector::*_t)(QGeoCoordinate );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CoordinateVector::coordinate2Changed)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CoordinateVector *_t = static_cast<CoordinateVector *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->_coordinate1; break;
        case 1: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->_coordinate2; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CoordinateVector *_t = static_cast<CoordinateVector *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_coordinate1 != *reinterpret_cast< QGeoCoordinate*>(_v)) {
                _t->_coordinate1 = *reinterpret_cast< QGeoCoordinate*>(_v);
                Q_EMIT _t->coordinate1Changed(_t->_coordinate1);
            }
            break;
        case 1:
            if (_t->_coordinate2 != *reinterpret_cast< QGeoCoordinate*>(_v)) {
                _t->_coordinate2 = *reinterpret_cast< QGeoCoordinate*>(_v);
                Q_EMIT _t->coordinate2Changed(_t->_coordinate2);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject CoordinateVector::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CoordinateVector.data,
      qt_meta_data_CoordinateVector,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CoordinateVector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CoordinateVector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CoordinateVector.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CoordinateVector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void CoordinateVector::coordinate1Changed(QGeoCoordinate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CoordinateVector::coordinate2Changed(QGeoCoordinate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
