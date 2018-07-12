/****************************************************************************
** Meta object code from reading C++ file 'LogReplayLink.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/LogReplayLink.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LogReplayLink.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LogReplayLinkConfiguration_t {
    QByteArrayData data[4];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LogReplayLinkConfiguration_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LogReplayLinkConfiguration_t qt_meta_stringdata_LogReplayLinkConfiguration = {
    {
QT_MOC_LITERAL(0, 0, 26), // "LogReplayLinkConfiguration"
QT_MOC_LITERAL(1, 27, 15), // "fileNameChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 8) // "fileName"

    },
    "LogReplayLinkConfiguration\0fileNameChanged\0"
    "\0fileName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogReplayLinkConfiguration[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495003,

 // properties: notify_signal_id
       0,

       0        // eod
};

void LogReplayLinkConfiguration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LogReplayLinkConfiguration *_t = static_cast<LogReplayLinkConfiguration *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fileNameChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (LogReplayLinkConfiguration::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogReplayLinkConfiguration::fileNameChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        LogReplayLinkConfiguration *_t = static_cast<LogReplayLinkConfiguration *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->logFilename(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        LogReplayLinkConfiguration *_t = static_cast<LogReplayLinkConfiguration *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLogFilename(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject LogReplayLinkConfiguration::staticMetaObject = {
    { &LinkConfiguration::staticMetaObject, qt_meta_stringdata_LogReplayLinkConfiguration.data,
      qt_meta_data_LogReplayLinkConfiguration,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LogReplayLinkConfiguration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogReplayLinkConfiguration::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LogReplayLinkConfiguration.stringdata0))
        return static_cast<void*>(this);
    return LinkConfiguration::qt_metacast(_clname);
}

int LogReplayLinkConfiguration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LinkConfiguration::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void LogReplayLinkConfiguration::fileNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_LogReplayLink_t {
    QByteArrayData data[24];
    char stringdata0[343];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LogReplayLink_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LogReplayLink_t qt_meta_stringdata_LogReplayLink = {
    {
QT_MOC_LITERAL(0, 0, 13), // "LogReplayLink"
QT_MOC_LITERAL(1, 14, 12), // "logFileStats"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 14), // "logTimestamped"
QT_MOC_LITERAL(4, 43, 15), // "logDurationSecs"
QT_MOC_LITERAL(5, 59, 14), // "binaryBaudRate"
QT_MOC_LITERAL(6, 74, 15), // "playbackStarted"
QT_MOC_LITERAL(7, 90, 14), // "playbackPaused"
QT_MOC_LITERAL(8, 105, 13), // "playbackAtEnd"
QT_MOC_LITERAL(9, 119, 13), // "playbackError"
QT_MOC_LITERAL(10, 133, 30), // "playbackPercentCompleteChanged"
QT_MOC_LITERAL(11, 164, 15), // "percentComplete"
QT_MOC_LITERAL(12, 180, 18), // "currentLogTimeSecs"
QT_MOC_LITERAL(13, 199, 4), // "secs"
QT_MOC_LITERAL(14, 204, 13), // "_playOnThread"
QT_MOC_LITERAL(15, 218, 14), // "_pauseOnThread"
QT_MOC_LITERAL(16, 233, 30), // "_setAccelerationFactorOnThread"
QT_MOC_LITERAL(17, 264, 6), // "factor"
QT_MOC_LITERAL(18, 271, 11), // "_writeBytes"
QT_MOC_LITERAL(19, 283, 5), // "bytes"
QT_MOC_LITERAL(20, 289, 17), // "_readNextLogEntry"
QT_MOC_LITERAL(21, 307, 5), // "_play"
QT_MOC_LITERAL(22, 313, 6), // "_pause"
QT_MOC_LITERAL(23, 320, 22) // "_setAccelerationFactor"

    },
    "LogReplayLink\0logFileStats\0\0logTimestamped\0"
    "logDurationSecs\0binaryBaudRate\0"
    "playbackStarted\0playbackPaused\0"
    "playbackAtEnd\0playbackError\0"
    "playbackPercentCompleteChanged\0"
    "percentComplete\0currentLogTimeSecs\0"
    "secs\0_playOnThread\0_pauseOnThread\0"
    "_setAccelerationFactorOnThread\0factor\0"
    "_writeBytes\0bytes\0_readNextLogEntry\0"
    "_play\0_pause\0_setAccelerationFactor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogReplayLink[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   89,    2, 0x06 /* Public */,
       6,    0,   96,    2, 0x06 /* Public */,
       7,    0,   97,    2, 0x06 /* Public */,
       8,    0,   98,    2, 0x06 /* Public */,
       9,    0,   99,    2, 0x06 /* Public */,
      10,    1,  100,    2, 0x06 /* Public */,
      12,    1,  103,    2, 0x06 /* Public */,
      14,    0,  106,    2, 0x06 /* Public */,
      15,    0,  107,    2, 0x06 /* Public */,
      16,    1,  108,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    1,  111,    2, 0x08 /* Private */,
      20,    0,  114,    2, 0x08 /* Private */,
      21,    0,  115,    2, 0x08 /* Private */,
      22,    0,  116,    2, 0x08 /* Private */,
      23,    1,  117,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,

       0        // eod
};

void LogReplayLink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LogReplayLink *_t = static_cast<LogReplayLink *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->logFileStats((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->playbackStarted(); break;
        case 2: _t->playbackPaused(); break;
        case 3: _t->playbackAtEnd(); break;
        case 4: _t->playbackError(); break;
        case 5: _t->playbackPercentCompleteChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->currentLogTimeSecs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->_playOnThread(); break;
        case 8: _t->_pauseOnThread(); break;
        case 9: _t->_setAccelerationFactorOnThread((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->_writeBytes((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 11: _t->_readNextLogEntry(); break;
        case 12: _t->_play(); break;
        case 13: _t->_pause(); break;
        case 14: _t->_setAccelerationFactor((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (LogReplayLink::*_t)(bool , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogReplayLink::logFileStats)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (LogReplayLink::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogReplayLink::playbackStarted)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (LogReplayLink::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogReplayLink::playbackPaused)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (LogReplayLink::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogReplayLink::playbackAtEnd)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (LogReplayLink::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogReplayLink::playbackError)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (LogReplayLink::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogReplayLink::playbackPercentCompleteChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (LogReplayLink::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogReplayLink::currentLogTimeSecs)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (LogReplayLink::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogReplayLink::_playOnThread)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (LogReplayLink::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogReplayLink::_pauseOnThread)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (LogReplayLink::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogReplayLink::_setAccelerationFactorOnThread)) {
                *result = 9;
                return;
            }
        }
    }
}

const QMetaObject LogReplayLink::staticMetaObject = {
    { &LinkInterface::staticMetaObject, qt_meta_stringdata_LogReplayLink.data,
      qt_meta_data_LogReplayLink,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LogReplayLink::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogReplayLink::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LogReplayLink.stringdata0))
        return static_cast<void*>(this);
    return LinkInterface::qt_metacast(_clname);
}

int LogReplayLink::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LinkInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void LogReplayLink::logFileStats(bool _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LogReplayLink::playbackStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void LogReplayLink::playbackPaused()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void LogReplayLink::playbackAtEnd()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void LogReplayLink::playbackError()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void LogReplayLink::playbackPercentCompleteChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void LogReplayLink::currentLogTimeSecs(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void LogReplayLink::_playOnThread()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void LogReplayLink::_pauseOnThread()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void LogReplayLink::_setAccelerationFactorOnThread(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
