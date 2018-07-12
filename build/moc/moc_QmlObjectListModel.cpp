/****************************************************************************
** Meta object code from reading C++ file 'QmlObjectListModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/QmlControls/QmlObjectListModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmlObjectListModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QmlObjectListModel_t {
    QByteArrayData data[9];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlObjectListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlObjectListModel_t qt_meta_stringdata_QmlObjectListModel = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QmlObjectListModel"
QT_MOC_LITERAL(1, 19, 12), // "countChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 5), // "count"
QT_MOC_LITERAL(4, 39, 12), // "dirtyChanged"
QT_MOC_LITERAL(5, 52, 18), // "_childDirtyChanged"
QT_MOC_LITERAL(6, 71, 5), // "dirty"
QT_MOC_LITERAL(7, 77, 3), // "get"
QT_MOC_LITERAL(8, 81, 5) // "index"

    },
    "QmlObjectListModel\0countChanged\0\0count\0"
    "dirtyChanged\0_childDirtyChanged\0dirty\0"
    "get\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlObjectListModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   40,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       7,    1,   43,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    6,

 // methods: parameters
    QMetaType::QObjectStar, QMetaType::Int,    8,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00495001,
       6, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void QmlObjectListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmlObjectListModel *_t = static_cast<QmlObjectListModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->countChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->dirtyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->_childDirtyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: { QObject* _r = _t->get((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QmlObjectListModel::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlObjectListModel::countChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QmlObjectListModel::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlObjectListModel::dirtyChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QmlObjectListModel *_t = static_cast<QmlObjectListModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->count(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->dirty(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QmlObjectListModel *_t = static_cast<QmlObjectListModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setDirty(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QmlObjectListModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_QmlObjectListModel.data,
      qt_meta_data_QmlObjectListModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QmlObjectListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlObjectListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QmlObjectListModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int QmlObjectListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QmlObjectListModel::countChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QmlObjectListModel::dirtyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
