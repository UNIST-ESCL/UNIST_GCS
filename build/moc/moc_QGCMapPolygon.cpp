/****************************************************************************
** Meta object code from reading C++ file 'QGCMapPolygon.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/QGCMapPolygon.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCMapPolygon.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCMapPolygon_t {
    QByteArrayData data[36];
    char stringdata0[462];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCMapPolygon_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCMapPolygon_t qt_meta_stringdata_QGCMapPolygon = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QGCMapPolygon"
QT_MOC_LITERAL(1, 14, 12), // "countChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 5), // "count"
QT_MOC_LITERAL(4, 34, 11), // "pathChanged"
QT_MOC_LITERAL(5, 46, 12), // "dirtyChanged"
QT_MOC_LITERAL(6, 59, 5), // "dirty"
QT_MOC_LITERAL(7, 65, 7), // "cleared"
QT_MOC_LITERAL(8, 73, 13), // "centerChanged"
QT_MOC_LITERAL(9, 87, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(10, 102, 6), // "center"
QT_MOC_LITERAL(11, 109, 17), // "centerDragChanged"
QT_MOC_LITERAL(12, 127, 10), // "centerDrag"
QT_MOC_LITERAL(13, 138, 18), // "interactiveChanged"
QT_MOC_LITERAL(14, 157, 11), // "interactive"
QT_MOC_LITERAL(15, 169, 25), // "_polygonModelCountChanged"
QT_MOC_LITERAL(16, 195, 25), // "_polygonModelDirtyChanged"
QT_MOC_LITERAL(17, 221, 13), // "_updateCenter"
QT_MOC_LITERAL(18, 235, 5), // "clear"
QT_MOC_LITERAL(19, 241, 12), // "appendVertex"
QT_MOC_LITERAL(20, 254, 10), // "coordinate"
QT_MOC_LITERAL(21, 265, 12), // "removeVertex"
QT_MOC_LITERAL(22, 278, 11), // "vertexIndex"
QT_MOC_LITERAL(23, 290, 14), // "appendVertices"
QT_MOC_LITERAL(24, 305, 21), // "QList<QGeoCoordinate>"
QT_MOC_LITERAL(25, 327, 11), // "coordinates"
QT_MOC_LITERAL(26, 339, 12), // "adjustVertex"
QT_MOC_LITERAL(27, 352, 19), // "splitPolygonSegment"
QT_MOC_LITERAL(28, 372, 18), // "containsCoordinate"
QT_MOC_LITERAL(29, 391, 6), // "offset"
QT_MOC_LITERAL(30, 398, 8), // "distance"
QT_MOC_LITERAL(31, 407, 11), // "loadKMLFile"
QT_MOC_LITERAL(32, 419, 7), // "kmlFile"
QT_MOC_LITERAL(33, 427, 4), // "path"
QT_MOC_LITERAL(34, 432, 9), // "pathModel"
QT_MOC_LITERAL(35, 442, 19) // "QmlObjectListModel*"

    },
    "QGCMapPolygon\0countChanged\0\0count\0"
    "pathChanged\0dirtyChanged\0dirty\0cleared\0"
    "centerChanged\0QGeoCoordinate\0center\0"
    "centerDragChanged\0centerDrag\0"
    "interactiveChanged\0interactive\0"
    "_polygonModelCountChanged\0"
    "_polygonModelDirtyChanged\0_updateCenter\0"
    "clear\0appendVertex\0coordinate\0"
    "removeVertex\0vertexIndex\0appendVertices\0"
    "QList<QGeoCoordinate>\0coordinates\0"
    "adjustVertex\0splitPolygonSegment\0"
    "containsCoordinate\0offset\0distance\0"
    "loadKMLFile\0kmlFile\0path\0pathModel\0"
    "QmlObjectListModel*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCMapPolygon[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       7,  160, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  109,    2, 0x06 /* Public */,
       4,    0,  112,    2, 0x06 /* Public */,
       5,    1,  113,    2, 0x06 /* Public */,
       7,    0,  116,    2, 0x06 /* Public */,
       8,    1,  117,    2, 0x06 /* Public */,
      11,    1,  120,    2, 0x06 /* Public */,
      13,    1,  123,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    1,  126,    2, 0x08 /* Private */,
      16,    1,  129,    2, 0x08 /* Private */,
      17,    0,  132,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      18,    0,  133,    2, 0x02 /* Public */,
      19,    1,  134,    2, 0x02 /* Public */,
      21,    1,  137,    2, 0x02 /* Public */,
      23,    1,  140,    2, 0x02 /* Public */,
      26,    2,  143,    2, 0x02 /* Public */,
      27,    1,  148,    2, 0x02 /* Public */,
      28,    1,  151,    2, 0x02 /* Public */,
      29,    1,  154,    2, 0x02 /* Public */,
      31,    1,  157,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   14,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   20,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 9,   22,   20,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Bool, 0x80000000 | 9,   20,
    QMetaType::Void, QMetaType::Double,   30,
    QMetaType::Bool, QMetaType::QString,   32,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00495001,
      33, QMetaType::QVariantList, 0x00495001,
      34, 0x80000000 | 35, 0x00095409,
       6, QMetaType::Bool, 0x00495103,
      10, 0x80000000 | 9, 0x0049510b,
      12, QMetaType::Bool, 0x00495103,
      14, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       0,
       2,
       4,
       5,
       6,

       0        // eod
};

void QGCMapPolygon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCMapPolygon *_t = static_cast<QGCMapPolygon *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->countChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->pathChanged(); break;
        case 2: _t->dirtyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->cleared(); break;
        case 4: _t->centerChanged((*reinterpret_cast< QGeoCoordinate(*)>(_a[1]))); break;
        case 5: _t->centerDragChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->interactiveChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->_polygonModelCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->_polygonModelDirtyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->_updateCenter(); break;
        case 10: _t->clear(); break;
        case 11: _t->appendVertex((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        case 12: _t->removeVertex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->appendVertices((*reinterpret_cast< const QList<QGeoCoordinate>(*)>(_a[1]))); break;
        case 14: _t->adjustVertex((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QGeoCoordinate(*)>(_a[2]))); break;
        case 15: _t->splitPolygonSegment((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: { bool _r = _t->containsCoordinate((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 17: _t->offset((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 18: { bool _r = _t->loadKMLFile((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QGeoCoordinate> >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 16:
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
            typedef void (QGCMapPolygon::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapPolygon::countChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QGCMapPolygon::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapPolygon::pathChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QGCMapPolygon::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapPolygon::dirtyChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QGCMapPolygon::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapPolygon::cleared)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QGCMapPolygon::*_t)(QGeoCoordinate );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapPolygon::centerChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QGCMapPolygon::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapPolygon::centerDragChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QGCMapPolygon::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapPolygon::interactiveChanged)) {
                *result = 6;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QGCMapPolygon *_t = static_cast<QGCMapPolygon *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->count(); break;
        case 1: *reinterpret_cast< QVariantList*>(_v) = _t->path(); break;
        case 2: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->qmlPathModel(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->dirty(); break;
        case 4: *reinterpret_cast< QGeoCoordinate*>(_v) = _t->center(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->centerDrag(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->interactive(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QGCMapPolygon *_t = static_cast<QGCMapPolygon *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setDirty(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setCenter(*reinterpret_cast< QGeoCoordinate*>(_v)); break;
        case 5: _t->setCenterDrag(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setInteractive(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QGCMapPolygon::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QGCMapPolygon.data,
      qt_meta_data_QGCMapPolygon,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCMapPolygon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCMapPolygon::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCMapPolygon.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGCMapPolygon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
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
void QGCMapPolygon::countChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGCMapPolygon::pathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QGCMapPolygon::dirtyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QGCMapPolygon::cleared()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QGCMapPolygon::centerChanged(QGeoCoordinate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QGCMapPolygon::centerDragChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QGCMapPolygon::interactiveChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
