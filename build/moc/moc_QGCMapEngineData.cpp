/****************************************************************************
** Meta object code from reading C++ file 'QGCMapEngineData.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/QtLocationPlugin/QGCMapEngineData.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCMapEngineData.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCCacheTile_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCCacheTile_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCCacheTile_t qt_meta_stringdata_QGCCacheTile = {
    {
QT_MOC_LITERAL(0, 0, 12) // "QGCCacheTile"

    },
    "QGCCacheTile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCCacheTile[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QGCCacheTile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QGCCacheTile::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QGCCacheTile.data,
      qt_meta_data_QGCCacheTile,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCCacheTile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCCacheTile::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCCacheTile.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGCCacheTile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QGCMapTask_t {
    QByteArrayData data[6];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCMapTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCMapTask_t qt_meta_stringdata_QGCMapTask = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QGCMapTask"
QT_MOC_LITERAL(1, 11, 5), // "error"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 20), // "QGCMapTask::TaskType"
QT_MOC_LITERAL(4, 39, 4), // "type"
QT_MOC_LITERAL(5, 44, 11) // "errorString"

    },
    "QGCMapTask\0error\0\0QGCMapTask::TaskType\0"
    "type\0errorString"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCMapTask[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,

       0        // eod
};

void QGCMapTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCMapTask *_t = static_cast<QGCMapTask *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< QGCMapTask::TaskType(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGCMapTask::*_t)(QGCMapTask::TaskType , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapTask::error)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QGCMapTask::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QGCMapTask.data,
      qt_meta_data_QGCMapTask,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCMapTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCMapTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCMapTask.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGCMapTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QGCMapTask::error(QGCMapTask::TaskType _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QGCTestInternetTask_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCTestInternetTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCTestInternetTask_t qt_meta_stringdata_QGCTestInternetTask = {
    {
QT_MOC_LITERAL(0, 0, 19) // "QGCTestInternetTask"

    },
    "QGCTestInternetTask"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCTestInternetTask[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QGCTestInternetTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QGCTestInternetTask::staticMetaObject = {
    { &QGCMapTask::staticMetaObject, qt_meta_stringdata_QGCTestInternetTask.data,
      qt_meta_data_QGCTestInternetTask,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCTestInternetTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCTestInternetTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCTestInternetTask.stringdata0))
        return static_cast<void*>(this);
    return QGCMapTask::qt_metacast(_clname);
}

int QGCTestInternetTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCMapTask::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QGCFetchTileSetTask_t {
    QByteArrayData data[5];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCFetchTileSetTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCFetchTileSetTask_t qt_meta_stringdata_QGCFetchTileSetTask = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QGCFetchTileSetTask"
QT_MOC_LITERAL(1, 20, 14), // "tileSetFetched"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 17), // "QGCCachedTileSet*"
QT_MOC_LITERAL(4, 54, 7) // "tileSet"

    },
    "QGCFetchTileSetTask\0tileSetFetched\0\0"
    "QGCCachedTileSet*\0tileSet"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCFetchTileSetTask[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void QGCFetchTileSetTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCFetchTileSetTask *_t = static_cast<QGCFetchTileSetTask *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tileSetFetched((*reinterpret_cast< QGCCachedTileSet*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGCFetchTileSetTask::*_t)(QGCCachedTileSet * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCFetchTileSetTask::tileSetFetched)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QGCFetchTileSetTask::staticMetaObject = {
    { &QGCMapTask::staticMetaObject, qt_meta_stringdata_QGCFetchTileSetTask.data,
      qt_meta_data_QGCFetchTileSetTask,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCFetchTileSetTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCFetchTileSetTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCFetchTileSetTask.stringdata0))
        return static_cast<void*>(this);
    return QGCMapTask::qt_metacast(_clname);
}

int QGCFetchTileSetTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCMapTask::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QGCFetchTileSetTask::tileSetFetched(QGCCachedTileSet * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QGCCreateTileSetTask_t {
    QByteArrayData data[5];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCCreateTileSetTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCCreateTileSetTask_t qt_meta_stringdata_QGCCreateTileSetTask = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QGCCreateTileSetTask"
QT_MOC_LITERAL(1, 21, 12), // "tileSetSaved"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 17), // "QGCCachedTileSet*"
QT_MOC_LITERAL(4, 53, 7) // "tileSet"

    },
    "QGCCreateTileSetTask\0tileSetSaved\0\0"
    "QGCCachedTileSet*\0tileSet"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCCreateTileSetTask[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void QGCCreateTileSetTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCCreateTileSetTask *_t = static_cast<QGCCreateTileSetTask *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tileSetSaved((*reinterpret_cast< QGCCachedTileSet*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGCCreateTileSetTask::*_t)(QGCCachedTileSet * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCreateTileSetTask::tileSetSaved)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QGCCreateTileSetTask::staticMetaObject = {
    { &QGCMapTask::staticMetaObject, qt_meta_stringdata_QGCCreateTileSetTask.data,
      qt_meta_data_QGCCreateTileSetTask,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCCreateTileSetTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCCreateTileSetTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCCreateTileSetTask.stringdata0))
        return static_cast<void*>(this);
    return QGCMapTask::qt_metacast(_clname);
}

int QGCCreateTileSetTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCMapTask::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QGCCreateTileSetTask::tileSetSaved(QGCCachedTileSet * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QGCFetchTileTask_t {
    QByteArrayData data[5];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCFetchTileTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCFetchTileTask_t qt_meta_stringdata_QGCFetchTileTask = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QGCFetchTileTask"
QT_MOC_LITERAL(1, 17, 11), // "tileFetched"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 13), // "QGCCacheTile*"
QT_MOC_LITERAL(4, 44, 4) // "tile"

    },
    "QGCFetchTileTask\0tileFetched\0\0"
    "QGCCacheTile*\0tile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCFetchTileTask[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void QGCFetchTileTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCFetchTileTask *_t = static_cast<QGCFetchTileTask *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tileFetched((*reinterpret_cast< QGCCacheTile*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGCCacheTile* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGCFetchTileTask::*_t)(QGCCacheTile * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCFetchTileTask::tileFetched)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QGCFetchTileTask::staticMetaObject = {
    { &QGCMapTask::staticMetaObject, qt_meta_stringdata_QGCFetchTileTask.data,
      qt_meta_data_QGCFetchTileTask,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCFetchTileTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCFetchTileTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCFetchTileTask.stringdata0))
        return static_cast<void*>(this);
    return QGCMapTask::qt_metacast(_clname);
}

int QGCFetchTileTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCMapTask::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QGCFetchTileTask::tileFetched(QGCCacheTile * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QGCSaveTileTask_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCSaveTileTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCSaveTileTask_t qt_meta_stringdata_QGCSaveTileTask = {
    {
QT_MOC_LITERAL(0, 0, 15) // "QGCSaveTileTask"

    },
    "QGCSaveTileTask"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCSaveTileTask[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QGCSaveTileTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QGCSaveTileTask::staticMetaObject = {
    { &QGCMapTask::staticMetaObject, qt_meta_stringdata_QGCSaveTileTask.data,
      qt_meta_data_QGCSaveTileTask,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCSaveTileTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCSaveTileTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCSaveTileTask.stringdata0))
        return static_cast<void*>(this);
    return QGCMapTask::qt_metacast(_clname);
}

int QGCSaveTileTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCMapTask::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QGCGetTileDownloadListTask_t {
    QByteArrayData data[5];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCGetTileDownloadListTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCGetTileDownloadListTask_t qt_meta_stringdata_QGCGetTileDownloadListTask = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QGCGetTileDownloadListTask"
QT_MOC_LITERAL(1, 27, 15), // "tileListFetched"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 15), // "QList<QGCTile*>"
QT_MOC_LITERAL(4, 60, 5) // "tiles"

    },
    "QGCGetTileDownloadListTask\0tileListFetched\0"
    "\0QList<QGCTile*>\0tiles"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCGetTileDownloadListTask[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void QGCGetTileDownloadListTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCGetTileDownloadListTask *_t = static_cast<QGCGetTileDownloadListTask *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tileListFetched((*reinterpret_cast< QList<QGCTile*>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGCGetTileDownloadListTask::*_t)(QList<QGCTile*> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCGetTileDownloadListTask::tileListFetched)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QGCGetTileDownloadListTask::staticMetaObject = {
    { &QGCMapTask::staticMetaObject, qt_meta_stringdata_QGCGetTileDownloadListTask.data,
      qt_meta_data_QGCGetTileDownloadListTask,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCGetTileDownloadListTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCGetTileDownloadListTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCGetTileDownloadListTask.stringdata0))
        return static_cast<void*>(this);
    return QGCMapTask::qt_metacast(_clname);
}

int QGCGetTileDownloadListTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCMapTask::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QGCGetTileDownloadListTask::tileListFetched(QList<QGCTile*> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QGCUpdateTileDownloadStateTask_t {
    QByteArrayData data[1];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCUpdateTileDownloadStateTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCUpdateTileDownloadStateTask_t qt_meta_stringdata_QGCUpdateTileDownloadStateTask = {
    {
QT_MOC_LITERAL(0, 0, 30) // "QGCUpdateTileDownloadStateTask"

    },
    "QGCUpdateTileDownloadStateTask"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCUpdateTileDownloadStateTask[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QGCUpdateTileDownloadStateTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QGCUpdateTileDownloadStateTask::staticMetaObject = {
    { &QGCMapTask::staticMetaObject, qt_meta_stringdata_QGCUpdateTileDownloadStateTask.data,
      qt_meta_data_QGCUpdateTileDownloadStateTask,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCUpdateTileDownloadStateTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCUpdateTileDownloadStateTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCUpdateTileDownloadStateTask.stringdata0))
        return static_cast<void*>(this);
    return QGCMapTask::qt_metacast(_clname);
}

int QGCUpdateTileDownloadStateTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCMapTask::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QGCDeleteTileSetTask_t {
    QByteArrayData data[4];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCDeleteTileSetTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCDeleteTileSetTask_t qt_meta_stringdata_QGCDeleteTileSetTask = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QGCDeleteTileSetTask"
QT_MOC_LITERAL(1, 21, 14), // "tileSetDeleted"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 5) // "setID"

    },
    "QGCDeleteTileSetTask\0tileSetDeleted\0"
    "\0setID"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCDeleteTileSetTask[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::ULongLong,    3,

       0        // eod
};

void QGCDeleteTileSetTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCDeleteTileSetTask *_t = static_cast<QGCDeleteTileSetTask *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tileSetDeleted((*reinterpret_cast< qulonglong(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGCDeleteTileSetTask::*_t)(qulonglong );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCDeleteTileSetTask::tileSetDeleted)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QGCDeleteTileSetTask::staticMetaObject = {
    { &QGCMapTask::staticMetaObject, qt_meta_stringdata_QGCDeleteTileSetTask.data,
      qt_meta_data_QGCDeleteTileSetTask,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCDeleteTileSetTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCDeleteTileSetTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCDeleteTileSetTask.stringdata0))
        return static_cast<void*>(this);
    return QGCMapTask::qt_metacast(_clname);
}

int QGCDeleteTileSetTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCMapTask::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QGCDeleteTileSetTask::tileSetDeleted(qulonglong _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QGCRenameTileSetTask_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCRenameTileSetTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCRenameTileSetTask_t qt_meta_stringdata_QGCRenameTileSetTask = {
    {
QT_MOC_LITERAL(0, 0, 20) // "QGCRenameTileSetTask"

    },
    "QGCRenameTileSetTask"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCRenameTileSetTask[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QGCRenameTileSetTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QGCRenameTileSetTask::staticMetaObject = {
    { &QGCMapTask::staticMetaObject, qt_meta_stringdata_QGCRenameTileSetTask.data,
      qt_meta_data_QGCRenameTileSetTask,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCRenameTileSetTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCRenameTileSetTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCRenameTileSetTask.stringdata0))
        return static_cast<void*>(this);
    return QGCMapTask::qt_metacast(_clname);
}

int QGCRenameTileSetTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCMapTask::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QGCPruneCacheTask_t {
    QByteArrayData data[3];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCPruneCacheTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCPruneCacheTask_t qt_meta_stringdata_QGCPruneCacheTask = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QGCPruneCacheTask"
QT_MOC_LITERAL(1, 18, 6), // "pruned"
QT_MOC_LITERAL(2, 25, 0) // ""

    },
    "QGCPruneCacheTask\0pruned\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCPruneCacheTask[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void QGCPruneCacheTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCPruneCacheTask *_t = static_cast<QGCPruneCacheTask *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pruned(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGCPruneCacheTask::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCPruneCacheTask::pruned)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QGCPruneCacheTask::staticMetaObject = {
    { &QGCMapTask::staticMetaObject, qt_meta_stringdata_QGCPruneCacheTask.data,
      qt_meta_data_QGCPruneCacheTask,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCPruneCacheTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCPruneCacheTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCPruneCacheTask.stringdata0))
        return static_cast<void*>(this);
    return QGCMapTask::qt_metacast(_clname);
}

int QGCPruneCacheTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCMapTask::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QGCPruneCacheTask::pruned()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QGCResetTask_t {
    QByteArrayData data[3];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCResetTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCResetTask_t qt_meta_stringdata_QGCResetTask = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QGCResetTask"
QT_MOC_LITERAL(1, 13, 14), // "resetCompleted"
QT_MOC_LITERAL(2, 28, 0) // ""

    },
    "QGCResetTask\0resetCompleted\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCResetTask[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void QGCResetTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCResetTask *_t = static_cast<QGCResetTask *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resetCompleted(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGCResetTask::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCResetTask::resetCompleted)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QGCResetTask::staticMetaObject = {
    { &QGCMapTask::staticMetaObject, qt_meta_stringdata_QGCResetTask.data,
      qt_meta_data_QGCResetTask,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCResetTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCResetTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCResetTask.stringdata0))
        return static_cast<void*>(this);
    return QGCMapTask::qt_metacast(_clname);
}

int QGCResetTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCMapTask::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QGCResetTask::resetCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QGCExportTileTask_t {
    QByteArrayData data[5];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCExportTileTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCExportTileTask_t qt_meta_stringdata_QGCExportTileTask = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QGCExportTileTask"
QT_MOC_LITERAL(1, 18, 15), // "actionCompleted"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 14), // "actionProgress"
QT_MOC_LITERAL(4, 50, 10) // "percentage"

    },
    "QGCExportTileTask\0actionCompleted\0\0"
    "actionProgress\0percentage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCExportTileTask[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    1,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void QGCExportTileTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCExportTileTask *_t = static_cast<QGCExportTileTask *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->actionCompleted(); break;
        case 1: _t->actionProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGCExportTileTask::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCExportTileTask::actionCompleted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QGCExportTileTask::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCExportTileTask::actionProgress)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QGCExportTileTask::staticMetaObject = {
    { &QGCMapTask::staticMetaObject, qt_meta_stringdata_QGCExportTileTask.data,
      qt_meta_data_QGCExportTileTask,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCExportTileTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCExportTileTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCExportTileTask.stringdata0))
        return static_cast<void*>(this);
    return QGCMapTask::qt_metacast(_clname);
}

int QGCExportTileTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCMapTask::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QGCExportTileTask::actionCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGCExportTileTask::actionProgress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_QGCImportTileTask_t {
    QByteArrayData data[5];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCImportTileTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCImportTileTask_t qt_meta_stringdata_QGCImportTileTask = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QGCImportTileTask"
QT_MOC_LITERAL(1, 18, 15), // "actionCompleted"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 14), // "actionProgress"
QT_MOC_LITERAL(4, 50, 10) // "percentage"

    },
    "QGCImportTileTask\0actionCompleted\0\0"
    "actionProgress\0percentage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCImportTileTask[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    1,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void QGCImportTileTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCImportTileTask *_t = static_cast<QGCImportTileTask *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->actionCompleted(); break;
        case 1: _t->actionProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGCImportTileTask::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCImportTileTask::actionCompleted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QGCImportTileTask::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCImportTileTask::actionProgress)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QGCImportTileTask::staticMetaObject = {
    { &QGCMapTask::staticMetaObject, qt_meta_stringdata_QGCImportTileTask.data,
      qt_meta_data_QGCImportTileTask,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCImportTileTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCImportTileTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCImportTileTask.stringdata0))
        return static_cast<void*>(this);
    return QGCMapTask::qt_metacast(_clname);
}

int QGCImportTileTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCMapTask::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QGCImportTileTask::actionCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGCImportTileTask::actionProgress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
