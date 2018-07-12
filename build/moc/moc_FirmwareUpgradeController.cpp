/****************************************************************************
** Meta object code from reading C++ file 'FirmwareUpgradeController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/VehicleSetup/FirmwareUpgradeController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FirmwareUpgradeController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FirmwareUpgradeController_t {
    QByteArrayData data[90];
    char stringdata0[1353];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FirmwareUpgradeController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FirmwareUpgradeController_t qt_meta_stringdata_FirmwareUpgradeController = {
    {
QT_MOC_LITERAL(0, 0, 25), // "FirmwareUpgradeController"
QT_MOC_LITERAL(1, 26, 10), // "boardFound"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 12), // "noBoardFound"
QT_MOC_LITERAL(4, 51, 9), // "boardGone"
QT_MOC_LITERAL(5, 61, 13), // "flashComplete"
QT_MOC_LITERAL(6, 75, 14), // "flashCancelled"
QT_MOC_LITERAL(7, 90, 5), // "error"
QT_MOC_LITERAL(8, 96, 27), // "selectedFirmwareTypeChanged"
QT_MOC_LITERAL(9, 124, 14), // "FirmwareType_t"
QT_MOC_LITERAL(10, 139, 12), // "firmwareType"
QT_MOC_LITERAL(11, 152, 27), // "apmAvailableVersionsChanged"
QT_MOC_LITERAL(12, 180, 23), // "px4StableVersionChanged"
QT_MOC_LITERAL(13, 204, 16), // "px4StableVersion"
QT_MOC_LITERAL(14, 221, 21), // "px4BetaVersionChanged"
QT_MOC_LITERAL(15, 243, 14), // "px4BetaVersion"
QT_MOC_LITERAL(16, 258, 25), // "_firmwareDownloadProgress"
QT_MOC_LITERAL(17, 284, 4), // "curr"
QT_MOC_LITERAL(18, 289, 5), // "total"
QT_MOC_LITERAL(19, 295, 25), // "_firmwareDownloadFinished"
QT_MOC_LITERAL(20, 321, 10), // "remoteFile"
QT_MOC_LITERAL(21, 332, 9), // "localFile"
QT_MOC_LITERAL(22, 342, 22), // "_firmwareDownloadError"
QT_MOC_LITERAL(23, 365, 8), // "errorMsg"
QT_MOC_LITERAL(24, 374, 11), // "_foundBoard"
QT_MOC_LITERAL(25, 386, 12), // "firstAttempt"
QT_MOC_LITERAL(26, 399, 15), // "QSerialPortInfo"
QT_MOC_LITERAL(27, 415, 8), // "portInfo"
QT_MOC_LITERAL(28, 424, 9), // "boardType"
QT_MOC_LITERAL(29, 434, 9), // "boardName"
QT_MOC_LITERAL(30, 444, 13), // "_noBoardFound"
QT_MOC_LITERAL(31, 458, 10), // "_boardGone"
QT_MOC_LITERAL(32, 469, 16), // "_foundBootloader"
QT_MOC_LITERAL(33, 486, 17), // "bootloaderVersion"
QT_MOC_LITERAL(34, 504, 7), // "boardID"
QT_MOC_LITERAL(35, 512, 9), // "flashSize"
QT_MOC_LITERAL(36, 522, 6), // "_error"
QT_MOC_LITERAL(37, 529, 11), // "errorString"
QT_MOC_LITERAL(38, 541, 7), // "_status"
QT_MOC_LITERAL(39, 549, 12), // "statusString"
QT_MOC_LITERAL(40, 562, 21), // "_bootloaderSyncFailed"
QT_MOC_LITERAL(41, 584, 14), // "_flashComplete"
QT_MOC_LITERAL(42, 599, 15), // "_updateProgress"
QT_MOC_LITERAL(43, 615, 13), // "_eraseStarted"
QT_MOC_LITERAL(44, 629, 14), // "_eraseComplete"
QT_MOC_LITERAL(45, 644, 18), // "_eraseProgressTick"
QT_MOC_LITERAL(46, 663, 27), // "_apmVersionDownloadFinished"
QT_MOC_LITERAL(47, 691, 34), // "_px4ReleasesGithubDownloadFin..."
QT_MOC_LITERAL(48, 726, 31), // "_px4ReleasesGithubDownloadError"
QT_MOC_LITERAL(49, 758, 16), // "startBoardSearch"
QT_MOC_LITERAL(50, 775, 6), // "cancel"
QT_MOC_LITERAL(51, 782, 5), // "flash"
QT_MOC_LITERAL(52, 788, 20), // "AutoPilotStackType_t"
QT_MOC_LITERAL(53, 809, 9), // "stackType"
QT_MOC_LITERAL(54, 819, 21), // "FirmwareVehicleType_t"
QT_MOC_LITERAL(55, 841, 11), // "vehicleType"
QT_MOC_LITERAL(56, 853, 23), // "flashSingleFirmwareMode"
QT_MOC_LITERAL(57, 877, 27), // "vehicleTypeFromVersionIndex"
QT_MOC_LITERAL(58, 905, 5), // "index"
QT_MOC_LITERAL(59, 911, 9), // "boardPort"
QT_MOC_LITERAL(60, 921, 16), // "boardDescription"
QT_MOC_LITERAL(61, 938, 12), // "pixhawkBoard"
QT_MOC_LITERAL(62, 951, 12), // "px4FlowBoard"
QT_MOC_LITERAL(63, 964, 20), // "selectedFirmwareType"
QT_MOC_LITERAL(64, 985, 20), // "apmAvailableVersions"
QT_MOC_LITERAL(65, 1006, 9), // "statusLog"
QT_MOC_LITERAL(66, 1016, 11), // "QQuickItem*"
QT_MOC_LITERAL(67, 1028, 11), // "progressBar"
QT_MOC_LITERAL(68, 1040, 17), // "AutoPilotStackPX4"
QT_MOC_LITERAL(69, 1058, 17), // "AutoPilotStackAPM"
QT_MOC_LITERAL(70, 1076, 10), // "PX4FlowPX4"
QT_MOC_LITERAL(71, 1087, 10), // "PX4FlowAPM"
QT_MOC_LITERAL(72, 1098, 12), // "ThreeDRRadio"
QT_MOC_LITERAL(73, 1111, 18), // "SingleFirmwareMode"
QT_MOC_LITERAL(74, 1130, 14), // "StableFirmware"
QT_MOC_LITERAL(75, 1145, 12), // "BetaFirmware"
QT_MOC_LITERAL(76, 1158, 17), // "DeveloperFirmware"
QT_MOC_LITERAL(77, 1176, 14), // "CustomFirmware"
QT_MOC_LITERAL(78, 1191, 12), // "QuadFirmware"
QT_MOC_LITERAL(79, 1204, 10), // "X8Firmware"
QT_MOC_LITERAL(80, 1215, 12), // "HexaFirmware"
QT_MOC_LITERAL(81, 1228, 12), // "OctoFirmware"
QT_MOC_LITERAL(82, 1241, 9), // "YFirmware"
QT_MOC_LITERAL(83, 1251, 10), // "Y6Firmware"
QT_MOC_LITERAL(84, 1262, 12), // "HeliFirmware"
QT_MOC_LITERAL(85, 1275, 14), // "CopterFirmware"
QT_MOC_LITERAL(86, 1290, 13), // "PlaneFirmware"
QT_MOC_LITERAL(87, 1304, 13), // "RoverFirmware"
QT_MOC_LITERAL(88, 1318, 11), // "SubFirmware"
QT_MOC_LITERAL(89, 1330, 22) // "DefaultVehicleFirmware"

    },
    "FirmwareUpgradeController\0boardFound\0"
    "\0noBoardFound\0boardGone\0flashComplete\0"
    "flashCancelled\0error\0selectedFirmwareTypeChanged\0"
    "FirmwareType_t\0firmwareType\0"
    "apmAvailableVersionsChanged\0"
    "px4StableVersionChanged\0px4StableVersion\0"
    "px4BetaVersionChanged\0px4BetaVersion\0"
    "_firmwareDownloadProgress\0curr\0total\0"
    "_firmwareDownloadFinished\0remoteFile\0"
    "localFile\0_firmwareDownloadError\0"
    "errorMsg\0_foundBoard\0firstAttempt\0"
    "QSerialPortInfo\0portInfo\0boardType\0"
    "boardName\0_noBoardFound\0_boardGone\0"
    "_foundBootloader\0bootloaderVersion\0"
    "boardID\0flashSize\0_error\0errorString\0"
    "_status\0statusString\0_bootloaderSyncFailed\0"
    "_flashComplete\0_updateProgress\0"
    "_eraseStarted\0_eraseComplete\0"
    "_eraseProgressTick\0_apmVersionDownloadFinished\0"
    "_px4ReleasesGithubDownloadFinished\0"
    "_px4ReleasesGithubDownloadError\0"
    "startBoardSearch\0cancel\0flash\0"
    "AutoPilotStackType_t\0stackType\0"
    "FirmwareVehicleType_t\0vehicleType\0"
    "flashSingleFirmwareMode\0"
    "vehicleTypeFromVersionIndex\0index\0"
    "boardPort\0boardDescription\0pixhawkBoard\0"
    "px4FlowBoard\0selectedFirmwareType\0"
    "apmAvailableVersions\0statusLog\0"
    "QQuickItem*\0progressBar\0AutoPilotStackPX4\0"
    "AutoPilotStackAPM\0PX4FlowPX4\0PX4FlowAPM\0"
    "ThreeDRRadio\0SingleFirmwareMode\0"
    "StableFirmware\0BetaFirmware\0"
    "DeveloperFirmware\0CustomFirmware\0"
    "QuadFirmware\0X8Firmware\0HexaFirmware\0"
    "OctoFirmware\0YFirmware\0Y6Firmware\0"
    "HeliFirmware\0CopterFirmware\0PlaneFirmware\0"
    "RoverFirmware\0SubFirmware\0"
    "DefaultVehicleFirmware"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FirmwareUpgradeController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
      11,  288, // properties
       3,  332, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  189,    2, 0x06 /* Public */,
       3,    0,  190,    2, 0x06 /* Public */,
       4,    0,  191,    2, 0x06 /* Public */,
       5,    0,  192,    2, 0x06 /* Public */,
       6,    0,  193,    2, 0x06 /* Public */,
       7,    0,  194,    2, 0x06 /* Public */,
       8,    1,  195,    2, 0x06 /* Public */,
      11,    0,  198,    2, 0x06 /* Public */,
      12,    1,  199,    2, 0x06 /* Public */,
      14,    1,  202,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    2,  205,    2, 0x08 /* Private */,
      19,    2,  210,    2, 0x08 /* Private */,
      22,    1,  215,    2, 0x08 /* Private */,
      24,    4,  218,    2, 0x08 /* Private */,
      30,    0,  227,    2, 0x08 /* Private */,
      31,    0,  228,    2, 0x08 /* Private */,
      32,    3,  229,    2, 0x08 /* Private */,
      36,    1,  236,    2, 0x08 /* Private */,
      38,    1,  239,    2, 0x08 /* Private */,
      40,    0,  242,    2, 0x08 /* Private */,
      41,    0,  243,    2, 0x08 /* Private */,
      42,    2,  244,    2, 0x08 /* Private */,
      43,    0,  249,    2, 0x08 /* Private */,
      44,    0,  250,    2, 0x08 /* Private */,
      45,    0,  251,    2, 0x08 /* Private */,
      46,    2,  252,    2, 0x08 /* Private */,
      47,    2,  257,    2, 0x08 /* Private */,
      48,    1,  262,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      49,    0,  265,    2, 0x02 /* Public */,
      50,    0,  266,    2, 0x02 /* Public */,
      51,    3,  267,    2, 0x02 /* Public */,
      51,    2,  274,    2, 0x22 /* Public | MethodCloned */,
      51,    1,  279,    2, 0x22 /* Public | MethodCloned */,
      56,    1,  282,    2, 0x02 /* Public */,
      57,    1,  285,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   15,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   17,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   20,   21,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 26, QMetaType::Int, QMetaType::QString,   25,   27,   28,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   33,   34,   35,
    QMetaType::Void, QMetaType::QString,   37,
    QMetaType::Void, QMetaType::QString,   39,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   17,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   20,   21,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   20,   21,
    QMetaType::Void, QMetaType::QString,   23,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 52, 0x80000000 | 9, 0x80000000 | 54,   53,   10,   55,
    QMetaType::Void, 0x80000000 | 52, 0x80000000 | 9,   53,   10,
    QMetaType::Void, 0x80000000 | 52,   53,
    QMetaType::Void, 0x80000000 | 9,   10,
    0x80000000 | 54, QMetaType::Int,   58,

 // properties: name, type, flags
      59, QMetaType::QString, 0x00495001,
      60, QMetaType::QString, 0x00495001,
      28, QMetaType::QString, 0x00495003,
      61, QMetaType::Bool, 0x00495001,
      62, QMetaType::Bool, 0x00495001,
      63, 0x80000000 | 9, 0x0049510b,
      64, QMetaType::QStringList, 0x00495001,
      13, QMetaType::QString, 0x00495001,
      15, QMetaType::QString, 0x00495001,
      65, 0x80000000 | 66, 0x0009510b,
      67, 0x80000000 | 66, 0x0009510b,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       6,
       7,
       8,
       9,
       0,
       0,

 // enums: name, flags, count, data
      52, 0x0,    6,  344,
       9, 0x0,    4,  356,
      54, 0x0,   12,  364,

 // enum data: key, value
      68, uint(FirmwareUpgradeController::AutoPilotStackPX4),
      69, uint(FirmwareUpgradeController::AutoPilotStackAPM),
      70, uint(FirmwareUpgradeController::PX4FlowPX4),
      71, uint(FirmwareUpgradeController::PX4FlowAPM),
      72, uint(FirmwareUpgradeController::ThreeDRRadio),
      73, uint(FirmwareUpgradeController::SingleFirmwareMode),
      74, uint(FirmwareUpgradeController::StableFirmware),
      75, uint(FirmwareUpgradeController::BetaFirmware),
      76, uint(FirmwareUpgradeController::DeveloperFirmware),
      77, uint(FirmwareUpgradeController::CustomFirmware),
      78, uint(FirmwareUpgradeController::QuadFirmware),
      79, uint(FirmwareUpgradeController::X8Firmware),
      80, uint(FirmwareUpgradeController::HexaFirmware),
      81, uint(FirmwareUpgradeController::OctoFirmware),
      82, uint(FirmwareUpgradeController::YFirmware),
      83, uint(FirmwareUpgradeController::Y6Firmware),
      84, uint(FirmwareUpgradeController::HeliFirmware),
      85, uint(FirmwareUpgradeController::CopterFirmware),
      86, uint(FirmwareUpgradeController::PlaneFirmware),
      87, uint(FirmwareUpgradeController::RoverFirmware),
      88, uint(FirmwareUpgradeController::SubFirmware),
      89, uint(FirmwareUpgradeController::DefaultVehicleFirmware),

       0        // eod
};

void FirmwareUpgradeController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FirmwareUpgradeController *_t = static_cast<FirmwareUpgradeController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->boardFound(); break;
        case 1: _t->noBoardFound(); break;
        case 2: _t->boardGone(); break;
        case 3: _t->flashComplete(); break;
        case 4: _t->flashCancelled(); break;
        case 5: _t->error(); break;
        case 6: _t->selectedFirmwareTypeChanged((*reinterpret_cast< FirmwareType_t(*)>(_a[1]))); break;
        case 7: _t->apmAvailableVersionsChanged(); break;
        case 8: _t->px4StableVersionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->px4BetaVersionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->_firmwareDownloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 11: _t->_firmwareDownloadFinished((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 12: _t->_firmwareDownloadError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->_foundBoard((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QSerialPortInfo(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 14: _t->_noBoardFound(); break;
        case 15: _t->_boardGone(); break;
        case 16: _t->_foundBootloader((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 17: _t->_error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->_status((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: _t->_bootloaderSyncFailed(); break;
        case 20: _t->_flashComplete(); break;
        case 21: _t->_updateProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 22: _t->_eraseStarted(); break;
        case 23: _t->_eraseComplete(); break;
        case 24: _t->_eraseProgressTick(); break;
        case 25: _t->_apmVersionDownloadFinished((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 26: _t->_px4ReleasesGithubDownloadFinished((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 27: _t->_px4ReleasesGithubDownloadError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 28: _t->startBoardSearch(); break;
        case 29: _t->cancel(); break;
        case 30: _t->flash((*reinterpret_cast< AutoPilotStackType_t(*)>(_a[1])),(*reinterpret_cast< FirmwareType_t(*)>(_a[2])),(*reinterpret_cast< FirmwareVehicleType_t(*)>(_a[3]))); break;
        case 31: _t->flash((*reinterpret_cast< AutoPilotStackType_t(*)>(_a[1])),(*reinterpret_cast< FirmwareType_t(*)>(_a[2]))); break;
        case 32: _t->flash((*reinterpret_cast< AutoPilotStackType_t(*)>(_a[1]))); break;
        case 33: _t->flashSingleFirmwareMode((*reinterpret_cast< FirmwareType_t(*)>(_a[1]))); break;
        case 34: { FirmwareVehicleType_t _r = _t->vehicleTypeFromVersionIndex((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< FirmwareVehicleType_t*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (FirmwareUpgradeController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareUpgradeController::boardFound)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (FirmwareUpgradeController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareUpgradeController::noBoardFound)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (FirmwareUpgradeController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareUpgradeController::boardGone)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (FirmwareUpgradeController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareUpgradeController::flashComplete)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (FirmwareUpgradeController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareUpgradeController::flashCancelled)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (FirmwareUpgradeController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareUpgradeController::error)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (FirmwareUpgradeController::*_t)(FirmwareType_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareUpgradeController::selectedFirmwareTypeChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (FirmwareUpgradeController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareUpgradeController::apmAvailableVersionsChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (FirmwareUpgradeController::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareUpgradeController::px4StableVersionChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (FirmwareUpgradeController::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirmwareUpgradeController::px4BetaVersionChanged)) {
                *result = 9;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
        case 9:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        FirmwareUpgradeController *_t = static_cast<FirmwareUpgradeController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->boardPort(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->boardDescription(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->_foundBoardTypeName; break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->pixhawkBoard(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->px4FlowBoard(); break;
        case 5: *reinterpret_cast< FirmwareType_t*>(_v) = _t->selectedFirmwareType(); break;
        case 6: *reinterpret_cast< QStringList*>(_v) = _t->apmAvailableVersions(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->px4StableVersion(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->px4BetaVersion(); break;
        case 9: *reinterpret_cast< QQuickItem**>(_v) = _t->statusLog(); break;
        case 10: *reinterpret_cast< QQuickItem**>(_v) = _t->progressBar(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        FirmwareUpgradeController *_t = static_cast<FirmwareUpgradeController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2:
            if (_t->_foundBoardTypeName != *reinterpret_cast< QString*>(_v)) {
                _t->_foundBoardTypeName = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->boardFound();
            }
            break;
        case 5: _t->setSelectedFirmwareType(*reinterpret_cast< FirmwareType_t*>(_v)); break;
        case 9: _t->setStatusLog(*reinterpret_cast< QQuickItem**>(_v)); break;
        case 10: _t->setProgressBar(*reinterpret_cast< QQuickItem**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject FirmwareUpgradeController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FirmwareUpgradeController.data,
      qt_meta_data_FirmwareUpgradeController,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FirmwareUpgradeController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FirmwareUpgradeController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FirmwareUpgradeController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FirmwareUpgradeController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 35)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 35;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void FirmwareUpgradeController::boardFound()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FirmwareUpgradeController::noBoardFound()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void FirmwareUpgradeController::boardGone()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void FirmwareUpgradeController::flashComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void FirmwareUpgradeController::flashCancelled()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void FirmwareUpgradeController::error()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void FirmwareUpgradeController::selectedFirmwareTypeChanged(FirmwareType_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void FirmwareUpgradeController::apmAvailableVersionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void FirmwareUpgradeController::px4StableVersionChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void FirmwareUpgradeController::px4BetaVersionChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
