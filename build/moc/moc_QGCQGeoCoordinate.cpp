/****************************************************************************
** Meta object code from reading C++ file 'QGCQGeoCoordinate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/QGCQGeoCoordinate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCQGeoCoordinate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCQGeoCoordinate_t {
    QByteArrayData data[7];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCQGeoCoordinate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCQGeoCoordinate_t qt_meta_stringdata_QGCQGeoCoordinate = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QGCQGeoCoordinate"
QT_MOC_LITERAL(1, 18, 17), // "coordinateChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(4, 52, 10), // "coordinate"
QT_MOC_LITERAL(5, 63, 12), // "dirtyChanged"
QT_MOC_LITERAL(6, 76, 5) // "dirty"

    },
    "QGCQGeoCoordinate\0coordinateChanged\0"
    "\0QGeoCoordinate\0coordinate\0dirtyChanged\0"
    "dirty"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCQGeoCoordinate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   30, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       5,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x0049510b,
       6, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void QGCQGeoCoordinate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCQGeoCoordinate *_t = static_cast<QGCQGeoCoordinate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->coordinateChanged((*reinterpret_cast< QGeoCoordinate(*)>(_a[1]))); break;
        case 1: _t->dirtyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGCQGeoCoordinate::*_t)(QGeoCoordinate );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCQGeoCoordinate::coordinateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QGCQGeoCoordinate::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCQGeoCoordinate::dirtyChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QGCQGeoCoordinate *_t = static_cast<QGCQGeoCoordinate *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->coordinate(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->dirty(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QGCQGeoCoordinate *_t = static_cast<QGCQGeoCoordinate *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCoordinate(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        case 1: _t->setDirty(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QGCQGeoCoordinate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QGCQGeoCoordinate.data,
      qt_meta_data_QGCQGeoCoordinate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCQGeoCoordinate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCQGeoCoordinate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCQGeoCoordinate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGCQGeoCoordinate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
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
void QGCQGeoCoordinate::coordinateChanged(QGeoCoordinate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGCQGeoCoordinate::dirtyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
