/****************************************************************************
** Meta object code from reading C++ file 'MissionController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/MissionController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MissionController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MissionController_t {
    QByteArrayData data[83];
    char stringdata0[1654];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MissionController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MissionController_t qt_meta_stringdata_MissionController = {
    {
QT_MOC_LITERAL(0, 0, 17), // "MissionController"
QT_MOC_LITERAL(1, 18, 18), // "visualItemsChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 20), // "waypointLinesChanged"
QT_MOC_LITERAL(4, 59, 19), // "waypointPathChanged"
QT_MOC_LITERAL(5, 79, 19), // "newItemsFromVehicle"
QT_MOC_LITERAL(6, 99, 22), // "missionDistanceChanged"
QT_MOC_LITERAL(7, 122, 15), // "missionDistance"
QT_MOC_LITERAL(8, 138, 18), // "missionTimeChanged"
QT_MOC_LITERAL(9, 157, 27), // "missionHoverDistanceChanged"
QT_MOC_LITERAL(10, 185, 20), // "missionHoverDistance"
QT_MOC_LITERAL(11, 206, 23), // "missionHoverTimeChanged"
QT_MOC_LITERAL(12, 230, 28), // "missionCruiseDistanceChanged"
QT_MOC_LITERAL(13, 259, 21), // "missionCruiseDistance"
QT_MOC_LITERAL(14, 281, 24), // "missionCruiseTimeChanged"
QT_MOC_LITERAL(15, 306, 26), // "missionMaxTelemetryChanged"
QT_MOC_LITERAL(16, 333, 19), // "missionMaxTelemetry"
QT_MOC_LITERAL(17, 353, 30), // "complexMissionItemNamesChanged"
QT_MOC_LITERAL(18, 384, 25), // "resumeMissionIndexChanged"
QT_MOC_LITERAL(19, 410, 18), // "resumeMissionReady"
QT_MOC_LITERAL(20, 429, 23), // "resumeMissionUploadFail"
QT_MOC_LITERAL(21, 453, 25), // "batteryChangePointChanged"
QT_MOC_LITERAL(22, 479, 18), // "batteryChangePoint"
QT_MOC_LITERAL(23, 498, 24), // "batteriesRequiredChanged"
QT_MOC_LITERAL(24, 523, 17), // "batteriesRequired"
QT_MOC_LITERAL(25, 541, 26), // "plannedHomePositionChanged"
QT_MOC_LITERAL(26, 568, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(27, 583, 19), // "plannedHomePosition"
QT_MOC_LITERAL(28, 603, 18), // "progressPctChanged"
QT_MOC_LITERAL(29, 622, 11), // "progressPct"
QT_MOC_LITERAL(30, 634, 26), // "currentMissionIndexChanged"
QT_MOC_LITERAL(31, 661, 19), // "currentMissionIndex"
QT_MOC_LITERAL(32, 681, 27), // "currentPlanViewIndexChanged"
QT_MOC_LITERAL(33, 709, 26), // "currentPlanViewItemChanged"
QT_MOC_LITERAL(34, 736, 36), // "_newMissionItemsAvailableFrom..."
QT_MOC_LITERAL(35, 773, 18), // "removeAllRequested"
QT_MOC_LITERAL(36, 792, 19), // "_itemCommandChanged"
QT_MOC_LITERAL(37, 812, 34), // "_managerVehicleHomePositionCh..."
QT_MOC_LITERAL(38, 847, 12), // "homePosition"
QT_MOC_LITERAL(39, 860, 18), // "_inProgressChanged"
QT_MOC_LITERAL(40, 879, 10), // "inProgress"
QT_MOC_LITERAL(41, 890, 27), // "_currentMissionIndexChanged"
QT_MOC_LITERAL(42, 918, 14), // "sequenceNumber"
QT_MOC_LITERAL(43, 933, 20), // "_recalcWaypointLines"
QT_MOC_LITERAL(44, 954, 26), // "_recalcMissionFlightStatus"
QT_MOC_LITERAL(45, 981, 20), // "_updateContainsItems"
QT_MOC_LITERAL(46, 1002, 19), // "_progressPctChanged"
QT_MOC_LITERAL(47, 1022, 24), // "_visualItemsDirtyChanged"
QT_MOC_LITERAL(48, 1047, 5), // "dirty"
QT_MOC_LITERAL(49, 1053, 20), // "_managerSendComplete"
QT_MOC_LITERAL(50, 1074, 5), // "error"
QT_MOC_LITERAL(51, 1080, 25), // "_managerRemoveAllComplete"
QT_MOC_LITERAL(52, 1106, 17), // "removeMissionItem"
QT_MOC_LITERAL(53, 1124, 5), // "index"
QT_MOC_LITERAL(54, 1130, 23), // "insertSimpleMissionItem"
QT_MOC_LITERAL(55, 1154, 10), // "coordinate"
QT_MOC_LITERAL(56, 1165, 1), // "i"
QT_MOC_LITERAL(57, 1167, 20), // "insertROIMissionItem"
QT_MOC_LITERAL(58, 1188, 24), // "insertComplexMissionItem"
QT_MOC_LITERAL(59, 1213, 8), // "itemName"
QT_MOC_LITERAL(60, 1222, 19), // "mapCenterCoordinate"
QT_MOC_LITERAL(61, 1242, 31), // "insertComplexMissionItemFromKML"
QT_MOC_LITERAL(62, 1274, 7), // "kmlFile"
QT_MOC_LITERAL(63, 1282, 13), // "resumeMission"
QT_MOC_LITERAL(64, 1296, 11), // "resumeIndex"
QT_MOC_LITERAL(65, 1308, 27), // "applyDefaultMissionAltitude"
QT_MOC_LITERAL(66, 1336, 23), // "setCurrentPlanViewIndex"
QT_MOC_LITERAL(67, 1360, 5), // "force"
QT_MOC_LITERAL(68, 1366, 11), // "visualItems"
QT_MOC_LITERAL(69, 1378, 19), // "QmlObjectListModel*"
QT_MOC_LITERAL(70, 1398, 13), // "waypointLines"
QT_MOC_LITERAL(71, 1412, 12), // "waypointPath"
QT_MOC_LITERAL(72, 1425, 23), // "complexMissionItemNames"
QT_MOC_LITERAL(73, 1449, 18), // "resumeMissionIndex"
QT_MOC_LITERAL(74, 1468, 20), // "currentPlanViewIndex"
QT_MOC_LITERAL(75, 1489, 19), // "currentPlanViewItem"
QT_MOC_LITERAL(76, 1509, 18), // "VisualMissionItem*"
QT_MOC_LITERAL(77, 1528, 11), // "missionTime"
QT_MOC_LITERAL(78, 1540, 16), // "missionHoverTime"
QT_MOC_LITERAL(79, 1557, 17), // "missionCruiseTime"
QT_MOC_LITERAL(80, 1575, 21), // "surveyComplexItemName"
QT_MOC_LITERAL(81, 1597, 27), // "corridorScanComplexItemName"
QT_MOC_LITERAL(82, 1625, 28) // "structureScanComplexItemName"

    },
    "MissionController\0visualItemsChanged\0"
    "\0waypointLinesChanged\0waypointPathChanged\0"
    "newItemsFromVehicle\0missionDistanceChanged\0"
    "missionDistance\0missionTimeChanged\0"
    "missionHoverDistanceChanged\0"
    "missionHoverDistance\0missionHoverTimeChanged\0"
    "missionCruiseDistanceChanged\0"
    "missionCruiseDistance\0missionCruiseTimeChanged\0"
    "missionMaxTelemetryChanged\0"
    "missionMaxTelemetry\0complexMissionItemNamesChanged\0"
    "resumeMissionIndexChanged\0resumeMissionReady\0"
    "resumeMissionUploadFail\0"
    "batteryChangePointChanged\0batteryChangePoint\0"
    "batteriesRequiredChanged\0batteriesRequired\0"
    "plannedHomePositionChanged\0QGeoCoordinate\0"
    "plannedHomePosition\0progressPctChanged\0"
    "progressPct\0currentMissionIndexChanged\0"
    "currentMissionIndex\0currentPlanViewIndexChanged\0"
    "currentPlanViewItemChanged\0"
    "_newMissionItemsAvailableFromVehicle\0"
    "removeAllRequested\0_itemCommandChanged\0"
    "_managerVehicleHomePositionChanged\0"
    "homePosition\0_inProgressChanged\0"
    "inProgress\0_currentMissionIndexChanged\0"
    "sequenceNumber\0_recalcWaypointLines\0"
    "_recalcMissionFlightStatus\0"
    "_updateContainsItems\0_progressPctChanged\0"
    "_visualItemsDirtyChanged\0dirty\0"
    "_managerSendComplete\0error\0"
    "_managerRemoveAllComplete\0removeMissionItem\0"
    "index\0insertSimpleMissionItem\0coordinate\0"
    "i\0insertROIMissionItem\0insertComplexMissionItem\0"
    "itemName\0mapCenterCoordinate\0"
    "insertComplexMissionItemFromKML\0kmlFile\0"
    "resumeMission\0resumeIndex\0"
    "applyDefaultMissionAltitude\0"
    "setCurrentPlanViewIndex\0force\0visualItems\0"
    "QmlObjectListModel*\0waypointLines\0"
    "waypointPath\0complexMissionItemNames\0"
    "resumeMissionIndex\0currentPlanViewIndex\0"
    "currentPlanViewItem\0VisualMissionItem*\0"
    "missionTime\0missionHoverTime\0"
    "missionCruiseTime\0surveyComplexItemName\0"
    "corridorScanComplexItemName\0"
    "structureScanComplexItemName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MissionController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      42,   14, // methods
      22,  328, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      22,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  224,    2, 0x06 /* Public */,
       3,    0,  225,    2, 0x06 /* Public */,
       4,    0,  226,    2, 0x06 /* Public */,
       5,    0,  227,    2, 0x06 /* Public */,
       6,    1,  228,    2, 0x06 /* Public */,
       8,    0,  231,    2, 0x06 /* Public */,
       9,    1,  232,    2, 0x06 /* Public */,
      11,    0,  235,    2, 0x06 /* Public */,
      12,    1,  236,    2, 0x06 /* Public */,
      14,    0,  239,    2, 0x06 /* Public */,
      15,    1,  240,    2, 0x06 /* Public */,
      17,    0,  243,    2, 0x06 /* Public */,
      18,    0,  244,    2, 0x06 /* Public */,
      19,    0,  245,    2, 0x06 /* Public */,
      20,    0,  246,    2, 0x06 /* Public */,
      21,    1,  247,    2, 0x06 /* Public */,
      23,    1,  250,    2, 0x06 /* Public */,
      25,    1,  253,    2, 0x06 /* Public */,
      28,    1,  256,    2, 0x06 /* Public */,
      30,    1,  259,    2, 0x06 /* Public */,
      32,    0,  262,    2, 0x06 /* Public */,
      33,    0,  263,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      34,    1,  264,    2, 0x08 /* Private */,
      36,    0,  267,    2, 0x08 /* Private */,
      37,    1,  268,    2, 0x08 /* Private */,
      39,    1,  271,    2, 0x08 /* Private */,
      41,    1,  274,    2, 0x08 /* Private */,
      43,    0,  277,    2, 0x08 /* Private */,
      44,    0,  278,    2, 0x08 /* Private */,
      45,    0,  279,    2, 0x08 /* Private */,
      46,    1,  280,    2, 0x08 /* Private */,
      47,    1,  283,    2, 0x08 /* Private */,
      49,    1,  286,    2, 0x08 /* Private */,
      51,    1,  289,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      52,    1,  292,    2, 0x02 /* Public */,
      54,    2,  295,    2, 0x02 /* Public */,
      57,    2,  300,    2, 0x02 /* Public */,
      58,    3,  305,    2, 0x02 /* Public */,
      61,    3,  312,    2, 0x02 /* Public */,
      63,    1,  319,    2, 0x02 /* Public */,
      65,    0,  322,    2, 0x02 /* Public */,
      66,    2,  323,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, QMetaType::Double,   29,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 26,   38,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void, QMetaType::Int,   42,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   29,
    QMetaType::Void, QMetaType::Bool,   48,
    QMetaType::Void, QMetaType::Bool,   50,
    QMetaType::Void, QMetaType::Bool,   50,

 // methods: parameters
    QMetaType::Void, QMetaType::Int,   53,
    QMetaType::Int, 0x80000000 | 26, QMetaType::Int,   55,   56,
    QMetaType::Int, 0x80000000 | 26, QMetaType::Int,   55,   56,
    QMetaType::Int, QMetaType::QString, 0x80000000 | 26, QMetaType::Int,   59,   60,   56,
    QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::Int,   59,   62,   56,
    QMetaType::Void, QMetaType::Int,   64,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   42,   67,

 // properties: name, type, flags
      68, 0x80000000 | 69, 0x00495009,
      70, 0x80000000 | 69, 0x00495009,
      71, QMetaType::QVariantList, 0x00495001,
      72, QMetaType::QStringList, 0x00495001,
      27, 0x80000000 | 26, 0x00495009,
      29, QMetaType::Double, 0x00495001,
      31, QMetaType::Int, 0x00495001,
      73, QMetaType::Int, 0x00495001,
      74, QMetaType::Int, 0x00495001,
      75, 0x80000000 | 76, 0x00495009,
       7, QMetaType::Double, 0x00495001,
      77, QMetaType::Double, 0x00495001,
      10, QMetaType::Double, 0x00495001,
      13, QMetaType::Double, 0x00495001,
      78, QMetaType::Double, 0x00495001,
      79, QMetaType::Double, 0x00495001,
      16, QMetaType::Double, 0x00495001,
      22, QMetaType::Int, 0x00495001,
      24, QMetaType::Int, 0x00495001,
      80, QMetaType::QString, 0x00095401,
      81, QMetaType::QString, 0x00095401,
      82, QMetaType::QString, 0x00095401,

 // properties: notify_signal_id
       0,
       1,
       2,
      11,
      17,
      18,
      19,
      12,
      20,
      21,
       4,
       5,
       6,
       8,
       7,
       9,
      10,
      15,
      16,
       0,
       0,
       0,

       0        // eod
};

void MissionController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MissionController *_t = static_cast<MissionController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->visualItemsChanged(); break;
        case 1: _t->waypointLinesChanged(); break;
        case 2: _t->waypointPathChanged(); break;
        case 3: _t->newItemsFromVehicle(); break;
        case 4: _t->missionDistanceChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->missionTimeChanged(); break;
        case 6: _t->missionHoverDistanceChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->missionHoverTimeChanged(); break;
        case 8: _t->missionCruiseDistanceChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->missionCruiseTimeChanged(); break;
        case 10: _t->missionMaxTelemetryChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->complexMissionItemNamesChanged(); break;
        case 12: _t->resumeMissionIndexChanged(); break;
        case 13: _t->resumeMissionReady(); break;
        case 14: _t->resumeMissionUploadFail(); break;
        case 15: _t->batteryChangePointChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->batteriesRequiredChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->plannedHomePositionChanged((*reinterpret_cast< QGeoCoordinate(*)>(_a[1]))); break;
        case 18: _t->progressPctChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 19: _t->currentMissionIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->currentPlanViewIndexChanged(); break;
        case 21: _t->currentPlanViewItemChanged(); break;
        case 22: _t->_newMissionItemsAvailableFromVehicle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->_itemCommandChanged(); break;
        case 24: _t->_managerVehicleHomePositionChanged((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        case 25: _t->_inProgressChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->_currentMissionIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->_recalcWaypointLines(); break;
        case 28: _t->_recalcMissionFlightStatus(); break;
        case 29: _t->_updateContainsItems(); break;
        case 30: _t->_progressPctChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 31: _t->_visualItemsDirtyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->_managerSendComplete((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->_managerRemoveAllComplete((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->removeMissionItem((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: { int _r = _t->insertSimpleMissionItem((*reinterpret_cast< QGeoCoordinate(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 36: { int _r = _t->insertROIMissionItem((*reinterpret_cast< QGeoCoordinate(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 37: { int _r = _t->insertComplexMissionItem((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QGeoCoordinate(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 38: { int _r = _t->insertComplexMissionItemFromKML((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 39: _t->resumeMission((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: _t->applyDefaultMissionAltitude(); break;
        case 41: _t->setCurrentPlanViewIndex((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 35:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 36:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 37:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MissionController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::visualItemsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MissionController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::waypointLinesChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MissionController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::waypointPathChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MissionController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::newItemsFromVehicle)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MissionController::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::missionDistanceChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (MissionController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::missionTimeChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (MissionController::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::missionHoverDistanceChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (MissionController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::missionHoverTimeChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (MissionController::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::missionCruiseDistanceChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (MissionController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::missionCruiseTimeChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (MissionController::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::missionMaxTelemetryChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (MissionController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::complexMissionItemNamesChanged)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (MissionController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::resumeMissionIndexChanged)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (MissionController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::resumeMissionReady)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (MissionController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::resumeMissionUploadFail)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (MissionController::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::batteryChangePointChanged)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (MissionController::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::batteriesRequiredChanged)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (MissionController::*_t)(QGeoCoordinate );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::plannedHomePositionChanged)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (MissionController::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::progressPctChanged)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (MissionController::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::currentMissionIndexChanged)) {
                *result = 19;
                return;
            }
        }
        {
            typedef void (MissionController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::currentPlanViewIndexChanged)) {
                *result = 20;
                return;
            }
        }
        {
            typedef void (MissionController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MissionController::currentPlanViewItemChanged)) {
                *result = 21;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        MissionController *_t = static_cast<MissionController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->visualItems(); break;
        case 1: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->waypointLines(); break;
        case 2: *reinterpret_cast< QVariantList*>(_v) = _t->waypointPath(); break;
        case 3: *reinterpret_cast< QStringList*>(_v) = _t->complexMissionItemNames(); break;
        case 4: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->plannedHomePosition(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->progressPct(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->currentMissionIndex(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->resumeMissionIndex(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->currentPlanViewIndex(); break;
        case 9: *reinterpret_cast< VisualMissionItem**>(_v) = _t->currentPlanViewItem(); break;
        case 10: *reinterpret_cast< double*>(_v) = _t->missionDistance(); break;
        case 11: *reinterpret_cast< double*>(_v) = _t->missionTime(); break;
        case 12: *reinterpret_cast< double*>(_v) = _t->missionHoverDistance(); break;
        case 13: *reinterpret_cast< double*>(_v) = _t->missionCruiseDistance(); break;
        case 14: *reinterpret_cast< double*>(_v) = _t->missionHoverTime(); break;
        case 15: *reinterpret_cast< double*>(_v) = _t->missionCruiseTime(); break;
        case 16: *reinterpret_cast< double*>(_v) = _t->missionMaxTelemetry(); break;
        case 17: *reinterpret_cast< int*>(_v) = _t->batteryChangePoint(); break;
        case 18: *reinterpret_cast< int*>(_v) = _t->batteriesRequired(); break;
        case 19: *reinterpret_cast< QString*>(_v) = _t->surveyComplexItemName(); break;
        case 20: *reinterpret_cast< QString*>(_v) = _t->corridorScanComplexItemName(); break;
        case 21: *reinterpret_cast< QString*>(_v) = _t->structureScanComplexItemName(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject MissionController::staticMetaObject = {
    { &PlanElementController::staticMetaObject, qt_meta_stringdata_MissionController.data,
      qt_meta_data_MissionController,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MissionController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MissionController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MissionController.stringdata0))
        return static_cast<void*>(this);
    return PlanElementController::qt_metacast(_clname);
}

int MissionController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlanElementController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 22;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MissionController::visualItemsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MissionController::waypointLinesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MissionController::waypointPathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MissionController::newItemsFromVehicle()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MissionController::missionDistanceChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MissionController::missionTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void MissionController::missionHoverDistanceChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MissionController::missionHoverTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void MissionController::missionCruiseDistanceChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MissionController::missionCruiseTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void MissionController::missionMaxTelemetryChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MissionController::complexMissionItemNamesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void MissionController::resumeMissionIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void MissionController::resumeMissionReady()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void MissionController::resumeMissionUploadFail()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void MissionController::batteryChangePointChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void MissionController::batteriesRequiredChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void MissionController::plannedHomePositionChanged(QGeoCoordinate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void MissionController::progressPctChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void MissionController::currentMissionIndexChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void MissionController::currentPlanViewIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void MissionController::currentPlanViewItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
