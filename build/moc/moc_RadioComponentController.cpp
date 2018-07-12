/****************************************************************************
** Meta object code from reading C++ file 'RadioComponentController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/AutoPilotPlugins/Common/RadioComponentController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RadioComponentController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RadioComponentController_t {
    QByteArrayData data[65];
    char stringdata0[1166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RadioComponentController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RadioComponentController_t qt_meta_stringdata_RadioComponentController = {
    {
QT_MOC_LITERAL(0, 0, 24), // "RadioComponentController"
QT_MOC_LITERAL(1, 25, 17), // "statusTextChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 19), // "cancelButtonChanged"
QT_MOC_LITERAL(4, 64, 17), // "nextButtonChanged"
QT_MOC_LITERAL(5, 82, 17), // "skipButtonChanged"
QT_MOC_LITERAL(6, 100, 19), // "channelCountChanged"
QT_MOC_LITERAL(7, 120, 12), // "channelCount"
QT_MOC_LITERAL(8, 133, 21), // "channelRCValueChanged"
QT_MOC_LITERAL(9, 155, 7), // "channel"
QT_MOC_LITERAL(10, 163, 7), // "rcValue"
QT_MOC_LITERAL(11, 171, 24), // "rollChannelMappedChanged"
QT_MOC_LITERAL(12, 196, 6), // "mapped"
QT_MOC_LITERAL(13, 203, 25), // "pitchChannelMappedChanged"
QT_MOC_LITERAL(14, 229, 23), // "yawChannelMappedChanged"
QT_MOC_LITERAL(15, 253, 28), // "throttleChannelMappedChanged"
QT_MOC_LITERAL(16, 282, 25), // "rollChannelRCValueChanged"
QT_MOC_LITERAL(17, 308, 26), // "pitchChannelRCValueChanged"
QT_MOC_LITERAL(18, 335, 24), // "yawChannelRCValueChanged"
QT_MOC_LITERAL(19, 360, 29), // "throttleChannelRCValueChanged"
QT_MOC_LITERAL(20, 390, 26), // "rollChannelReversedChanged"
QT_MOC_LITERAL(21, 417, 8), // "reversed"
QT_MOC_LITERAL(22, 426, 27), // "pitchChannelReversedChanged"
QT_MOC_LITERAL(23, 454, 25), // "yawChannelReversedChanged"
QT_MOC_LITERAL(24, 480, 30), // "throttleChannelReversedChanged"
QT_MOC_LITERAL(25, 511, 16), // "imageHelpChanged"
QT_MOC_LITERAL(26, 528, 6), // "source"
QT_MOC_LITERAL(27, 535, 22), // "transmitterModeChanged"
QT_MOC_LITERAL(28, 558, 4), // "mode"
QT_MOC_LITERAL(29, 563, 29), // "nextButtonMessageBoxDisplayed"
QT_MOC_LITERAL(30, 593, 31), // "functionMappingChangedAPMReboot"
QT_MOC_LITERAL(31, 625, 26), // "throttleReversedCalFailure"
QT_MOC_LITERAL(32, 652, 18), // "_rcChannelsChanged"
QT_MOC_LITERAL(33, 671, 28), // "int[Vehicle::cMaxRcChannels]"
QT_MOC_LITERAL(34, 700, 9), // "pwmValues"
QT_MOC_LITERAL(35, 710, 16), // "spektrumBindMode"
QT_MOC_LITERAL(36, 727, 19), // "cancelButtonClicked"
QT_MOC_LITERAL(37, 747, 17), // "skipButtonClicked"
QT_MOC_LITERAL(38, 765, 17), // "nextButtonClicked"
QT_MOC_LITERAL(39, 783, 5), // "start"
QT_MOC_LITERAL(40, 789, 9), // "copyTrims"
QT_MOC_LITERAL(41, 799, 15), // "minChannelCount"
QT_MOC_LITERAL(42, 815, 10), // "statusText"
QT_MOC_LITERAL(43, 826, 11), // "QQuickItem*"
QT_MOC_LITERAL(44, 838, 12), // "cancelButton"
QT_MOC_LITERAL(45, 851, 10), // "nextButton"
QT_MOC_LITERAL(46, 862, 10), // "skipButton"
QT_MOC_LITERAL(47, 873, 17), // "rollChannelMapped"
QT_MOC_LITERAL(48, 891, 18), // "pitchChannelMapped"
QT_MOC_LITERAL(49, 910, 16), // "yawChannelMapped"
QT_MOC_LITERAL(50, 927, 21), // "throttleChannelMapped"
QT_MOC_LITERAL(51, 949, 18), // "rollChannelRCValue"
QT_MOC_LITERAL(52, 968, 19), // "pitchChannelRCValue"
QT_MOC_LITERAL(53, 988, 17), // "yawChannelRCValue"
QT_MOC_LITERAL(54, 1006, 22), // "throttleChannelRCValue"
QT_MOC_LITERAL(55, 1029, 19), // "rollChannelReversed"
QT_MOC_LITERAL(56, 1049, 20), // "pitchChannelReversed"
QT_MOC_LITERAL(57, 1070, 18), // "yawChannelReversed"
QT_MOC_LITERAL(58, 1089, 23), // "throttleChannelReversed"
QT_MOC_LITERAL(59, 1113, 15), // "transmitterMode"
QT_MOC_LITERAL(60, 1129, 9), // "imageHelp"
QT_MOC_LITERAL(61, 1139, 9), // "BindModes"
QT_MOC_LITERAL(62, 1149, 4), // "DSM2"
QT_MOC_LITERAL(63, 1154, 5), // "DSMX7"
QT_MOC_LITERAL(64, 1160, 5) // "DSMX8"

    },
    "RadioComponentController\0statusTextChanged\0"
    "\0cancelButtonChanged\0nextButtonChanged\0"
    "skipButtonChanged\0channelCountChanged\0"
    "channelCount\0channelRCValueChanged\0"
    "channel\0rcValue\0rollChannelMappedChanged\0"
    "mapped\0pitchChannelMappedChanged\0"
    "yawChannelMappedChanged\0"
    "throttleChannelMappedChanged\0"
    "rollChannelRCValueChanged\0"
    "pitchChannelRCValueChanged\0"
    "yawChannelRCValueChanged\0"
    "throttleChannelRCValueChanged\0"
    "rollChannelReversedChanged\0reversed\0"
    "pitchChannelReversedChanged\0"
    "yawChannelReversedChanged\0"
    "throttleChannelReversedChanged\0"
    "imageHelpChanged\0source\0transmitterModeChanged\0"
    "mode\0nextButtonMessageBoxDisplayed\0"
    "functionMappingChangedAPMReboot\0"
    "throttleReversedCalFailure\0"
    "_rcChannelsChanged\0int[Vehicle::cMaxRcChannels]\0"
    "pwmValues\0spektrumBindMode\0"
    "cancelButtonClicked\0skipButtonClicked\0"
    "nextButtonClicked\0start\0copyTrims\0"
    "minChannelCount\0statusText\0QQuickItem*\0"
    "cancelButton\0nextButton\0skipButton\0"
    "rollChannelMapped\0pitchChannelMapped\0"
    "yawChannelMapped\0throttleChannelMapped\0"
    "rollChannelRCValue\0pitchChannelRCValue\0"
    "yawChannelRCValue\0throttleChannelRCValue\0"
    "rollChannelReversed\0pitchChannelReversed\0"
    "yawChannelReversed\0throttleChannelReversed\0"
    "transmitterMode\0imageHelp\0BindModes\0"
    "DSM2\0DSMX7\0DSMX8"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RadioComponentController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
      20,  234, // properties
       1,  314, // enums/sets
       0,    0, // constructors
       0,       // flags
      23,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  164,    2, 0x06 /* Public */,
       3,    0,  165,    2, 0x06 /* Public */,
       4,    0,  166,    2, 0x06 /* Public */,
       5,    0,  167,    2, 0x06 /* Public */,
       6,    1,  168,    2, 0x06 /* Public */,
       8,    2,  171,    2, 0x06 /* Public */,
      11,    1,  176,    2, 0x06 /* Public */,
      13,    1,  179,    2, 0x06 /* Public */,
      14,    1,  182,    2, 0x06 /* Public */,
      15,    1,  185,    2, 0x06 /* Public */,
      16,    1,  188,    2, 0x06 /* Public */,
      17,    1,  191,    2, 0x06 /* Public */,
      18,    1,  194,    2, 0x06 /* Public */,
      19,    1,  197,    2, 0x06 /* Public */,
      20,    1,  200,    2, 0x06 /* Public */,
      22,    1,  203,    2, 0x06 /* Public */,
      23,    1,  206,    2, 0x06 /* Public */,
      24,    1,  209,    2, 0x06 /* Public */,
      25,    1,  212,    2, 0x06 /* Public */,
      27,    1,  215,    2, 0x06 /* Public */,
      29,    0,  218,    2, 0x06 /* Public */,
      30,    0,  219,    2, 0x06 /* Public */,
      31,    0,  220,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      32,    2,  221,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      35,    1,  226,    2, 0x02 /* Public */,
      36,    0,  229,    2, 0x02 /* Public */,
      37,    0,  230,    2, 0x02 /* Public */,
      38,    0,  231,    2, 0x02 /* Public */,
      39,    0,  232,    2, 0x02 /* Public */,
      40,    0,  233,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 33,    7,   34,

 // methods: parameters
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      41, QMetaType::Int, 0x00095401,
       7, QMetaType::Int, 0x00495001,
      42, 0x80000000 | 43, 0x0049500b,
      44, 0x80000000 | 43, 0x0049500b,
      45, 0x80000000 | 43, 0x0049500b,
      46, 0x80000000 | 43, 0x0049500b,
      47, QMetaType::Bool, 0x00495001,
      48, QMetaType::Bool, 0x00495001,
      49, QMetaType::Bool, 0x00495001,
      50, QMetaType::Bool, 0x00495001,
      51, QMetaType::Int, 0x00495001,
      52, QMetaType::Int, 0x00495001,
      53, QMetaType::Int, 0x00495001,
      54, QMetaType::Int, 0x00495001,
      55, QMetaType::Int, 0x00495001,
      56, QMetaType::Int, 0x00495001,
      57, QMetaType::Int, 0x00495001,
      58, QMetaType::Int, 0x00495001,
      59, QMetaType::Int, 0x00495103,
      60, QMetaType::QString, 0x00495003,

 // properties: notify_signal_id
       0,
       4,
       0,
       1,
       2,
       3,
       6,
       7,
       8,
       9,
      10,
      11,
      12,
      13,
      14,
      15,
      16,
      17,
      19,
      18,

 // enums: name, flags, count, data
      61, 0x0,    3,  318,

 // enum data: key, value
      62, uint(RadioComponentController::DSM2),
      63, uint(RadioComponentController::DSMX7),
      64, uint(RadioComponentController::DSMX8),

       0        // eod
};

void RadioComponentController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RadioComponentController *_t = static_cast<RadioComponentController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->statusTextChanged(); break;
        case 1: _t->cancelButtonChanged(); break;
        case 2: _t->nextButtonChanged(); break;
        case 3: _t->skipButtonChanged(); break;
        case 4: _t->channelCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->channelRCValueChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->rollChannelMappedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->pitchChannelMappedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->yawChannelMappedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->throttleChannelMappedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->rollChannelRCValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->pitchChannelRCValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->yawChannelRCValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->throttleChannelRCValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->rollChannelReversedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->pitchChannelReversedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->yawChannelReversedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->throttleChannelReversedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->imageHelpChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 19: _t->transmitterModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->nextButtonMessageBoxDisplayed(); break;
        case 21: _t->functionMappingChangedAPMReboot(); break;
        case 22: _t->throttleReversedCalFailure(); break;
        case 23: _t->_rcChannelsChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)[Vehicle::cMaxRcChannels]>(_a[2]))); break;
        case 24: _t->spektrumBindMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->cancelButtonClicked(); break;
        case 26: _t->skipButtonClicked(); break;
        case 27: _t->nextButtonClicked(); break;
        case 28: _t->start(); break;
        case 29: _t->copyTrims(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (RadioComponentController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComponentController::statusTextChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (RadioComponentController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComponentController::cancelButtonChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (RadioComponentController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComponentController::nextButtonChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (RadioComponentController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComponentController::skipButtonChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (RadioComponentController::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComponentController::channelCountChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (RadioComponentController::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComponentController::channelRCValueChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (RadioComponentController::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComponentController::rollChannelMappedChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (RadioComponentController::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComponentController::pitchChannelMappedChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (RadioComponentController::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComponentController::yawChannelMappedChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (RadioComponentController::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComponentController::throttleChannelMappedChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (RadioComponentController::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComponentController::rollChannelRCValueChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (RadioComponentController::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComponentController::pitchChannelRCValueChanged)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (RadioComponentController::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComponentController::yawChannelRCValueChanged)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (RadioComponentController::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComponentController::throttleChannelRCValueChanged)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (RadioComponentController::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComponentController::rollChannelReversedChanged)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (RadioComponentController::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComponentController::pitchChannelReversedChanged)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (RadioComponentController::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComponentController::yawChannelReversedChanged)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (RadioComponentController::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComponentController::throttleChannelReversedChanged)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (RadioComponentController::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComponentController::imageHelpChanged)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (RadioComponentController::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComponentController::transmitterModeChanged)) {
                *result = 19;
                return;
            }
        }
        {
            typedef void (RadioComponentController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComponentController::nextButtonMessageBoxDisplayed)) {
                *result = 20;
                return;
            }
        }
        {
            typedef void (RadioComponentController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComponentController::functionMappingChangedAPMReboot)) {
                *result = 21;
                return;
            }
        }
        {
            typedef void (RadioComponentController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioComponentController::throttleReversedCalFailure)) {
                *result = 22;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
        case 4:
        case 3:
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        RadioComponentController *_t = static_cast<RadioComponentController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->_chanMinimum; break;
        case 1: *reinterpret_cast< int*>(_v) = _t->channelCount(); break;
        case 2: *reinterpret_cast< QQuickItem**>(_v) = _t->_statusText; break;
        case 3: *reinterpret_cast< QQuickItem**>(_v) = _t->_cancelButton; break;
        case 4: *reinterpret_cast< QQuickItem**>(_v) = _t->_nextButton; break;
        case 5: *reinterpret_cast< QQuickItem**>(_v) = _t->_skipButton; break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->rollChannelMapped(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->pitchChannelMapped(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->yawChannelMapped(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->throttleChannelMapped(); break;
        case 10: *reinterpret_cast< int*>(_v) = _t->rollChannelRCValue(); break;
        case 11: *reinterpret_cast< int*>(_v) = _t->pitchChannelRCValue(); break;
        case 12: *reinterpret_cast< int*>(_v) = _t->yawChannelRCValue(); break;
        case 13: *reinterpret_cast< int*>(_v) = _t->throttleChannelRCValue(); break;
        case 14: *reinterpret_cast< int*>(_v) = _t->rollChannelReversed(); break;
        case 15: *reinterpret_cast< int*>(_v) = _t->pitchChannelReversed(); break;
        case 16: *reinterpret_cast< int*>(_v) = _t->yawChannelReversed(); break;
        case 17: *reinterpret_cast< int*>(_v) = _t->throttleChannelReversed(); break;
        case 18: *reinterpret_cast< int*>(_v) = _t->transmitterMode(); break;
        case 19: *reinterpret_cast< QString*>(_v) = _t->_imageHelp; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        RadioComponentController *_t = static_cast<RadioComponentController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2:
            if (_t->_statusText != *reinterpret_cast< QQuickItem**>(_v)) {
                _t->_statusText = *reinterpret_cast< QQuickItem**>(_v);
                Q_EMIT _t->statusTextChanged();
            }
            break;
        case 3:
            if (_t->_cancelButton != *reinterpret_cast< QQuickItem**>(_v)) {
                _t->_cancelButton = *reinterpret_cast< QQuickItem**>(_v);
                Q_EMIT _t->cancelButtonChanged();
            }
            break;
        case 4:
            if (_t->_nextButton != *reinterpret_cast< QQuickItem**>(_v)) {
                _t->_nextButton = *reinterpret_cast< QQuickItem**>(_v);
                Q_EMIT _t->nextButtonChanged();
            }
            break;
        case 5:
            if (_t->_skipButton != *reinterpret_cast< QQuickItem**>(_v)) {
                _t->_skipButton = *reinterpret_cast< QQuickItem**>(_v);
                Q_EMIT _t->skipButtonChanged();
            }
            break;
        case 18: _t->setTransmitterMode(*reinterpret_cast< int*>(_v)); break;
        case 19:
            if (_t->_imageHelp != *reinterpret_cast< QString*>(_v)) {
                _t->_imageHelp = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->imageHelpChanged(_t->_imageHelp);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject RadioComponentController::staticMetaObject = {
    { &FactPanelController::staticMetaObject, qt_meta_stringdata_RadioComponentController.data,
      qt_meta_data_RadioComponentController,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RadioComponentController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RadioComponentController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RadioComponentController.stringdata0))
        return static_cast<void*>(this);
    return FactPanelController::qt_metacast(_clname);
}

int RadioComponentController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactPanelController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 30)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 30;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 20;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void RadioComponentController::statusTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void RadioComponentController::cancelButtonChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void RadioComponentController::nextButtonChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void RadioComponentController::skipButtonChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void RadioComponentController::channelCountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void RadioComponentController::channelRCValueChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void RadioComponentController::rollChannelMappedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void RadioComponentController::pitchChannelMappedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void RadioComponentController::yawChannelMappedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void RadioComponentController::throttleChannelMappedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void RadioComponentController::rollChannelRCValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void RadioComponentController::pitchChannelRCValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void RadioComponentController::yawChannelRCValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void RadioComponentController::throttleChannelRCValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void RadioComponentController::rollChannelReversedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void RadioComponentController::pitchChannelReversedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void RadioComponentController::yawChannelReversedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void RadioComponentController::throttleChannelReversedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void RadioComponentController::imageHelpChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void RadioComponentController::transmitterModeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void RadioComponentController::nextButtonMessageBoxDisplayed()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void RadioComponentController::functionMappingChangedAPMReboot()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void RadioComponentController::throttleReversedCalFailure()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
