/****************************************************************************
** Meta object code from reading C++ file 'QGCMapEngine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/QtLocationPlugin/QGCMapEngine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCMapEngine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCMapEngine_t {
    QByteArrayData data[12];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCMapEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCMapEngine_t qt_meta_stringdata_QGCMapEngine = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QGCMapEngine"
QT_MOC_LITERAL(1, 13, 12), // "updateTotals"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 10), // "totaltiles"
QT_MOC_LITERAL(4, 38, 9), // "totalsize"
QT_MOC_LITERAL(5, 48, 12), // "defaulttiles"
QT_MOC_LITERAL(6, 61, 11), // "defaultsize"
QT_MOC_LITERAL(7, 73, 15), // "internetUpdated"
QT_MOC_LITERAL(8, 89, 13), // "_updateTotals"
QT_MOC_LITERAL(9, 103, 7), // "_pruned"
QT_MOC_LITERAL(10, 111, 15), // "_internetStatus"
QT_MOC_LITERAL(11, 127, 6) // "active"

    },
    "QGCMapEngine\0updateTotals\0\0totaltiles\0"
    "totalsize\0defaulttiles\0defaultsize\0"
    "internetUpdated\0_updateTotals\0_pruned\0"
    "_internetStatus\0active"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCMapEngine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   39,    2, 0x06 /* Public */,
       7,    0,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    4,   49,    2, 0x08 /* Private */,
       9,    0,   58,    2, 0x08 /* Private */,
      10,    1,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::ULongLong, QMetaType::UInt, QMetaType::ULongLong,    3,    4,    5,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::ULongLong, QMetaType::UInt, QMetaType::ULongLong,    3,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,

       0        // eod
};

void QGCMapEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCMapEngine *_t = static_cast<QGCMapEngine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateTotals((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3])),(*reinterpret_cast< quint64(*)>(_a[4]))); break;
        case 1: _t->internetUpdated(); break;
        case 2: _t->_updateTotals((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3])),(*reinterpret_cast< quint64(*)>(_a[4]))); break;
        case 3: _t->_pruned(); break;
        case 4: _t->_internetStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGCMapEngine::*_t)(quint32 , quint64 , quint32 , quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapEngine::updateTotals)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QGCMapEngine::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapEngine::internetUpdated)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QGCMapEngine::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QGCMapEngine.data,
      qt_meta_data_QGCMapEngine,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCMapEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCMapEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCMapEngine.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGCMapEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QGCMapEngine::updateTotals(quint32 _t1, quint64 _t2, quint32 _t3, quint64 _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGCMapEngine::internetUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
