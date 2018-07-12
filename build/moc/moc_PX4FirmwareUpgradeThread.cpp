/****************************************************************************
** Meta object code from reading C++ file 'PX4FirmwareUpgradeThread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/VehicleSetup/PX4FirmwareUpgradeThread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PX4FirmwareUpgradeThread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PX4FirmwareUpgradeThreadWorker_t {
    QByteArrayData data[32];
    char stringdata0[377];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PX4FirmwareUpgradeThreadWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PX4FirmwareUpgradeThreadWorker_t qt_meta_stringdata_PX4FirmwareUpgradeThreadWorker = {
    {
QT_MOC_LITERAL(0, 0, 30), // "PX4FirmwareUpgradeThreadWorker"
QT_MOC_LITERAL(1, 31, 14), // "updateProgress"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 4), // "curr"
QT_MOC_LITERAL(4, 52, 5), // "total"
QT_MOC_LITERAL(5, 58, 10), // "foundBoard"
QT_MOC_LITERAL(6, 69, 12), // "firstAttempt"
QT_MOC_LITERAL(7, 82, 17), // "QGCSerialPortInfo"
QT_MOC_LITERAL(8, 100, 8), // "portInfo"
QT_MOC_LITERAL(9, 109, 4), // "type"
QT_MOC_LITERAL(10, 114, 9), // "boardName"
QT_MOC_LITERAL(11, 124, 12), // "noBoardFound"
QT_MOC_LITERAL(12, 137, 9), // "boardGone"
QT_MOC_LITERAL(13, 147, 15), // "foundBootloader"
QT_MOC_LITERAL(14, 163, 17), // "bootloaderVersion"
QT_MOC_LITERAL(15, 181, 7), // "boardID"
QT_MOC_LITERAL(16, 189, 9), // "flashSize"
QT_MOC_LITERAL(17, 199, 20), // "bootloaderSyncFailed"
QT_MOC_LITERAL(18, 220, 5), // "error"
QT_MOC_LITERAL(19, 226, 11), // "errorString"
QT_MOC_LITERAL(20, 238, 6), // "status"
QT_MOC_LITERAL(21, 245, 10), // "statusText"
QT_MOC_LITERAL(22, 256, 12), // "eraseStarted"
QT_MOC_LITERAL(23, 269, 13), // "eraseComplete"
QT_MOC_LITERAL(24, 283, 13), // "flashComplete"
QT_MOC_LITERAL(25, 297, 5), // "_init"
QT_MOC_LITERAL(26, 303, 19), // "_startFindBoardLoop"
QT_MOC_LITERAL(27, 323, 7), // "_reboot"
QT_MOC_LITERAL(28, 331, 6), // "_flash"
QT_MOC_LITERAL(29, 338, 14), // "_findBoardOnce"
QT_MOC_LITERAL(30, 353, 15), // "_updateProgress"
QT_MOC_LITERAL(31, 369, 7) // "_cancel"

    },
    "PX4FirmwareUpgradeThreadWorker\0"
    "updateProgress\0\0curr\0total\0foundBoard\0"
    "firstAttempt\0QGCSerialPortInfo\0portInfo\0"
    "type\0boardName\0noBoardFound\0boardGone\0"
    "foundBootloader\0bootloaderVersion\0"
    "boardID\0flashSize\0bootloaderSyncFailed\0"
    "error\0errorString\0status\0statusText\0"
    "eraseStarted\0eraseComplete\0flashComplete\0"
    "_init\0_startFindBoardLoop\0_reboot\0"
    "_flash\0_findBoardOnce\0_updateProgress\0"
    "_cancel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PX4FirmwareUpgradeThreadWorker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  104,    2, 0x06 /* Public */,
       5,    4,  109,    2, 0x06 /* Public */,
      11,    0,  118,    2, 0x06 /* Public */,
      12,    0,  119,    2, 0x06 /* Public */,
      13,    3,  120,    2, 0x06 /* Public */,
      17,    0,  127,    2, 0x06 /* Public */,
      18,    1,  128,    2, 0x06 /* Public */,
      20,    1,  131,    2, 0x06 /* Public */,
      22,    0,  134,    2, 0x06 /* Public */,
      23,    0,  135,    2, 0x06 /* Public */,
      24,    0,  136,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      25,    0,  137,    2, 0x08 /* Private */,
      26,    0,  138,    2, 0x08 /* Private */,
      27,    0,  139,    2, 0x08 /* Private */,
      28,    0,  140,    2, 0x08 /* Private */,
      29,    0,  141,    2, 0x08 /* Private */,
      30,    2,  142,    2, 0x08 /* Private */,
      31,    0,  147,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 7, QMetaType::Int, QMetaType::QString,    6,    8,    9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   14,   15,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void,

       0        // eod
};

void PX4FirmwareUpgradeThreadWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PX4FirmwareUpgradeThreadWorker *_t = static_cast<PX4FirmwareUpgradeThreadWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->foundBoard((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QGCSerialPortInfo(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 2: _t->noBoardFound(); break;
        case 3: _t->boardGone(); break;
        case 4: _t->foundBootloader((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->bootloaderSyncFailed(); break;
        case 6: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->status((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->eraseStarted(); break;
        case 9: _t->eraseComplete(); break;
        case 10: _t->flashComplete(); break;
        case 11: _t->_init(); break;
        case 12: _t->_startFindBoardLoop(); break;
        case 13: _t->_reboot(); break;
        case 14: _t->_flash(); break;
        case 15: _t->_findBoardOnce(); break;
        case 16: _t->_updateProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 17: _t->_cancel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (PX4FirmwareUpgradeThreadWorker::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadWorker::updateProgress)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PX4FirmwareUpgradeThreadWorker::*_t)(bool , const QGCSerialPortInfo & , int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadWorker::foundBoard)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PX4FirmwareUpgradeThreadWorker::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadWorker::noBoardFound)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (PX4FirmwareUpgradeThreadWorker::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadWorker::boardGone)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (PX4FirmwareUpgradeThreadWorker::*_t)(int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadWorker::foundBootloader)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (PX4FirmwareUpgradeThreadWorker::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadWorker::bootloaderSyncFailed)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (PX4FirmwareUpgradeThreadWorker::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadWorker::error)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (PX4FirmwareUpgradeThreadWorker::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadWorker::status)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (PX4FirmwareUpgradeThreadWorker::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadWorker::eraseStarted)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (PX4FirmwareUpgradeThreadWorker::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadWorker::eraseComplete)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (PX4FirmwareUpgradeThreadWorker::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadWorker::flashComplete)) {
                *result = 10;
                return;
            }
        }
    }
}

const QMetaObject PX4FirmwareUpgradeThreadWorker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PX4FirmwareUpgradeThreadWorker.data,
      qt_meta_data_PX4FirmwareUpgradeThreadWorker,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PX4FirmwareUpgradeThreadWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PX4FirmwareUpgradeThreadWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PX4FirmwareUpgradeThreadWorker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PX4FirmwareUpgradeThreadWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void PX4FirmwareUpgradeThreadWorker::updateProgress(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PX4FirmwareUpgradeThreadWorker::foundBoard(bool _t1, const QGCSerialPortInfo & _t2, int _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PX4FirmwareUpgradeThreadWorker::noBoardFound()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PX4FirmwareUpgradeThreadWorker::boardGone()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void PX4FirmwareUpgradeThreadWorker::foundBootloader(int _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PX4FirmwareUpgradeThreadWorker::bootloaderSyncFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void PX4FirmwareUpgradeThreadWorker::error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void PX4FirmwareUpgradeThreadWorker::status(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void PX4FirmwareUpgradeThreadWorker::eraseStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void PX4FirmwareUpgradeThreadWorker::eraseComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void PX4FirmwareUpgradeThreadWorker::flashComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}
struct qt_meta_stringdata_PX4FirmwareUpgradeThreadController_t {
    QByteArrayData data[42];
    char stringdata0[536];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PX4FirmwareUpgradeThreadController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PX4FirmwareUpgradeThreadController_t qt_meta_stringdata_PX4FirmwareUpgradeThreadController = {
    {
QT_MOC_LITERAL(0, 0, 34), // "PX4FirmwareUpgradeThreadContr..."
QT_MOC_LITERAL(1, 35, 10), // "foundBoard"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 12), // "firstAttempt"
QT_MOC_LITERAL(4, 60, 17), // "QGCSerialPortInfo"
QT_MOC_LITERAL(5, 78, 8), // "portInfo"
QT_MOC_LITERAL(6, 87, 9), // "boardType"
QT_MOC_LITERAL(7, 97, 9), // "boardName"
QT_MOC_LITERAL(8, 107, 12), // "noBoardFound"
QT_MOC_LITERAL(9, 120, 9), // "boardGone"
QT_MOC_LITERAL(10, 130, 15), // "foundBootloader"
QT_MOC_LITERAL(11, 146, 17), // "bootloaderVersion"
QT_MOC_LITERAL(12, 164, 7), // "boardID"
QT_MOC_LITERAL(13, 172, 9), // "flashSize"
QT_MOC_LITERAL(14, 182, 5), // "error"
QT_MOC_LITERAL(15, 188, 11), // "errorString"
QT_MOC_LITERAL(16, 200, 6), // "status"
QT_MOC_LITERAL(17, 207, 20), // "bootloaderSyncFailed"
QT_MOC_LITERAL(18, 228, 12), // "eraseStarted"
QT_MOC_LITERAL(19, 241, 13), // "eraseComplete"
QT_MOC_LITERAL(20, 255, 13), // "flashComplete"
QT_MOC_LITERAL(21, 269, 14), // "updateProgress"
QT_MOC_LITERAL(22, 284, 4), // "curr"
QT_MOC_LITERAL(23, 289, 5), // "total"
QT_MOC_LITERAL(24, 295, 17), // "_initThreadWorker"
QT_MOC_LITERAL(25, 313, 27), // "_startFindBoardLoopOnThread"
QT_MOC_LITERAL(26, 341, 15), // "_rebootOnThread"
QT_MOC_LITERAL(27, 357, 14), // "_flashOnThread"
QT_MOC_LITERAL(28, 372, 7), // "_cancel"
QT_MOC_LITERAL(29, 380, 11), // "_foundBoard"
QT_MOC_LITERAL(30, 392, 4), // "type"
QT_MOC_LITERAL(31, 397, 4), // "name"
QT_MOC_LITERAL(32, 402, 13), // "_noBoardFound"
QT_MOC_LITERAL(33, 416, 10), // "_boardGone"
QT_MOC_LITERAL(34, 427, 16), // "_foundBootloader"
QT_MOC_LITERAL(35, 444, 21), // "_bootloaderSyncFailed"
QT_MOC_LITERAL(36, 466, 6), // "_error"
QT_MOC_LITERAL(37, 473, 7), // "_status"
QT_MOC_LITERAL(38, 481, 10), // "statusText"
QT_MOC_LITERAL(39, 492, 13), // "_eraseStarted"
QT_MOC_LITERAL(40, 506, 14), // "_eraseComplete"
QT_MOC_LITERAL(41, 521, 14) // "_flashComplete"

    },
    "PX4FirmwareUpgradeThreadController\0"
    "foundBoard\0\0firstAttempt\0QGCSerialPortInfo\0"
    "portInfo\0boardType\0boardName\0noBoardFound\0"
    "boardGone\0foundBootloader\0bootloaderVersion\0"
    "boardID\0flashSize\0error\0errorString\0"
    "status\0bootloaderSyncFailed\0eraseStarted\0"
    "eraseComplete\0flashComplete\0updateProgress\0"
    "curr\0total\0_initThreadWorker\0"
    "_startFindBoardLoopOnThread\0_rebootOnThread\0"
    "_flashOnThread\0_cancel\0_foundBoard\0"
    "type\0name\0_noBoardFound\0_boardGone\0"
    "_foundBootloader\0_bootloaderSyncFailed\0"
    "_error\0_status\0statusText\0_eraseStarted\0"
    "_eraseComplete\0_flashComplete"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PX4FirmwareUpgradeThreadController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      16,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,  144,    2, 0x06 /* Public */,
       8,    0,  153,    2, 0x06 /* Public */,
       9,    0,  154,    2, 0x06 /* Public */,
      10,    3,  155,    2, 0x06 /* Public */,
      14,    1,  162,    2, 0x06 /* Public */,
      16,    1,  165,    2, 0x06 /* Public */,
      17,    0,  168,    2, 0x06 /* Public */,
      18,    0,  169,    2, 0x06 /* Public */,
      19,    0,  170,    2, 0x06 /* Public */,
      20,    0,  171,    2, 0x06 /* Public */,
      21,    2,  172,    2, 0x06 /* Public */,
      24,    0,  177,    2, 0x06 /* Public */,
      25,    0,  178,    2, 0x06 /* Public */,
      26,    0,  179,    2, 0x06 /* Public */,
      27,    0,  180,    2, 0x06 /* Public */,
      28,    0,  181,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      29,    4,  182,    2, 0x08 /* Private */,
      32,    0,  191,    2, 0x08 /* Private */,
      33,    0,  192,    2, 0x08 /* Private */,
      34,    3,  193,    2, 0x08 /* Private */,
      35,    0,  200,    2, 0x08 /* Private */,
      36,    1,  201,    2, 0x08 /* Private */,
      37,    1,  204,    2, 0x08 /* Private */,
      39,    0,  207,    2, 0x08 /* Private */,
      40,    0,  208,    2, 0x08 /* Private */,
      41,    0,  209,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 4, QMetaType::Int, QMetaType::QString,    3,    5,    6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   11,   12,   13,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   22,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 4, QMetaType::Int, QMetaType::QString,    3,    5,   30,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   11,   12,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString,   38,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PX4FirmwareUpgradeThreadController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PX4FirmwareUpgradeThreadController *_t = static_cast<PX4FirmwareUpgradeThreadController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->foundBoard((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QGCSerialPortInfo(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 1: _t->noBoardFound(); break;
        case 2: _t->boardGone(); break;
        case 3: _t->foundBootloader((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->status((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->bootloaderSyncFailed(); break;
        case 7: _t->eraseStarted(); break;
        case 8: _t->eraseComplete(); break;
        case 9: _t->flashComplete(); break;
        case 10: _t->updateProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->_initThreadWorker(); break;
        case 12: _t->_startFindBoardLoopOnThread(); break;
        case 13: _t->_rebootOnThread(); break;
        case 14: _t->_flashOnThread(); break;
        case 15: _t->_cancel(); break;
        case 16: _t->_foundBoard((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QGCSerialPortInfo(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 17: _t->_noBoardFound(); break;
        case 18: _t->_boardGone(); break;
        case 19: _t->_foundBootloader((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 20: _t->_bootloaderSyncFailed(); break;
        case 21: _t->_error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->_status((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 23: _t->_eraseStarted(); break;
        case 24: _t->_eraseComplete(); break;
        case 25: _t->_flashComplete(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (PX4FirmwareUpgradeThreadController::*_t)(bool , const QGCSerialPortInfo & , int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadController::foundBoard)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PX4FirmwareUpgradeThreadController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadController::noBoardFound)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PX4FirmwareUpgradeThreadController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadController::boardGone)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (PX4FirmwareUpgradeThreadController::*_t)(int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadController::foundBootloader)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (PX4FirmwareUpgradeThreadController::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadController::error)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (PX4FirmwareUpgradeThreadController::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadController::status)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (PX4FirmwareUpgradeThreadController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadController::bootloaderSyncFailed)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (PX4FirmwareUpgradeThreadController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadController::eraseStarted)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (PX4FirmwareUpgradeThreadController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadController::eraseComplete)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (PX4FirmwareUpgradeThreadController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadController::flashComplete)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (PX4FirmwareUpgradeThreadController::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadController::updateProgress)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (PX4FirmwareUpgradeThreadController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadController::_initThreadWorker)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (PX4FirmwareUpgradeThreadController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadController::_startFindBoardLoopOnThread)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (PX4FirmwareUpgradeThreadController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadController::_rebootOnThread)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (PX4FirmwareUpgradeThreadController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadController::_flashOnThread)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (PX4FirmwareUpgradeThreadController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4FirmwareUpgradeThreadController::_cancel)) {
                *result = 15;
                return;
            }
        }
    }
}

const QMetaObject PX4FirmwareUpgradeThreadController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PX4FirmwareUpgradeThreadController.data,
      qt_meta_data_PX4FirmwareUpgradeThreadController,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PX4FirmwareUpgradeThreadController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PX4FirmwareUpgradeThreadController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PX4FirmwareUpgradeThreadController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PX4FirmwareUpgradeThreadController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
void PX4FirmwareUpgradeThreadController::foundBoard(bool _t1, const QGCSerialPortInfo & _t2, int _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PX4FirmwareUpgradeThreadController::noBoardFound()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PX4FirmwareUpgradeThreadController::boardGone()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PX4FirmwareUpgradeThreadController::foundBootloader(int _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PX4FirmwareUpgradeThreadController::error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PX4FirmwareUpgradeThreadController::status(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PX4FirmwareUpgradeThreadController::bootloaderSyncFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void PX4FirmwareUpgradeThreadController::eraseStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void PX4FirmwareUpgradeThreadController::eraseComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void PX4FirmwareUpgradeThreadController::flashComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void PX4FirmwareUpgradeThreadController::updateProgress(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void PX4FirmwareUpgradeThreadController::_initThreadWorker()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void PX4FirmwareUpgradeThreadController::_startFindBoardLoopOnThread()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void PX4FirmwareUpgradeThreadController::_rebootOnThread()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void PX4FirmwareUpgradeThreadController::_flashOnThread()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void PX4FirmwareUpgradeThreadController::_cancel()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
