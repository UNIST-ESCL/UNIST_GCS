/****************************************************************************
** Meta object code from reading C++ file 'GeoTagController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/AnalyzeView/GeoTagController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GeoTagController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GeoTagWorker_t {
    QByteArrayData data[7];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GeoTagWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GeoTagWorker_t qt_meta_stringdata_GeoTagWorker = {
    {
QT_MOC_LITERAL(0, 0, 12), // "GeoTagWorker"
QT_MOC_LITERAL(1, 13, 5), // "error"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 8), // "errorMsg"
QT_MOC_LITERAL(4, 29, 15), // "taggingComplete"
QT_MOC_LITERAL(5, 45, 15), // "progressChanged"
QT_MOC_LITERAL(6, 61, 8) // "progress"

    },
    "GeoTagWorker\0error\0\0errorMsg\0"
    "taggingComplete\0progressChanged\0"
    "progress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GeoTagWorker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    0,   32,    2, 0x06 /* Public */,
       5,    1,   33,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    6,

       0        // eod
};

void GeoTagWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GeoTagWorker *_t = static_cast<GeoTagWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->taggingComplete(); break;
        case 2: _t->progressChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (GeoTagWorker::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GeoTagWorker::error)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (GeoTagWorker::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GeoTagWorker::taggingComplete)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (GeoTagWorker::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GeoTagWorker::progressChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject GeoTagWorker::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_GeoTagWorker.data,
      qt_meta_data_GeoTagWorker,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GeoTagWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GeoTagWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GeoTagWorker.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int GeoTagWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void GeoTagWorker::error(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GeoTagWorker::taggingComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void GeoTagWorker::progressChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_GeoTagController_t {
    QByteArrayData data[24];
    char stringdata0[344];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GeoTagController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GeoTagController_t qt_meta_stringdata_GeoTagController = {
    {
QT_MOC_LITERAL(0, 0, 16), // "GeoTagController"
QT_MOC_LITERAL(1, 17, 14), // "logFileChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 7), // "logFile"
QT_MOC_LITERAL(4, 41, 21), // "imageDirectoryChanged"
QT_MOC_LITERAL(5, 63, 14), // "imageDirectory"
QT_MOC_LITERAL(6, 78, 20), // "saveDirectoryChanged"
QT_MOC_LITERAL(7, 99, 13), // "saveDirectory"
QT_MOC_LITERAL(8, 113, 15), // "progressChanged"
QT_MOC_LITERAL(9, 129, 8), // "progress"
QT_MOC_LITERAL(10, 138, 17), // "inProgressChanged"
QT_MOC_LITERAL(11, 156, 19), // "errorMessageChanged"
QT_MOC_LITERAL(12, 176, 12), // "errorMessage"
QT_MOC_LITERAL(13, 189, 22), // "_workerProgressChanged"
QT_MOC_LITERAL(14, 212, 12), // "_workerError"
QT_MOC_LITERAL(15, 225, 8), // "errorMsg"
QT_MOC_LITERAL(16, 234, 16), // "_setErrorMessage"
QT_MOC_LITERAL(17, 251, 5), // "error"
QT_MOC_LITERAL(18, 257, 11), // "pickLogFile"
QT_MOC_LITERAL(19, 269, 18), // "pickImageDirectory"
QT_MOC_LITERAL(20, 288, 17), // "pickSaveDirectory"
QT_MOC_LITERAL(21, 306, 12), // "startTagging"
QT_MOC_LITERAL(22, 319, 13), // "cancelTagging"
QT_MOC_LITERAL(23, 333, 10) // "inProgress"

    },
    "GeoTagController\0logFileChanged\0\0"
    "logFile\0imageDirectoryChanged\0"
    "imageDirectory\0saveDirectoryChanged\0"
    "saveDirectory\0progressChanged\0progress\0"
    "inProgressChanged\0errorMessageChanged\0"
    "errorMessage\0_workerProgressChanged\0"
    "_workerError\0errorMsg\0_setErrorMessage\0"
    "error\0pickLogFile\0pickImageDirectory\0"
    "pickSaveDirectory\0startTagging\0"
    "cancelTagging\0inProgress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GeoTagController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       6,  114, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    1,   87,    2, 0x06 /* Public */,
       6,    1,   90,    2, 0x06 /* Public */,
       8,    1,   93,    2, 0x06 /* Public */,
      10,    0,   96,    2, 0x06 /* Public */,
      11,    1,   97,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,  100,    2, 0x08 /* Private */,
      14,    1,  103,    2, 0x08 /* Private */,
      16,    1,  106,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      18,    0,  109,    2, 0x02 /* Public */,
      19,    0,  110,    2, 0x02 /* Public */,
      20,    0,  111,    2, 0x02 /* Public */,
      21,    0,  112,    2, 0x02 /* Public */,
      22,    0,  113,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString,   17,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495001,
       5, QMetaType::QString, 0x00495001,
       7, QMetaType::QString, 0x00495001,
      12, QMetaType::QString, 0x00495001,
       9, QMetaType::Double, 0x00495001,
      23, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       5,
       3,
       4,

       0        // eod
};

void GeoTagController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GeoTagController *_t = static_cast<GeoTagController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->logFileChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->imageDirectoryChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->saveDirectoryChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->progressChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->inProgressChanged(); break;
        case 5: _t->errorMessageChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->_workerProgressChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->_workerError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->_setErrorMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->pickLogFile(); break;
        case 10: _t->pickImageDirectory(); break;
        case 11: _t->pickSaveDirectory(); break;
        case 12: _t->startTagging(); break;
        case 13: _t->cancelTagging(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (GeoTagController::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GeoTagController::logFileChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (GeoTagController::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GeoTagController::imageDirectoryChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (GeoTagController::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GeoTagController::saveDirectoryChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (GeoTagController::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GeoTagController::progressChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (GeoTagController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GeoTagController::inProgressChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (GeoTagController::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GeoTagController::errorMessageChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        GeoTagController *_t = static_cast<GeoTagController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->logFile(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->imageDirectory(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->saveDirectory(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->errorMessage(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->progress(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->inProgress(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject GeoTagController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GeoTagController.data,
      qt_meta_data_GeoTagController,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GeoTagController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GeoTagController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GeoTagController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GeoTagController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void GeoTagController::logFileChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GeoTagController::imageDirectoryChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GeoTagController::saveDirectoryChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GeoTagController::progressChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GeoTagController::inProgressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void GeoTagController::errorMessageChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
