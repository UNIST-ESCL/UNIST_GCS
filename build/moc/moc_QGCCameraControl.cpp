/****************************************************************************
** Meta object code from reading C++ file 'QGCCameraControl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Camera/QGCCameraControl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCCameraControl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCCameraControl_t {
    QByteArrayData data[84];
    char stringdata0[1306];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCCameraControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCCameraControl_t qt_meta_stringdata_QGCCameraControl = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QGCCameraControl"
QT_MOC_LITERAL(1, 17, 11), // "infoChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 18), // "videoStatusChanged"
QT_MOC_LITERAL(4, 49, 18), // "photoStatusChanged"
QT_MOC_LITERAL(5, 68, 16), // "photoModeChanged"
QT_MOC_LITERAL(6, 85, 17), // "photoLapseChanged"
QT_MOC_LITERAL(7, 103, 22), // "photoLapseCountChanged"
QT_MOC_LITERAL(8, 126, 17), // "cameraModeChanged"
QT_MOC_LITERAL(9, 144, 21), // "activeSettingsChanged"
QT_MOC_LITERAL(10, 166, 18), // "storageFreeChanged"
QT_MOC_LITERAL(11, 185, 19), // "storageTotalChanged"
QT_MOC_LITERAL(12, 205, 9), // "dataReady"
QT_MOC_LITERAL(13, 215, 4), // "data"
QT_MOC_LITERAL(14, 220, 15), // "parametersReady"
QT_MOC_LITERAL(15, 236, 14), // "_initWhenReady"
QT_MOC_LITERAL(16, 251, 22), // "_requestCameraSettings"
QT_MOC_LITERAL(17, 274, 21), // "_requestAllParameters"
QT_MOC_LITERAL(18, 296, 20), // "_requestParamUpdates"
QT_MOC_LITERAL(19, 317, 21), // "_requestCaptureStatus"
QT_MOC_LITERAL(20, 339, 19), // "_requestStorageInfo"
QT_MOC_LITERAL(21, 359, 17), // "_downloadFinished"
QT_MOC_LITERAL(22, 377, 17), // "_mavCommandResult"
QT_MOC_LITERAL(23, 395, 9), // "vehicleId"
QT_MOC_LITERAL(24, 405, 9), // "component"
QT_MOC_LITERAL(25, 415, 7), // "command"
QT_MOC_LITERAL(26, 423, 6), // "result"
QT_MOC_LITERAL(27, 430, 20), // "noReponseFromVehicle"
QT_MOC_LITERAL(28, 451, 10), // "_dataReady"
QT_MOC_LITERAL(29, 462, 10), // "_paramDone"
QT_MOC_LITERAL(30, 473, 12), // "setVideoMode"
QT_MOC_LITERAL(31, 486, 12), // "setPhotoMode"
QT_MOC_LITERAL(32, 499, 10), // "toggleMode"
QT_MOC_LITERAL(33, 510, 9), // "takePhoto"
QT_MOC_LITERAL(34, 520, 13), // "stopTakePhoto"
QT_MOC_LITERAL(35, 534, 10), // "startVideo"
QT_MOC_LITERAL(36, 545, 9), // "stopVideo"
QT_MOC_LITERAL(37, 555, 11), // "toggleVideo"
QT_MOC_LITERAL(38, 567, 13), // "resetSettings"
QT_MOC_LITERAL(39, 581, 10), // "formatCard"
QT_MOC_LITERAL(40, 592, 2), // "id"
QT_MOC_LITERAL(41, 595, 7), // "version"
QT_MOC_LITERAL(42, 603, 9), // "modelName"
QT_MOC_LITERAL(43, 613, 6), // "vendor"
QT_MOC_LITERAL(44, 620, 15), // "firmwareVersion"
QT_MOC_LITERAL(45, 636, 11), // "focalLength"
QT_MOC_LITERAL(46, 648, 10), // "sensorSize"
QT_MOC_LITERAL(47, 659, 10), // "resolution"
QT_MOC_LITERAL(48, 670, 13), // "capturesVideo"
QT_MOC_LITERAL(49, 684, 14), // "capturesPhotos"
QT_MOC_LITERAL(50, 699, 8), // "hasModes"
QT_MOC_LITERAL(51, 708, 17), // "photosInVideoMode"
QT_MOC_LITERAL(52, 726, 16), // "videoInPhotoMode"
QT_MOC_LITERAL(53, 743, 7), // "isBasic"
QT_MOC_LITERAL(54, 751, 11), // "storageFree"
QT_MOC_LITERAL(55, 763, 14), // "storageFreeStr"
QT_MOC_LITERAL(56, 778, 12), // "storageTotal"
QT_MOC_LITERAL(57, 791, 14), // "activeSettings"
QT_MOC_LITERAL(58, 806, 11), // "videoStatus"
QT_MOC_LITERAL(59, 818, 11), // "VideoStatus"
QT_MOC_LITERAL(60, 830, 11), // "photoStatus"
QT_MOC_LITERAL(61, 842, 11), // "PhotoStatus"
QT_MOC_LITERAL(62, 854, 10), // "cameraMode"
QT_MOC_LITERAL(63, 865, 10), // "CameraMode"
QT_MOC_LITERAL(64, 876, 10), // "photoLapse"
QT_MOC_LITERAL(65, 887, 15), // "photoLapseCount"
QT_MOC_LITERAL(66, 903, 9), // "photoMode"
QT_MOC_LITERAL(67, 913, 9), // "PhotoMode"
QT_MOC_LITERAL(68, 923, 18), // "CAM_MODE_UNDEFINED"
QT_MOC_LITERAL(69, 942, 14), // "CAM_MODE_PHOTO"
QT_MOC_LITERAL(70, 957, 14), // "CAM_MODE_VIDEO"
QT_MOC_LITERAL(71, 972, 15), // "CAM_MODE_SURVEY"
QT_MOC_LITERAL(72, 988, 28), // "VIDEO_CAPTURE_STATUS_STOPPED"
QT_MOC_LITERAL(73, 1017, 28), // "VIDEO_CAPTURE_STATUS_RUNNING"
QT_MOC_LITERAL(74, 1046, 25), // "VIDEO_CAPTURE_STATUS_LAST"
QT_MOC_LITERAL(75, 1072, 30), // "VIDEO_CAPTURE_STATUS_UNDEFINED"
QT_MOC_LITERAL(76, 1103, 18), // "PHOTO_CAPTURE_IDLE"
QT_MOC_LITERAL(77, 1122, 25), // "PHOTO_CAPTURE_IN_PROGRESS"
QT_MOC_LITERAL(78, 1148, 27), // "PHOTO_CAPTURE_INTERVAL_IDLE"
QT_MOC_LITERAL(79, 1176, 34), // "PHOTO_CAPTURE_INTERVAL_IN_PRO..."
QT_MOC_LITERAL(80, 1211, 18), // "PHOTO_CAPTURE_LAST"
QT_MOC_LITERAL(81, 1230, 30), // "PHOTO_CAPTURE_STATUS_UNDEFINED"
QT_MOC_LITERAL(82, 1261, 20), // "PHOTO_CAPTURE_SINGLE"
QT_MOC_LITERAL(83, 1282, 23) // "PHOTO_CAPTURE_TIMELAPSE"

    },
    "QGCCameraControl\0infoChanged\0\0"
    "videoStatusChanged\0photoStatusChanged\0"
    "photoModeChanged\0photoLapseChanged\0"
    "photoLapseCountChanged\0cameraModeChanged\0"
    "activeSettingsChanged\0storageFreeChanged\0"
    "storageTotalChanged\0dataReady\0data\0"
    "parametersReady\0_initWhenReady\0"
    "_requestCameraSettings\0_requestAllParameters\0"
    "_requestParamUpdates\0_requestCaptureStatus\0"
    "_requestStorageInfo\0_downloadFinished\0"
    "_mavCommandResult\0vehicleId\0component\0"
    "command\0result\0noReponseFromVehicle\0"
    "_dataReady\0_paramDone\0setVideoMode\0"
    "setPhotoMode\0toggleMode\0takePhoto\0"
    "stopTakePhoto\0startVideo\0stopVideo\0"
    "toggleVideo\0resetSettings\0formatCard\0"
    "id\0version\0modelName\0vendor\0firmwareVersion\0"
    "focalLength\0sensorSize\0resolution\0"
    "capturesVideo\0capturesPhotos\0hasModes\0"
    "photosInVideoMode\0videoInPhotoMode\0"
    "isBasic\0storageFree\0storageFreeStr\0"
    "storageTotal\0activeSettings\0videoStatus\0"
    "VideoStatus\0photoStatus\0PhotoStatus\0"
    "cameraMode\0CameraMode\0photoLapse\0"
    "photoLapseCount\0photoMode\0PhotoMode\0"
    "CAM_MODE_UNDEFINED\0CAM_MODE_PHOTO\0"
    "CAM_MODE_VIDEO\0CAM_MODE_SURVEY\0"
    "VIDEO_CAPTURE_STATUS_STOPPED\0"
    "VIDEO_CAPTURE_STATUS_RUNNING\0"
    "VIDEO_CAPTURE_STATUS_LAST\0"
    "VIDEO_CAPTURE_STATUS_UNDEFINED\0"
    "PHOTO_CAPTURE_IDLE\0PHOTO_CAPTURE_IN_PROGRESS\0"
    "PHOTO_CAPTURE_INTERVAL_IDLE\0"
    "PHOTO_CAPTURE_INTERVAL_IN_PROGRESS\0"
    "PHOTO_CAPTURE_LAST\0PHOTO_CAPTURE_STATUS_UNDEFINED\0"
    "PHOTO_CAPTURE_SINGLE\0PHOTO_CAPTURE_TIMELAPSE"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCCameraControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
      23,  228, // properties
       4,  320, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  179,    2, 0x06 /* Public */,
       3,    0,  180,    2, 0x06 /* Public */,
       4,    0,  181,    2, 0x06 /* Public */,
       5,    0,  182,    2, 0x06 /* Public */,
       6,    0,  183,    2, 0x06 /* Public */,
       7,    0,  184,    2, 0x06 /* Public */,
       8,    0,  185,    2, 0x06 /* Public */,
       9,    0,  186,    2, 0x06 /* Public */,
      10,    0,  187,    2, 0x06 /* Public */,
      11,    0,  188,    2, 0x06 /* Public */,
      12,    1,  189,    2, 0x06 /* Public */,
      14,    0,  192,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    0,  193,    2, 0x09 /* Protected */,
      16,    0,  194,    2, 0x09 /* Protected */,
      17,    0,  195,    2, 0x09 /* Protected */,
      18,    0,  196,    2, 0x09 /* Protected */,
      19,    0,  197,    2, 0x09 /* Protected */,
      20,    0,  198,    2, 0x09 /* Protected */,
      21,    0,  199,    2, 0x09 /* Protected */,
      22,    5,  200,    2, 0x09 /* Protected */,
      28,    1,  211,    2, 0x09 /* Protected */,
      29,    0,  214,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      30,    0,  215,    2, 0x02 /* Public */,
      31,    0,  216,    2, 0x02 /* Public */,
      32,    0,  217,    2, 0x02 /* Public */,
      33,    0,  218,    2, 0x02 /* Public */,
      34,    0,  219,    2, 0x02 /* Public */,
      35,    0,  220,    2, 0x02 /* Public */,
      36,    0,  221,    2, 0x02 /* Public */,
      37,    0,  222,    2, 0x02 /* Public */,
      38,    0,  223,    2, 0x02 /* Public */,
      39,    1,  224,    2, 0x02 /* Public */,
      39,    0,  227,    2, 0x22 /* Public | MethodCloned */,

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
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   13,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   23,   24,   25,   26,   27,
    QMetaType::Void, QMetaType::QByteArray,   13,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   40,
    QMetaType::Void,

 // properties: name, type, flags
      41, QMetaType::Int, 0x00495001,
      42, QMetaType::QString, 0x00495001,
      43, QMetaType::QString, 0x00495001,
      44, QMetaType::QString, 0x00495001,
      45, QMetaType::QReal, 0x00495001,
      46, QMetaType::QSizeF, 0x00495001,
      47, QMetaType::QSize, 0x00495001,
      48, QMetaType::Bool, 0x00495001,
      49, QMetaType::Bool, 0x00495001,
      50, QMetaType::Bool, 0x00495001,
      51, QMetaType::Bool, 0x00495001,
      52, QMetaType::Bool, 0x00495001,
      53, QMetaType::Bool, 0x00495001,
      54, QMetaType::UInt, 0x00495001,
      55, QMetaType::QString, 0x00495001,
      56, QMetaType::UInt, 0x00495001,
      57, QMetaType::QStringList, 0x00495001,
      58, 0x80000000 | 59, 0x00495009,
      60, 0x80000000 | 61, 0x00495009,
      62, 0x80000000 | 63, 0x0049510b,
      64, QMetaType::QReal, 0x00495103,
      65, QMetaType::Int, 0x00495103,
      66, 0x80000000 | 67, 0x0049510b,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       8,
       8,
       9,
       7,
       1,
       2,
       6,
       4,
       5,
       3,

 // enums: name, flags, count, data
      63, 0x0,    4,  336,
      59, 0x0,    4,  344,
      61, 0x0,    6,  352,
      67, 0x0,    2,  364,

 // enum data: key, value
      68, uint(QGCCameraControl::CAM_MODE_UNDEFINED),
      69, uint(QGCCameraControl::CAM_MODE_PHOTO),
      70, uint(QGCCameraControl::CAM_MODE_VIDEO),
      71, uint(QGCCameraControl::CAM_MODE_SURVEY),
      72, uint(QGCCameraControl::VIDEO_CAPTURE_STATUS_STOPPED),
      73, uint(QGCCameraControl::VIDEO_CAPTURE_STATUS_RUNNING),
      74, uint(QGCCameraControl::VIDEO_CAPTURE_STATUS_LAST),
      75, uint(QGCCameraControl::VIDEO_CAPTURE_STATUS_UNDEFINED),
      76, uint(QGCCameraControl::PHOTO_CAPTURE_IDLE),
      77, uint(QGCCameraControl::PHOTO_CAPTURE_IN_PROGRESS),
      78, uint(QGCCameraControl::PHOTO_CAPTURE_INTERVAL_IDLE),
      79, uint(QGCCameraControl::PHOTO_CAPTURE_INTERVAL_IN_PROGRESS),
      80, uint(QGCCameraControl::PHOTO_CAPTURE_LAST),
      81, uint(QGCCameraControl::PHOTO_CAPTURE_STATUS_UNDEFINED),
      82, uint(QGCCameraControl::PHOTO_CAPTURE_SINGLE),
      83, uint(QGCCameraControl::PHOTO_CAPTURE_TIMELAPSE),

       0        // eod
};

void QGCCameraControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCCameraControl *_t = static_cast<QGCCameraControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->infoChanged(); break;
        case 1: _t->videoStatusChanged(); break;
        case 2: _t->photoStatusChanged(); break;
        case 3: _t->photoModeChanged(); break;
        case 4: _t->photoLapseChanged(); break;
        case 5: _t->photoLapseCountChanged(); break;
        case 6: _t->cameraModeChanged(); break;
        case 7: _t->activeSettingsChanged(); break;
        case 8: _t->storageFreeChanged(); break;
        case 9: _t->storageTotalChanged(); break;
        case 10: _t->dataReady((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 11: _t->parametersReady(); break;
        case 12: _t->_initWhenReady(); break;
        case 13: _t->_requestCameraSettings(); break;
        case 14: _t->_requestAllParameters(); break;
        case 15: _t->_requestParamUpdates(); break;
        case 16: _t->_requestCaptureStatus(); break;
        case 17: _t->_requestStorageInfo(); break;
        case 18: _t->_downloadFinished(); break;
        case 19: _t->_mavCommandResult((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 20: _t->_dataReady((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 21: _t->_paramDone(); break;
        case 22: _t->setVideoMode(); break;
        case 23: _t->setPhotoMode(); break;
        case 24: _t->toggleMode(); break;
        case 25: { bool _r = _t->takePhoto();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 26: { bool _r = _t->stopTakePhoto();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 27: { bool _r = _t->startVideo();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 28: { bool _r = _t->stopVideo();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 29: { bool _r = _t->toggleVideo();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 30: _t->resetSettings(); break;
        case 31: _t->formatCard((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->formatCard(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGCCameraControl::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::infoChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QGCCameraControl::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::videoStatusChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QGCCameraControl::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::photoStatusChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QGCCameraControl::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::photoModeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QGCCameraControl::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::photoLapseChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QGCCameraControl::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::photoLapseCountChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QGCCameraControl::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::cameraModeChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QGCCameraControl::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::activeSettingsChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QGCCameraControl::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::storageFreeChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QGCCameraControl::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::storageTotalChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QGCCameraControl::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::dataReady)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (QGCCameraControl::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCameraControl::parametersReady)) {
                *result = 11;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QGCCameraControl *_t = static_cast<QGCCameraControl *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->version(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->modelName(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->vendor(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->firmwareVersion(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->focalLength(); break;
        case 5: *reinterpret_cast< QSizeF*>(_v) = _t->sensorSize(); break;
        case 6: *reinterpret_cast< QSize*>(_v) = _t->resolution(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->capturesVideo(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->capturesPhotos(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->hasModes(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->photosInVideoMode(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->videoInPhotoMode(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->isBasic(); break;
        case 13: *reinterpret_cast< quint32*>(_v) = _t->storageFree(); break;
        case 14: *reinterpret_cast< QString*>(_v) = _t->storageFreeStr(); break;
        case 15: *reinterpret_cast< quint32*>(_v) = _t->storageTotal(); break;
        case 16: *reinterpret_cast< QStringList*>(_v) = _t->activeSettings(); break;
        case 17: *reinterpret_cast< VideoStatus*>(_v) = _t->videoStatus(); break;
        case 18: *reinterpret_cast< PhotoStatus*>(_v) = _t->photoStatus(); break;
        case 19: *reinterpret_cast< CameraMode*>(_v) = _t->cameraMode(); break;
        case 20: *reinterpret_cast< qreal*>(_v) = _t->photoLapse(); break;
        case 21: *reinterpret_cast< int*>(_v) = _t->photoLapseCount(); break;
        case 22: *reinterpret_cast< PhotoMode*>(_v) = _t->photoMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QGCCameraControl *_t = static_cast<QGCCameraControl *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 19: _t->setCameraMode(*reinterpret_cast< CameraMode*>(_v)); break;
        case 20: _t->setPhotoLapse(*reinterpret_cast< qreal*>(_v)); break;
        case 21: _t->setPhotoLapseCount(*reinterpret_cast< int*>(_v)); break;
        case 22: _t->setPhotoMode(*reinterpret_cast< PhotoMode*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QGCCameraControl::staticMetaObject = {
    { &FactGroup::staticMetaObject, qt_meta_stringdata_QGCCameraControl.data,
      qt_meta_data_QGCCameraControl,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCCameraControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCCameraControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCCameraControl.stringdata0))
        return static_cast<void*>(this);
    return FactGroup::qt_metacast(_clname);
}

int QGCCameraControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 33)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 33;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 23;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QGCCameraControl::infoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGCCameraControl::videoStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QGCCameraControl::photoStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QGCCameraControl::photoModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QGCCameraControl::photoLapseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QGCCameraControl::photoLapseCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QGCCameraControl::cameraModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QGCCameraControl::activeSettingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QGCCameraControl::storageFreeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QGCCameraControl::storageTotalChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void QGCCameraControl::dataReady(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QGCCameraControl::parametersReady()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
