/****************************************************************************
** Meta object code from reading C++ file 'QGCXPlaneLink.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/QGCXPlaneLink.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCXPlaneLink.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCXPlaneLink_t {
    QByteArrayData data[59];
    char stringdata0[587];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCXPlaneLink_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCXPlaneLink_t qt_meta_stringdata_QGCXPlaneLink = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QGCXPlaneLink"
QT_MOC_LITERAL(1, 14, 29), // "useHilActuatorControlsChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 7), // "enabled"
QT_MOC_LITERAL(4, 53, 7), // "setPort"
QT_MOC_LITERAL(5, 61, 4), // "port"
QT_MOC_LITERAL(6, 66, 13), // "setRemoteHost"
QT_MOC_LITERAL(7, 80, 4), // "host"
QT_MOC_LITERAL(8, 85, 14), // "updateControls"
QT_MOC_LITERAL(9, 100, 4), // "time"
QT_MOC_LITERAL(10, 105, 12), // "rollAilerons"
QT_MOC_LITERAL(11, 118, 13), // "pitchElevator"
QT_MOC_LITERAL(12, 132, 9), // "yawRudder"
QT_MOC_LITERAL(13, 142, 8), // "throttle"
QT_MOC_LITERAL(14, 151, 10), // "systemMode"
QT_MOC_LITERAL(15, 162, 7), // "navMode"
QT_MOC_LITERAL(16, 170, 22), // "updateActuatorControls"
QT_MOC_LITERAL(17, 193, 5), // "flags"
QT_MOC_LITERAL(18, 199, 5), // "ctl_0"
QT_MOC_LITERAL(19, 205, 5), // "ctl_1"
QT_MOC_LITERAL(20, 211, 5), // "ctl_2"
QT_MOC_LITERAL(21, 217, 5), // "ctl_3"
QT_MOC_LITERAL(22, 223, 5), // "ctl_4"
QT_MOC_LITERAL(23, 229, 5), // "ctl_5"
QT_MOC_LITERAL(24, 235, 5), // "ctl_6"
QT_MOC_LITERAL(25, 241, 5), // "ctl_7"
QT_MOC_LITERAL(26, 247, 5), // "ctl_8"
QT_MOC_LITERAL(27, 253, 5), // "ctl_9"
QT_MOC_LITERAL(28, 259, 6), // "ctl_10"
QT_MOC_LITERAL(29, 266, 6), // "ctl_11"
QT_MOC_LITERAL(30, 273, 6), // "ctl_12"
QT_MOC_LITERAL(31, 280, 6), // "ctl_13"
QT_MOC_LITERAL(32, 287, 6), // "ctl_14"
QT_MOC_LITERAL(33, 294, 6), // "ctl_15"
QT_MOC_LITERAL(34, 301, 4), // "mode"
QT_MOC_LITERAL(35, 306, 10), // "setVersion"
QT_MOC_LITERAL(36, 317, 7), // "version"
QT_MOC_LITERAL(37, 325, 15), // "enableSensorHIL"
QT_MOC_LITERAL(38, 341, 6), // "enable"
QT_MOC_LITERAL(39, 348, 25), // "enableHilActuatorControls"
QT_MOC_LITERAL(40, 374, 12), // "processError"
QT_MOC_LITERAL(41, 387, 22), // "QProcess::ProcessError"
QT_MOC_LITERAL(42, 410, 3), // "err"
QT_MOC_LITERAL(43, 414, 9), // "readBytes"
QT_MOC_LITERAL(44, 424, 11), // "_writeBytes"
QT_MOC_LITERAL(45, 436, 4), // "data"
QT_MOC_LITERAL(46, 441, 17), // "connectSimulation"
QT_MOC_LITERAL(47, 459, 20), // "disconnectSimulation"
QT_MOC_LITERAL(48, 480, 14), // "selectAirframe"
QT_MOC_LITERAL(49, 495, 8), // "airframe"
QT_MOC_LITERAL(50, 504, 19), // "setPositionAttitude"
QT_MOC_LITERAL(51, 524, 3), // "lat"
QT_MOC_LITERAL(52, 528, 3), // "lon"
QT_MOC_LITERAL(53, 532, 3), // "alt"
QT_MOC_LITERAL(54, 536, 4), // "roll"
QT_MOC_LITERAL(55, 541, 5), // "pitch"
QT_MOC_LITERAL(56, 547, 3), // "yaw"
QT_MOC_LITERAL(57, 551, 17), // "setRandomPosition"
QT_MOC_LITERAL(58, 569, 17) // "setRandomAttitude"

    },
    "QGCXPlaneLink\0useHilActuatorControlsChanged\0"
    "\0enabled\0setPort\0port\0setRemoteHost\0"
    "host\0updateControls\0time\0rollAilerons\0"
    "pitchElevator\0yawRudder\0throttle\0"
    "systemMode\0navMode\0updateActuatorControls\0"
    "flags\0ctl_0\0ctl_1\0ctl_2\0ctl_3\0ctl_4\0"
    "ctl_5\0ctl_6\0ctl_7\0ctl_8\0ctl_9\0ctl_10\0"
    "ctl_11\0ctl_12\0ctl_13\0ctl_14\0ctl_15\0"
    "mode\0setVersion\0version\0enableSensorHIL\0"
    "enable\0enableHilActuatorControls\0"
    "processError\0QProcess::ProcessError\0"
    "err\0readBytes\0_writeBytes\0data\0"
    "connectSimulation\0disconnectSimulation\0"
    "selectAirframe\0airframe\0setPositionAttitude\0"
    "lat\0lon\0alt\0roll\0pitch\0yaw\0setRandomPosition\0"
    "setRandomAttitude"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCXPlaneLink[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,  107,    2, 0x0a /* Public */,
       6,    1,  110,    2, 0x0a /* Public */,
       8,    7,  113,    2, 0x0a /* Public */,
      16,   19,  128,    2, 0x0a /* Public */,
      35,    1,  167,    2, 0x0a /* Public */,
      35,    1,  170,    2, 0x0a /* Public */,
      37,    1,  173,    2, 0x0a /* Public */,
      39,    1,  176,    2, 0x0a /* Public */,
      40,    1,  179,    2, 0x0a /* Public */,
      43,    0,  182,    2, 0x0a /* Public */,
      44,    1,  183,    2, 0x08 /* Private */,
      46,    0,  186,    2, 0x0a /* Public */,
      47,    0,  187,    2, 0x0a /* Public */,
      48,    1,  188,    2, 0x0a /* Public */,
      50,    6,  191,    2, 0x0a /* Public */,
      57,    0,  204,    2, 0x0a /* Public */,
      58,    0,  205,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::UChar, QMetaType::UChar,    9,   10,   11,   12,   13,   14,   15,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::UChar,    9,   17,   18,   19,   20,   21,   22,   23,   24,   25,   26,   27,   28,   29,   30,   31,   32,   33,   34,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void, QMetaType::UInt,   36,
    QMetaType::Void, QMetaType::Bool,   38,
    QMetaType::Void, QMetaType::Bool,   38,
    QMetaType::Void, 0x80000000 | 41,   42,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   45,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QString,   49,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,   51,   52,   53,   54,   55,   56,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QGCXPlaneLink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCXPlaneLink *_t = static_cast<QGCXPlaneLink *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->useHilActuatorControlsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setPort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setRemoteHost((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->updateControls((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< quint8(*)>(_a[6])),(*reinterpret_cast< quint8(*)>(_a[7]))); break;
        case 4: _t->updateActuatorControls((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< float(*)>(_a[9])),(*reinterpret_cast< float(*)>(_a[10])),(*reinterpret_cast< float(*)>(_a[11])),(*reinterpret_cast< float(*)>(_a[12])),(*reinterpret_cast< float(*)>(_a[13])),(*reinterpret_cast< float(*)>(_a[14])),(*reinterpret_cast< float(*)>(_a[15])),(*reinterpret_cast< float(*)>(_a[16])),(*reinterpret_cast< float(*)>(_a[17])),(*reinterpret_cast< float(*)>(_a[18])),(*reinterpret_cast< quint8(*)>(_a[19]))); break;
        case 5: _t->setVersion((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->setVersion((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 7: _t->enableSensorHIL((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->enableHilActuatorControls((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->processError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 10: _t->readBytes(); break;
        case 11: _t->_writeBytes((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 12: { bool _r = _t->connectSimulation();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->disconnectSimulation();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->selectAirframe((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->setPositionAttitude((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 16: _t->setRandomPosition(); break;
        case 17: _t->setRandomAttitude(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGCXPlaneLink::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCXPlaneLink::useHilActuatorControlsChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QGCXPlaneLink::staticMetaObject = {
    { &QGCHilLink::staticMetaObject, qt_meta_stringdata_QGCXPlaneLink.data,
      qt_meta_data_QGCXPlaneLink,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCXPlaneLink::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCXPlaneLink::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCXPlaneLink.stringdata0))
        return static_cast<void*>(this);
    return QGCHilLink::qt_metacast(_clname);
}

int QGCXPlaneLink::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCHilLink::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void QGCXPlaneLink::useHilActuatorControlsChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
