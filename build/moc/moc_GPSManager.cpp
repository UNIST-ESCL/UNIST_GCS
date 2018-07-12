/****************************************************************************
** Meta object code from reading C++ file 'GPSManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/GPS/GPSManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GPSManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GPSManager_t {
    QByteArrayData data[16];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GPSManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GPSManager_t qt_meta_stringdata_GPSManager = {
    {
QT_MOC_LITERAL(0, 0, 10), // "GPSManager"
QT_MOC_LITERAL(1, 11, 9), // "onConnect"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 12), // "onDisconnect"
QT_MOC_LITERAL(4, 35, 14), // "surveyInStatus"
QT_MOC_LITERAL(5, 50, 8), // "duration"
QT_MOC_LITERAL(6, 59, 10), // "accuracyMM"
QT_MOC_LITERAL(7, 70, 5), // "valid"
QT_MOC_LITERAL(8, 76, 6), // "active"
QT_MOC_LITERAL(9, 83, 15), // "satelliteUpdate"
QT_MOC_LITERAL(10, 99, 7), // "numSats"
QT_MOC_LITERAL(11, 107, 17), // "GPSPositionUpdate"
QT_MOC_LITERAL(12, 125, 18), // "GPSPositionMessage"
QT_MOC_LITERAL(13, 144, 3), // "msg"
QT_MOC_LITERAL(14, 148, 18), // "GPSSatelliteUpdate"
QT_MOC_LITERAL(15, 167, 19) // "GPSSatelliteMessage"

    },
    "GPSManager\0onConnect\0\0onDisconnect\0"
    "surveyInStatus\0duration\0accuracyMM\0"
    "valid\0active\0satelliteUpdate\0numSats\0"
    "GPSPositionUpdate\0GPSPositionMessage\0"
    "msg\0GPSSatelliteUpdate\0GPSSatelliteMessage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GPSManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    4,   46,    2, 0x06 /* Public */,
       9,    1,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   58,    2, 0x08 /* Private */,
      14,    1,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Bool, QMetaType::Bool,    5,    6,    7,    8,
    QMetaType::Void, QMetaType::Int,   10,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15,   13,

       0        // eod
};

void GPSManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GPSManager *_t = static_cast<GPSManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onConnect(); break;
        case 1: _t->onDisconnect(); break;
        case 2: _t->surveyInStatus((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 3: _t->satelliteUpdate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->GPSPositionUpdate((*reinterpret_cast< GPSPositionMessage(*)>(_a[1]))); break;
        case 5: _t->GPSSatelliteUpdate((*reinterpret_cast< GPSSatelliteMessage(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< GPSPositionMessage >(); break;
            }
            break;
        case 5:
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
            typedef void (GPSManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSManager::onConnect)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (GPSManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSManager::onDisconnect)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (GPSManager::*_t)(float , float , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSManager::surveyInStatus)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (GPSManager::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPSManager::satelliteUpdate)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject GPSManager::staticMetaObject = {
    { &QGCTool::staticMetaObject, qt_meta_stringdata_GPSManager.data,
      qt_meta_data_GPSManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GPSManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GPSManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GPSManager.stringdata0))
        return static_cast<void*>(this);
    return QGCTool::qt_metacast(_clname);
}

int GPSManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void GPSManager::onConnect()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void GPSManager::onDisconnect()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void GPSManager::surveyInStatus(float _t1, float _t2, bool _t3, bool _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GPSManager::satelliteUpdate(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
