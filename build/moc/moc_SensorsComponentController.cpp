/****************************************************************************
** Meta object code from reading C++ file 'SensorsComponentController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/AutoPilotPlugins/PX4/SensorsComponentController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SensorsComponentController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SensorsComponentController_t {
    QByteArrayData data[60];
    char stringdata0[1413];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SensorsComponentController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SensorsComponentController_t qt_meta_stringdata_SensorsComponentController = {
    {
QT_MOC_LITERAL(0, 0, 26), // "SensorsComponentController"
QT_MOC_LITERAL(1, 27, 22), // "showGyroCalAreaChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 29), // "showOrientationCalAreaChanged"
QT_MOC_LITERAL(4, 81, 30), // "orientationCalSidesDoneChanged"
QT_MOC_LITERAL(5, 112, 33), // "orientationCalSidesVisibleCha..."
QT_MOC_LITERAL(6, 146, 36), // "orientationCalSidesInProgress..."
QT_MOC_LITERAL(7, 183, 32), // "orientationCalSidesRotateChanged"
QT_MOC_LITERAL(8, 216, 19), // "resetStatusTextArea"
QT_MOC_LITERAL(9, 236, 23), // "waitingForCancelChanged"
QT_MOC_LITERAL(10, 260, 19), // "setCompassRotations"
QT_MOC_LITERAL(11, 280, 21), // "_handleUASTextMessage"
QT_MOC_LITERAL(12, 302, 5), // "uasId"
QT_MOC_LITERAL(13, 308, 6), // "compId"
QT_MOC_LITERAL(14, 315, 8), // "severity"
QT_MOC_LITERAL(15, 324, 4), // "text"
QT_MOC_LITERAL(16, 329, 16), // "calibrateCompass"
QT_MOC_LITERAL(17, 346, 13), // "calibrateGyro"
QT_MOC_LITERAL(18, 360, 14), // "calibrateAccel"
QT_MOC_LITERAL(19, 375, 14), // "calibrateLevel"
QT_MOC_LITERAL(20, 390, 17), // "calibrateAirspeed"
QT_MOC_LITERAL(21, 408, 17), // "cancelCalibration"
QT_MOC_LITERAL(22, 426, 12), // "usingUDPLink"
QT_MOC_LITERAL(23, 439, 9), // "statusLog"
QT_MOC_LITERAL(24, 449, 11), // "QQuickItem*"
QT_MOC_LITERAL(25, 461, 11), // "progressBar"
QT_MOC_LITERAL(26, 473, 13), // "compassButton"
QT_MOC_LITERAL(27, 487, 10), // "gyroButton"
QT_MOC_LITERAL(28, 498, 11), // "accelButton"
QT_MOC_LITERAL(29, 510, 14), // "airspeedButton"
QT_MOC_LITERAL(30, 525, 11), // "levelButton"
QT_MOC_LITERAL(31, 537, 12), // "cancelButton"
QT_MOC_LITERAL(32, 550, 21), // "setOrientationsButton"
QT_MOC_LITERAL(33, 572, 26), // "orientationCalAreaHelpText"
QT_MOC_LITERAL(34, 599, 22), // "showOrientationCalArea"
QT_MOC_LITERAL(35, 622, 26), // "orientationCalDownSideDone"
QT_MOC_LITERAL(36, 649, 32), // "orientationCalUpsideDownSideDone"
QT_MOC_LITERAL(37, 682, 26), // "orientationCalLeftSideDone"
QT_MOC_LITERAL(38, 709, 27), // "orientationCalRightSideDone"
QT_MOC_LITERAL(39, 737, 30), // "orientationCalNoseDownSideDone"
QT_MOC_LITERAL(40, 768, 30), // "orientationCalTailDownSideDone"
QT_MOC_LITERAL(41, 799, 29), // "orientationCalDownSideVisible"
QT_MOC_LITERAL(42, 829, 35), // "orientationCalUpsideDownSideV..."
QT_MOC_LITERAL(43, 865, 29), // "orientationCalLeftSideVisible"
QT_MOC_LITERAL(44, 895, 30), // "orientationCalRightSideVisible"
QT_MOC_LITERAL(45, 926, 33), // "orientationCalNoseDownSideVis..."
QT_MOC_LITERAL(46, 960, 33), // "orientationCalTailDownSideVis..."
QT_MOC_LITERAL(47, 994, 32), // "orientationCalDownSideInProgress"
QT_MOC_LITERAL(48, 1027, 38), // "orientationCalUpsideDownSideI..."
QT_MOC_LITERAL(49, 1066, 32), // "orientationCalLeftSideInProgress"
QT_MOC_LITERAL(50, 1099, 33), // "orientationCalRightSideInProg..."
QT_MOC_LITERAL(51, 1133, 36), // "orientationCalNoseDownSideInP..."
QT_MOC_LITERAL(52, 1170, 36), // "orientationCalTailDownSideInP..."
QT_MOC_LITERAL(53, 1207, 28), // "orientationCalDownSideRotate"
QT_MOC_LITERAL(54, 1236, 34), // "orientationCalUpsideDownSideR..."
QT_MOC_LITERAL(55, 1271, 28), // "orientationCalLeftSideRotate"
QT_MOC_LITERAL(56, 1300, 29), // "orientationCalRightSideRotate"
QT_MOC_LITERAL(57, 1330, 32), // "orientationCalNoseDownSideRotate"
QT_MOC_LITERAL(58, 1363, 32), // "orientationCalTailDownSideRotate"
QT_MOC_LITERAL(59, 1396, 16) // "waitingForCancel"

    },
    "SensorsComponentController\0"
    "showGyroCalAreaChanged\0\0"
    "showOrientationCalAreaChanged\0"
    "orientationCalSidesDoneChanged\0"
    "orientationCalSidesVisibleChanged\0"
    "orientationCalSidesInProgressChanged\0"
    "orientationCalSidesRotateChanged\0"
    "resetStatusTextArea\0waitingForCancelChanged\0"
    "setCompassRotations\0_handleUASTextMessage\0"
    "uasId\0compId\0severity\0text\0calibrateCompass\0"
    "calibrateGyro\0calibrateAccel\0"
    "calibrateLevel\0calibrateAirspeed\0"
    "cancelCalibration\0usingUDPLink\0statusLog\0"
    "QQuickItem*\0progressBar\0compassButton\0"
    "gyroButton\0accelButton\0airspeedButton\0"
    "levelButton\0cancelButton\0setOrientationsButton\0"
    "orientationCalAreaHelpText\0"
    "showOrientationCalArea\0"
    "orientationCalDownSideDone\0"
    "orientationCalUpsideDownSideDone\0"
    "orientationCalLeftSideDone\0"
    "orientationCalRightSideDone\0"
    "orientationCalNoseDownSideDone\0"
    "orientationCalTailDownSideDone\0"
    "orientationCalDownSideVisible\0"
    "orientationCalUpsideDownSideVisible\0"
    "orientationCalLeftSideVisible\0"
    "orientationCalRightSideVisible\0"
    "orientationCalNoseDownSideVisible\0"
    "orientationCalTailDownSideVisible\0"
    "orientationCalDownSideInProgress\0"
    "orientationCalUpsideDownSideInProgress\0"
    "orientationCalLeftSideInProgress\0"
    "orientationCalRightSideInProgress\0"
    "orientationCalNoseDownSideInProgress\0"
    "orientationCalTailDownSideInProgress\0"
    "orientationCalDownSideRotate\0"
    "orientationCalUpsideDownSideRotate\0"
    "orientationCalLeftSideRotate\0"
    "orientationCalRightSideRotate\0"
    "orientationCalNoseDownSideRotate\0"
    "orientationCalTailDownSideRotate\0"
    "waitingForCancel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SensorsComponentController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
      36,  124, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x06 /* Public */,
       3,    0,  100,    2, 0x06 /* Public */,
       4,    0,  101,    2, 0x06 /* Public */,
       5,    0,  102,    2, 0x06 /* Public */,
       6,    0,  103,    2, 0x06 /* Public */,
       7,    0,  104,    2, 0x06 /* Public */,
       8,    0,  105,    2, 0x06 /* Public */,
       9,    0,  106,    2, 0x06 /* Public */,
      10,    0,  107,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    4,  108,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      16,    0,  117,    2, 0x02 /* Public */,
      17,    0,  118,    2, 0x02 /* Public */,
      18,    0,  119,    2, 0x02 /* Public */,
      19,    0,  120,    2, 0x02 /* Public */,
      20,    0,  121,    2, 0x02 /* Public */,
      21,    0,  122,    2, 0x02 /* Public */,
      22,    0,  123,    2, 0x02 /* Public */,

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

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString,   12,   13,   14,   15,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,

 // properties: name, type, flags
      23, 0x80000000 | 24, 0x0009500b,
      25, 0x80000000 | 24, 0x0009500b,
      26, 0x80000000 | 24, 0x0009500b,
      27, 0x80000000 | 24, 0x0009500b,
      28, 0x80000000 | 24, 0x0009500b,
      29, 0x80000000 | 24, 0x0009500b,
      30, 0x80000000 | 24, 0x0009500b,
      31, 0x80000000 | 24, 0x0009500b,
      32, 0x80000000 | 24, 0x0009500b,
      33, 0x80000000 | 24, 0x0009500b,
      34, QMetaType::Bool, 0x00495003,
      35, QMetaType::Bool, 0x00495003,
      36, QMetaType::Bool, 0x00495003,
      37, QMetaType::Bool, 0x00495003,
      38, QMetaType::Bool, 0x00495003,
      39, QMetaType::Bool, 0x00495003,
      40, QMetaType::Bool, 0x00495003,
      41, QMetaType::Bool, 0x00495003,
      42, QMetaType::Bool, 0x00495003,
      43, QMetaType::Bool, 0x00495003,
      44, QMetaType::Bool, 0x00495003,
      45, QMetaType::Bool, 0x00495003,
      46, QMetaType::Bool, 0x00495003,
      47, QMetaType::Bool, 0x00495003,
      48, QMetaType::Bool, 0x00495003,
      49, QMetaType::Bool, 0x00495003,
      50, QMetaType::Bool, 0x00495003,
      51, QMetaType::Bool, 0x00495003,
      52, QMetaType::Bool, 0x00495003,
      53, QMetaType::Bool, 0x00495003,
      54, QMetaType::Bool, 0x00495003,
      55, QMetaType::Bool, 0x00495003,
      56, QMetaType::Bool, 0x00495003,
      57, QMetaType::Bool, 0x00495003,
      58, QMetaType::Bool, 0x00495003,
      59, QMetaType::Bool, 0x00495003,

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
       1,
       2,
       2,
       2,
       2,
       2,
       2,
       3,
       3,
       3,
       3,
       3,
       3,
       4,
       4,
       4,
       4,
       4,
       4,
       5,
       5,
       5,
       5,
       5,
       5,
       7,

       0        // eod
};

void SensorsComponentController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SensorsComponentController *_t = static_cast<SensorsComponentController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showGyroCalAreaChanged(); break;
        case 1: _t->showOrientationCalAreaChanged(); break;
        case 2: _t->orientationCalSidesDoneChanged(); break;
        case 3: _t->orientationCalSidesVisibleChanged(); break;
        case 4: _t->orientationCalSidesInProgressChanged(); break;
        case 5: _t->orientationCalSidesRotateChanged(); break;
        case 6: _t->resetStatusTextArea(); break;
        case 7: _t->waitingForCancelChanged(); break;
        case 8: _t->setCompassRotations(); break;
        case 9: _t->_handleUASTextMessage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 10: _t->calibrateCompass(); break;
        case 11: _t->calibrateGyro(); break;
        case 12: _t->calibrateAccel(); break;
        case 13: _t->calibrateLevel(); break;
        case 14: _t->calibrateAirspeed(); break;
        case 15: _t->cancelCalibration(); break;
        case 16: { bool _r = _t->usingUDPLink();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SensorsComponentController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SensorsComponentController::showGyroCalAreaChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SensorsComponentController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SensorsComponentController::showOrientationCalAreaChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SensorsComponentController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SensorsComponentController::orientationCalSidesDoneChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (SensorsComponentController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SensorsComponentController::orientationCalSidesVisibleChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (SensorsComponentController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SensorsComponentController::orientationCalSidesInProgressChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (SensorsComponentController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SensorsComponentController::orientationCalSidesRotateChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (SensorsComponentController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SensorsComponentController::resetStatusTextArea)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (SensorsComponentController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SensorsComponentController::waitingForCancelChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (SensorsComponentController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SensorsComponentController::setCompassRotations)) {
                *result = 8;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
        case 8:
        case 7:
        case 6:
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        SensorsComponentController *_t = static_cast<SensorsComponentController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickItem**>(_v) = _t->_statusLog; break;
        case 1: *reinterpret_cast< QQuickItem**>(_v) = _t->_progressBar; break;
        case 2: *reinterpret_cast< QQuickItem**>(_v) = _t->_compassButton; break;
        case 3: *reinterpret_cast< QQuickItem**>(_v) = _t->_gyroButton; break;
        case 4: *reinterpret_cast< QQuickItem**>(_v) = _t->_accelButton; break;
        case 5: *reinterpret_cast< QQuickItem**>(_v) = _t->_airspeedButton; break;
        case 6: *reinterpret_cast< QQuickItem**>(_v) = _t->_levelButton; break;
        case 7: *reinterpret_cast< QQuickItem**>(_v) = _t->_cancelButton; break;
        case 8: *reinterpret_cast< QQuickItem**>(_v) = _t->_setOrientationsButton; break;
        case 9: *reinterpret_cast< QQuickItem**>(_v) = _t->_orientationCalAreaHelpText; break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->_showOrientationCalArea; break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->_orientationCalDownSideDone; break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->_orientationCalUpsideDownSideDone; break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->_orientationCalLeftSideDone; break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->_orientationCalRightSideDone; break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->_orientationCalNoseDownSideDone; break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->_orientationCalTailDownSideDone; break;
        case 17: *reinterpret_cast< bool*>(_v) = _t->_orientationCalDownSideVisible; break;
        case 18: *reinterpret_cast< bool*>(_v) = _t->_orientationCalUpsideDownSideVisible; break;
        case 19: *reinterpret_cast< bool*>(_v) = _t->_orientationCalLeftSideVisible; break;
        case 20: *reinterpret_cast< bool*>(_v) = _t->_orientationCalRightSideVisible; break;
        case 21: *reinterpret_cast< bool*>(_v) = _t->_orientationCalNoseDownSideVisible; break;
        case 22: *reinterpret_cast< bool*>(_v) = _t->_orientationCalTailDownSideVisible; break;
        case 23: *reinterpret_cast< bool*>(_v) = _t->_orientationCalDownSideInProgress; break;
        case 24: *reinterpret_cast< bool*>(_v) = _t->_orientationCalUpsideDownSideInProgress; break;
        case 25: *reinterpret_cast< bool*>(_v) = _t->_orientationCalLeftSideInProgress; break;
        case 26: *reinterpret_cast< bool*>(_v) = _t->_orientationCalRightSideInProgress; break;
        case 27: *reinterpret_cast< bool*>(_v) = _t->_orientationCalNoseDownSideInProgress; break;
        case 28: *reinterpret_cast< bool*>(_v) = _t->_orientationCalTailDownSideInProgress; break;
        case 29: *reinterpret_cast< bool*>(_v) = _t->_orientationCalDownSideRotate; break;
        case 30: *reinterpret_cast< bool*>(_v) = _t->_orientationCalUpsideDownSideRotate; break;
        case 31: *reinterpret_cast< bool*>(_v) = _t->_orientationCalLeftSideRotate; break;
        case 32: *reinterpret_cast< bool*>(_v) = _t->_orientationCalRightSideRotate; break;
        case 33: *reinterpret_cast< bool*>(_v) = _t->_orientationCalNoseDownSideRotate; break;
        case 34: *reinterpret_cast< bool*>(_v) = _t->_orientationCalTailDownSideRotate; break;
        case 35: *reinterpret_cast< bool*>(_v) = _t->_waitingForCancel; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        SensorsComponentController *_t = static_cast<SensorsComponentController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_statusLog != *reinterpret_cast< QQuickItem**>(_v)) {
                _t->_statusLog = *reinterpret_cast< QQuickItem**>(_v);
            }
            break;
        case 1:
            if (_t->_progressBar != *reinterpret_cast< QQuickItem**>(_v)) {
                _t->_progressBar = *reinterpret_cast< QQuickItem**>(_v);
            }
            break;
        case 2:
            if (_t->_compassButton != *reinterpret_cast< QQuickItem**>(_v)) {
                _t->_compassButton = *reinterpret_cast< QQuickItem**>(_v);
            }
            break;
        case 3:
            if (_t->_gyroButton != *reinterpret_cast< QQuickItem**>(_v)) {
                _t->_gyroButton = *reinterpret_cast< QQuickItem**>(_v);
            }
            break;
        case 4:
            if (_t->_accelButton != *reinterpret_cast< QQuickItem**>(_v)) {
                _t->_accelButton = *reinterpret_cast< QQuickItem**>(_v);
            }
            break;
        case 5:
            if (_t->_airspeedButton != *reinterpret_cast< QQuickItem**>(_v)) {
                _t->_airspeedButton = *reinterpret_cast< QQuickItem**>(_v);
            }
            break;
        case 6:
            if (_t->_levelButton != *reinterpret_cast< QQuickItem**>(_v)) {
                _t->_levelButton = *reinterpret_cast< QQuickItem**>(_v);
            }
            break;
        case 7:
            if (_t->_cancelButton != *reinterpret_cast< QQuickItem**>(_v)) {
                _t->_cancelButton = *reinterpret_cast< QQuickItem**>(_v);
            }
            break;
        case 8:
            if (_t->_setOrientationsButton != *reinterpret_cast< QQuickItem**>(_v)) {
                _t->_setOrientationsButton = *reinterpret_cast< QQuickItem**>(_v);
            }
            break;
        case 9:
            if (_t->_orientationCalAreaHelpText != *reinterpret_cast< QQuickItem**>(_v)) {
                _t->_orientationCalAreaHelpText = *reinterpret_cast< QQuickItem**>(_v);
            }
            break;
        case 10:
            if (_t->_showOrientationCalArea != *reinterpret_cast< bool*>(_v)) {
                _t->_showOrientationCalArea = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->showOrientationCalAreaChanged();
            }
            break;
        case 11:
            if (_t->_orientationCalDownSideDone != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalDownSideDone = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesDoneChanged();
            }
            break;
        case 12:
            if (_t->_orientationCalUpsideDownSideDone != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalUpsideDownSideDone = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesDoneChanged();
            }
            break;
        case 13:
            if (_t->_orientationCalLeftSideDone != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalLeftSideDone = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesDoneChanged();
            }
            break;
        case 14:
            if (_t->_orientationCalRightSideDone != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalRightSideDone = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesDoneChanged();
            }
            break;
        case 15:
            if (_t->_orientationCalNoseDownSideDone != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalNoseDownSideDone = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesDoneChanged();
            }
            break;
        case 16:
            if (_t->_orientationCalTailDownSideDone != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalTailDownSideDone = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesDoneChanged();
            }
            break;
        case 17:
            if (_t->_orientationCalDownSideVisible != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalDownSideVisible = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesVisibleChanged();
            }
            break;
        case 18:
            if (_t->_orientationCalUpsideDownSideVisible != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalUpsideDownSideVisible = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesVisibleChanged();
            }
            break;
        case 19:
            if (_t->_orientationCalLeftSideVisible != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalLeftSideVisible = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesVisibleChanged();
            }
            break;
        case 20:
            if (_t->_orientationCalRightSideVisible != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalRightSideVisible = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesVisibleChanged();
            }
            break;
        case 21:
            if (_t->_orientationCalNoseDownSideVisible != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalNoseDownSideVisible = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesVisibleChanged();
            }
            break;
        case 22:
            if (_t->_orientationCalTailDownSideVisible != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalTailDownSideVisible = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesVisibleChanged();
            }
            break;
        case 23:
            if (_t->_orientationCalDownSideInProgress != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalDownSideInProgress = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesInProgressChanged();
            }
            break;
        case 24:
            if (_t->_orientationCalUpsideDownSideInProgress != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalUpsideDownSideInProgress = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesInProgressChanged();
            }
            break;
        case 25:
            if (_t->_orientationCalLeftSideInProgress != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalLeftSideInProgress = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesInProgressChanged();
            }
            break;
        case 26:
            if (_t->_orientationCalRightSideInProgress != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalRightSideInProgress = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesInProgressChanged();
            }
            break;
        case 27:
            if (_t->_orientationCalNoseDownSideInProgress != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalNoseDownSideInProgress = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesInProgressChanged();
            }
            break;
        case 28:
            if (_t->_orientationCalTailDownSideInProgress != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalTailDownSideInProgress = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesInProgressChanged();
            }
            break;
        case 29:
            if (_t->_orientationCalDownSideRotate != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalDownSideRotate = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesRotateChanged();
            }
            break;
        case 30:
            if (_t->_orientationCalUpsideDownSideRotate != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalUpsideDownSideRotate = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesRotateChanged();
            }
            break;
        case 31:
            if (_t->_orientationCalLeftSideRotate != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalLeftSideRotate = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesRotateChanged();
            }
            break;
        case 32:
            if (_t->_orientationCalRightSideRotate != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalRightSideRotate = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesRotateChanged();
            }
            break;
        case 33:
            if (_t->_orientationCalNoseDownSideRotate != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalNoseDownSideRotate = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesRotateChanged();
            }
            break;
        case 34:
            if (_t->_orientationCalTailDownSideRotate != *reinterpret_cast< bool*>(_v)) {
                _t->_orientationCalTailDownSideRotate = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->orientationCalSidesRotateChanged();
            }
            break;
        case 35:
            if (_t->_waitingForCancel != *reinterpret_cast< bool*>(_v)) {
                _t->_waitingForCancel = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->waitingForCancelChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject SensorsComponentController::staticMetaObject = {
    { &FactPanelController::staticMetaObject, qt_meta_stringdata_SensorsComponentController.data,
      qt_meta_data_SensorsComponentController,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SensorsComponentController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SensorsComponentController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SensorsComponentController.stringdata0))
        return static_cast<void*>(this);
    return FactPanelController::qt_metacast(_clname);
}

int SensorsComponentController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactPanelController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 36;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 36;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 36;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 36;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 36;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SensorsComponentController::showGyroCalAreaChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SensorsComponentController::showOrientationCalAreaChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SensorsComponentController::orientationCalSidesDoneChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SensorsComponentController::orientationCalSidesVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void SensorsComponentController::orientationCalSidesInProgressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void SensorsComponentController::orientationCalSidesRotateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void SensorsComponentController::resetStatusTextArea()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void SensorsComponentController::waitingForCancelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void SensorsComponentController::setCompassRotations()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
