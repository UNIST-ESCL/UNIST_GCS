/****************************************************************************
** Meta object code from reading C++ file 'PlanManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/PlanManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PlanManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlanManager_t {
    QByteArrayData data[23];
    char stringdata0[352];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlanManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlanManager_t qt_meta_stringdata_PlanManager = {
    {
QT_MOC_LITERAL(0, 0, 11), // "PlanManager"
QT_MOC_LITERAL(1, 12, 24), // "newMissionItemsAvailable"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 18), // "removeAllRequested"
QT_MOC_LITERAL(4, 57, 17), // "inProgressChanged"
QT_MOC_LITERAL(5, 75, 10), // "inProgress"
QT_MOC_LITERAL(6, 86, 5), // "error"
QT_MOC_LITERAL(7, 92, 9), // "errorCode"
QT_MOC_LITERAL(8, 102, 8), // "errorMsg"
QT_MOC_LITERAL(9, 111, 19), // "currentIndexChanged"
QT_MOC_LITERAL(10, 131, 12), // "currentIndex"
QT_MOC_LITERAL(11, 144, 23), // "lastCurrentIndexChanged"
QT_MOC_LITERAL(12, 168, 16), // "lastCurrentIndex"
QT_MOC_LITERAL(13, 185, 11), // "progressPct"
QT_MOC_LITERAL(14, 197, 18), // "progressPercentPct"
QT_MOC_LITERAL(15, 216, 17), // "removeAllComplete"
QT_MOC_LITERAL(16, 234, 12), // "sendComplete"
QT_MOC_LITERAL(17, 247, 18), // "resumeMissionReady"
QT_MOC_LITERAL(18, 266, 23), // "resumeMissionUploadFail"
QT_MOC_LITERAL(19, 290, 23), // "_mavlinkMessageReceived"
QT_MOC_LITERAL(20, 314, 17), // "mavlink_message_t"
QT_MOC_LITERAL(21, 332, 7), // "message"
QT_MOC_LITERAL(22, 340, 11) // "_ackTimeout"

    },
    "PlanManager\0newMissionItemsAvailable\0"
    "\0removeAllRequested\0inProgressChanged\0"
    "inProgress\0error\0errorCode\0errorMsg\0"
    "currentIndexChanged\0currentIndex\0"
    "lastCurrentIndexChanged\0lastCurrentIndex\0"
    "progressPct\0progressPercentPct\0"
    "removeAllComplete\0sendComplete\0"
    "resumeMissionReady\0resumeMissionUploadFail\0"
    "_mavlinkMessageReceived\0mavlink_message_t\0"
    "message\0_ackTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlanManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    1,   77,    2, 0x06 /* Public */,
       6,    2,   80,    2, 0x06 /* Public */,
       9,    1,   85,    2, 0x06 /* Public */,
      11,    1,   88,    2, 0x06 /* Public */,
      13,    1,   91,    2, 0x06 /* Public */,
      15,    1,   94,    2, 0x06 /* Public */,
      16,    1,   97,    2, 0x06 /* Public */,
      17,    0,  100,    2, 0x06 /* Public */,
      18,    0,  101,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      19,    1,  102,    2, 0x08 /* Private */,
      22,    0,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    7,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Double,   14,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void,

       0        // eod
};

void PlanManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlanManager *_t = static_cast<PlanManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newMissionItemsAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->inProgressChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->error((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->lastCurrentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->progressPct((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->removeAllComplete((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->sendComplete((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->resumeMissionReady(); break;
        case 9: _t->resumeMissionUploadFail(); break;
        case 10: _t->_mavlinkMessageReceived((*reinterpret_cast< const mavlink_message_t(*)>(_a[1]))); break;
        case 11: _t->_ackTimeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (PlanManager::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlanManager::newMissionItemsAvailable)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PlanManager::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlanManager::inProgressChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PlanManager::*_t)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlanManager::error)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (PlanManager::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlanManager::currentIndexChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (PlanManager::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlanManager::lastCurrentIndexChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (PlanManager::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlanManager::progressPct)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (PlanManager::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlanManager::removeAllComplete)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (PlanManager::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlanManager::sendComplete)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (PlanManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlanManager::resumeMissionReady)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (PlanManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlanManager::resumeMissionUploadFail)) {
                *result = 9;
                return;
            }
        }
    }
}

const QMetaObject PlanManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PlanManager.data,
      qt_meta_data_PlanManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PlanManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlanManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlanManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PlanManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void PlanManager::newMissionItemsAvailable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PlanManager::inProgressChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PlanManager::error(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PlanManager::currentIndexChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PlanManager::lastCurrentIndexChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PlanManager::progressPct(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PlanManager::removeAllComplete(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void PlanManager::sendComplete(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void PlanManager::resumeMissionReady()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void PlanManager::resumeMissionUploadFail()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
