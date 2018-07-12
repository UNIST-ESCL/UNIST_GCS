/****************************************************************************
** Meta object code from reading C++ file 'ADSBVehicle.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Vehicle/ADSBVehicle.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ADSBVehicle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ADSBVehicle_t {
    QByteArrayData data[12];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ADSBVehicle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ADSBVehicle_t qt_meta_stringdata_ADSBVehicle = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ADSBVehicle"
QT_MOC_LITERAL(1, 12, 17), // "coordinateChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(4, 46, 10), // "coordinate"
QT_MOC_LITERAL(5, 57, 15), // "callsignChanged"
QT_MOC_LITERAL(6, 73, 8), // "callsign"
QT_MOC_LITERAL(7, 82, 15), // "altitudeChanged"
QT_MOC_LITERAL(8, 98, 8), // "altitude"
QT_MOC_LITERAL(9, 107, 14), // "headingChanged"
QT_MOC_LITERAL(10, 122, 7), // "heading"
QT_MOC_LITERAL(11, 130, 11) // "icaoAddress"

    },
    "ADSBVehicle\0coordinateChanged\0\0"
    "QGeoCoordinate\0coordinate\0callsignChanged\0"
    "callsign\0altitudeChanged\0altitude\0"
    "headingChanged\0heading\0icaoAddress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ADSBVehicle[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       5,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,
       7,    1,   40,    2, 0x06 /* Public */,
       9,    1,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, QMetaType::Double,   10,

 // properties: name, type, flags
      11, QMetaType::Int, 0x00095401,
       6, QMetaType::QString, 0x00495001,
       4, 0x80000000 | 3, 0x00495009,
       8, QMetaType::Double, 0x00495001,
      10, QMetaType::Double, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       0,
       2,
       3,

       0        // eod
};

void ADSBVehicle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ADSBVehicle *_t = static_cast<ADSBVehicle *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->coordinateChanged((*reinterpret_cast< QGeoCoordinate(*)>(_a[1]))); break;
        case 1: _t->callsignChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->altitudeChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->headingChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
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
            typedef void (ADSBVehicle::*_t)(QGeoCoordinate );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ADSBVehicle::coordinateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ADSBVehicle::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ADSBVehicle::callsignChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ADSBVehicle::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ADSBVehicle::altitudeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ADSBVehicle::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ADSBVehicle::headingChanged)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ADSBVehicle *_t = static_cast<ADSBVehicle *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->icaoAddress(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->callsign(); break;
        case 2: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->coordinate(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->altitude(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->heading(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject ADSBVehicle::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ADSBVehicle.data,
      qt_meta_data_ADSBVehicle,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ADSBVehicle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ADSBVehicle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ADSBVehicle.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ADSBVehicle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ADSBVehicle::coordinateChanged(QGeoCoordinate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ADSBVehicle::callsignChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ADSBVehicle::altitudeChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ADSBVehicle::headingChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
