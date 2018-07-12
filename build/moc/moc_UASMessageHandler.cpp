/****************************************************************************
** Meta object code from reading C++ file 'UASMessageHandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/uas/UASMessageHandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UASMessageHandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UASMessageHandler_t {
    QByteArrayData data[15];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UASMessageHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UASMessageHandler_t qt_meta_stringdata_UASMessageHandler = {
    {
QT_MOC_LITERAL(0, 0, 17), // "UASMessageHandler"
QT_MOC_LITERAL(1, 18, 19), // "textMessageReceived"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 11), // "UASMessage*"
QT_MOC_LITERAL(4, 51, 7), // "message"
QT_MOC_LITERAL(5, 59, 23), // "textMessageCountChanged"
QT_MOC_LITERAL(6, 83, 5), // "count"
QT_MOC_LITERAL(7, 89, 17), // "handleTextMessage"
QT_MOC_LITERAL(8, 107, 5), // "uasid"
QT_MOC_LITERAL(9, 113, 11), // "componentid"
QT_MOC_LITERAL(10, 125, 8), // "severity"
QT_MOC_LITERAL(11, 134, 4), // "text"
QT_MOC_LITERAL(12, 139, 21), // "_activeVehicleChanged"
QT_MOC_LITERAL(13, 161, 8), // "Vehicle*"
QT_MOC_LITERAL(14, 170, 7) // "vehicle"

    },
    "UASMessageHandler\0textMessageReceived\0"
    "\0UASMessage*\0message\0textMessageCountChanged\0"
    "count\0handleTextMessage\0uasid\0componentid\0"
    "severity\0text\0_activeVehicleChanged\0"
    "Vehicle*\0vehicle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UASMessageHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    4,   40,    2, 0x0a /* Public */,
      12,    1,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString,    8,    9,   10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,

       0        // eod
};

void UASMessageHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UASMessageHandler *_t = static_cast<UASMessageHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->textMessageReceived((*reinterpret_cast< UASMessage*(*)>(_a[1]))); break;
        case 1: _t->textMessageCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->handleTextMessage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 3: _t->_activeVehicleChanged((*reinterpret_cast< Vehicle*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vehicle* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (UASMessageHandler::*_t)(UASMessage * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASMessageHandler::textMessageReceived)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (UASMessageHandler::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UASMessageHandler::textMessageCountChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject UASMessageHandler::staticMetaObject = {
    { &QGCTool::staticMetaObject, qt_meta_stringdata_UASMessageHandler.data,
      qt_meta_data_UASMessageHandler,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UASMessageHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UASMessageHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UASMessageHandler.stringdata0))
        return static_cast<void*>(this);
    return QGCTool::qt_metacast(_clname);
}

int UASMessageHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void UASMessageHandler::textMessageReceived(UASMessage * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UASMessageHandler::textMessageCountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
