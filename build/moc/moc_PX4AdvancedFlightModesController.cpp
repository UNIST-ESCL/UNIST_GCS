/****************************************************************************
** Meta object code from reading C++ file 'PX4AdvancedFlightModesController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/AutoPilotPlugins/PX4/PX4AdvancedFlightModesController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PX4AdvancedFlightModesController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PX4AdvancedFlightModesController_t {
    QByteArrayData data[69];
    char stringdata0[1282];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PX4AdvancedFlightModesController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PX4AdvancedFlightModesController_t qt_meta_stringdata_PX4AdvancedFlightModesController = {
    {
QT_MOC_LITERAL(0, 0, 32), // "PX4AdvancedFlightModesController"
QT_MOC_LITERAL(1, 33, 22), // "switchLiveRangeChanged"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 17), // "thresholdsChanged"
QT_MOC_LITERAL(4, 75, 20), // "modesSelectedChanged"
QT_MOC_LITERAL(5, 96, 19), // "modesVisibleChanged"
QT_MOC_LITERAL(6, 116, 21), // "channelIndicesChanged"
QT_MOC_LITERAL(7, 138, 15), // "modeRowsChanged"
QT_MOC_LITERAL(8, 154, 18), // "_rcChannelsChanged"
QT_MOC_LITERAL(9, 173, 12), // "channelCount"
QT_MOC_LITERAL(10, 186, 28), // "int[Vehicle::cMaxRcChannels]"
QT_MOC_LITERAL(11, 215, 9), // "pwmValues"
QT_MOC_LITERAL(12, 225, 18), // "generateThresholds"
QT_MOC_LITERAL(13, 244, 18), // "validConfiguration"
QT_MOC_LITERAL(14, 263, 19), // "configurationErrors"
QT_MOC_LITERAL(15, 283, 9), // "fixedWing"
QT_MOC_LITERAL(16, 293, 16), // "reservedChannels"
QT_MOC_LITERAL(17, 310, 13), // "assistModeRow"
QT_MOC_LITERAL(18, 324, 11), // "autoModeRow"
QT_MOC_LITERAL(19, 336, 11), // "acroModeRow"
QT_MOC_LITERAL(20, 348, 13), // "altCtlModeRow"
QT_MOC_LITERAL(21, 362, 13), // "posCtlModeRow"
QT_MOC_LITERAL(22, 376, 13), // "loiterModeRow"
QT_MOC_LITERAL(23, 390, 14), // "missionModeRow"
QT_MOC_LITERAL(24, 405, 13), // "returnModeRow"
QT_MOC_LITERAL(25, 419, 15), // "offboardModeRow"
QT_MOC_LITERAL(26, 435, 22), // "manualModeChannelIndex"
QT_MOC_LITERAL(27, 458, 22), // "assistModeChannelIndex"
QT_MOC_LITERAL(28, 481, 20), // "autoModeChannelIndex"
QT_MOC_LITERAL(29, 502, 20), // "acroModeChannelIndex"
QT_MOC_LITERAL(30, 523, 22), // "altCtlModeChannelIndex"
QT_MOC_LITERAL(31, 546, 22), // "posCtlModeChannelIndex"
QT_MOC_LITERAL(32, 569, 22), // "loiterModeChannelIndex"
QT_MOC_LITERAL(33, 592, 23), // "missionModeChannelIndex"
QT_MOC_LITERAL(34, 616, 22), // "returnModeChannelIndex"
QT_MOC_LITERAL(35, 639, 24), // "offboardModeChannelIndex"
QT_MOC_LITERAL(36, 664, 17), // "manualModeRcValue"
QT_MOC_LITERAL(37, 682, 17), // "assistModeRcValue"
QT_MOC_LITERAL(38, 700, 15), // "autoModeRcValue"
QT_MOC_LITERAL(39, 716, 15), // "acroModeRcValue"
QT_MOC_LITERAL(40, 732, 17), // "altCtlModeRcValue"
QT_MOC_LITERAL(41, 750, 17), // "posCtlModeRcValue"
QT_MOC_LITERAL(42, 768, 17), // "loiterModeRcValue"
QT_MOC_LITERAL(43, 786, 18), // "missionModeRcValue"
QT_MOC_LITERAL(44, 805, 17), // "returnModeRcValue"
QT_MOC_LITERAL(45, 823, 19), // "offboardModeRcValue"
QT_MOC_LITERAL(46, 843, 19), // "manualModeThreshold"
QT_MOC_LITERAL(47, 863, 19), // "assistModeThreshold"
QT_MOC_LITERAL(48, 883, 17), // "autoModeThreshold"
QT_MOC_LITERAL(49, 901, 17), // "acroModeThreshold"
QT_MOC_LITERAL(50, 919, 19), // "altCtlModeThreshold"
QT_MOC_LITERAL(51, 939, 19), // "posCtlModeThreshold"
QT_MOC_LITERAL(52, 959, 19), // "loiterModeThreshold"
QT_MOC_LITERAL(53, 979, 20), // "missionModeThreshold"
QT_MOC_LITERAL(54, 1000, 19), // "returnModeThreshold"
QT_MOC_LITERAL(55, 1020, 21), // "offboardModeThreshold"
QT_MOC_LITERAL(56, 1042, 17), // "assistModeVisible"
QT_MOC_LITERAL(57, 1060, 15), // "autoModeVisible"
QT_MOC_LITERAL(58, 1076, 18), // "manualModeSelected"
QT_MOC_LITERAL(59, 1095, 18), // "assistModeSelected"
QT_MOC_LITERAL(60, 1114, 16), // "autoModeSelected"
QT_MOC_LITERAL(61, 1131, 16), // "acroModeSelected"
QT_MOC_LITERAL(62, 1148, 18), // "altCtlModeSelected"
QT_MOC_LITERAL(63, 1167, 18), // "posCtlModeSelected"
QT_MOC_LITERAL(64, 1186, 19), // "missionModeSelected"
QT_MOC_LITERAL(65, 1206, 18), // "loiterModeSelected"
QT_MOC_LITERAL(66, 1225, 18), // "returnModeSelected"
QT_MOC_LITERAL(67, 1244, 20), // "offboardModeSelected"
QT_MOC_LITERAL(68, 1265, 16) // "channelListModel"

    },
    "PX4AdvancedFlightModesController\0"
    "switchLiveRangeChanged\0\0thresholdsChanged\0"
    "modesSelectedChanged\0modesVisibleChanged\0"
    "channelIndicesChanged\0modeRowsChanged\0"
    "_rcChannelsChanged\0channelCount\0"
    "int[Vehicle::cMaxRcChannels]\0pwmValues\0"
    "generateThresholds\0validConfiguration\0"
    "configurationErrors\0fixedWing\0"
    "reservedChannels\0assistModeRow\0"
    "autoModeRow\0acroModeRow\0altCtlModeRow\0"
    "posCtlModeRow\0loiterModeRow\0missionModeRow\0"
    "returnModeRow\0offboardModeRow\0"
    "manualModeChannelIndex\0assistModeChannelIndex\0"
    "autoModeChannelIndex\0acroModeChannelIndex\0"
    "altCtlModeChannelIndex\0posCtlModeChannelIndex\0"
    "loiterModeChannelIndex\0missionModeChannelIndex\0"
    "returnModeChannelIndex\0offboardModeChannelIndex\0"
    "manualModeRcValue\0assistModeRcValue\0"
    "autoModeRcValue\0acroModeRcValue\0"
    "altCtlModeRcValue\0posCtlModeRcValue\0"
    "loiterModeRcValue\0missionModeRcValue\0"
    "returnModeRcValue\0offboardModeRcValue\0"
    "manualModeThreshold\0assistModeThreshold\0"
    "autoModeThreshold\0acroModeThreshold\0"
    "altCtlModeThreshold\0posCtlModeThreshold\0"
    "loiterModeThreshold\0missionModeThreshold\0"
    "returnModeThreshold\0offboardModeThreshold\0"
    "assistModeVisible\0autoModeVisible\0"
    "manualModeSelected\0assistModeSelected\0"
    "autoModeSelected\0acroModeSelected\0"
    "altCtlModeSelected\0posCtlModeSelected\0"
    "missionModeSelected\0loiterModeSelected\0"
    "returnModeSelected\0offboardModeSelected\0"
    "channelListModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PX4AdvancedFlightModesController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
      57,   66, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,
       6,    0,   58,    2, 0x06 /* Public */,
       7,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    2,   60,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      12,    0,   65,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 10,    9,   11,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
      13, QMetaType::Bool, 0x00095401,
      14, QMetaType::QString, 0x00095401,
       9, QMetaType::Int, 0x00095401,
      15, QMetaType::Bool, 0x00095401,
      16, QMetaType::QString, 0x00095401,
      17, QMetaType::Int, 0x00495003,
      18, QMetaType::Int, 0x00495003,
      19, QMetaType::Int, 0x00495003,
      20, QMetaType::Int, 0x00495003,
      21, QMetaType::Int, 0x00495003,
      22, QMetaType::Int, 0x00495003,
      23, QMetaType::Int, 0x00495003,
      24, QMetaType::Int, 0x00495003,
      25, QMetaType::Int, 0x00495003,
      26, QMetaType::Int, 0x00495103,
      27, QMetaType::Int, 0x00495001,
      28, QMetaType::Int, 0x00495001,
      29, QMetaType::Int, 0x00495103,
      30, QMetaType::Int, 0x00495001,
      31, QMetaType::Int, 0x00495103,
      32, QMetaType::Int, 0x00495103,
      33, QMetaType::Int, 0x00495001,
      34, QMetaType::Int, 0x00495103,
      35, QMetaType::Int, 0x00495103,
      36, QMetaType::Double, 0x00495001,
      37, QMetaType::Double, 0x00495001,
      38, QMetaType::Double, 0x00495001,
      39, QMetaType::Double, 0x00495001,
      40, QMetaType::Double, 0x00495001,
      41, QMetaType::Double, 0x00495001,
      42, QMetaType::Double, 0x00495001,
      43, QMetaType::Double, 0x00495001,
      44, QMetaType::Double, 0x00495001,
      45, QMetaType::Double, 0x00495001,
      46, QMetaType::Double, 0x00495001,
      47, QMetaType::Double, 0x00495103,
      48, QMetaType::Double, 0x00495103,
      49, QMetaType::Double, 0x00495103,
      50, QMetaType::Double, 0x00495103,
      51, QMetaType::Double, 0x00495103,
      52, QMetaType::Double, 0x00495103,
      53, QMetaType::Double, 0x00495103,
      54, QMetaType::Double, 0x00495103,
      55, QMetaType::Double, 0x00495103,
      56, QMetaType::Bool, 0x00495003,
      57, QMetaType::Bool, 0x00495003,
      58, QMetaType::Bool, 0x00495003,
      59, QMetaType::Bool, 0x00495003,
      60, QMetaType::Bool, 0x00495003,
      61, QMetaType::Bool, 0x00495003,
      62, QMetaType::Bool, 0x00495003,
      63, QMetaType::Bool, 0x00495003,
      64, QMetaType::Bool, 0x00495003,
      65, QMetaType::Bool, 0x00495003,
      66, QMetaType::Bool, 0x00495003,
      67, QMetaType::Bool, 0x00495003,
      68, QMetaType::QStringList, 0x00095401,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       5,
       5,
       5,
       5,
       5,
       5,
       5,
       5,
       5,
       4,
       4,
       4,
       4,
       4,
       4,
       4,
       4,
       4,
       4,
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
       1,
       1,
       1,
       1,
       1,
       1,
       1,
       1,
       1,
       3,
       3,
       2,
       2,
       2,
       2,
       2,
       2,
       2,
       2,
       2,
       2,
       0,

       0        // eod
};

void PX4AdvancedFlightModesController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PX4AdvancedFlightModesController *_t = static_cast<PX4AdvancedFlightModesController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->switchLiveRangeChanged(); break;
        case 1: _t->thresholdsChanged(); break;
        case 2: _t->modesSelectedChanged(); break;
        case 3: _t->modesVisibleChanged(); break;
        case 4: _t->channelIndicesChanged(); break;
        case 5: _t->modeRowsChanged(); break;
        case 6: _t->_rcChannelsChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)[Vehicle::cMaxRcChannels]>(_a[2]))); break;
        case 7: _t->generateThresholds(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (PX4AdvancedFlightModesController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4AdvancedFlightModesController::switchLiveRangeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PX4AdvancedFlightModesController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4AdvancedFlightModesController::thresholdsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PX4AdvancedFlightModesController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4AdvancedFlightModesController::modesSelectedChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (PX4AdvancedFlightModesController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4AdvancedFlightModesController::modesVisibleChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (PX4AdvancedFlightModesController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4AdvancedFlightModesController::channelIndicesChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (PX4AdvancedFlightModesController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PX4AdvancedFlightModesController::modeRowsChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        PX4AdvancedFlightModesController *_t = static_cast<PX4AdvancedFlightModesController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->_validConfiguration; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->_configurationErrors; break;
        case 2: *reinterpret_cast< int*>(_v) = _t->_channelCount; break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->_fixedWing; break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->_reservedChannels; break;
        case 5: *reinterpret_cast< int*>(_v) = _t->_assistModeRow; break;
        case 6: *reinterpret_cast< int*>(_v) = _t->_autoModeRow; break;
        case 7: *reinterpret_cast< int*>(_v) = _t->_acroModeRow; break;
        case 8: *reinterpret_cast< int*>(_v) = _t->_altCtlModeRow; break;
        case 9: *reinterpret_cast< int*>(_v) = _t->_posCtlModeRow; break;
        case 10: *reinterpret_cast< int*>(_v) = _t->_loiterModeRow; break;
        case 11: *reinterpret_cast< int*>(_v) = _t->_missionModeRow; break;
        case 12: *reinterpret_cast< int*>(_v) = _t->_returnModeRow; break;
        case 13: *reinterpret_cast< int*>(_v) = _t->_offboardModeRow; break;
        case 14: *reinterpret_cast< int*>(_v) = _t->manualModeChannelIndex(); break;
        case 15: *reinterpret_cast< int*>(_v) = _t->assistModeChannelIndex(); break;
        case 16: *reinterpret_cast< int*>(_v) = _t->autoModeChannelIndex(); break;
        case 17: *reinterpret_cast< int*>(_v) = _t->acroModeChannelIndex(); break;
        case 18: *reinterpret_cast< int*>(_v) = _t->altCtlModeChannelIndex(); break;
        case 19: *reinterpret_cast< int*>(_v) = _t->posCtlModeChannelIndex(); break;
        case 20: *reinterpret_cast< int*>(_v) = _t->loiterModeChannelIndex(); break;
        case 21: *reinterpret_cast< int*>(_v) = _t->missionModeChannelIndex(); break;
        case 22: *reinterpret_cast< int*>(_v) = _t->returnModeChannelIndex(); break;
        case 23: *reinterpret_cast< int*>(_v) = _t->offboardModeChannelIndex(); break;
        case 24: *reinterpret_cast< double*>(_v) = _t->manualModeRcValue(); break;
        case 25: *reinterpret_cast< double*>(_v) = _t->assistModeRcValue(); break;
        case 26: *reinterpret_cast< double*>(_v) = _t->autoModeRcValue(); break;
        case 27: *reinterpret_cast< double*>(_v) = _t->acroModeRcValue(); break;
        case 28: *reinterpret_cast< double*>(_v) = _t->altCtlModeRcValue(); break;
        case 29: *reinterpret_cast< double*>(_v) = _t->posCtlModeRcValue(); break;
        case 30: *reinterpret_cast< double*>(_v) = _t->loiterModeRcValue(); break;
        case 31: *reinterpret_cast< double*>(_v) = _t->missionModeRcValue(); break;
        case 32: *reinterpret_cast< double*>(_v) = _t->returnModeRcValue(); break;
        case 33: *reinterpret_cast< double*>(_v) = _t->offboardModeRcValue(); break;
        case 34: *reinterpret_cast< double*>(_v) = _t->manualModeThreshold(); break;
        case 35: *reinterpret_cast< double*>(_v) = _t->assistModeThreshold(); break;
        case 36: *reinterpret_cast< double*>(_v) = _t->autoModeThreshold(); break;
        case 37: *reinterpret_cast< double*>(_v) = _t->acroModeThreshold(); break;
        case 38: *reinterpret_cast< double*>(_v) = _t->altCtlModeThreshold(); break;
        case 39: *reinterpret_cast< double*>(_v) = _t->posCtlModeThreshold(); break;
        case 40: *reinterpret_cast< double*>(_v) = _t->loiterModeThreshold(); break;
        case 41: *reinterpret_cast< double*>(_v) = _t->missionModeThreshold(); break;
        case 42: *reinterpret_cast< double*>(_v) = _t->returnModeThreshold(); break;
        case 43: *reinterpret_cast< double*>(_v) = _t->offboardModeThreshold(); break;
        case 44: *reinterpret_cast< bool*>(_v) = _t->_assistModeVisible; break;
        case 45: *reinterpret_cast< bool*>(_v) = _t->_autoModeVisible; break;
        case 46: *reinterpret_cast< bool*>(_v) = _t->_manualModeSelected; break;
        case 47: *reinterpret_cast< bool*>(_v) = _t->_assistModeSelected; break;
        case 48: *reinterpret_cast< bool*>(_v) = _t->_autoModeSelected; break;
        case 49: *reinterpret_cast< bool*>(_v) = _t->_acroModeSelected; break;
        case 50: *reinterpret_cast< bool*>(_v) = _t->_altCtlModeSelected; break;
        case 51: *reinterpret_cast< bool*>(_v) = _t->_posCtlModeSelected; break;
        case 52: *reinterpret_cast< bool*>(_v) = _t->_missionModeSelected; break;
        case 53: *reinterpret_cast< bool*>(_v) = _t->_loiterModeSelected; break;
        case 54: *reinterpret_cast< bool*>(_v) = _t->_returnModeSelected; break;
        case 55: *reinterpret_cast< bool*>(_v) = _t->_offboardModeSelected; break;
        case 56: *reinterpret_cast< QStringList*>(_v) = _t->_channelListModel; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        PX4AdvancedFlightModesController *_t = static_cast<PX4AdvancedFlightModesController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 5:
            if (_t->_assistModeRow != *reinterpret_cast< int*>(_v)) {
                _t->_assistModeRow = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->modeRowsChanged();
            }
            break;
        case 6:
            if (_t->_autoModeRow != *reinterpret_cast< int*>(_v)) {
                _t->_autoModeRow = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->modeRowsChanged();
            }
            break;
        case 7:
            if (_t->_acroModeRow != *reinterpret_cast< int*>(_v)) {
                _t->_acroModeRow = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->modeRowsChanged();
            }
            break;
        case 8:
            if (_t->_altCtlModeRow != *reinterpret_cast< int*>(_v)) {
                _t->_altCtlModeRow = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->modeRowsChanged();
            }
            break;
        case 9:
            if (_t->_posCtlModeRow != *reinterpret_cast< int*>(_v)) {
                _t->_posCtlModeRow = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->modeRowsChanged();
            }
            break;
        case 10:
            if (_t->_loiterModeRow != *reinterpret_cast< int*>(_v)) {
                _t->_loiterModeRow = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->modeRowsChanged();
            }
            break;
        case 11:
            if (_t->_missionModeRow != *reinterpret_cast< int*>(_v)) {
                _t->_missionModeRow = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->modeRowsChanged();
            }
            break;
        case 12:
            if (_t->_returnModeRow != *reinterpret_cast< int*>(_v)) {
                _t->_returnModeRow = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->modeRowsChanged();
            }
            break;
        case 13:
            if (_t->_offboardModeRow != *reinterpret_cast< int*>(_v)) {
                _t->_offboardModeRow = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->modeRowsChanged();
            }
            break;
        case 14: _t->setManualModeChannelIndex(*reinterpret_cast< int*>(_v)); break;
        case 17: _t->setAcroModeChannelIndex(*reinterpret_cast< int*>(_v)); break;
        case 19: _t->setPosCtlModeChannelIndex(*reinterpret_cast< int*>(_v)); break;
        case 20: _t->setLoiterModeChannelIndex(*reinterpret_cast< int*>(_v)); break;
        case 22: _t->setReturnModeChannelIndex(*reinterpret_cast< int*>(_v)); break;
        case 23: _t->setOffboardModeChannelIndex(*reinterpret_cast< int*>(_v)); break;
        case 35: _t->setAssistModeThreshold(*reinterpret_cast< double*>(_v)); break;
        case 36: _t->setAutoModeThreshold(*reinterpret_cast< double*>(_v)); break;
        case 37: _t->setAcroModeThreshold(*reinterpret_cast< double*>(_v)); break;
        case 38: _t->setAltCtlModeThreshold(*reinterpret_cast< double*>(_v)); break;
        case 39: _t->setPosCtlModeThreshold(*reinterpret_cast< double*>(_v)); break;
        case 40: _t->setLoiterModeThreshold(*reinterpret_cast< double*>(_v)); break;
        case 41: _t->setMissionModeThreshold(*reinterpret_cast< double*>(_v)); break;
        case 42: _t->setReturnModeThreshold(*reinterpret_cast< double*>(_v)); break;
        case 43: _t->setOffboardModeThreshold(*reinterpret_cast< double*>(_v)); break;
        case 44:
            if (_t->_assistModeVisible != *reinterpret_cast< bool*>(_v)) {
                _t->_assistModeVisible = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->modesVisibleChanged();
            }
            break;
        case 45:
            if (_t->_autoModeVisible != *reinterpret_cast< bool*>(_v)) {
                _t->_autoModeVisible = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->modesVisibleChanged();
            }
            break;
        case 46:
            if (_t->_manualModeSelected != *reinterpret_cast< bool*>(_v)) {
                _t->_manualModeSelected = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->modesSelectedChanged();
            }
            break;
        case 47:
            if (_t->_assistModeSelected != *reinterpret_cast< bool*>(_v)) {
                _t->_assistModeSelected = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->modesSelectedChanged();
            }
            break;
        case 48:
            if (_t->_autoModeSelected != *reinterpret_cast< bool*>(_v)) {
                _t->_autoModeSelected = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->modesSelectedChanged();
            }
            break;
        case 49:
            if (_t->_acroModeSelected != *reinterpret_cast< bool*>(_v)) {
                _t->_acroModeSelected = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->modesSelectedChanged();
            }
            break;
        case 50:
            if (_t->_altCtlModeSelected != *reinterpret_cast< bool*>(_v)) {
                _t->_altCtlModeSelected = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->modesSelectedChanged();
            }
            break;
        case 51:
            if (_t->_posCtlModeSelected != *reinterpret_cast< bool*>(_v)) {
                _t->_posCtlModeSelected = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->modesSelectedChanged();
            }
            break;
        case 52:
            if (_t->_missionModeSelected != *reinterpret_cast< bool*>(_v)) {
                _t->_missionModeSelected = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->modesSelectedChanged();
            }
            break;
        case 53:
            if (_t->_loiterModeSelected != *reinterpret_cast< bool*>(_v)) {
                _t->_loiterModeSelected = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->modesSelectedChanged();
            }
            break;
        case 54:
            if (_t->_returnModeSelected != *reinterpret_cast< bool*>(_v)) {
                _t->_returnModeSelected = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->modesSelectedChanged();
            }
            break;
        case 55:
            if (_t->_offboardModeSelected != *reinterpret_cast< bool*>(_v)) {
                _t->_offboardModeSelected = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->modesSelectedChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject PX4AdvancedFlightModesController::staticMetaObject = {
    { &FactPanelController::staticMetaObject, qt_meta_stringdata_PX4AdvancedFlightModesController.data,
      qt_meta_data_PX4AdvancedFlightModesController,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PX4AdvancedFlightModesController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PX4AdvancedFlightModesController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PX4AdvancedFlightModesController.stringdata0))
        return static_cast<void*>(this);
    return FactPanelController::qt_metacast(_clname);
}

int PX4AdvancedFlightModesController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactPanelController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 57;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 57;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 57;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 57;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 57;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 57;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void PX4AdvancedFlightModesController::switchLiveRangeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PX4AdvancedFlightModesController::thresholdsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PX4AdvancedFlightModesController::modesSelectedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PX4AdvancedFlightModesController::modesVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void PX4AdvancedFlightModesController::channelIndicesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void PX4AdvancedFlightModesController::modeRowsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
