/****************************************************************************
** Meta object code from reading C++ file 'VideoReceiver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/VideoStreaming/VideoReceiver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VideoReceiver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VideoReceiver_t {
    QByteArrayData data[19];
    char stringdata0[230];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VideoReceiver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VideoReceiver_t qt_meta_stringdata_VideoReceiver = {
    {
QT_MOC_LITERAL(0, 0, 13), // "VideoReceiver"
QT_MOC_LITERAL(1, 14, 19), // "videoRunningChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 16), // "imageFileChanged"
QT_MOC_LITERAL(4, 52, 16), // "videoFileChanged"
QT_MOC_LITERAL(5, 69, 21), // "showFullScreenChanged"
QT_MOC_LITERAL(6, 91, 5), // "start"
QT_MOC_LITERAL(7, 97, 4), // "stop"
QT_MOC_LITERAL(8, 102, 6), // "setUri"
QT_MOC_LITERAL(9, 109, 3), // "uri"
QT_MOC_LITERAL(10, 113, 13), // "stopRecording"
QT_MOC_LITERAL(11, 127, 14), // "startRecording"
QT_MOC_LITERAL(12, 142, 9), // "videoFile"
QT_MOC_LITERAL(13, 152, 12), // "_updateTimer"
QT_MOC_LITERAL(14, 165, 12), // "videoSurface"
QT_MOC_LITERAL(15, 178, 13), // "VideoSurface*"
QT_MOC_LITERAL(16, 192, 12), // "videoRunning"
QT_MOC_LITERAL(17, 205, 9), // "imageFile"
QT_MOC_LITERAL(18, 215, 14) // "showFullScreen"

    },
    "VideoReceiver\0videoRunningChanged\0\0"
    "imageFileChanged\0videoFileChanged\0"
    "showFullScreenChanged\0start\0stop\0"
    "setUri\0uri\0stopRecording\0startRecording\0"
    "videoFile\0_updateTimer\0videoSurface\0"
    "VideoSurface*\0videoRunning\0imageFile\0"
    "showFullScreen"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VideoReceiver[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       5,   84, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,
       5,    0,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   73,    2, 0x0a /* Public */,
       7,    0,   74,    2, 0x0a /* Public */,
       8,    1,   75,    2, 0x0a /* Public */,
      10,    0,   78,    2, 0x0a /* Public */,
      11,    1,   79,    2, 0x0a /* Public */,
      11,    0,   82,    2, 0x2a /* Public | MethodCloned */,
      13,    0,   83,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      14, 0x80000000 | 15, 0x00095409,
      16, QMetaType::Bool, 0x00495001,
      17, QMetaType::QString, 0x00495001,
      12, QMetaType::QString, 0x00495001,
      18, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       1,
       2,
       3,

       0        // eod
};

void VideoReceiver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VideoReceiver *_t = static_cast<VideoReceiver *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->videoRunningChanged(); break;
        case 1: _t->imageFileChanged(); break;
        case 2: _t->videoFileChanged(); break;
        case 3: _t->showFullScreenChanged(); break;
        case 4: _t->start(); break;
        case 5: _t->stop(); break;
        case 6: _t->setUri((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->stopRecording(); break;
        case 8: _t->startRecording((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->startRecording(); break;
        case 10: _t->_updateTimer(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (VideoReceiver::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoReceiver::videoRunningChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (VideoReceiver::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoReceiver::imageFileChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (VideoReceiver::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoReceiver::videoFileChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (VideoReceiver::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VideoReceiver::showFullScreenChanged)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< VideoSurface* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        VideoReceiver *_t = static_cast<VideoReceiver *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< VideoSurface**>(_v) = _t->videoSurface(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->videoRunning(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->imageFile(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->videoFile(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->showFullScreen(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        VideoReceiver *_t = static_cast<VideoReceiver *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 4: _t->setShowFullScreen(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject VideoReceiver::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_VideoReceiver.data,
      qt_meta_data_VideoReceiver,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *VideoReceiver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VideoReceiver::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VideoReceiver.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VideoReceiver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
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
void VideoReceiver::videoRunningChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void VideoReceiver::imageFileChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void VideoReceiver::videoFileChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void VideoReceiver::showFullScreenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
