/****************************************************************************
** Meta object code from reading C++ file 'QGCMapPolyline.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/QGCMapPolyline.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCMapPolyline.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCMapPolyline_t {
    QByteArrayData data[28];
    char stringdata0[359];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCMapPolyline_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCMapPolyline_t qt_meta_stringdata_QGCMapPolyline = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QGCMapPolyline"
QT_MOC_LITERAL(1, 15, 12), // "countChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "count"
QT_MOC_LITERAL(4, 35, 11), // "pathChanged"
QT_MOC_LITERAL(5, 47, 12), // "dirtyChanged"
QT_MOC_LITERAL(6, 60, 5), // "dirty"
QT_MOC_LITERAL(7, 66, 7), // "cleared"
QT_MOC_LITERAL(8, 74, 18), // "interactiveChanged"
QT_MOC_LITERAL(9, 93, 11), // "interactive"
QT_MOC_LITERAL(10, 105, 26), // "_polylineModelCountChanged"
QT_MOC_LITERAL(11, 132, 26), // "_polylineModelDirtyChanged"
QT_MOC_LITERAL(12, 159, 5), // "clear"
QT_MOC_LITERAL(13, 165, 12), // "appendVertex"
QT_MOC_LITERAL(14, 178, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(15, 193, 10), // "coordinate"
QT_MOC_LITERAL(16, 204, 12), // "removeVertex"
QT_MOC_LITERAL(17, 217, 11), // "vertexIndex"
QT_MOC_LITERAL(18, 229, 14), // "appendVertices"
QT_MOC_LITERAL(19, 244, 21), // "QList<QGeoCoordinate>"
QT_MOC_LITERAL(20, 266, 11), // "coordinates"
QT_MOC_LITERAL(21, 278, 12), // "adjustVertex"
QT_MOC_LITERAL(22, 291, 12), // "splitSegment"
QT_MOC_LITERAL(23, 304, 11), // "loadKMLFile"
QT_MOC_LITERAL(24, 316, 7), // "kmlFile"
QT_MOC_LITERAL(25, 324, 4), // "path"
QT_MOC_LITERAL(26, 329, 9), // "pathModel"
QT_MOC_LITERAL(27, 339, 19) // "QmlObjectListModel*"

    },
    "QGCMapPolyline\0countChanged\0\0count\0"
    "pathChanged\0dirtyChanged\0dirty\0cleared\0"
    "interactiveChanged\0interactive\0"
    "_polylineModelCountChanged\0"
    "_polylineModelDirtyChanged\0clear\0"
    "appendVertex\0QGeoCoordinate\0coordinate\0"
    "removeVertex\0vertexIndex\0appendVertices\0"
    "QList<QGeoCoordinate>\0coordinates\0"
    "adjustVertex\0splitSegment\0loadKMLFile\0"
    "kmlFile\0path\0pathModel\0QmlObjectListModel*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCMapPolyline[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       5,  122, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    0,   87,    2, 0x06 /* Public */,
       5,    1,   88,    2, 0x06 /* Public */,
       7,    0,   91,    2, 0x06 /* Public */,
       8,    1,   92,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   95,    2, 0x08 /* Private */,
      11,    1,   98,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      12,    0,  101,    2, 0x02 /* Public */,
      13,    1,  102,    2, 0x02 /* Public */,
      16,    1,  105,    2, 0x02 /* Public */,
      18,    1,  108,    2, 0x02 /* Public */,
      21,    2,  111,    2, 0x02 /* Public */,
      22,    1,  116,    2, 0x02 /* Public */,
      23,    1,  119,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    6,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 14,   17,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Bool, QMetaType::QString,   24,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00495001,
      25, QMetaType::QVariantList, 0x00495001,
      26, 0x80000000 | 27, 0x00095409,
       6, QMetaType::Bool, 0x00495103,
       9, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       0,
       2,
       4,

       0        // eod
};

void QGCMapPolyline::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCMapPolyline *_t = static_cast<QGCMapPolyline *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->countChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->pathChanged(); break;
        case 2: _t->dirtyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->cleared(); break;
        case 4: _t->interactiveChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->_polylineModelCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->_polylineModelDirtyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->clear(); break;
        case 8: _t->appendVertex((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        case 9: _t->removeVertex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->appendVertices((*reinterpret_cast< const QList<QGeoCoordinate>(*)>(_a[1]))); break;
        case 11: _t->adjustVertex((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QGeoCoordinate(*)>(_a[2]))); break;
        case 12: _t->splitSegment((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: { bool _r = _t->loadKMLFile((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QGeoCoordinate> >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGCMapPolyline::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapPolyline::countChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QGCMapPolyline::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapPolyline::pathChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QGCMapPolyline::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapPolyline::dirtyChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QGCMapPolyline::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapPolyline::cleared)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QGCMapPolyline::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapPolyline::interactiveChanged)) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QGCMapPolyline *_t = static_cast<QGCMapPolyline *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->count(); break;
        case 1: *reinterpret_cast< QVariantList*>(_v) = _t->path(); break;
        case 2: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->qmlPathModel(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->dirty(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->interactive(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QGCMapPolyline *_t = static_cast<QGCMapPolyline *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setDirty(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setInteractive(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QGCMapPolyline::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QGCMapPolyline.data,
      qt_meta_data_QGCMapPolyline,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCMapPolyline::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCMapPolyline::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCMapPolyline.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGCMapPolyline::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QGCMapPolyline::countChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGCMapPolyline::pathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QGCMapPolyline::dirtyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QGCMapPolyline::cleared()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QGCMapPolyline::interactiveChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
