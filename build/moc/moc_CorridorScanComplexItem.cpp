/****************************************************************************
** Meta object code from reading C++ file 'CorridorScanComplexItem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/CorridorScanComplexItem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CorridorScanComplexItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CorridorScanComplexItem_t {
    QByteArrayData data[12];
    char stringdata0[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CorridorScanComplexItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CorridorScanComplexItem_t qt_meta_stringdata_CorridorScanComplexItem = {
    {
QT_MOC_LITERAL(0, 0, 23), // "CorridorScanComplexItem"
QT_MOC_LITERAL(1, 24, 21), // "_polylineDirtyChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 5), // "dirty"
QT_MOC_LITERAL(4, 53, 23), // "_rebuildCorridorPolygon"
QT_MOC_LITERAL(5, 77, 23), // "_rebuildTransectsPhase1"
QT_MOC_LITERAL(6, 101, 23), // "_rebuildTransectsPhase2"
QT_MOC_LITERAL(7, 125, 16), // "rotateEntryPoint"
QT_MOC_LITERAL(8, 142, 16), // "corridorPolyline"
QT_MOC_LITERAL(9, 159, 15), // "QGCMapPolyline*"
QT_MOC_LITERAL(10, 175, 13), // "corridorWidth"
QT_MOC_LITERAL(11, 189, 5) // "Fact*"

    },
    "CorridorScanComplexItem\0_polylineDirtyChanged\0"
    "\0dirty\0_rebuildCorridorPolygon\0"
    "_rebuildTransectsPhase1\0_rebuildTransectsPhase2\0"
    "rotateEntryPoint\0corridorPolyline\0"
    "QGCMapPolyline*\0corridorWidth\0Fact*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CorridorScanComplexItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       2,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       4,    0,   42,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       7,    0,   45,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
       8, 0x80000000 | 9, 0x00095409,
      10, 0x80000000 | 11, 0x00095409,

       0        // eod
};

void CorridorScanComplexItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CorridorScanComplexItem *_t = static_cast<CorridorScanComplexItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->_polylineDirtyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->_rebuildCorridorPolygon(); break;
        case 2: _t->_rebuildTransectsPhase1(); break;
        case 3: _t->_rebuildTransectsPhase2(); break;
        case 4: _t->rotateEntryPoint(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGCMapPolyline* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CorridorScanComplexItem *_t = static_cast<CorridorScanComplexItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QGCMapPolyline**>(_v) = _t->corridorPolyline(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->corridorWidth(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject CorridorScanComplexItem::staticMetaObject = {
    { &TransectStyleComplexItem::staticMetaObject, qt_meta_stringdata_CorridorScanComplexItem.data,
      qt_meta_data_CorridorScanComplexItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CorridorScanComplexItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CorridorScanComplexItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CorridorScanComplexItem.stringdata0))
        return static_cast<void*>(this);
    return TransectStyleComplexItem::qt_metacast(_clname);
}

int CorridorScanComplexItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TransectStyleComplexItem::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
