/****************************************************************************
** Meta object code from reading C++ file 'APMCompassCal.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/AutoPilotPlugins/APM/APMCompassCal.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'APMCompassCal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CalWorkerThread_t {
    QByteArrayData data[7];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CalWorkerThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CalWorkerThread_t qt_meta_stringdata_CalWorkerThread = {
    {
QT_MOC_LITERAL(0, 0, 15), // "CalWorkerThread"
QT_MOC_LITERAL(1, 16, 18), // "vehicleTextMessage"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 9), // "vehicleId"
QT_MOC_LITERAL(4, 46, 6), // "compId"
QT_MOC_LITERAL(5, 53, 8), // "severity"
QT_MOC_LITERAL(6, 62, 4) // "text"

    },
    "CalWorkerThread\0vehicleTextMessage\0\0"
    "vehicleId\0compId\0severity\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CalWorkerThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString,    3,    4,    5,    6,

       0        // eod
};

void CalWorkerThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CalWorkerThread *_t = static_cast<CalWorkerThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->vehicleTextMessage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (CalWorkerThread::*_t)(int , int , int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CalWorkerThread::vehicleTextMessage)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject CalWorkerThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_CalWorkerThread.data,
      qt_meta_data_CalWorkerThread,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CalWorkerThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CalWorkerThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CalWorkerThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int CalWorkerThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void CalWorkerThread::vehicleTextMessage(int _t1, int _t2, int _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_APMCompassCal_t {
    QByteArrayData data[12];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_APMCompassCal_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_APMCompassCal_t qt_meta_stringdata_APMCompassCal = {
    {
QT_MOC_LITERAL(0, 0, 13), // "APMCompassCal"
QT_MOC_LITERAL(1, 14, 18), // "vehicleTextMessage"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 9), // "vehicleId"
QT_MOC_LITERAL(4, 44, 6), // "compId"
QT_MOC_LITERAL(5, 51, 8), // "severity"
QT_MOC_LITERAL(6, 60, 4), // "text"
QT_MOC_LITERAL(7, 65, 20), // "_handleMavlinkRawImu"
QT_MOC_LITERAL(8, 86, 17), // "mavlink_message_t"
QT_MOC_LITERAL(9, 104, 7), // "message"
QT_MOC_LITERAL(10, 112, 24), // "_handleMavlinkScaledImu2"
QT_MOC_LITERAL(11, 137, 24) // "_handleMavlinkScaledImu3"

    },
    "APMCompassCal\0vehicleTextMessage\0\0"
    "vehicleId\0compId\0severity\0text\0"
    "_handleMavlinkRawImu\0mavlink_message_t\0"
    "message\0_handleMavlinkScaledImu2\0"
    "_handleMavlinkScaledImu3"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_APMCompassCal[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   43,    2, 0x08 /* Private */,
      10,    1,   46,    2, 0x08 /* Private */,
      11,    1,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString,    3,    4,    5,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void APMCompassCal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        APMCompassCal *_t = static_cast<APMCompassCal *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->vehicleTextMessage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 1: _t->_handleMavlinkRawImu((*reinterpret_cast< mavlink_message_t(*)>(_a[1]))); break;
        case 2: _t->_handleMavlinkScaledImu2((*reinterpret_cast< mavlink_message_t(*)>(_a[1]))); break;
        case 3: _t->_handleMavlinkScaledImu3((*reinterpret_cast< mavlink_message_t(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (APMCompassCal::*_t)(int , int , int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&APMCompassCal::vehicleTextMessage)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject APMCompassCal::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_APMCompassCal.data,
      qt_meta_data_APMCompassCal,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *APMCompassCal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *APMCompassCal::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_APMCompassCal.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int APMCompassCal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void APMCompassCal::vehicleTextMessage(int _t1, int _t2, int _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
