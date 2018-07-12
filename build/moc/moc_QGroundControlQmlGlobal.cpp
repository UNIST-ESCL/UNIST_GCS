/****************************************************************************
** Meta object code from reading C++ file 'QGroundControlQmlGlobal.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/QmlControls/QGroundControlQmlGlobal.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGroundControlQmlGlobal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGroundControlQmlGlobal_t {
    QByteArrayData data[95];
    char stringdata0[1637];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGroundControlQmlGlobal_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGroundControlQmlGlobal_t qt_meta_stringdata_QGroundControlQmlGlobal = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QGroundControlQmlGlobal"
QT_MOC_LITERAL(1, 24, 28), // "isMultiplexingEnabledChanged"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 7), // "enabled"
QT_MOC_LITERAL(4, 62, 28), // "isVersionCheckEnabledChanged"
QT_MOC_LITERAL(5, 91, 22), // "mavlinkSystemIDChanged"
QT_MOC_LITERAL(6, 114, 2), // "id"
QT_MOC_LITERAL(7, 117, 24), // "flightMapPositionChanged"
QT_MOC_LITERAL(8, 142, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(9, 157, 17), // "flightMapPosition"
QT_MOC_LITERAL(10, 175, 20), // "flightMapZoomChanged"
QT_MOC_LITERAL(11, 196, 13), // "flightMapZoom"
QT_MOC_LITERAL(12, 210, 20), // "skipSetupPageChanged"
QT_MOC_LITERAL(13, 231, 13), // "_onGPSConnect"
QT_MOC_LITERAL(14, 245, 16), // "_onGPSDisconnect"
QT_MOC_LITERAL(15, 262, 18), // "_GPSSurveyInStatus"
QT_MOC_LITERAL(16, 281, 8), // "duration"
QT_MOC_LITERAL(17, 290, 10), // "accuracyMM"
QT_MOC_LITERAL(18, 301, 5), // "valid"
QT_MOC_LITERAL(19, 307, 6), // "active"
QT_MOC_LITERAL(20, 314, 17), // "_GPSNumSatellites"
QT_MOC_LITERAL(21, 332, 13), // "numSatellites"
QT_MOC_LITERAL(22, 346, 17), // "saveGlobalSetting"
QT_MOC_LITERAL(23, 364, 3), // "key"
QT_MOC_LITERAL(24, 368, 5), // "value"
QT_MOC_LITERAL(25, 374, 17), // "loadGlobalSetting"
QT_MOC_LITERAL(26, 392, 12), // "defaultValue"
QT_MOC_LITERAL(27, 405, 21), // "saveBoolGlobalSetting"
QT_MOC_LITERAL(28, 427, 21), // "loadBoolGlobalSetting"
QT_MOC_LITERAL(29, 449, 25), // "deleteAllSettingsNextBoot"
QT_MOC_LITERAL(30, 475, 30), // "clearDeleteAllSettingsNextBoot"
QT_MOC_LITERAL(31, 506, 16), // "startPX4MockLink"
QT_MOC_LITERAL(32, 523, 14), // "sendStatusText"
QT_MOC_LITERAL(33, 538, 20), // "startGenericMockLink"
QT_MOC_LITERAL(34, 559, 26), // "startAPMArduCopterMockLink"
QT_MOC_LITERAL(35, 586, 25), // "startAPMArduPlaneMockLink"
QT_MOC_LITERAL(36, 612, 23), // "startAPMArduSubMockLink"
QT_MOC_LITERAL(37, 636, 15), // "stopOneMockLink"
QT_MOC_LITERAL(38, 652, 32), // "metersToAppSettingsDistanceUnits"
QT_MOC_LITERAL(39, 685, 6), // "meters"
QT_MOC_LITERAL(40, 692, 32), // "appSettingsDistanceUnitsToMeters"
QT_MOC_LITERAL(41, 725, 8), // "distance"
QT_MOC_LITERAL(42, 734, 34), // "squareMetersToAppSettingsArea..."
QT_MOC_LITERAL(43, 769, 34), // "appSettingsAreaUnitsToSquareM..."
QT_MOC_LITERAL(44, 804, 4), // "area"
QT_MOC_LITERAL(45, 809, 17), // "loggingCategories"
QT_MOC_LITERAL(46, 827, 20), // "setCategoryLoggingOn"
QT_MOC_LITERAL(47, 848, 8), // "category"
QT_MOC_LITERAL(48, 857, 6), // "enable"
QT_MOC_LITERAL(49, 864, 17), // "categoryLoggingOn"
QT_MOC_LITERAL(50, 882, 24), // "updateLoggingFilterRules"
QT_MOC_LITERAL(51, 907, 14), // "linesIntersect"
QT_MOC_LITERAL(52, 922, 6), // "xLine1"
QT_MOC_LITERAL(53, 929, 6), // "yLine1"
QT_MOC_LITERAL(54, 936, 6), // "xLine2"
QT_MOC_LITERAL(55, 943, 6), // "yLine2"
QT_MOC_LITERAL(56, 950, 7), // "appName"
QT_MOC_LITERAL(57, 958, 11), // "linkManager"
QT_MOC_LITERAL(58, 970, 12), // "LinkManager*"
QT_MOC_LITERAL(59, 983, 19), // "multiVehicleManager"
QT_MOC_LITERAL(60, 1003, 20), // "MultiVehicleManager*"
QT_MOC_LITERAL(61, 1024, 16), // "mapEngineManager"
QT_MOC_LITERAL(62, 1041, 20), // "QGCMapEngineManager*"
QT_MOC_LITERAL(63, 1062, 17), // "qgcPositionManger"
QT_MOC_LITERAL(64, 1080, 19), // "QGCPositionManager*"
QT_MOC_LITERAL(65, 1100, 18), // "missionCommandTree"
QT_MOC_LITERAL(66, 1119, 19), // "MissionCommandTree*"
QT_MOC_LITERAL(67, 1139, 12), // "videoManager"
QT_MOC_LITERAL(68, 1152, 13), // "VideoManager*"
QT_MOC_LITERAL(69, 1166, 17), // "mavlinkLogManager"
QT_MOC_LITERAL(70, 1184, 18), // "MAVLinkLogManager*"
QT_MOC_LITERAL(71, 1203, 10), // "corePlugin"
QT_MOC_LITERAL(72, 1214, 14), // "QGCCorePlugin*"
QT_MOC_LITERAL(73, 1229, 15), // "settingsManager"
QT_MOC_LITERAL(74, 1245, 16), // "SettingsManager*"
QT_MOC_LITERAL(75, 1262, 6), // "gpsRtk"
QT_MOC_LITERAL(76, 1269, 10), // "FactGroup*"
QT_MOC_LITERAL(77, 1280, 22), // "supportedFirmwareCount"
QT_MOC_LITERAL(78, 1303, 13), // "zOrderTopMost"
QT_MOC_LITERAL(79, 1317, 13), // "zOrderWidgets"
QT_MOC_LITERAL(80, 1331, 14), // "zOrderMapItems"
QT_MOC_LITERAL(81, 1346, 14), // "zOrderVehicles"
QT_MOC_LITERAL(82, 1361, 24), // "zOrderWaypointIndicators"
QT_MOC_LITERAL(83, 1386, 21), // "zOrderTrajectoryLines"
QT_MOC_LITERAL(84, 1408, 19), // "zOrderWaypointLines"
QT_MOC_LITERAL(85, 1428, 21), // "isVersionCheckEnabled"
QT_MOC_LITERAL(86, 1450, 15), // "mavlinkSystemID"
QT_MOC_LITERAL(87, 1466, 20), // "flightMapInitialZoom"
QT_MOC_LITERAL(88, 1487, 22), // "parameterFileExtension"
QT_MOC_LITERAL(89, 1510, 20), // "missionFileExtension"
QT_MOC_LITERAL(90, 1531, 22), // "telemetryFileExtension"
QT_MOC_LITERAL(91, 1554, 30), // "appSettingsDistanceUnitsString"
QT_MOC_LITERAL(92, 1585, 26), // "appSettingsAreaUnitsString"
QT_MOC_LITERAL(93, 1612, 10), // "qgcVersion"
QT_MOC_LITERAL(94, 1623, 13) // "skipSetupPage"

    },
    "QGroundControlQmlGlobal\0"
    "isMultiplexingEnabledChanged\0\0enabled\0"
    "isVersionCheckEnabledChanged\0"
    "mavlinkSystemIDChanged\0id\0"
    "flightMapPositionChanged\0QGeoCoordinate\0"
    "flightMapPosition\0flightMapZoomChanged\0"
    "flightMapZoom\0skipSetupPageChanged\0"
    "_onGPSConnect\0_onGPSDisconnect\0"
    "_GPSSurveyInStatus\0duration\0accuracyMM\0"
    "valid\0active\0_GPSNumSatellites\0"
    "numSatellites\0saveGlobalSetting\0key\0"
    "value\0loadGlobalSetting\0defaultValue\0"
    "saveBoolGlobalSetting\0loadBoolGlobalSetting\0"
    "deleteAllSettingsNextBoot\0"
    "clearDeleteAllSettingsNextBoot\0"
    "startPX4MockLink\0sendStatusText\0"
    "startGenericMockLink\0startAPMArduCopterMockLink\0"
    "startAPMArduPlaneMockLink\0"
    "startAPMArduSubMockLink\0stopOneMockLink\0"
    "metersToAppSettingsDistanceUnits\0"
    "meters\0appSettingsDistanceUnitsToMeters\0"
    "distance\0squareMetersToAppSettingsAreaUnits\0"
    "appSettingsAreaUnitsToSquareMeters\0"
    "area\0loggingCategories\0setCategoryLoggingOn\0"
    "category\0enable\0categoryLoggingOn\0"
    "updateLoggingFilterRules\0linesIntersect\0"
    "xLine1\0yLine1\0xLine2\0yLine2\0appName\0"
    "linkManager\0LinkManager*\0multiVehicleManager\0"
    "MultiVehicleManager*\0mapEngineManager\0"
    "QGCMapEngineManager*\0qgcPositionManger\0"
    "QGCPositionManager*\0missionCommandTree\0"
    "MissionCommandTree*\0videoManager\0"
    "VideoManager*\0mavlinkLogManager\0"
    "MAVLinkLogManager*\0corePlugin\0"
    "QGCCorePlugin*\0settingsManager\0"
    "SettingsManager*\0gpsRtk\0FactGroup*\0"
    "supportedFirmwareCount\0zOrderTopMost\0"
    "zOrderWidgets\0zOrderMapItems\0"
    "zOrderVehicles\0zOrderWaypointIndicators\0"
    "zOrderTrajectoryLines\0zOrderWaypointLines\0"
    "isVersionCheckEnabled\0mavlinkSystemID\0"
    "flightMapInitialZoom\0parameterFileExtension\0"
    "missionFileExtension\0telemetryFileExtension\0"
    "appSettingsDistanceUnitsString\0"
    "appSettingsAreaUnitsString\0qgcVersion\0"
    "skipSetupPage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGroundControlQmlGlobal[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
      31,  268, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  169,    2, 0x06 /* Public */,
       4,    1,  172,    2, 0x06 /* Public */,
       5,    1,  175,    2, 0x06 /* Public */,
       7,    1,  178,    2, 0x06 /* Public */,
      10,    1,  181,    2, 0x06 /* Public */,
      12,    0,  184,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,  185,    2, 0x08 /* Private */,
      14,    0,  186,    2, 0x08 /* Private */,
      15,    4,  187,    2, 0x08 /* Private */,
      20,    1,  196,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      22,    2,  199,    2, 0x02 /* Public */,
      25,    2,  204,    2, 0x02 /* Public */,
      27,    2,  209,    2, 0x02 /* Public */,
      28,    2,  214,    2, 0x02 /* Public */,
      29,    0,  219,    2, 0x02 /* Public */,
      30,    0,  220,    2, 0x02 /* Public */,
      31,    1,  221,    2, 0x02 /* Public */,
      33,    1,  224,    2, 0x02 /* Public */,
      34,    1,  227,    2, 0x02 /* Public */,
      35,    1,  230,    2, 0x02 /* Public */,
      36,    1,  233,    2, 0x02 /* Public */,
      37,    0,  236,    2, 0x02 /* Public */,
      38,    1,  237,    2, 0x02 /* Public */,
      40,    1,  240,    2, 0x02 /* Public */,
      42,    1,  243,    2, 0x02 /* Public */,
      43,    1,  246,    2, 0x02 /* Public */,
      45,    0,  249,    2, 0x02 /* Public */,
      46,    2,  250,    2, 0x02 /* Public */,
      49,    1,  255,    2, 0x02 /* Public */,
      50,    0,  258,    2, 0x02 /* Public */,
      51,    4,  259,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Bool, QMetaType::Bool,   16,   17,   18,   19,
    QMetaType::Void, QMetaType::Int,   21,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   23,   24,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,   23,   26,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   23,   24,
    QMetaType::Bool, QMetaType::QString, QMetaType::Bool,   23,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   32,
    QMetaType::Void, QMetaType::Bool,   32,
    QMetaType::Void, QMetaType::Bool,   32,
    QMetaType::Void, QMetaType::Bool,   32,
    QMetaType::Void, QMetaType::Bool,   32,
    QMetaType::Void,
    QMetaType::QVariant, QMetaType::QVariant,   39,
    QMetaType::QVariant, QMetaType::QVariant,   41,
    QMetaType::QVariant, QMetaType::QVariant,   39,
    QMetaType::QVariant, QMetaType::QVariant,   44,
    QMetaType::QStringList,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   47,   48,
    QMetaType::Bool, QMetaType::QString,   47,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QPointF, QMetaType::QPointF, QMetaType::QPointF, QMetaType::QPointF,   52,   53,   54,   55,

 // properties: name, type, flags
      56, QMetaType::QString, 0x00095401,
      57, 0x80000000 | 58, 0x00095409,
      59, 0x80000000 | 60, 0x00095409,
      61, 0x80000000 | 62, 0x00095409,
      63, 0x80000000 | 64, 0x00095409,
      65, 0x80000000 | 66, 0x00095409,
      67, 0x80000000 | 68, 0x00095409,
      69, 0x80000000 | 70, 0x00095409,
      71, 0x80000000 | 72, 0x00095409,
      73, 0x80000000 | 74, 0x00095409,
      75, 0x80000000 | 76, 0x00095409,
      77, QMetaType::Int, 0x00095401,
      78, QMetaType::QReal, 0x00095401,
      79, QMetaType::QReal, 0x00095401,
      80, QMetaType::QReal, 0x00095401,
      81, QMetaType::QReal, 0x00095401,
      82, QMetaType::QReal, 0x00095401,
      83, QMetaType::QReal, 0x00095401,
      84, QMetaType::QReal, 0x00095401,
      85, QMetaType::Bool, 0x00495103,
      86, QMetaType::Int, 0x00495103,
       9, 0x80000000 | 8, 0x0049510b,
      11, QMetaType::Double, 0x00495103,
      87, QMetaType::Double, 0x00095401,
      88, QMetaType::QString, 0x00095401,
      89, QMetaType::QString, 0x00095401,
      90, QMetaType::QString, 0x00095401,
      91, QMetaType::QString, 0x00095401,
      92, QMetaType::QString, 0x00095401,
      93, QMetaType::QString, 0x00095401,
      94, QMetaType::Bool, 0x00495103,

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
       0,
       0,
       0,
       0,
       0,
       0,
       1,
       2,
       3,
       4,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       5,

       0        // eod
};

void QGroundControlQmlGlobal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGroundControlQmlGlobal *_t = static_cast<QGroundControlQmlGlobal *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->isMultiplexingEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->isVersionCheckEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->mavlinkSystemIDChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->flightMapPositionChanged((*reinterpret_cast< QGeoCoordinate(*)>(_a[1]))); break;
        case 4: _t->flightMapZoomChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->skipSetupPageChanged(); break;
        case 6: _t->_onGPSConnect(); break;
        case 7: _t->_onGPSDisconnect(); break;
        case 8: _t->_GPSSurveyInStatus((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 9: _t->_GPSNumSatellites((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->saveGlobalSetting((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 11: { QString _r = _t->loadGlobalSetting((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->saveBoolGlobalSetting((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 13: { bool _r = _t->loadBoolGlobalSetting((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->deleteAllSettingsNextBoot(); break;
        case 15: _t->clearDeleteAllSettingsNextBoot(); break;
        case 16: _t->startPX4MockLink((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->startGenericMockLink((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->startAPMArduCopterMockLink((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->startAPMArduPlaneMockLink((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->startAPMArduSubMockLink((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->stopOneMockLink(); break;
        case 22: { QVariant _r = _t->metersToAppSettingsDistanceUnits((*reinterpret_cast< const QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 23: { QVariant _r = _t->appSettingsDistanceUnitsToMeters((*reinterpret_cast< const QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 24: { QVariant _r = _t->squareMetersToAppSettingsAreaUnits((*reinterpret_cast< const QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 25: { QVariant _r = _t->appSettingsAreaUnitsToSquareMeters((*reinterpret_cast< const QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 26: { QStringList _r = _t->loggingCategories();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 27: _t->setCategoryLoggingOn((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 28: { bool _r = _t->categoryLoggingOn((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 29: _t->updateLoggingFilterRules(); break;
        case 30: { bool _r = _t->linesIntersect((*reinterpret_cast< QPointF(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2])),(*reinterpret_cast< QPointF(*)>(_a[3])),(*reinterpret_cast< QPointF(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGroundControlQmlGlobal::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGroundControlQmlGlobal::isMultiplexingEnabledChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QGroundControlQmlGlobal::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGroundControlQmlGlobal::isVersionCheckEnabledChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QGroundControlQmlGlobal::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGroundControlQmlGlobal::mavlinkSystemIDChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QGroundControlQmlGlobal::*_t)(QGeoCoordinate );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGroundControlQmlGlobal::flightMapPositionChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QGroundControlQmlGlobal::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGroundControlQmlGlobal::flightMapZoomChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QGroundControlQmlGlobal::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGroundControlQmlGlobal::skipSetupPageChanged)) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FactGroup* >(); break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkManager* >(); break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MultiVehicleManager* >(); break;
        case 21:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QGroundControlQmlGlobal *_t = static_cast<QGroundControlQmlGlobal *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->appName(); break;
        case 1: *reinterpret_cast< LinkManager**>(_v) = _t->linkManager(); break;
        case 2: *reinterpret_cast< MultiVehicleManager**>(_v) = _t->multiVehicleManager(); break;
        case 3: *reinterpret_cast< QGCMapEngineManager**>(_v) = _t->mapEngineManager(); break;
        case 4: *reinterpret_cast< QGCPositionManager**>(_v) = _t->qgcPositionManger(); break;
        case 5: *reinterpret_cast< MissionCommandTree**>(_v) = _t->missionCommandTree(); break;
        case 6: *reinterpret_cast< VideoManager**>(_v) = _t->videoManager(); break;
        case 7: *reinterpret_cast< MAVLinkLogManager**>(_v) = _t->mavlinkLogManager(); break;
        case 8: *reinterpret_cast< QGCCorePlugin**>(_v) = _t->corePlugin(); break;
        case 9: *reinterpret_cast< SettingsManager**>(_v) = _t->settingsManager(); break;
        case 10: *reinterpret_cast< FactGroup**>(_v) = _t->gpsRtkFactGroup(); break;
        case 11: *reinterpret_cast< int*>(_v) = _t->supportedFirmwareCount(); break;
        case 12: *reinterpret_cast< qreal*>(_v) = _t->zOrderTopMost(); break;
        case 13: *reinterpret_cast< qreal*>(_v) = _t->zOrderWidgets(); break;
        case 14: *reinterpret_cast< qreal*>(_v) = _t->zOrderMapItems(); break;
        case 15: *reinterpret_cast< qreal*>(_v) = _t->zOrderVehicles(); break;
        case 16: *reinterpret_cast< qreal*>(_v) = _t->zOrderWaypointIndicators(); break;
        case 17: *reinterpret_cast< qreal*>(_v) = _t->zOrderTrajectoryLines(); break;
        case 18: *reinterpret_cast< qreal*>(_v) = _t->zOrderWaypointLines(); break;
        case 19: *reinterpret_cast< bool*>(_v) = _t->isVersionCheckEnabled(); break;
        case 20: *reinterpret_cast< int*>(_v) = _t->mavlinkSystemID(); break;
        case 21: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->flightMapPosition(); break;
        case 22: *reinterpret_cast< double*>(_v) = _t->flightMapZoom(); break;
        case 23: *reinterpret_cast< double*>(_v) = _t->_flightMapInitialZoom; break;
        case 24: *reinterpret_cast< QString*>(_v) = _t->parameterFileExtension(); break;
        case 25: *reinterpret_cast< QString*>(_v) = _t->missionFileExtension(); break;
        case 26: *reinterpret_cast< QString*>(_v) = _t->telemetryFileExtension(); break;
        case 27: *reinterpret_cast< QString*>(_v) = _t->appSettingsDistanceUnitsString(); break;
        case 28: *reinterpret_cast< QString*>(_v) = _t->appSettingsAreaUnitsString(); break;
        case 29: *reinterpret_cast< QString*>(_v) = _t->qgcVersion(); break;
        case 30: *reinterpret_cast< bool*>(_v) = _t->skipSetupPage(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QGroundControlQmlGlobal *_t = static_cast<QGroundControlQmlGlobal *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 19: _t->setIsVersionCheckEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 20: _t->setMavlinkSystemID(*reinterpret_cast< int*>(_v)); break;
        case 21: _t->setFlightMapPosition(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        case 22: _t->setFlightMapZoom(*reinterpret_cast< double*>(_v)); break;
        case 30: _t->setSkipSetupPage(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QGroundControlQmlGlobal::staticMetaObject = {
    { &QGCTool::staticMetaObject, qt_meta_stringdata_QGroundControlQmlGlobal.data,
      qt_meta_data_QGroundControlQmlGlobal,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGroundControlQmlGlobal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGroundControlQmlGlobal::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGroundControlQmlGlobal.stringdata0))
        return static_cast<void*>(this);
    return QGCTool::qt_metacast(_clname);
}

int QGroundControlQmlGlobal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 31;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 31;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 31;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 31;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 31;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QGroundControlQmlGlobal::isMultiplexingEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGroundControlQmlGlobal::isVersionCheckEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QGroundControlQmlGlobal::mavlinkSystemIDChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QGroundControlQmlGlobal::flightMapPositionChanged(QGeoCoordinate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QGroundControlQmlGlobal::flightMapZoomChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QGroundControlQmlGlobal::skipSetupPageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
