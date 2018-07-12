/****************************************************************************
** Meta object code from reading C++ file 'UAS.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/uas/UAS.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UAS.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UAS_t {
    QByteArrayData data[110];
    char stringdata0[1141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UAS_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UAS_t qt_meta_stringdata_UAS = {
    {
QT_MOC_LITERAL(0, 0, 3), // "UAS"
QT_MOC_LITERAL(1, 4, 12), // "imageStarted"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 9), // "timestamp"
QT_MOC_LITERAL(4, 28, 10), // "imageReady"
QT_MOC_LITERAL(5, 39, 13), // "UASInterface*"
QT_MOC_LITERAL(6, 53, 3), // "uas"
QT_MOC_LITERAL(7, 57, 18), // "hilControlsChanged"
QT_MOC_LITERAL(8, 76, 4), // "time"
QT_MOC_LITERAL(9, 81, 12), // "rollAilerons"
QT_MOC_LITERAL(10, 94, 13), // "pitchElevator"
QT_MOC_LITERAL(11, 108, 9), // "yawRudder"
QT_MOC_LITERAL(12, 118, 8), // "throttle"
QT_MOC_LITERAL(13, 127, 10), // "systemMode"
QT_MOC_LITERAL(14, 138, 7), // "navMode"
QT_MOC_LITERAL(15, 146, 11), // "rollChanged"
QT_MOC_LITERAL(16, 158, 3), // "val"
QT_MOC_LITERAL(17, 162, 4), // "name"
QT_MOC_LITERAL(18, 167, 12), // "pitchChanged"
QT_MOC_LITERAL(19, 180, 10), // "yawChanged"
QT_MOC_LITERAL(20, 191, 6), // "pairRX"
QT_MOC_LITERAL(21, 198, 6), // "rxType"
QT_MOC_LITERAL(22, 205, 9), // "rxSubType"
QT_MOC_LITERAL(23, 215, 19), // "enableHilFlightGear"
QT_MOC_LITERAL(24, 235, 6), // "enable"
QT_MOC_LITERAL(25, 242, 7), // "options"
QT_MOC_LITERAL(26, 250, 9), // "sensorHil"
QT_MOC_LITERAL(27, 260, 13), // "configuration"
QT_MOC_LITERAL(28, 274, 15), // "enableHilJSBSim"
QT_MOC_LITERAL(29, 290, 15), // "enableHilXPlane"
QT_MOC_LITERAL(30, 306, 12), // "sendHilState"
QT_MOC_LITERAL(31, 319, 7), // "time_us"
QT_MOC_LITERAL(32, 327, 4), // "roll"
QT_MOC_LITERAL(33, 332, 5), // "pitch"
QT_MOC_LITERAL(34, 338, 3), // "yaw"
QT_MOC_LITERAL(35, 342, 16), // "rollRotationRate"
QT_MOC_LITERAL(36, 359, 17), // "pitchRotationRate"
QT_MOC_LITERAL(37, 377, 15), // "yawRotationRate"
QT_MOC_LITERAL(38, 393, 3), // "lat"
QT_MOC_LITERAL(39, 397, 3), // "lon"
QT_MOC_LITERAL(40, 401, 3), // "alt"
QT_MOC_LITERAL(41, 405, 2), // "vx"
QT_MOC_LITERAL(42, 408, 2), // "vy"
QT_MOC_LITERAL(43, 411, 2), // "vz"
QT_MOC_LITERAL(44, 414, 12), // "ind_airspeed"
QT_MOC_LITERAL(45, 427, 13), // "true_airspeed"
QT_MOC_LITERAL(46, 441, 4), // "xacc"
QT_MOC_LITERAL(47, 446, 4), // "yacc"
QT_MOC_LITERAL(48, 451, 4), // "zacc"
QT_MOC_LITERAL(49, 456, 18), // "sendHilGroundTruth"
QT_MOC_LITERAL(50, 475, 14), // "sendHilSensors"
QT_MOC_LITERAL(51, 490, 9), // "rollspeed"
QT_MOC_LITERAL(52, 500, 10), // "pitchspeed"
QT_MOC_LITERAL(53, 511, 8), // "yawspeed"
QT_MOC_LITERAL(54, 520, 4), // "xmag"
QT_MOC_LITERAL(55, 525, 4), // "ymag"
QT_MOC_LITERAL(56, 530, 4), // "zmag"
QT_MOC_LITERAL(57, 535, 12), // "abs_pressure"
QT_MOC_LITERAL(58, 548, 13), // "diff_pressure"
QT_MOC_LITERAL(59, 562, 12), // "pressure_alt"
QT_MOC_LITERAL(60, 575, 11), // "temperature"
QT_MOC_LITERAL(61, 587, 14), // "fields_changed"
QT_MOC_LITERAL(62, 602, 18), // "sendHilOpticalFlow"
QT_MOC_LITERAL(63, 621, 6), // "flow_x"
QT_MOC_LITERAL(64, 628, 6), // "flow_y"
QT_MOC_LITERAL(65, 635, 13), // "flow_comp_m_x"
QT_MOC_LITERAL(66, 649, 13), // "flow_comp_m_y"
QT_MOC_LITERAL(67, 663, 7), // "quality"
QT_MOC_LITERAL(68, 671, 15), // "ground_distance"
QT_MOC_LITERAL(69, 687, 16), // "addZeroMeanNoise"
QT_MOC_LITERAL(70, 704, 10), // "truth_meas"
QT_MOC_LITERAL(71, 715, 9), // "noise_var"
QT_MOC_LITERAL(72, 725, 10), // "sendHilGps"
QT_MOC_LITERAL(73, 736, 8), // "fix_type"
QT_MOC_LITERAL(74, 745, 3), // "eph"
QT_MOC_LITERAL(75, 749, 3), // "epv"
QT_MOC_LITERAL(76, 753, 3), // "vel"
QT_MOC_LITERAL(77, 757, 2), // "vn"
QT_MOC_LITERAL(78, 760, 2), // "ve"
QT_MOC_LITERAL(79, 763, 2), // "vd"
QT_MOC_LITERAL(80, 766, 3), // "cog"
QT_MOC_LITERAL(81, 770, 10), // "satellites"
QT_MOC_LITERAL(82, 781, 8), // "startHil"
QT_MOC_LITERAL(83, 790, 7), // "stopHil"
QT_MOC_LITERAL(84, 798, 26), // "setExternalControlSetpoint"
QT_MOC_LITERAL(85, 825, 6), // "thrust"
QT_MOC_LITERAL(86, 832, 7), // "buttons"
QT_MOC_LITERAL(87, 840, 12), // "joystickMode"
QT_MOC_LITERAL(88, 853, 28), // "setManual6DOFControlCommands"
QT_MOC_LITERAL(89, 882, 1), // "x"
QT_MOC_LITERAL(90, 884, 1), // "y"
QT_MOC_LITERAL(91, 886, 1), // "z"
QT_MOC_LITERAL(92, 888, 14), // "receiveMessage"
QT_MOC_LITERAL(93, 903, 17), // "mavlink_message_t"
QT_MOC_LITERAL(94, 921, 7), // "message"
QT_MOC_LITERAL(95, 929, 16), // "startCalibration"
QT_MOC_LITERAL(96, 946, 20), // "StartCalibrationType"
QT_MOC_LITERAL(97, 967, 7), // "calType"
QT_MOC_LITERAL(98, 975, 15), // "stopCalibration"
QT_MOC_LITERAL(99, 991, 14), // "startBusConfig"
QT_MOC_LITERAL(100, 1006, 18), // "StartBusConfigType"
QT_MOC_LITERAL(101, 1025, 13), // "stopBusConfig"
QT_MOC_LITERAL(102, 1039, 16), // "sendMapRCToParam"
QT_MOC_LITERAL(103, 1056, 8), // "param_id"
QT_MOC_LITERAL(104, 1065, 5), // "scale"
QT_MOC_LITERAL(105, 1071, 6), // "value0"
QT_MOC_LITERAL(106, 1078, 22), // "param_rc_channel_index"
QT_MOC_LITERAL(107, 1101, 8), // "valueMin"
QT_MOC_LITERAL(108, 1110, 8), // "valueMax"
QT_MOC_LITERAL(109, 1119, 21) // "unsetRCToParameterMap"

    },
    "UAS\0imageStarted\0\0timestamp\0imageReady\0"
    "UASInterface*\0uas\0hilControlsChanged\0"
    "time\0rollAilerons\0pitchElevator\0"
    "yawRudder\0throttle\0systemMode\0navMode\0"
    "rollChanged\0val\0name\0pitchChanged\0"
    "yawChanged\0pairRX\0rxType\0rxSubType\0"
    "enableHilFlightGear\0enable\0options\0"
    "sensorHil\0configuration\0enableHilJSBSim\0"
    "enableHilXPlane\0sendHilState\0time_us\0"
    "roll\0pitch\0yaw\0rollRotationRate\0"
    "pitchRotationRate\0yawRotationRate\0lat\0"
    "lon\0alt\0vx\0vy\0vz\0ind_airspeed\0"
    "true_airspeed\0xacc\0yacc\0zacc\0"
    "sendHilGroundTruth\0sendHilSensors\0"
    "rollspeed\0pitchspeed\0yawspeed\0xmag\0"
    "ymag\0zmag\0abs_pressure\0diff_pressure\0"
    "pressure_alt\0temperature\0fields_changed\0"
    "sendHilOpticalFlow\0flow_x\0flow_y\0"
    "flow_comp_m_x\0flow_comp_m_y\0quality\0"
    "ground_distance\0addZeroMeanNoise\0"
    "truth_meas\0noise_var\0sendHilGps\0"
    "fix_type\0eph\0epv\0vel\0vn\0ve\0vd\0cog\0"
    "satellites\0startHil\0stopHil\0"
    "setExternalControlSetpoint\0thrust\0"
    "buttons\0joystickMode\0setManual6DOFControlCommands\0"
    "x\0y\0z\0receiveMessage\0mavlink_message_t\0"
    "message\0startCalibration\0StartCalibrationType\0"
    "calType\0stopCalibration\0startBusConfig\0"
    "StartBusConfigType\0stopBusConfig\0"
    "sendMapRCToParam\0param_id\0scale\0value0\0"
    "param_rc_channel_index\0valueMin\0"
    "valueMax\0unsetRCToParameterMap"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UAS[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  149,    2, 0x06 /* Public */,
       4,    1,  152,    2, 0x06 /* Public */,
       7,    7,  155,    2, 0x06 /* Public */,
      15,    2,  170,    2, 0x06 /* Public */,
      18,    2,  175,    2, 0x06 /* Public */,
      19,    2,  180,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      20,    2,  185,    2, 0x0a /* Public */,
      23,    4,  190,    2, 0x0a /* Public */,
      28,    2,  199,    2, 0x0a /* Public */,
      29,    1,  204,    2, 0x0a /* Public */,
      30,   18,  207,    2, 0x0a /* Public */,
      49,   18,  244,    2, 0x0a /* Public */,
      50,   15,  281,    2, 0x0a /* Public */,
      62,    7,  312,    2, 0x0a /* Public */,
      69,    2,  327,    2, 0x0a /* Public */,
      72,   13,  332,    2, 0x0a /* Public */,
      82,    0,  359,    2, 0x0a /* Public */,
      83,    0,  360,    2, 0x0a /* Public */,
      84,    6,  361,    2, 0x0a /* Public */,
      88,    6,  374,    2, 0x0a /* Public */,
      92,    1,  387,    2, 0x0a /* Public */,
      95,    1,  390,    2, 0x0a /* Public */,
      98,    0,  393,    2, 0x0a /* Public */,
      99,    1,  394,    2, 0x0a /* Public */,
     101,    0,  397,    2, 0x0a /* Public */,
     102,    6,  398,    2, 0x0a /* Public */,
     109,    0,  411,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::ULongLong,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::UChar, QMetaType::UChar,    8,    9,   10,   11,   12,   13,   14,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   16,   17,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   16,   17,
    QMetaType::Void, QMetaType::Double, QMetaType::QString,   16,   17,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   21,   22,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::Bool, QMetaType::QObjectStar,   24,   25,   26,   27,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,   24,   25,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   31,   32,   33,   34,   35,   36,   37,   38,   39,   40,   41,   42,   43,   44,   45,   46,   47,   48,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   31,   32,   33,   34,   35,   36,   37,   38,   39,   40,   41,   42,   43,   44,   45,   46,   47,   48,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::UInt,   31,   46,   47,   48,   51,   52,   53,   54,   55,   56,   57,   58,   59,   60,   61,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Short, QMetaType::Short, QMetaType::Float, QMetaType::Float, QMetaType::UChar, QMetaType::Float,   31,   63,   64,   65,   66,   67,   68,
    QMetaType::Float, QMetaType::Float, QMetaType::Float,   70,   71,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Int, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Int,   31,   38,   39,   40,   73,   74,   75,   76,   77,   78,   79,   80,   81,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::UShort, QMetaType::Int,   32,   33,   34,   85,   86,   87,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,   89,   90,   91,   32,   33,   34,
    QMetaType::Void, 0x80000000 | 93,   94,
    QMetaType::Void, 0x80000000 | 96,   97,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 100,   97,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::UChar, QMetaType::Float, QMetaType::Float,  103,  104,  105,  106,  107,  108,
    QMetaType::Void,

       0        // eod
};

void UAS::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UAS *_t = static_cast<UAS *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->imageStarted((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 1: _t->imageReady((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 2: _t->hilControlsChanged((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< quint8(*)>(_a[6])),(*reinterpret_cast< quint8(*)>(_a[7]))); break;
        case 3: _t->rollChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->pitchChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->yawChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->pairRX((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->enableHilFlightGear((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< QObject*(*)>(_a[4]))); break;
        case 8: _t->enableHilJSBSim((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 9: _t->enableHilXPlane((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->sendHilState((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10])),(*reinterpret_cast< float(*)>(_a[11])),(*reinterpret_cast< float(*)>(_a[12])),(*reinterpret_cast< float(*)>(_a[13])),(*reinterpret_cast< float(*)>(_a[14])),(*reinterpret_cast< float(*)>(_a[15])),(*reinterpret_cast< float(*)>(_a[16])),(*reinterpret_cast< float(*)>(_a[17])),(*reinterpret_cast< float(*)>(_a[18]))); break;
        case 11: _t->sendHilGroundTruth((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10])),(*reinterpret_cast< float(*)>(_a[11])),(*reinterpret_cast< float(*)>(_a[12])),(*reinterpret_cast< float(*)>(_a[13])),(*reinterpret_cast< float(*)>(_a[14])),(*reinterpret_cast< float(*)>(_a[15])),(*reinterpret_cast< float(*)>(_a[16])),(*reinterpret_cast< float(*)>(_a[17])),(*reinterpret_cast< float(*)>(_a[18]))); break;
        case 12: _t->sendHilSensors((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< float(*)>(_a[9])),(*reinterpret_cast< float(*)>(_a[10])),(*reinterpret_cast< float(*)>(_a[11])),(*reinterpret_cast< float(*)>(_a[12])),(*reinterpret_cast< float(*)>(_a[13])),(*reinterpret_cast< float(*)>(_a[14])),(*reinterpret_cast< quint32(*)>(_a[15]))); break;
        case 13: _t->sendHilOpticalFlow((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< qint16(*)>(_a[2])),(*reinterpret_cast< qint16(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< quint8(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7]))); break;
        case 14: { float _r = _t->addZeroMeanNoise((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->sendHilGps((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< float(*)>(_a[9])),(*reinterpret_cast< float(*)>(_a[10])),(*reinterpret_cast< float(*)>(_a[11])),(*reinterpret_cast< float(*)>(_a[12])),(*reinterpret_cast< int(*)>(_a[13]))); break;
        case 16: _t->startHil(); break;
        case 17: _t->stopHil(); break;
        case 18: _t->setExternalControlSetpoint((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< quint16(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 19: _t->setManual6DOFControlCommands((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 20: _t->receiveMessage((*reinterpret_cast< mavlink_message_t(*)>(_a[1]))); break;
        case 21: _t->startCalibration((*reinterpret_cast< StartCalibrationType(*)>(_a[1]))); break;
        case 22: _t->stopCalibration(); break;
        case 23: _t->startBusConfig((*reinterpret_cast< StartBusConfigType(*)>(_a[1]))); break;
        case 24: _t->stopBusConfig(); break;
        case 25: _t->sendMapRCToParam((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< quint8(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6]))); break;
        case 26: _t->unsetRCToParameterMap(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
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
            typedef void (UAS::*_t)(quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UAS::imageStarted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (UAS::*_t)(UASInterface * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UAS::imageReady)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (UAS::*_t)(quint64 , float , float , float , float , quint8 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UAS::hilControlsChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (UAS::*_t)(double , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UAS::rollChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (UAS::*_t)(double , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UAS::pitchChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (UAS::*_t)(double , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UAS::yawChanged)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject UAS::staticMetaObject = {
    { &UASInterface::staticMetaObject, qt_meta_stringdata_UAS.data,
      qt_meta_data_UAS,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UAS::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UAS::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UAS.stringdata0))
        return static_cast<void*>(this);
    return UASInterface::qt_metacast(_clname);
}

int UAS::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UASInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void UAS::imageStarted(quint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UAS::imageReady(UASInterface * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UAS::hilControlsChanged(quint64 _t1, float _t2, float _t3, float _t4, float _t5, quint8 _t6, quint8 _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UAS::rollChanged(double _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void UAS::pitchChanged(double _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void UAS::yawChanged(double _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
