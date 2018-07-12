/****************************************************************************
** Meta object code from reading C++ file 'MissionManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/MissionManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MissionManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MissionManager_t {
    QByteArrayData data[5];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MissionManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MissionManager_t qt_meta_stringdata_MissionManager = {
    {
QT_MOC_LITERAL(0, 0, 14), // "MissionManager"
QT_MOC_LITERAL(1, 15, 23), // "_mavlinkMessageReceived"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 17), // "mavlink_message_t"
QT_MOC_LITERAL(4, 58, 7) // "message"

    },
    "MissionManager\0_mavlinkMessageReceived\0"
    "\0mavlink_message_t\0message"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MissionManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void MissionManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MissionManager *_t = static_cast<MissionManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->_mavlinkMessageReceived((*reinterpret_cast< const mavlink_message_t(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MissionManager::staticMetaObject = {
    { &PlanManager::staticMetaObject, qt_meta_stringdata_MissionManager.data,
      qt_meta_data_MissionManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MissionManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MissionManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MissionManager.stringdata0))
        return static_cast<void*>(this);
    return PlanManager::qt_metacast(_clname);
}

int MissionManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlanManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
