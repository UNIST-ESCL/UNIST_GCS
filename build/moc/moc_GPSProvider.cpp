/****************************************************************************
** Meta object code from reading C++ file 'GPSProvider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/GPS/GPSProvider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GPSProvider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GPSProvider_t {
    QByteArrayData data[13];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GPSProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GPSProvider_t qt_meta_stringdata_GPSProvider = {
    {
QT_MOC_LITERAL(0, 0, 11), // "GPSProvider"
QT_MOC_LITERAL(1, 12, 14), // "positionUpdate"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 18), // "GPSPositionMessage"
QT_MOC_LITERAL(4, 47, 7), // "message"
QT_MOC_LITERAL(5, 55, 19), // "satelliteInfoUpdate"
QT_MOC_LITERAL(6, 75, 19), // "GPSSatelliteMessage"
QT_MOC_LITERAL(7, 95, 14), // "RTCMDataUpdate"
QT_MOC_LITERAL(8, 110, 14), // "surveyInStatus"
QT_MOC_LITERAL(9, 125, 8), // "duration"
QT_MOC_LITERAL(10, 134, 10), // "accuracyMM"
QT_MOC_LITERAL(11, 145, 5), // "valid"
QT_MOC_LITERAL(12, 151, 6) // "active"

    },
    "GPSProvider\0positionUpdate\0\0"
    "GPSPositionMessage\0message\0"
    "satelliteInfoUpdate\0GPSSatelliteMessage\0"
    "RTCMDataUpdate\0surveyInStatus\0duration\0"
    "accuracyMM\0valid\0active"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GPSProvider[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,
       7,    1,   40,    2, 0x06 /* Public */,
       8,    4,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void, QMetaType::QByteArray,    4,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Bool, QMetaType::Bool,    9,   10,   11,   12,

       0        // eod
};

void GPSProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GPSProvider *_t = static_cast<GPSProvider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->positionUpdate((*reinterpret_cast< GPSPositionMessage(*)>(_a[1]))); break;
        case 1: _t->satelliteInfoUpdate((*reinterpret_cast< GPSSatelliteMessage(*)>(_a[1]))); break;
        case 2: _t->RTCMDataUpdate((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 3: _t->surveyInStatus((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< GPSPositionMessage >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< GPSSatelliteMessage >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (GPSProvider::*_t)(GPSPositionMessage );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSProvider::positionUpdate)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (GPSProvider::*_t)(GPSSatelliteMessage );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSProvider::satelliteInfoUpdate)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (GPSProvider::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSProvider::RTCMDataUpdate)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (GPSProvider::*_t)(float , float , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSProvider::surveyInStatus)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject GPSProvider::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_GPSProvider.data,
      qt_meta_data_GPSProvider,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GPSProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GPSProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GPSProvider.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int GPSProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void GPSProvider::positionUpdate(GPSPositionMessage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GPSProvider::satelliteInfoUpdate(GPSSatelliteMessage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GPSProvider::RTCMDataUpdate(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GPSProvider::surveyInStatus(float _t1, float _t2, bool _t3, bool _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
