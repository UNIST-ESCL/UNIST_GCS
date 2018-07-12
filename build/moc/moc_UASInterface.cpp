/****************************************************************************
** Meta object code from reading C++ file 'UASInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/uas/UASInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UASInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UASInterface_t {
    QByteArrayData data[127];
    char stringdata0[1275];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UASInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UASInterface_t qt_meta_stringdata_UASInterface = {
    {
QT_MOC_LITERAL(0, 0, 12), // "UASInterface"
QT_MOC_LITERAL(1, 13, 19), // "textMessageReceived"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 5), // "uasid"
QT_MOC_LITERAL(4, 40, 11), // "componentid"
QT_MOC_LITERAL(5, 52, 8), // "severity"
QT_MOC_LITERAL(6, 61, 4), // "text"
QT_MOC_LITERAL(7, 66, 15), // "errCountChanged"
QT_MOC_LITERAL(8, 82, 9), // "component"
QT_MOC_LITERAL(9, 92, 6), // "device"
QT_MOC_LITERAL(10, 99, 5), // "count"
QT_MOC_LITERAL(11, 105, 9), // "connected"
QT_MOC_LITERAL(12, 115, 12), // "disconnected"
QT_MOC_LITERAL(13, 128, 12), // "valueChanged"
QT_MOC_LITERAL(14, 141, 4), // "name"
QT_MOC_LITERAL(15, 146, 4), // "unit"
QT_MOC_LITERAL(16, 151, 5), // "value"
QT_MOC_LITERAL(17, 157, 5), // "msecs"
QT_MOC_LITERAL(18, 163, 15), // "parameterUpdate"
QT_MOC_LITERAL(19, 179, 3), // "uas"
QT_MOC_LITERAL(20, 183, 13), // "parameterName"
QT_MOC_LITERAL(21, 197, 14), // "parameterCount"
QT_MOC_LITERAL(22, 212, 11), // "parameterId"
QT_MOC_LITERAL(23, 224, 4), // "type"
QT_MOC_LITERAL(24, 229, 14), // "batteryChanged"
QT_MOC_LITERAL(25, 244, 13), // "UASInterface*"
QT_MOC_LITERAL(26, 258, 7), // "voltage"
QT_MOC_LITERAL(27, 266, 7), // "current"
QT_MOC_LITERAL(28, 274, 7), // "percent"
QT_MOC_LITERAL(29, 282, 7), // "seconds"
QT_MOC_LITERAL(30, 290, 13), // "statusChanged"
QT_MOC_LITERAL(31, 304, 6), // "status"
QT_MOC_LITERAL(32, 311, 12), // "imageStarted"
QT_MOC_LITERAL(33, 324, 5), // "imgid"
QT_MOC_LITERAL(34, 330, 5), // "width"
QT_MOC_LITERAL(35, 336, 6), // "height"
QT_MOC_LITERAL(36, 343, 5), // "depth"
QT_MOC_LITERAL(37, 349, 8), // "channels"
QT_MOC_LITERAL(38, 358, 17), // "imageDataReceived"
QT_MOC_LITERAL(39, 376, 20), // "const unsigned char*"
QT_MOC_LITERAL(40, 397, 9), // "imageData"
QT_MOC_LITERAL(41, 407, 6), // "length"
QT_MOC_LITERAL(42, 414, 10), // "startIndex"
QT_MOC_LITERAL(43, 425, 24), // "opticalFlowStatusChanged"
QT_MOC_LITERAL(44, 450, 9), // "supported"
QT_MOC_LITERAL(45, 460, 7), // "enabled"
QT_MOC_LITERAL(46, 468, 2), // "ok"
QT_MOC_LITERAL(47, 471, 31), // "visionLocalizationStatusChanged"
QT_MOC_LITERAL(48, 503, 27), // "distanceSensorStatusChanged"
QT_MOC_LITERAL(49, 531, 17), // "gyroStatusChanged"
QT_MOC_LITERAL(50, 549, 18), // "accelStatusChanged"
QT_MOC_LITERAL(51, 568, 22), // "magSensorStatusChanged"
QT_MOC_LITERAL(52, 591, 17), // "baroStatusChanged"
QT_MOC_LITERAL(53, 609, 21), // "airspeedStatusChanged"
QT_MOC_LITERAL(54, 631, 11), // "nameChanged"
QT_MOC_LITERAL(55, 643, 7), // "newName"
QT_MOC_LITERAL(56, 651, 18), // "systemSpecsChanged"
QT_MOC_LITERAL(57, 670, 5), // "uasId"
QT_MOC_LITERAL(58, 676, 8), // "logEntry"
QT_MOC_LITERAL(59, 685, 8), // "uint32_t"
QT_MOC_LITERAL(60, 694, 8), // "time_utc"
QT_MOC_LITERAL(61, 703, 4), // "size"
QT_MOC_LITERAL(62, 708, 8), // "uint16_t"
QT_MOC_LITERAL(63, 717, 2), // "id"
QT_MOC_LITERAL(64, 720, 8), // "num_logs"
QT_MOC_LITERAL(65, 729, 12), // "last_log_num"
QT_MOC_LITERAL(66, 742, 7), // "logData"
QT_MOC_LITERAL(67, 750, 3), // "ofs"
QT_MOC_LITERAL(68, 754, 7), // "uint8_t"
QT_MOC_LITERAL(69, 762, 14), // "const uint8_t*"
QT_MOC_LITERAL(70, 777, 4), // "data"
QT_MOC_LITERAL(71, 782, 6), // "pairRX"
QT_MOC_LITERAL(72, 789, 6), // "rxType"
QT_MOC_LITERAL(73, 796, 9), // "rxSubType"
QT_MOC_LITERAL(74, 806, 12), // "sendHilState"
QT_MOC_LITERAL(75, 819, 7), // "time_us"
QT_MOC_LITERAL(76, 827, 4), // "roll"
QT_MOC_LITERAL(77, 832, 5), // "pitch"
QT_MOC_LITERAL(78, 838, 3), // "yaw"
QT_MOC_LITERAL(79, 842, 9), // "rollspeed"
QT_MOC_LITERAL(80, 852, 10), // "pitchspeed"
QT_MOC_LITERAL(81, 863, 8), // "yawspeed"
QT_MOC_LITERAL(82, 872, 3), // "lat"
QT_MOC_LITERAL(83, 876, 3), // "lon"
QT_MOC_LITERAL(84, 880, 3), // "alt"
QT_MOC_LITERAL(85, 884, 2), // "vx"
QT_MOC_LITERAL(86, 887, 2), // "vy"
QT_MOC_LITERAL(87, 890, 2), // "vz"
QT_MOC_LITERAL(88, 893, 12), // "ind_airspeed"
QT_MOC_LITERAL(89, 906, 13), // "true_airspeed"
QT_MOC_LITERAL(90, 920, 4), // "xacc"
QT_MOC_LITERAL(91, 925, 4), // "yacc"
QT_MOC_LITERAL(92, 930, 4), // "zacc"
QT_MOC_LITERAL(93, 935, 14), // "sendHilSensors"
QT_MOC_LITERAL(94, 950, 4), // "xmag"
QT_MOC_LITERAL(95, 955, 4), // "ymag"
QT_MOC_LITERAL(96, 960, 4), // "zmag"
QT_MOC_LITERAL(97, 965, 12), // "abs_pressure"
QT_MOC_LITERAL(98, 978, 13), // "diff_pressure"
QT_MOC_LITERAL(99, 992, 12), // "pressure_alt"
QT_MOC_LITERAL(100, 1005, 11), // "temperature"
QT_MOC_LITERAL(101, 1017, 14), // "fields_changed"
QT_MOC_LITERAL(102, 1032, 10), // "sendHilGps"
QT_MOC_LITERAL(103, 1043, 8), // "fix_type"
QT_MOC_LITERAL(104, 1052, 3), // "eph"
QT_MOC_LITERAL(105, 1056, 3), // "epv"
QT_MOC_LITERAL(106, 1060, 3), // "vel"
QT_MOC_LITERAL(107, 1064, 2), // "vn"
QT_MOC_LITERAL(108, 1067, 2), // "ve"
QT_MOC_LITERAL(109, 1070, 2), // "vd"
QT_MOC_LITERAL(110, 1073, 3), // "cog"
QT_MOC_LITERAL(111, 1077, 10), // "satellites"
QT_MOC_LITERAL(112, 1088, 18), // "sendHilOpticalFlow"
QT_MOC_LITERAL(113, 1107, 6), // "flow_x"
QT_MOC_LITERAL(114, 1114, 6), // "flow_y"
QT_MOC_LITERAL(115, 1121, 13), // "flow_comp_m_x"
QT_MOC_LITERAL(116, 1135, 13), // "flow_comp_m_y"
QT_MOC_LITERAL(117, 1149, 7), // "quality"
QT_MOC_LITERAL(118, 1157, 15), // "ground_distance"
QT_MOC_LITERAL(119, 1173, 16), // "sendMapRCToParam"
QT_MOC_LITERAL(120, 1190, 8), // "param_id"
QT_MOC_LITERAL(121, 1199, 5), // "scale"
QT_MOC_LITERAL(122, 1205, 6), // "value0"
QT_MOC_LITERAL(123, 1212, 22), // "param_rc_channel_index"
QT_MOC_LITERAL(124, 1235, 8), // "valueMin"
QT_MOC_LITERAL(125, 1244, 8), // "valueMax"
QT_MOC_LITERAL(126, 1253, 21) // "unsetRCToParameterMap"

    },
    "UASInterface\0textMessageReceived\0\0"
    "uasid\0componentid\0severity\0text\0"
    "errCountChanged\0component\0device\0count\0"
    "connected\0disconnected\0valueChanged\0"
    "name\0unit\0value\0msecs\0parameterUpdate\0"
    "uas\0parameterName\0parameterCount\0"
    "parameterId\0type\0batteryChanged\0"
    "UASInterface*\0voltage\0current\0percent\0"
    "seconds\0statusChanged\0status\0imageStarted\0"
    "imgid\0width\0height\0depth\0channels\0"
    "imageDataReceived\0const unsigned char*\0"
    "imageData\0length\0startIndex\0"
    "opticalFlowStatusChanged\0supported\0"
    "enabled\0ok\0visionLocalizationStatusChanged\0"
    "distanceSensorStatusChanged\0"
    "gyroStatusChanged\0accelStatusChanged\0"
    "magSensorStatusChanged\0baroStatusChanged\0"
    "airspeedStatusChanged\0nameChanged\0"
    "newName\0systemSpecsChanged\0uasId\0"
    "logEntry\0uint32_t\0time_utc\0size\0"
    "uint16_t\0id\0num_logs\0last_log_num\0"
    "logData\0ofs\0uint8_t\0const uint8_t*\0"
    "data\0pairRX\0rxType\0rxSubType\0sendHilState\0"
    "time_us\0roll\0pitch\0yaw\0rollspeed\0"
    "pitchspeed\0yawspeed\0lat\0lon\0alt\0vx\0"
    "vy\0vz\0ind_airspeed\0true_airspeed\0xacc\0"
    "yacc\0zacc\0sendHilSensors\0xmag\0ymag\0"
    "zmag\0abs_pressure\0diff_pressure\0"
    "pressure_alt\0temperature\0fields_changed\0"
    "sendHilGps\0fix_type\0eph\0epv\0vel\0vn\0"
    "ve\0vd\0cog\0satellites\0sendHilOpticalFlow\0"
    "flow_x\0flow_y\0flow_comp_m_x\0flow_comp_m_y\0"
    "quality\0ground_distance\0sendMapRCToParam\0"
    "param_id\0scale\0value0\0param_rc_channel_index\0"
    "valueMin\0valueMax\0unsetRCToParameterMap"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UASInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      22,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,  159,    2, 0x06 /* Public */,
       7,    4,  168,    2, 0x06 /* Public */,
      11,    0,  177,    2, 0x06 /* Public */,
      12,    0,  178,    2, 0x06 /* Public */,
      13,    5,  179,    2, 0x06 /* Public */,
      18,    7,  190,    2, 0x06 /* Public */,
      24,    5,  205,    2, 0x06 /* Public */,
      30,    2,  216,    2, 0x06 /* Public */,
      32,    5,  221,    2, 0x06 /* Public */,
      38,    4,  232,    2, 0x06 /* Public */,
      43,    3,  241,    2, 0x06 /* Public */,
      47,    3,  248,    2, 0x06 /* Public */,
      48,    3,  255,    2, 0x06 /* Public */,
      49,    3,  262,    2, 0x06 /* Public */,
      50,    3,  269,    2, 0x06 /* Public */,
      51,    3,  276,    2, 0x06 /* Public */,
      52,    3,  283,    2, 0x06 /* Public */,
      53,    3,  290,    2, 0x06 /* Public */,
      54,    1,  297,    2, 0x06 /* Public */,
      56,    1,  300,    2, 0x06 /* Public */,
      58,    6,  303,    2, 0x06 /* Public */,
      66,    5,  316,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      71,    2,  327,    2, 0x0a /* Public */,
      74,   18,  332,    2, 0x0a /* Public */,
      93,   15,  369,    2, 0x0a /* Public */,
     102,   13,  400,    2, 0x0a /* Public */,
     112,    7,  427,    2, 0x0a /* Public */,
     119,    6,  442,    2, 0x0a /* Public */,
     126,    0,  455,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::Int,    3,    8,    9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QVariant, QMetaType::ULongLong,    3,   14,   15,   16,   17,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QVariant,   19,    8,   20,   21,   22,   23,   16,
    QMetaType::Void, 0x80000000 | 25, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Int,   19,   26,   27,   28,   29,
    QMetaType::Void, 0x80000000 | 25, QMetaType::QString,   19,   31,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   33,   34,   35,   36,   37,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 39, QMetaType::Int, QMetaType::Int,   33,   40,   41,   42,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   44,   45,   46,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   44,   45,   46,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   44,   45,   46,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   44,   45,   46,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   44,   45,   46,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   44,   45,   46,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   44,   45,   46,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   44,   45,   46,
    QMetaType::Void, QMetaType::QString,   55,
    QMetaType::Void, QMetaType::Int,   57,
    QMetaType::Void, 0x80000000 | 25, 0x80000000 | 59, 0x80000000 | 59, 0x80000000 | 62, 0x80000000 | 62, 0x80000000 | 62,   19,   60,   61,   63,   64,   65,
    QMetaType::Void, 0x80000000 | 25, 0x80000000 | 59, 0x80000000 | 62, 0x80000000 | 68, 0x80000000 | 69,   19,   67,   63,   10,   70,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   72,   73,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   75,   76,   77,   78,   79,   80,   81,   82,   83,   84,   85,   86,   87,   88,   89,   90,   91,   92,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::UInt,   75,   90,   91,   92,   79,   80,   81,   94,   95,   96,   97,   98,   99,  100,  101,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Int, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Int,   75,   82,   83,   84,  103,  104,  105,  106,  107,  108,  109,  110,  111,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Short, QMetaType::Short, QMetaType::Float, QMetaType::Float, QMetaType::UChar, QMetaType::Float,   75,  113,  114,  115,  116,  117,  118,
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::UChar, QMetaType::Float, QMetaType::Float,  120,  121,  122,  123,  124,  125,
    QMetaType::Void,

       0        // eod
};

void UASInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UASInterface *_t = static_cast<UASInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->textMessageReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 1: _t->errCountChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 2: _t->connected(); break;
        case 3: _t->disconnected(); break;
        case 4: _t->valueChanged((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const quint64(*)>(_a[5]))); break;
        case 5: _t->parameterUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< QVariant(*)>(_a[7]))); break;
        case 6: _t->batteryChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 7: _t->statusChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 8: _t->imageStarted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 9: _t->imageDataReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const unsigned char*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 10: _t->opticalFlowStatusChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 11: _t->visionLocalizationStatusChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 12: _t->distanceSensorStatusChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 13: _t->gyroStatusChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 14: _t->accelStatusChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 15: _t->magSensorStatusChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 16: _t->baroStatusChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 17: _t->airspeedStatusChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 18: _t->nameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 19: _t->systemSpecsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->logEntry((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< uint32_t(*)>(_a[2])),(*reinterpret_cast< uint32_t(*)>(_a[3])),(*reinterpret_cast< uint16_t(*)>(_a[4])),(*reinterpret_cast< uint16_t(*)>(_a[5])),(*reinterpret_cast< uint16_t(*)>(_a[6]))); break;
        case 21: _t->logData((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< uint32_t(*)>(_a[2])),(*reinterpret_cast< uint16_t(*)>(_a[3])),(*reinterpret_cast< uint8_t(*)>(_a[4])),(*reinterpret_cast< const uint8_t*(*)>(_a[5]))); break;
        case 22: _t->pairRX((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 23: _t->sendHilState((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10])),(*reinterpret_cast< float(*)>(_a[11])),(*reinterpret_cast< float(*)>(_a[12])),(*reinterpret_cast< float(*)>(_a[13])),(*reinterpret_cast< float(*)>(_a[14])),(*reinterpret_cast< float(*)>(_a[15])),(*reinterpret_cast< float(*)>(_a[16])),(*reinterpret_cast< float(*)>(_a[17])),(*reinterpret_cast< float(*)>(_a[18]))); break;
        case 24: _t->sendHilSensors((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< float(*)>(_a[9])),(*reinterpret_cast< float(*)>(_a[10])),(*reinterpret_cast< float(*)>(_a[11])),(*reinterpret_cast< float(*)>(_a[12])),(*reinterpret_cast< float(*)>(_a[13])),(*reinterpret_cast< float(*)>(_a[14])),(*reinterpret_cast< quint32(*)>(_a[15]))); break;
        case 25: _t->sendHilGps((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< float(*)>(_a[9])),(*reinterpret_cast< float(*)>(_a[10])),(*reinterpret_cast< float(*)>(_a[11])),(*reinterpret_cast< float(*)>(_a[12])),(*reinterpret_cast< int(*)>(_a[13]))); break;
        case 26: _t->sendHilOpticalFlow((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< qint16(*)>(_a[2])),(*reinterpret_cast< qint16(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< quint8(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7]))); break;
        case 27: _t->sendMapRCToParam((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< quint8(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6]))); break;
        case 28: _t->unsetRCToParameterMap(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (UASInterface::*_t)(int , int , int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::textMessageReceived)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , QString , QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::errCountChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::connected)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::disconnected)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(const int , const QString & , const QString & , const QVariant & , const quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::valueChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , int , QString , int , int , int , QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::parameterUpdate)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , double , double , double , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::batteryChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::statusChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , int , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::imageStarted)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(int , const unsigned char * , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::imageDataReceived)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::opticalFlowStatusChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::visionLocalizationStatusChanged)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::distanceSensorStatusChanged)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::gyroStatusChanged)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::accelStatusChanged)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::magSensorStatusChanged)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::baroStatusChanged)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(bool , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::airspeedStatusChanged)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::nameChanged)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::systemSpecsChanged)) {
                *result = 19;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , uint32_t , uint32_t , uint16_t , uint16_t , uint16_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::logEntry)) {
                *result = 20;
                return;
            }
        }
        {
            typedef void (UASInterface::*_t)(UASInterface * , uint32_t , uint16_t , uint8_t , const uint8_t * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASInterface::logData)) {
                *result = 21;
                return;
            }
        }
    }
}

const QMetaObject UASInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UASInterface.data,
      qt_meta_data_UASInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UASInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UASInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UASInterface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int UASInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    return _id;
}

// SIGNAL 0
void UASInterface::textMessageReceived(int _t1, int _t2, int _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UASInterface::errCountChanged(int _t1, QString _t2, QString _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UASInterface::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void UASInterface::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void UASInterface::valueChanged(const int _t1, const QString & _t2, const QString & _t3, const QVariant & _t4, const quint64 _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void UASInterface::parameterUpdate(int _t1, int _t2, QString _t3, int _t4, int _t5, int _t6, QVariant _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void UASInterface::batteryChanged(UASInterface * _t1, double _t2, double _t3, double _t4, int _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void UASInterface::statusChanged(UASInterface * _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void UASInterface::imageStarted(int _t1, int _t2, int _t3, int _t4, int _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void UASInterface::imageDataReceived(int _t1, const unsigned char * _t2, int _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void UASInterface::opticalFlowStatusChanged(bool _t1, bool _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void UASInterface::visionLocalizationStatusChanged(bool _t1, bool _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void UASInterface::distanceSensorStatusChanged(bool _t1, bool _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void UASInterface::gyroStatusChanged(bool _t1, bool _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void UASInterface::accelStatusChanged(bool _t1, bool _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void UASInterface::magSensorStatusChanged(bool _t1, bool _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void UASInterface::baroStatusChanged(bool _t1, bool _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void UASInterface::airspeedStatusChanged(bool _t1, bool _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void UASInterface::nameChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void UASInterface::systemSpecsChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void UASInterface::logEntry(UASInterface * _t1, uint32_t _t2, uint32_t _t3, uint16_t _t4, uint16_t _t5, uint16_t _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void UASInterface::logData(UASInterface * _t1, uint32_t _t2, uint16_t _t3, uint8_t _t4, const uint8_t * _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
