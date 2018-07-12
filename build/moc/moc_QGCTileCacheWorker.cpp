/****************************************************************************
** Meta object code from reading C++ file 'QGCTileCacheWorker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/QtLocationPlugin/QGCTileCacheWorker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCTileCacheWorker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCCacheWorker_t {
    QByteArrayData data[12];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCCacheWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCCacheWorker_t qt_meta_stringdata_QGCCacheWorker = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QGCCacheWorker"
QT_MOC_LITERAL(1, 15, 12), // "updateTotals"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 10), // "totaltiles"
QT_MOC_LITERAL(4, 40, 9), // "totalsize"
QT_MOC_LITERAL(5, 50, 12), // "defaulttiles"
QT_MOC_LITERAL(6, 63, 11), // "defaultsize"
QT_MOC_LITERAL(7, 75, 14), // "internetStatus"
QT_MOC_LITERAL(8, 90, 6), // "active"
QT_MOC_LITERAL(9, 97, 12), // "_lookupReady"
QT_MOC_LITERAL(10, 110, 9), // "QHostInfo"
QT_MOC_LITERAL(11, 120, 4) // "info"

    },
    "QGCCacheWorker\0updateTotals\0\0totaltiles\0"
    "totalsize\0defaulttiles\0defaultsize\0"
    "internetStatus\0active\0_lookupReady\0"
    "QHostInfo\0info"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCCacheWorker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   29,    2, 0x06 /* Public */,
       7,    1,   38,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::ULongLong, QMetaType::UInt, QMetaType::ULongLong,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::Bool,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void QGCCacheWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCCacheWorker *_t = static_cast<QGCCacheWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateTotals((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3])),(*reinterpret_cast< quint64(*)>(_a[4]))); break;
        case 1: _t->internetStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->_lookupReady((*reinterpret_cast< QHostInfo(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QHostInfo >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGCCacheWorker::*_t)(quint32 , quint64 , quint32 , quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCacheWorker::updateTotals)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QGCCacheWorker::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCacheWorker::internetStatus)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QGCCacheWorker::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_QGCCacheWorker.data,
      qt_meta_data_QGCCacheWorker,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCCacheWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCCacheWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCCacheWorker.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int QGCCacheWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QGCCacheWorker::updateTotals(quint32 _t1, quint64 _t2, quint32 _t3, quint64 _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGCCacheWorker::internetStatus(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
