/****************************************************************************
** Meta object code from reading C++ file 'LogDownloadController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/AnalyzeView/LogDownloadController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LogDownloadController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCLogModel_t {
    QByteArrayData data[7];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCLogModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCLogModel_t qt_meta_stringdata_QGCLogModel = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QGCLogModel"
QT_MOC_LITERAL(1, 12, 12), // "countChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 3), // "get"
QT_MOC_LITERAL(4, 30, 12), // "QGCLogEntry*"
QT_MOC_LITERAL(5, 43, 5), // "index"
QT_MOC_LITERAL(6, 49, 5) // "count"

    },
    "QGCLogModel\0countChanged\0\0get\0"
    "QGCLogEntry*\0index\0count"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCLogModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       1,   28, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 4, QMetaType::Int,    5,

 // properties: name, type, flags
       6, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,

       0        // eod
};

void QGCLogModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCLogModel *_t = static_cast<QGCLogModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->countChanged(); break;
        case 1: { QGCLogEntry* _r = _t->get((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QGCLogEntry**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGCLogModel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCLogModel::countChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QGCLogModel *_t = static_cast<QGCLogModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->count(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QGCLogModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_QGCLogModel.data,
      qt_meta_data_QGCLogModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCLogModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCLogModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCLogModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int QGCLogModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QGCLogModel::countChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QGCLogEntry_t {
    QByteArrayData data[15];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCLogEntry_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCLogEntry_t qt_meta_stringdata_QGCLogEntry = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QGCLogEntry"
QT_MOC_LITERAL(1, 12, 9), // "idChanged"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 11), // "timeChanged"
QT_MOC_LITERAL(4, 35, 11), // "sizeChanged"
QT_MOC_LITERAL(5, 47, 15), // "receivedChanged"
QT_MOC_LITERAL(6, 63, 15), // "selectedChanged"
QT_MOC_LITERAL(7, 79, 13), // "statusChanged"
QT_MOC_LITERAL(8, 93, 2), // "id"
QT_MOC_LITERAL(9, 96, 4), // "time"
QT_MOC_LITERAL(10, 101, 4), // "size"
QT_MOC_LITERAL(11, 106, 7), // "sizeStr"
QT_MOC_LITERAL(12, 114, 8), // "received"
QT_MOC_LITERAL(13, 123, 8), // "selected"
QT_MOC_LITERAL(14, 132, 6) // "status"

    },
    "QGCLogEntry\0idChanged\0\0timeChanged\0"
    "sizeChanged\0receivedChanged\0selectedChanged\0"
    "statusChanged\0id\0time\0size\0sizeStr\0"
    "received\0selected\0status"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCLogEntry[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       7,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,
       6,    0,   48,    2, 0x06 /* Public */,
       7,    0,   49,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::UInt, 0x00095401,
       9, QMetaType::QDateTime, 0x00495001,
      10, QMetaType::UInt, 0x00495001,
      11, QMetaType::QString, 0x00495001,
      12, QMetaType::Bool, 0x00495001,
      13, QMetaType::Bool, 0x00495103,
      14, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       2,
       3,
       4,
       5,

       0        // eod
};

void QGCLogEntry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCLogEntry *_t = static_cast<QGCLogEntry *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->idChanged(); break;
        case 1: _t->timeChanged(); break;
        case 2: _t->sizeChanged(); break;
        case 3: _t->receivedChanged(); break;
        case 4: _t->selectedChanged(); break;
        case 5: _t->statusChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGCLogEntry::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCLogEntry::idChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QGCLogEntry::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCLogEntry::timeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QGCLogEntry::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCLogEntry::sizeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QGCLogEntry::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCLogEntry::receivedChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QGCLogEntry::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCLogEntry::selectedChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QGCLogEntry::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCLogEntry::statusChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QGCLogEntry *_t = static_cast<QGCLogEntry *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< uint*>(_v) = _t->id(); break;
        case 1: *reinterpret_cast< QDateTime*>(_v) = _t->time(); break;
        case 2: *reinterpret_cast< uint*>(_v) = _t->size(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->sizeStr(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->received(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->selected(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->status(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QGCLogEntry *_t = static_cast<QGCLogEntry *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 5: _t->setSelected(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QGCLogEntry::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QGCLogEntry.data,
      qt_meta_data_QGCLogEntry,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCLogEntry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCLogEntry::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCLogEntry.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGCLogEntry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QGCLogEntry::idChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGCLogEntry::timeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QGCLogEntry::sizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QGCLogEntry::receivedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QGCLogEntry::selectedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QGCLogEntry::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
struct qt_meta_stringdata_LogDownloadController_t {
    QByteArrayData data[35];
    char stringdata0[370];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LogDownloadController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LogDownloadController_t qt_meta_stringdata_LogDownloadController = {
    {
QT_MOC_LITERAL(0, 0, 21), // "LogDownloadController"
QT_MOC_LITERAL(1, 22, 21), // "requestingListChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 22), // "downloadingLogsChanged"
QT_MOC_LITERAL(4, 68, 12), // "modelChanged"
QT_MOC_LITERAL(5, 81, 16), // "selectionChanged"
QT_MOC_LITERAL(6, 98, 17), // "_setActiveVehicle"
QT_MOC_LITERAL(7, 116, 8), // "Vehicle*"
QT_MOC_LITERAL(8, 125, 7), // "vehicle"
QT_MOC_LITERAL(9, 133, 9), // "_logEntry"
QT_MOC_LITERAL(10, 143, 13), // "UASInterface*"
QT_MOC_LITERAL(11, 157, 3), // "uas"
QT_MOC_LITERAL(12, 161, 8), // "uint32_t"
QT_MOC_LITERAL(13, 170, 8), // "time_utc"
QT_MOC_LITERAL(14, 179, 4), // "size"
QT_MOC_LITERAL(15, 184, 8), // "uint16_t"
QT_MOC_LITERAL(16, 193, 2), // "id"
QT_MOC_LITERAL(17, 196, 8), // "num_logs"
QT_MOC_LITERAL(18, 205, 12), // "last_log_num"
QT_MOC_LITERAL(19, 218, 8), // "_logData"
QT_MOC_LITERAL(20, 227, 3), // "ofs"
QT_MOC_LITERAL(21, 231, 7), // "uint8_t"
QT_MOC_LITERAL(22, 239, 5), // "count"
QT_MOC_LITERAL(23, 245, 14), // "const uint8_t*"
QT_MOC_LITERAL(24, 260, 4), // "data"
QT_MOC_LITERAL(25, 265, 16), // "_processDownload"
QT_MOC_LITERAL(26, 282, 7), // "refresh"
QT_MOC_LITERAL(27, 290, 8), // "download"
QT_MOC_LITERAL(28, 299, 4), // "path"
QT_MOC_LITERAL(29, 304, 8), // "eraseAll"
QT_MOC_LITERAL(30, 313, 6), // "cancel"
QT_MOC_LITERAL(31, 320, 5), // "model"
QT_MOC_LITERAL(32, 326, 12), // "QGCLogModel*"
QT_MOC_LITERAL(33, 339, 14), // "requestingList"
QT_MOC_LITERAL(34, 354, 15) // "downloadingLogs"

    },
    "LogDownloadController\0requestingListChanged\0"
    "\0downloadingLogsChanged\0modelChanged\0"
    "selectionChanged\0_setActiveVehicle\0"
    "Vehicle*\0vehicle\0_logEntry\0UASInterface*\0"
    "uas\0uint32_t\0time_utc\0size\0uint16_t\0"
    "id\0num_logs\0last_log_num\0_logData\0ofs\0"
    "uint8_t\0count\0const uint8_t*\0data\0"
    "_processDownload\0refresh\0download\0"
    "path\0eraseAll\0cancel\0model\0QGCLogModel*\0"
    "requestingList\0downloadingLogs"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogDownloadController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       3,  118, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,
       4,    0,   81,    2, 0x06 /* Public */,
       5,    0,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   83,    2, 0x08 /* Private */,
       9,    6,   86,    2, 0x08 /* Private */,
      19,    5,   99,    2, 0x08 /* Private */,
      25,    0,  110,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      26,    0,  111,    2, 0x02 /* Public */,
      27,    1,  112,    2, 0x02 /* Public */,
      27,    0,  115,    2, 0x22 /* Public | MethodCloned */,
      29,    0,  116,    2, 0x02 /* Public */,
      30,    0,  117,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 12, 0x80000000 | 12, 0x80000000 | 15, 0x80000000 | 15, 0x80000000 | 15,   11,   13,   14,   16,   17,   18,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 12, 0x80000000 | 15, 0x80000000 | 21, 0x80000000 | 23,   11,   20,   16,   22,   24,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      31, 0x80000000 | 32, 0x00495009,
      33, QMetaType::Bool, 0x00495001,
      34, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       2,
       0,
       1,

       0        // eod
};

void LogDownloadController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LogDownloadController *_t = static_cast<LogDownloadController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestingListChanged(); break;
        case 1: _t->downloadingLogsChanged(); break;
        case 2: _t->modelChanged(); break;
        case 3: _t->selectionChanged(); break;
        case 4: _t->_setActiveVehicle((*reinterpret_cast< Vehicle*(*)>(_a[1]))); break;
        case 5: _t->_logEntry((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< uint32_t(*)>(_a[2])),(*reinterpret_cast< uint32_t(*)>(_a[3])),(*reinterpret_cast< uint16_t(*)>(_a[4])),(*reinterpret_cast< uint16_t(*)>(_a[5])),(*reinterpret_cast< uint16_t(*)>(_a[6]))); break;
        case 6: _t->_logData((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< uint32_t(*)>(_a[2])),(*reinterpret_cast< uint16_t(*)>(_a[3])),(*reinterpret_cast< uint8_t(*)>(_a[4])),(*reinterpret_cast< const uint8_t*(*)>(_a[5]))); break;
        case 7: _t->_processDownload(); break;
        case 8: _t->refresh(); break;
        case 9: _t->download((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->download(); break;
        case 11: _t->eraseAll(); break;
        case 12: _t->cancel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vehicle* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UASInterface* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (LogDownloadController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogDownloadController::requestingListChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (LogDownloadController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogDownloadController::downloadingLogsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (LogDownloadController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogDownloadController::modelChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (LogDownloadController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogDownloadController::selectionChanged)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGCLogModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        LogDownloadController *_t = static_cast<LogDownloadController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QGCLogModel**>(_v) = _t->model(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->requestingList(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->downloadingLogs(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject LogDownloadController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LogDownloadController.data,
      qt_meta_data_LogDownloadController,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LogDownloadController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogDownloadController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LogDownloadController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LogDownloadController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void LogDownloadController::requestingListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void LogDownloadController::downloadingLogsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void LogDownloadController::modelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void LogDownloadController::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
