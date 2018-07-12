/****************************************************************************
** Meta object code from reading C++ file 'MavlinkConsoleController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/AnalyzeView/MavlinkConsoleController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MavlinkConsoleController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MavlinkConsoleController_t {
    QByteArrayData data[19];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MavlinkConsoleController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MavlinkConsoleController_t qt_meta_stringdata_MavlinkConsoleController = {
    {
QT_MOC_LITERAL(0, 0, 24), // "MavlinkConsoleController"
QT_MOC_LITERAL(1, 25, 17), // "_setActiveVehicle"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 8), // "Vehicle*"
QT_MOC_LITERAL(4, 53, 7), // "vehicle"
QT_MOC_LITERAL(5, 61, 12), // "_receiveData"
QT_MOC_LITERAL(6, 74, 7), // "uint8_t"
QT_MOC_LITERAL(7, 82, 6), // "device"
QT_MOC_LITERAL(8, 89, 5), // "flags"
QT_MOC_LITERAL(9, 95, 8), // "uint16_t"
QT_MOC_LITERAL(10, 104, 7), // "timeout"
QT_MOC_LITERAL(11, 112, 8), // "uint32_t"
QT_MOC_LITERAL(12, 121, 8), // "baudrate"
QT_MOC_LITERAL(13, 130, 4), // "data"
QT_MOC_LITERAL(14, 135, 11), // "sendCommand"
QT_MOC_LITERAL(15, 147, 7), // "command"
QT_MOC_LITERAL(16, 155, 9), // "historyUp"
QT_MOC_LITERAL(17, 165, 7), // "current"
QT_MOC_LITERAL(18, 173, 11) // "historyDown"

    },
    "MavlinkConsoleController\0_setActiveVehicle\0"
    "\0Vehicle*\0vehicle\0_receiveData\0uint8_t\0"
    "device\0flags\0uint16_t\0timeout\0uint32_t\0"
    "baudrate\0data\0sendCommand\0command\0"
    "historyUp\0current\0historyDown"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MavlinkConsoleController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       5,    5,   42,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      14,    1,   53,    2, 0x02 /* Public */,
      16,    1,   56,    2, 0x02 /* Public */,
      18,    1,   59,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 9, 0x80000000 | 11, QMetaType::QByteArray,    7,    8,   10,   12,   13,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::QString, QMetaType::QString,   17,
    QMetaType::QString, QMetaType::QString,   17,

       0        // eod
};

void MavlinkConsoleController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MavlinkConsoleController *_t = static_cast<MavlinkConsoleController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->_setActiveVehicle((*reinterpret_cast< Vehicle*(*)>(_a[1]))); break;
        case 1: _t->_receiveData((*reinterpret_cast< uint8_t(*)>(_a[1])),(*reinterpret_cast< uint8_t(*)>(_a[2])),(*reinterpret_cast< uint16_t(*)>(_a[3])),(*reinterpret_cast< uint32_t(*)>(_a[4])),(*reinterpret_cast< QByteArray(*)>(_a[5]))); break;
        case 2: _t->sendCommand((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: { QString _r = _t->historyUp((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->historyDown((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject MavlinkConsoleController::staticMetaObject = {
    { &QStringListModel::staticMetaObject, qt_meta_stringdata_MavlinkConsoleController.data,
      qt_meta_data_MavlinkConsoleController,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MavlinkConsoleController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MavlinkConsoleController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MavlinkConsoleController.stringdata0))
        return static_cast<void*>(this);
    return QStringListModel::qt_metacast(_clname);
}

int MavlinkConsoleController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStringListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
