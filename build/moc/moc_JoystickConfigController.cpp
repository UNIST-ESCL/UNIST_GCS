/****************************************************************************
** Meta object code from reading C++ file 'JoystickConfigController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/VehicleSetup/JoystickConfigController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'JoystickConfigController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JoystickConfigController_t {
    QByteArrayData data[50];
    char stringdata0[806];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JoystickConfigController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JoystickConfigController_t qt_meta_stringdata_JoystickConfigController = {
    {
QT_MOC_LITERAL(0, 0, 24), // "JoystickConfigController"
QT_MOC_LITERAL(1, 25, 16), // "axisValueChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 4), // "axis"
QT_MOC_LITERAL(4, 48, 5), // "value"
QT_MOC_LITERAL(5, 54, 19), // "axisDeadbandChanged"
QT_MOC_LITERAL(6, 74, 21), // "rollAxisMappedChanged"
QT_MOC_LITERAL(7, 96, 6), // "mapped"
QT_MOC_LITERAL(8, 103, 22), // "pitchAxisMappedChanged"
QT_MOC_LITERAL(9, 126, 20), // "yawAxisMappedChanged"
QT_MOC_LITERAL(10, 147, 25), // "throttleAxisMappedChanged"
QT_MOC_LITERAL(11, 173, 23), // "rollAxisReversedChanged"
QT_MOC_LITERAL(12, 197, 8), // "reversed"
QT_MOC_LITERAL(13, 206, 24), // "pitchAxisReversedChanged"
QT_MOC_LITERAL(14, 231, 22), // "yawAxisReversedChanged"
QT_MOC_LITERAL(15, 254, 27), // "throttleAxisReversedChanged"
QT_MOC_LITERAL(16, 282, 15), // "deadbandToggled"
QT_MOC_LITERAL(17, 298, 16), // "imageHelpChanged"
QT_MOC_LITERAL(18, 315, 6), // "source"
QT_MOC_LITERAL(19, 322, 22), // "transmitterModeChanged"
QT_MOC_LITERAL(20, 345, 4), // "mode"
QT_MOC_LITERAL(21, 350, 18), // "calibratingChanged"
QT_MOC_LITERAL(22, 369, 29), // "nextButtonMessageBoxDisplayed"
QT_MOC_LITERAL(23, 399, 22), // "_activeJoystickChanged"
QT_MOC_LITERAL(24, 422, 9), // "Joystick*"
QT_MOC_LITERAL(25, 432, 8), // "joystick"
QT_MOC_LITERAL(26, 441, 17), // "_axisValueChanged"
QT_MOC_LITERAL(27, 459, 20), // "_axisDeadbandChanged"
QT_MOC_LITERAL(28, 480, 19), // "cancelButtonClicked"
QT_MOC_LITERAL(29, 500, 17), // "skipButtonClicked"
QT_MOC_LITERAL(30, 518, 17), // "nextButtonClicked"
QT_MOC_LITERAL(31, 536, 5), // "start"
QT_MOC_LITERAL(32, 542, 16), // "setDeadbandValue"
QT_MOC_LITERAL(33, 559, 10), // "statusText"
QT_MOC_LITERAL(34, 570, 11), // "QQuickItem*"
QT_MOC_LITERAL(35, 582, 12), // "cancelButton"
QT_MOC_LITERAL(36, 595, 10), // "nextButton"
QT_MOC_LITERAL(37, 606, 10), // "skipButton"
QT_MOC_LITERAL(38, 617, 14), // "rollAxisMapped"
QT_MOC_LITERAL(39, 632, 15), // "pitchAxisMapped"
QT_MOC_LITERAL(40, 648, 13), // "yawAxisMapped"
QT_MOC_LITERAL(41, 662, 18), // "throttleAxisMapped"
QT_MOC_LITERAL(42, 681, 16), // "rollAxisReversed"
QT_MOC_LITERAL(43, 698, 17), // "pitchAxisReversed"
QT_MOC_LITERAL(44, 716, 15), // "yawAxisReversed"
QT_MOC_LITERAL(45, 732, 20), // "throttleAxisReversed"
QT_MOC_LITERAL(46, 753, 14), // "deadbandToggle"
QT_MOC_LITERAL(47, 768, 15), // "transmitterMode"
QT_MOC_LITERAL(48, 784, 9), // "imageHelp"
QT_MOC_LITERAL(49, 794, 11) // "calibrating"

    },
    "JoystickConfigController\0axisValueChanged\0"
    "\0axis\0value\0axisDeadbandChanged\0"
    "rollAxisMappedChanged\0mapped\0"
    "pitchAxisMappedChanged\0yawAxisMappedChanged\0"
    "throttleAxisMappedChanged\0"
    "rollAxisReversedChanged\0reversed\0"
    "pitchAxisReversedChanged\0"
    "yawAxisReversedChanged\0"
    "throttleAxisReversedChanged\0deadbandToggled\0"
    "imageHelpChanged\0source\0transmitterModeChanged\0"
    "mode\0calibratingChanged\0"
    "nextButtonMessageBoxDisplayed\0"
    "_activeJoystickChanged\0Joystick*\0"
    "joystick\0_axisValueChanged\0"
    "_axisDeadbandChanged\0cancelButtonClicked\0"
    "skipButtonClicked\0nextButtonClicked\0"
    "start\0setDeadbandValue\0statusText\0"
    "QQuickItem*\0cancelButton\0nextButton\0"
    "skipButton\0rollAxisMapped\0pitchAxisMapped\0"
    "yawAxisMapped\0throttleAxisMapped\0"
    "rollAxisReversed\0pitchAxisReversed\0"
    "yawAxisReversed\0throttleAxisReversed\0"
    "deadbandToggle\0transmitterMode\0imageHelp\0"
    "calibrating"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JoystickConfigController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
      16,  196, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  129,    2, 0x06 /* Public */,
       5,    2,  134,    2, 0x06 /* Public */,
       6,    1,  139,    2, 0x06 /* Public */,
       8,    1,  142,    2, 0x06 /* Public */,
       9,    1,  145,    2, 0x06 /* Public */,
      10,    1,  148,    2, 0x06 /* Public */,
      11,    1,  151,    2, 0x06 /* Public */,
      13,    1,  154,    2, 0x06 /* Public */,
      14,    1,  157,    2, 0x06 /* Public */,
      15,    1,  160,    2, 0x06 /* Public */,
      16,    1,  163,    2, 0x06 /* Public */,
      17,    1,  166,    2, 0x06 /* Public */,
      19,    1,  169,    2, 0x06 /* Public */,
      21,    0,  172,    2, 0x06 /* Public */,
      22,    0,  173,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      23,    1,  174,    2, 0x08 /* Private */,
      26,    2,  177,    2, 0x08 /* Private */,
      27,    2,  182,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      28,    0,  187,    2, 0x02 /* Public */,
      29,    0,  188,    2, 0x02 /* Public */,
      30,    0,  189,    2, 0x02 /* Public */,
      31,    0,  190,    2, 0x02 /* Public */,
      32,    2,  191,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,

 // properties: name, type, flags
      33, 0x80000000 | 34, 0x0009500b,
      35, 0x80000000 | 34, 0x0009500b,
      36, 0x80000000 | 34, 0x0009500b,
      37, 0x80000000 | 34, 0x0009500b,
      38, QMetaType::Bool, 0x00495001,
      39, QMetaType::Bool, 0x00495001,
      40, QMetaType::Bool, 0x00495001,
      41, QMetaType::Bool, 0x00495001,
      42, QMetaType::Int, 0x00495001,
      43, QMetaType::Int, 0x00495001,
      44, QMetaType::Int, 0x00495001,
      45, QMetaType::Int, 0x00495001,
      46, QMetaType::Bool, 0x00495103,
      47, QMetaType::Int, 0x00495103,
      48, QMetaType::QString, 0x00495003,
      49, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,
      10,
      12,
      11,
      13,

       0        // eod
};

void JoystickConfigController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        JoystickConfigController *_t = static_cast<JoystickConfigController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->axisValueChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->axisDeadbandChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->rollAxisMappedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->pitchAxisMappedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->yawAxisMappedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->throttleAxisMappedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->rollAxisReversedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->pitchAxisReversedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->yawAxisReversedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->throttleAxisReversedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->deadbandToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->imageHelpChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->transmitterModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->calibratingChanged(); break;
        case 14: _t->nextButtonMessageBoxDisplayed(); break;
        case 15: _t->_activeJoystickChanged((*reinterpret_cast< Joystick*(*)>(_a[1]))); break;
        case 16: _t->_axisValueChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 17: _t->_axisDeadbandChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 18: _t->cancelButtonClicked(); break;
        case 19: _t->skipButtonClicked(); break;
        case 20: _t->nextButtonClicked(); break;
        case 21: _t->start(); break;
        case 22: _t->setDeadbandValue((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Joystick* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (JoystickConfigController::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoystickConfigController::axisValueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (JoystickConfigController::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoystickConfigController::axisDeadbandChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (JoystickConfigController::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoystickConfigController::rollAxisMappedChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (JoystickConfigController::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoystickConfigController::pitchAxisMappedChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (JoystickConfigController::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoystickConfigController::yawAxisMappedChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (JoystickConfigController::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoystickConfigController::throttleAxisMappedChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (JoystickConfigController::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoystickConfigController::rollAxisReversedChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (JoystickConfigController::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoystickConfigController::pitchAxisReversedChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (JoystickConfigController::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoystickConfigController::yawAxisReversedChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (JoystickConfigController::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoystickConfigController::throttleAxisReversedChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (JoystickConfigController::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoystickConfigController::deadbandToggled)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (JoystickConfigController::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoystickConfigController::imageHelpChanged)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (JoystickConfigController::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoystickConfigController::transmitterModeChanged)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (JoystickConfigController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoystickConfigController::calibratingChanged)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (JoystickConfigController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoystickConfigController::nextButtonMessageBoxDisplayed)) {
                *result = 14;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        JoystickConfigController *_t = static_cast<JoystickConfigController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickItem**>(_v) = _t->_statusText; break;
        case 1: *reinterpret_cast< QQuickItem**>(_v) = _t->_cancelButton; break;
        case 2: *reinterpret_cast< QQuickItem**>(_v) = _t->_nextButton; break;
        case 3: *reinterpret_cast< QQuickItem**>(_v) = _t->_skipButton; break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->rollAxisMapped(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->pitchAxisMapped(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->yawAxisMapped(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->throttleAxisMapped(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->rollAxisReversed(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->pitchAxisReversed(); break;
        case 10: *reinterpret_cast< int*>(_v) = _t->yawAxisReversed(); break;
        case 11: *reinterpret_cast< int*>(_v) = _t->throttleAxisReversed(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->getDeadbandToggle(); break;
        case 13: *reinterpret_cast< int*>(_v) = _t->transmitterMode(); break;
        case 14: *reinterpret_cast< QString*>(_v) = _t->_imageHelp; break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->calibrating(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        JoystickConfigController *_t = static_cast<JoystickConfigController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_statusText != *reinterpret_cast< QQuickItem**>(_v)) {
                _t->_statusText = *reinterpret_cast< QQuickItem**>(_v);
            }
            break;
        case 1:
            if (_t->_cancelButton != *reinterpret_cast< QQuickItem**>(_v)) {
                _t->_cancelButton = *reinterpret_cast< QQuickItem**>(_v);
            }
            break;
        case 2:
            if (_t->_nextButton != *reinterpret_cast< QQuickItem**>(_v)) {
                _t->_nextButton = *reinterpret_cast< QQuickItem**>(_v);
            }
            break;
        case 3:
            if (_t->_skipButton != *reinterpret_cast< QQuickItem**>(_v)) {
                _t->_skipButton = *reinterpret_cast< QQuickItem**>(_v);
            }
            break;
        case 12: _t->setDeadbandToggle(*reinterpret_cast< bool*>(_v)); break;
        case 13: _t->setTransmitterMode(*reinterpret_cast< int*>(_v)); break;
        case 14:
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

const QMetaObject JoystickConfigController::staticMetaObject = {
    { &FactPanelController::staticMetaObject, qt_meta_stringdata_JoystickConfigController.data,
      qt_meta_data_JoystickConfigController,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *JoystickConfigController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JoystickConfigController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JoystickConfigController.stringdata0))
        return static_cast<void*>(this);
    return FactPanelController::qt_metacast(_clname);
}

int JoystickConfigController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactPanelController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 16;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void JoystickConfigController::axisValueChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void JoystickConfigController::axisDeadbandChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void JoystickConfigController::rollAxisMappedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void JoystickConfigController::pitchAxisMappedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void JoystickConfigController::yawAxisMappedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void JoystickConfigController::throttleAxisMappedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void JoystickConfigController::rollAxisReversedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void JoystickConfigController::pitchAxisReversedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void JoystickConfigController::yawAxisReversedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void JoystickConfigController::throttleAxisReversedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void JoystickConfigController::deadbandToggled(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void JoystickConfigController::imageHelpChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void JoystickConfigController::transmitterModeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void JoystickConfigController::calibratingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void JoystickConfigController::nextButtonMessageBoxDisplayed()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
