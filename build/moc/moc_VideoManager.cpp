/****************************************************************************
** Meta object code from reading C++ file 'VideoManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/FlightDisplay/VideoManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VideoManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VideoManager_t {
    QByteArrayData data[19];
    char stringdata0[262];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VideoManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VideoManager_t qt_meta_stringdata_VideoManager = {
    {
QT_MOC_LITERAL(0, 0, 12), // "VideoManager"
QT_MOC_LITERAL(1, 13, 15), // "hasVideoChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 18), // "isGStreamerChanged"
QT_MOC_LITERAL(4, 49, 20), // "videoSourceIDChanged"
QT_MOC_LITERAL(5, 70, 17), // "fullScreenChanged"
QT_MOC_LITERAL(6, 88, 19), // "_videoSourceChanged"
QT_MOC_LITERAL(7, 108, 15), // "_udpPortChanged"
QT_MOC_LITERAL(8, 124, 15), // "_rtspUrlChanged"
QT_MOC_LITERAL(9, 140, 14), // "_tcpUrlChanged"
QT_MOC_LITERAL(10, 155, 10), // "startVideo"
QT_MOC_LITERAL(11, 166, 9), // "stopVideo"
QT_MOC_LITERAL(12, 176, 8), // "hasVideo"
QT_MOC_LITERAL(13, 185, 11), // "isGStreamer"
QT_MOC_LITERAL(14, 197, 13), // "videoSourceID"
QT_MOC_LITERAL(15, 211, 10), // "uvcEnabled"
QT_MOC_LITERAL(16, 222, 10), // "fullScreen"
QT_MOC_LITERAL(17, 233, 13), // "videoReceiver"
QT_MOC_LITERAL(18, 247, 14) // "VideoReceiver*"

    },
    "VideoManager\0hasVideoChanged\0\0"
    "isGStreamerChanged\0videoSourceIDChanged\0"
    "fullScreenChanged\0_videoSourceChanged\0"
    "_udpPortChanged\0_rtspUrlChanged\0"
    "_tcpUrlChanged\0startVideo\0stopVideo\0"
    "hasVideo\0isGStreamer\0videoSourceID\0"
    "uvcEnabled\0fullScreen\0videoReceiver\0"
    "VideoReceiver*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VideoManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       6,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      10,    0,   72,    2, 0x02 /* Public */,
      11,    0,   73,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      12, QMetaType::Bool, 0x00495001,
      13, QMetaType::Bool, 0x00495001,
      14, QMetaType::QString, 0x00495001,
      15, QMetaType::Bool, 0x00095401,
      16, QMetaType::Bool, 0x00495003,
      17, 0x80000000 | 18, 0x00095409,

 // properties: notify_signal_id
       0,
       1,
       2,
       0,
       3,
       0,

       0        // eod
};

void VideoManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VideoManager *_t = static_cast<VideoManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->hasVideoChanged(); break;
        case 1: _t->isGStreamerChanged(); break;
        case 2: _t->videoSourceIDChanged(); break;
        case 3: _t->fullScreenChanged(); break;
        case 4: _t->_videoSourceChanged(); break;
        case 5: _t->_udpPortChanged(); break;
        case 6: _t->_rtspUrlChanged(); break;
        case 7: _t->_tcpUrlChanged(); break;
        case 8: _t->startVideo(); break;
        case 9: _t->stopVideo(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (VideoManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoManager::hasVideoChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (VideoManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoManager::isGStreamerChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (VideoManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoManager::videoSourceIDChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (VideoManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoManager::fullScreenChanged)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< VideoReceiver* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        VideoManager *_t = static_cast<VideoManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->hasVideo(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isGStreamer(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->videoSourceID(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->uvcEnabled(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->fullScreen(); break;
        case 5: *reinterpret_cast< VideoReceiver**>(_v) = _t->videoReceiver(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        VideoManager *_t = static_cast<VideoManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 4: _t->setfullScreen(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject VideoManager::staticMetaObject = {
    { &QGCTool::staticMetaObject, qt_meta_stringdata_VideoManager.data,
      qt_meta_data_VideoManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *VideoManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VideoManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VideoManager.stringdata0))
        return static_cast<void*>(this);
    return QGCTool::qt_metacast(_clname);
}

int VideoManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void VideoManager::hasVideoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void VideoManager::isGStreamerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void VideoManager::videoSourceIDChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void VideoManager::fullScreenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
