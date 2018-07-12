/****************************************************************************
** Meta object code from reading C++ file 'MAVLinkLogManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Vehicle/MAVLinkLogManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MAVLinkLogManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MAVLinkLogFiles_t {
    QByteArrayData data[15];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MAVLinkLogFiles_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MAVLinkLogFiles_t qt_meta_stringdata_MAVLinkLogFiles = {
    {
QT_MOC_LITERAL(0, 0, 15), // "MAVLinkLogFiles"
QT_MOC_LITERAL(1, 16, 11), // "sizeChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 15), // "selectedChanged"
QT_MOC_LITERAL(4, 45, 16), // "uploadingChanged"
QT_MOC_LITERAL(5, 62, 15), // "progressChanged"
QT_MOC_LITERAL(6, 78, 14), // "writingChanged"
QT_MOC_LITERAL(7, 93, 15), // "uploadedChanged"
QT_MOC_LITERAL(8, 109, 4), // "name"
QT_MOC_LITERAL(9, 114, 4), // "size"
QT_MOC_LITERAL(10, 119, 8), // "selected"
QT_MOC_LITERAL(11, 128, 9), // "uploading"
QT_MOC_LITERAL(12, 138, 8), // "progress"
QT_MOC_LITERAL(13, 147, 7), // "writing"
QT_MOC_LITERAL(14, 155, 8) // "uploaded"

    },
    "MAVLinkLogFiles\0sizeChanged\0\0"
    "selectedChanged\0uploadingChanged\0"
    "progressChanged\0writingChanged\0"
    "uploadedChanged\0name\0size\0selected\0"
    "uploading\0progress\0writing\0uploaded"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MAVLinkLogFiles[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       7,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,
       6,    0,   48,    2, 0x06 /* Public */,
       7,    0,   49,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::QString, 0x00095401,
       9, QMetaType::UInt, 0x00495001,
      10, QMetaType::Bool, 0x00495103,
      11, QMetaType::Bool, 0x00495001,
      12, QMetaType::QReal, 0x00495001,
      13, QMetaType::Bool, 0x00495001,
      14, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       1,
       2,
       3,
       4,
       5,

       0        // eod
};

void MAVLinkLogFiles::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MAVLinkLogFiles *_t = static_cast<MAVLinkLogFiles *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sizeChanged(); break;
        case 1: _t->selectedChanged(); break;
        case 2: _t->uploadingChanged(); break;
        case 3: _t->progressChanged(); break;
        case 4: _t->writingChanged(); break;
        case 5: _t->uploadedChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MAVLinkLogFiles::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkLogFiles::sizeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MAVLinkLogFiles::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkLogFiles::selectedChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MAVLinkLogFiles::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkLogFiles::uploadingChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MAVLinkLogFiles::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkLogFiles::progressChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MAVLinkLogFiles::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkLogFiles::writingChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (MAVLinkLogFiles::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkLogFiles::uploadedChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        MAVLinkLogFiles *_t = static_cast<MAVLinkLogFiles *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< quint32*>(_v) = _t->size(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->selected(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->uploading(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->progress(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->writing(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->uploaded(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        MAVLinkLogFiles *_t = static_cast<MAVLinkLogFiles *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setSelected(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject MAVLinkLogFiles::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MAVLinkLogFiles.data,
      qt_meta_data_MAVLinkLogFiles,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MAVLinkLogFiles::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MAVLinkLogFiles::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MAVLinkLogFiles.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MAVLinkLogFiles::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MAVLinkLogFiles::sizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MAVLinkLogFiles::selectedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MAVLinkLogFiles::uploadingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MAVLinkLogFiles::progressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MAVLinkLogFiles::writingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MAVLinkLogFiles::uploadedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
struct qt_meta_stringdata_MAVLinkLogManager_t {
    QByteArrayData data[68];
    char stringdata0[905];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MAVLinkLogManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MAVLinkLogManager_t qt_meta_stringdata_MAVLinkLogManager = {
    {
QT_MOC_LITERAL(0, 0, 17), // "MAVLinkLogManager"
QT_MOC_LITERAL(1, 18, 19), // "emailAddressChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 18), // "descriptionChanged"
QT_MOC_LITERAL(4, 58, 16), // "uploadURLChanged"
QT_MOC_LITERAL(5, 75, 15), // "feedbackChanged"
QT_MOC_LITERAL(6, 91, 23), // "enableAutoUploadChanged"
QT_MOC_LITERAL(7, 115, 22), // "enableAutoStartChanged"
QT_MOC_LITERAL(8, 138, 15), // "logFilesChanged"
QT_MOC_LITERAL(9, 154, 20), // "selectedCountChanged"
QT_MOC_LITERAL(10, 175, 16), // "uploadingChanged"
QT_MOC_LITERAL(11, 192, 9), // "readyRead"
QT_MOC_LITERAL(12, 202, 4), // "data"
QT_MOC_LITERAL(13, 207, 6), // "failed"
QT_MOC_LITERAL(14, 214, 7), // "succeed"
QT_MOC_LITERAL(15, 222, 11), // "abortUpload"
QT_MOC_LITERAL(16, 234, 17), // "logRunningChanged"
QT_MOC_LITERAL(17, 252, 18), // "canStartLogChanged"
QT_MOC_LITERAL(18, 271, 24), // "deleteAfterUploadChanged"
QT_MOC_LITERAL(19, 296, 16), // "windSpeedChanged"
QT_MOC_LITERAL(20, 313, 13), // "ratingChanged"
QT_MOC_LITERAL(21, 327, 15), // "videoURLChanged"
QT_MOC_LITERAL(22, 343, 16), // "publicLogChanged"
QT_MOC_LITERAL(23, 360, 15), // "_uploadFinished"
QT_MOC_LITERAL(24, 376, 14), // "_dataAvailable"
QT_MOC_LITERAL(25, 391, 15), // "_uploadProgress"
QT_MOC_LITERAL(26, 407, 9), // "bytesSent"
QT_MOC_LITERAL(27, 417, 10), // "bytesTotal"
QT_MOC_LITERAL(28, 428, 21), // "_activeVehicleChanged"
QT_MOC_LITERAL(29, 450, 8), // "Vehicle*"
QT_MOC_LITERAL(30, 459, 7), // "vehicle"
QT_MOC_LITERAL(31, 467, 15), // "_mavlinkLogData"
QT_MOC_LITERAL(32, 483, 7), // "uint8_t"
QT_MOC_LITERAL(33, 491, 13), // "target_system"
QT_MOC_LITERAL(34, 505, 16), // "target_component"
QT_MOC_LITERAL(35, 522, 8), // "uint16_t"
QT_MOC_LITERAL(36, 531, 8), // "sequence"
QT_MOC_LITERAL(37, 540, 13), // "first_message"
QT_MOC_LITERAL(38, 554, 5), // "acked"
QT_MOC_LITERAL(39, 560, 13), // "_armedChanged"
QT_MOC_LITERAL(40, 574, 5), // "armed"
QT_MOC_LITERAL(41, 580, 17), // "_mavCommandResult"
QT_MOC_LITERAL(42, 598, 9), // "vehicleId"
QT_MOC_LITERAL(43, 608, 9), // "component"
QT_MOC_LITERAL(44, 618, 7), // "command"
QT_MOC_LITERAL(45, 626, 6), // "result"
QT_MOC_LITERAL(46, 633, 20), // "noReponseFromVehicle"
QT_MOC_LITERAL(47, 654, 9), // "uploadLog"
QT_MOC_LITERAL(48, 664, 9), // "deleteLog"
QT_MOC_LITERAL(49, 674, 12), // "cancelUpload"
QT_MOC_LITERAL(50, 687, 12), // "startLogging"
QT_MOC_LITERAL(51, 700, 11), // "stopLogging"
QT_MOC_LITERAL(52, 712, 12), // "emailAddress"
QT_MOC_LITERAL(53, 725, 11), // "description"
QT_MOC_LITERAL(54, 737, 9), // "uploadURL"
QT_MOC_LITERAL(55, 747, 8), // "feedback"
QT_MOC_LITERAL(56, 756, 8), // "videoURL"
QT_MOC_LITERAL(57, 765, 16), // "enableAutoUpload"
QT_MOC_LITERAL(58, 782, 15), // "enableAutoStart"
QT_MOC_LITERAL(59, 798, 17), // "deleteAfterUpload"
QT_MOC_LITERAL(60, 816, 9), // "publicLog"
QT_MOC_LITERAL(61, 826, 9), // "uploading"
QT_MOC_LITERAL(62, 836, 10), // "logRunning"
QT_MOC_LITERAL(63, 847, 11), // "canStartLog"
QT_MOC_LITERAL(64, 859, 8), // "logFiles"
QT_MOC_LITERAL(65, 868, 19), // "QmlObjectListModel*"
QT_MOC_LITERAL(66, 888, 9), // "windSpeed"
QT_MOC_LITERAL(67, 898, 6) // "rating"

    },
    "MAVLinkLogManager\0emailAddressChanged\0"
    "\0descriptionChanged\0uploadURLChanged\0"
    "feedbackChanged\0enableAutoUploadChanged\0"
    "enableAutoStartChanged\0logFilesChanged\0"
    "selectedCountChanged\0uploadingChanged\0"
    "readyRead\0data\0failed\0succeed\0abortUpload\0"
    "logRunningChanged\0canStartLogChanged\0"
    "deleteAfterUploadChanged\0windSpeedChanged\0"
    "ratingChanged\0videoURLChanged\0"
    "publicLogChanged\0_uploadFinished\0"
    "_dataAvailable\0_uploadProgress\0bytesSent\0"
    "bytesTotal\0_activeVehicleChanged\0"
    "Vehicle*\0vehicle\0_mavlinkLogData\0"
    "uint8_t\0target_system\0target_component\0"
    "uint16_t\0sequence\0first_message\0acked\0"
    "_armedChanged\0armed\0_mavCommandResult\0"
    "vehicleId\0component\0command\0result\0"
    "noReponseFromVehicle\0uploadLog\0deleteLog\0"
    "cancelUpload\0startLogging\0stopLogging\0"
    "emailAddress\0description\0uploadURL\0"
    "feedback\0videoURL\0enableAutoUpload\0"
    "enableAutoStart\0deleteAfterUpload\0"
    "publicLog\0uploading\0logRunning\0"
    "canStartLog\0logFiles\0QmlObjectListModel*\0"
    "windSpeed\0rating"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MAVLinkLogManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
      15,  240, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      20,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  174,    2, 0x06 /* Public */,
       3,    0,  175,    2, 0x06 /* Public */,
       4,    0,  176,    2, 0x06 /* Public */,
       5,    0,  177,    2, 0x06 /* Public */,
       6,    0,  178,    2, 0x06 /* Public */,
       7,    0,  179,    2, 0x06 /* Public */,
       8,    0,  180,    2, 0x06 /* Public */,
       9,    0,  181,    2, 0x06 /* Public */,
      10,    0,  182,    2, 0x06 /* Public */,
      11,    1,  183,    2, 0x06 /* Public */,
      13,    0,  186,    2, 0x06 /* Public */,
      14,    0,  187,    2, 0x06 /* Public */,
      15,    0,  188,    2, 0x06 /* Public */,
      16,    0,  189,    2, 0x06 /* Public */,
      17,    0,  190,    2, 0x06 /* Public */,
      18,    0,  191,    2, 0x06 /* Public */,
      19,    0,  192,    2, 0x06 /* Public */,
      20,    0,  193,    2, 0x06 /* Public */,
      21,    0,  194,    2, 0x06 /* Public */,
      22,    0,  195,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      23,    0,  196,    2, 0x08 /* Private */,
      24,    0,  197,    2, 0x08 /* Private */,
      25,    2,  198,    2, 0x08 /* Private */,
      28,    1,  203,    2, 0x08 /* Private */,
      31,    7,  206,    2, 0x08 /* Private */,
      39,    1,  221,    2, 0x08 /* Private */,
      41,    5,  224,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      47,    0,  235,    2, 0x02 /* Public */,
      48,    0,  236,    2, 0x02 /* Public */,
      49,    0,  237,    2, 0x02 /* Public */,
      50,    0,  238,    2, 0x02 /* Public */,
      51,    0,  239,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   26,   27,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, 0x80000000 | 29, 0x80000000 | 32, 0x80000000 | 32, 0x80000000 | 35, 0x80000000 | 32, QMetaType::QByteArray, QMetaType::Bool,   30,   33,   34,   36,   37,   12,   38,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   42,   43,   44,   45,   46,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      52, QMetaType::QString, 0x00495103,
      53, QMetaType::QString, 0x00495103,
      54, QMetaType::QString, 0x00495103,
      55, QMetaType::QString, 0x00495103,
      56, QMetaType::QString, 0x00495103,
      57, QMetaType::Bool, 0x00495103,
      58, QMetaType::Bool, 0x00495103,
      59, QMetaType::Bool, 0x00495103,
      60, QMetaType::Bool, 0x00495103,
      61, QMetaType::Bool, 0x00495001,
      62, QMetaType::Bool, 0x00495001,
      63, QMetaType::Bool, 0x00495001,
      64, 0x80000000 | 65, 0x00495009,
      66, QMetaType::Int, 0x00495103,
      67, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
      18,
       4,
       5,
      15,
      19,
       8,
      13,
      14,
       6,
      16,
      17,

       0        // eod
};

void MAVLinkLogManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MAVLinkLogManager *_t = static_cast<MAVLinkLogManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->emailAddressChanged(); break;
        case 1: _t->descriptionChanged(); break;
        case 2: _t->uploadURLChanged(); break;
        case 3: _t->feedbackChanged(); break;
        case 4: _t->enableAutoUploadChanged(); break;
        case 5: _t->enableAutoStartChanged(); break;
        case 6: _t->logFilesChanged(); break;
        case 7: _t->selectedCountChanged(); break;
        case 8: _t->uploadingChanged(); break;
        case 9: _t->readyRead((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 10: _t->failed(); break;
        case 11: _t->succeed(); break;
        case 12: _t->abortUpload(); break;
        case 13: _t->logRunningChanged(); break;
        case 14: _t->canStartLogChanged(); break;
        case 15: _t->deleteAfterUploadChanged(); break;
        case 16: _t->windSpeedChanged(); break;
        case 17: _t->ratingChanged(); break;
        case 18: _t->videoURLChanged(); break;
        case 19: _t->publicLogChanged(); break;
        case 20: _t->_uploadFinished(); break;
        case 21: _t->_dataAvailable(); break;
        case 22: _t->_uploadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 23: _t->_activeVehicleChanged((*reinterpret_cast< Vehicle*(*)>(_a[1]))); break;
        case 24: _t->_mavlinkLogData((*reinterpret_cast< Vehicle*(*)>(_a[1])),(*reinterpret_cast< uint8_t(*)>(_a[2])),(*reinterpret_cast< uint8_t(*)>(_a[3])),(*reinterpret_cast< uint16_t(*)>(_a[4])),(*reinterpret_cast< uint8_t(*)>(_a[5])),(*reinterpret_cast< QByteArray(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7]))); break;
        case 25: _t->_armedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->_mavCommandResult((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 27: _t->uploadLog(); break;
        case 28: _t->deleteLog(); break;
        case 29: _t->cancelUpload(); break;
        case 30: _t->startLogging(); break;
        case 31: _t->stopLogging(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vehicle* >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vehicle* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MAVLinkLogManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkLogManager::emailAddressChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MAVLinkLogManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkLogManager::descriptionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MAVLinkLogManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkLogManager::uploadURLChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MAVLinkLogManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkLogManager::feedbackChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MAVLinkLogManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkLogManager::enableAutoUploadChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (MAVLinkLogManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkLogManager::enableAutoStartChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (MAVLinkLogManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkLogManager::logFilesChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (MAVLinkLogManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkLogManager::selectedCountChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (MAVLinkLogManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkLogManager::uploadingChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (MAVLinkLogManager::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkLogManager::readyRead)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (MAVLinkLogManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkLogManager::failed)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (MAVLinkLogManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkLogManager::succeed)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (MAVLinkLogManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkLogManager::abortUpload)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (MAVLinkLogManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkLogManager::logRunningChanged)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (MAVLinkLogManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkLogManager::canStartLogChanged)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (MAVLinkLogManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkLogManager::deleteAfterUploadChanged)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (MAVLinkLogManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkLogManager::windSpeedChanged)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (MAVLinkLogManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkLogManager::ratingChanged)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (MAVLinkLogManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkLogManager::videoURLChanged)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (MAVLinkLogManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MAVLinkLogManager::publicLogChanged)) {
                *result = 19;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 12:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        MAVLinkLogManager *_t = static_cast<MAVLinkLogManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->emailAddress(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->description(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->uploadURL(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->feedback(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->videoURL(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->enableAutoUpload(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->enableAutoStart(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->deleteAfterUpload(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->publicLog(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->uploading(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->logRunning(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->canStartLog(); break;
        case 12: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->logFiles(); break;
        case 13: *reinterpret_cast< int*>(_v) = _t->windSpeed(); break;
        case 14: *reinterpret_cast< QString*>(_v) = _t->rating(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        MAVLinkLogManager *_t = static_cast<MAVLinkLogManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEmailAddress(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setDescription(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setUploadURL(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setFeedback(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setVideoURL(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setEnableAutoUpload(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setEnableAutoStart(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setDeleteAfterUpload(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setPublicLog(*reinterpret_cast< bool*>(_v)); break;
        case 13: _t->setWindSpeed(*reinterpret_cast< int*>(_v)); break;
        case 14: _t->setRating(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject MAVLinkLogManager::staticMetaObject = {
    { &QGCTool::staticMetaObject, qt_meta_stringdata_MAVLinkLogManager.data,
      qt_meta_data_MAVLinkLogManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MAVLinkLogManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MAVLinkLogManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MAVLinkLogManager.stringdata0))
        return static_cast<void*>(this);
    return QGCTool::qt_metacast(_clname);
}

int MAVLinkLogManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 15;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MAVLinkLogManager::emailAddressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MAVLinkLogManager::descriptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MAVLinkLogManager::uploadURLChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MAVLinkLogManager::feedbackChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MAVLinkLogManager::enableAutoUploadChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MAVLinkLogManager::enableAutoStartChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void MAVLinkLogManager::logFilesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void MAVLinkLogManager::selectedCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void MAVLinkLogManager::uploadingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void MAVLinkLogManager::readyRead(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MAVLinkLogManager::failed()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void MAVLinkLogManager::succeed()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void MAVLinkLogManager::abortUpload()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void MAVLinkLogManager::logRunningChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void MAVLinkLogManager::canStartLogChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void MAVLinkLogManager::deleteAfterUploadChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void MAVLinkLogManager::windSpeedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void MAVLinkLogManager::ratingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void MAVLinkLogManager::videoURLChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void MAVLinkLogManager::publicLogChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
