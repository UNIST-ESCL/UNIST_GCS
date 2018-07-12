/****************************************************************************
** Meta object code from reading C++ file 'QGCJSBSimLink.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/QGCJSBSimLink.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCJSBSimLink.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCJSBSimLink_t {
    QByteArrayData data[30];
    char stringdata0[341];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCJSBSimLink_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCJSBSimLink_t qt_meta_stringdata_QGCJSBSimLink = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QGCJSBSimLink"
QT_MOC_LITERAL(1, 14, 7), // "setPort"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4), // "port"
QT_MOC_LITERAL(4, 28, 13), // "setRemoteHost"
QT_MOC_LITERAL(5, 42, 4), // "host"
QT_MOC_LITERAL(6, 47, 14), // "updateControls"
QT_MOC_LITERAL(7, 62, 4), // "time"
QT_MOC_LITERAL(8, 67, 12), // "rollAilerons"
QT_MOC_LITERAL(9, 80, 13), // "pitchElevator"
QT_MOC_LITERAL(10, 94, 9), // "yawRudder"
QT_MOC_LITERAL(11, 104, 8), // "throttle"
QT_MOC_LITERAL(12, 113, 10), // "systemMode"
QT_MOC_LITERAL(13, 124, 7), // "navMode"
QT_MOC_LITERAL(14, 132, 12), // "processError"
QT_MOC_LITERAL(15, 145, 22), // "QProcess::ProcessError"
QT_MOC_LITERAL(16, 168, 3), // "err"
QT_MOC_LITERAL(17, 172, 10), // "setVersion"
QT_MOC_LITERAL(18, 183, 7), // "version"
QT_MOC_LITERAL(19, 191, 14), // "selectAirframe"
QT_MOC_LITERAL(20, 206, 8), // "airframe"
QT_MOC_LITERAL(21, 215, 15), // "enableSensorHIL"
QT_MOC_LITERAL(22, 231, 6), // "enable"
QT_MOC_LITERAL(23, 238, 9), // "readBytes"
QT_MOC_LITERAL(24, 248, 11), // "_writeBytes"
QT_MOC_LITERAL(25, 260, 4), // "data"
QT_MOC_LITERAL(26, 265, 17), // "connectSimulation"
QT_MOC_LITERAL(27, 283, 20), // "disconnectSimulation"
QT_MOC_LITERAL(28, 304, 19), // "setStartupArguments"
QT_MOC_LITERAL(29, 324, 16) // "startupArguments"

    },
    "QGCJSBSimLink\0setPort\0\0port\0setRemoteHost\0"
    "host\0updateControls\0time\0rollAilerons\0"
    "pitchElevator\0yawRudder\0throttle\0"
    "systemMode\0navMode\0processError\0"
    "QProcess::ProcessError\0err\0setVersion\0"
    "version\0selectAirframe\0airframe\0"
    "enableSensorHIL\0enable\0readBytes\0"
    "_writeBytes\0data\0connectSimulation\0"
    "disconnectSimulation\0setStartupArguments\0"
    "startupArguments"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCJSBSimLink[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x0a /* Public */,
       4,    1,   77,    2, 0x0a /* Public */,
       6,    7,   80,    2, 0x0a /* Public */,
      14,    1,   95,    2, 0x0a /* Public */,
      17,    1,   98,    2, 0x0a /* Public */,
      19,    1,  101,    2, 0x0a /* Public */,
      21,    1,  104,    2, 0x0a /* Public */,
      23,    0,  107,    2, 0x0a /* Public */,
      24,    1,  108,    2, 0x08 /* Private */,
      26,    0,  111,    2, 0x0a /* Public */,
      27,    0,  112,    2, 0x0a /* Public */,
      28,    1,  113,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::UChar, QMetaType::UChar,    7,    8,    9,   10,   11,   12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   25,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QString,   29,

       0        // eod
};

void QGCJSBSimLink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCJSBSimLink *_t = static_cast<QGCJSBSimLink *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setPort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setRemoteHost((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->updateControls((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< quint8(*)>(_a[6])),(*reinterpret_cast< quint8(*)>(_a[7]))); break;
        case 3: _t->processError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 4: _t->setVersion((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->selectAirframe((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->enableSensorHIL((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->readBytes(); break;
        case 8: _t->_writeBytes((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 9: { bool _r = _t->connectSimulation();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->disconnectSimulation();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->setStartupArguments((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QGCJSBSimLink::staticMetaObject = {
    { &QGCHilLink::staticMetaObject, qt_meta_stringdata_QGCJSBSimLink.data,
      qt_meta_data_QGCJSBSimLink,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCJSBSimLink::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCJSBSimLink::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCJSBSimLink.stringdata0))
        return static_cast<void*>(this);
    return QGCHilLink::qt_metacast(_clname);
}

int QGCJSBSimLink::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCHilLink::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
