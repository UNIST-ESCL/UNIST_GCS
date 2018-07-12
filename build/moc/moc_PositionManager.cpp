/****************************************************************************
** Meta object code from reading C++ file 'PositionManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/PositionManager/PositionManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PositionManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCPositionManager_t {
    QByteArrayData data[12];
    char stringdata0[174];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCPositionManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCPositionManager_t qt_meta_stringdata_QGCPositionManager = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QGCPositionManager"
QT_MOC_LITERAL(1, 19, 19), // "lastPositionUpdated"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 5), // "valid"
QT_MOC_LITERAL(4, 46, 12), // "lastPosition"
QT_MOC_LITERAL(5, 59, 19), // "positionInfoUpdated"
QT_MOC_LITERAL(6, 79, 16), // "QGeoPositionInfo"
QT_MOC_LITERAL(7, 96, 6), // "update"
QT_MOC_LITERAL(8, 103, 16), // "_positionUpdated"
QT_MOC_LITERAL(9, 120, 6), // "_error"
QT_MOC_LITERAL(10, 127, 29), // "QGeoPositionInfoSource::Error"
QT_MOC_LITERAL(11, 157, 16) // "positioningError"

    },
    "QGCPositionManager\0lastPositionUpdated\0"
    "\0valid\0lastPosition\0positionInfoUpdated\0"
    "QGeoPositionInfo\0update\0_positionUpdated\0"
    "_error\0QGeoPositionInfoSource::Error\0"
    "positioningError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCPositionManager[] = {

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
       1,    2,   34,    2, 0x06 /* Public */,
       5,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   42,    2, 0x08 /* Private */,
       9,    1,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::QVariant,    3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void QGCPositionManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCPositionManager *_t = static_cast<QGCPositionManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->lastPositionUpdated((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 1: _t->positionInfoUpdated((*reinterpret_cast< QGeoPositionInfo(*)>(_a[1]))); break;
        case 2: _t->_positionUpdated((*reinterpret_cast< const QGeoPositionInfo(*)>(_a[1]))); break;
        case 3: _t->_error((*reinterpret_cast< QGeoPositionInfoSource::Error(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGCPositionManager::*_t)(bool , QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCPositionManager::lastPositionUpdated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QGCPositionManager::*_t)(QGeoPositionInfo );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCPositionManager::positionInfoUpdated)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QGCPositionManager::staticMetaObject = {
    { &QGCTool::staticMetaObject, qt_meta_stringdata_QGCPositionManager.data,
      qt_meta_data_QGCPositionManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCPositionManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCPositionManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCPositionManager.stringdata0))
        return static_cast<void*>(this);
    return QGCTool::qt_metacast(_clname);
}

int QGCPositionManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QGCPositionManager::lastPositionUpdated(bool _t1, QVariant _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGCPositionManager::positionInfoUpdated(QGeoPositionInfo _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
