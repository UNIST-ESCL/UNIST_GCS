/****************************************************************************
** Meta object code from reading C++ file 'AppMessages.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/QmlControls/AppMessages.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AppMessages.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AppLogModel_t {
    QByteArrayData data[10];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AppLogModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AppLogModel_t qt_meta_stringdata_AppLogModel = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AppLogModel"
QT_MOC_LITERAL(1, 12, 7), // "emitLog"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 7), // "message"
QT_MOC_LITERAL(4, 29, 12), // "writeStarted"
QT_MOC_LITERAL(5, 42, 13), // "writeFinished"
QT_MOC_LITERAL(6, 56, 7), // "success"
QT_MOC_LITERAL(7, 64, 13), // "threadsafeLog"
QT_MOC_LITERAL(8, 78, 13), // "writeMessages"
QT_MOC_LITERAL(9, 92, 9) // "dest_file"

    },
    "AppLogModel\0emitLog\0\0message\0writeStarted\0"
    "writeFinished\0success\0threadsafeLog\0"
    "writeMessages\0dest_file"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppLogModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    0,   42,    2, 0x06 /* Public */,
       5,    1,   43,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   46,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       8,    1,   49,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

void AppLogModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AppLogModel *_t = static_cast<AppLogModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->emitLog((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->writeStarted(); break;
        case 2: _t->writeFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->threadsafeLog((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->writeMessages((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (AppLogModel::*_t)(const QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppLogModel::emitLog)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AppLogModel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppLogModel::writeStarted)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AppLogModel::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppLogModel::writeFinished)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject AppLogModel::staticMetaObject = {
    { &QStringListModel::staticMetaObject, qt_meta_stringdata_AppLogModel.data,
      qt_meta_data_AppLogModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AppLogModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppLogModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AppLogModel.stringdata0))
        return static_cast<void*>(this);
    return QStringListModel::qt_metacast(_clname);
}

int AppLogModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void AppLogModel::emitLog(const QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AppLogModel::writeStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AppLogModel::writeFinished(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
