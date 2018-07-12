/****************************************************************************
** Meta object code from reading C++ file 'QGCMAVLinkLogPlayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/QGCMAVLinkLogPlayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCMAVLinkLogPlayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCMAVLinkLogPlayer_t {
    QByteArrayData data[19];
    char stringdata0[307];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCMAVLinkLogPlayer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCMAVLinkLogPlayer_t qt_meta_stringdata_QGCMAVLinkLogPlayer = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QGCMAVLinkLogPlayer"
QT_MOC_LITERAL(1, 20, 25), // "_selectLogFileForPlayback"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 16), // "_playPauseToggle"
QT_MOC_LITERAL(4, 64, 6), // "_pause"
QT_MOC_LITERAL(5, 71, 22), // "_setPlayheadFromSlider"
QT_MOC_LITERAL(6, 94, 5), // "value"
QT_MOC_LITERAL(7, 100, 13), // "_logFileStats"
QT_MOC_LITERAL(8, 114, 14), // "logTimestamped"
QT_MOC_LITERAL(9, 129, 18), // "logDurationSeconds"
QT_MOC_LITERAL(10, 148, 14), // "binaryBaudRate"
QT_MOC_LITERAL(11, 163, 16), // "_playbackStarted"
QT_MOC_LITERAL(12, 180, 15), // "_playbackPaused"
QT_MOC_LITERAL(13, 196, 31), // "_playbackPercentCompleteChanged"
QT_MOC_LITERAL(14, 228, 15), // "percentComplete"
QT_MOC_LITERAL(15, 244, 14), // "_playbackError"
QT_MOC_LITERAL(16, 259, 23), // "_replayLinkDisconnected"
QT_MOC_LITERAL(17, 283, 18), // "_setCurrentLogTime"
QT_MOC_LITERAL(18, 302, 4) // "secs"

    },
    "QGCMAVLinkLogPlayer\0_selectLogFileForPlayback\0"
    "\0_playPauseToggle\0_pause\0"
    "_setPlayheadFromSlider\0value\0_logFileStats\0"
    "logTimestamped\0logDurationSeconds\0"
    "binaryBaudRate\0_playbackStarted\0"
    "_playbackPaused\0_playbackPercentCompleteChanged\0"
    "percentComplete\0_playbackError\0"
    "_replayLinkDisconnected\0_setCurrentLogTime\0"
    "secs"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCMAVLinkLogPlayer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    1,   72,    2, 0x08 /* Private */,
       7,    3,   75,    2, 0x08 /* Private */,
      11,    0,   82,    2, 0x08 /* Private */,
      12,    0,   83,    2, 0x08 /* Private */,
      13,    1,   84,    2, 0x08 /* Private */,
      15,    0,   87,    2, 0x08 /* Private */,
      16,    0,   88,    2, 0x08 /* Private */,
      17,    1,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Int,    8,    9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   18,

       0        // eod
};

void QGCMAVLinkLogPlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCMAVLinkLogPlayer *_t = static_cast<QGCMAVLinkLogPlayer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->_selectLogFileForPlayback(); break;
        case 1: _t->_playPauseToggle(); break;
        case 2: _t->_pause(); break;
        case 3: _t->_setPlayheadFromSlider((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->_logFileStats((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->_playbackStarted(); break;
        case 6: _t->_playbackPaused(); break;
        case 7: _t->_playbackPercentCompleteChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->_playbackError(); break;
        case 9: _t->_replayLinkDisconnected(); break;
        case 10: _t->_setCurrentLogTime((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QGCMAVLinkLogPlayer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QGCMAVLinkLogPlayer.data,
      qt_meta_data_QGCMAVLinkLogPlayer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCMAVLinkLogPlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCMAVLinkLogPlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCMAVLinkLogPlayer.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QGCMAVLinkLogPlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
