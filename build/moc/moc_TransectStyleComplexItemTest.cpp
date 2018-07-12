/****************************************************************************
** Meta object code from reading C++ file 'TransectStyleComplexItemTest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/TransectStyleComplexItemTest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TransectStyleComplexItemTest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TransectStyleComplexItemTest_t {
    QByteArrayData data[6];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TransectStyleComplexItemTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TransectStyleComplexItemTest_t qt_meta_stringdata_TransectStyleComplexItemTest = {
    {
QT_MOC_LITERAL(0, 0, 28), // "TransectStyleComplexItemTest"
QT_MOC_LITERAL(1, 29, 10), // "_testDirty"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 21), // "_testRebuildTransects"
QT_MOC_LITERAL(4, 63, 23), // "_testDistanceSignalling"
QT_MOC_LITERAL(5, 87, 12) // "_testAltMode"

    },
    "TransectStyleComplexItemTest\0_testDirty\0"
    "\0_testRebuildTransects\0_testDistanceSignalling\0"
    "_testAltMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TransectStyleComplexItemTest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TransectStyleComplexItemTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TransectStyleComplexItemTest *_t = static_cast<TransectStyleComplexItemTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->_testDirty(); break;
        case 1: _t->_testRebuildTransects(); break;
        case 2: _t->_testDistanceSignalling(); break;
        case 3: _t->_testAltMode(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject TransectStyleComplexItemTest::staticMetaObject = {
    { &UnitTest::staticMetaObject, qt_meta_stringdata_TransectStyleComplexItemTest.data,
      qt_meta_data_TransectStyleComplexItemTest,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TransectStyleComplexItemTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TransectStyleComplexItemTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TransectStyleComplexItemTest.stringdata0))
        return static_cast<void*>(this);
    return UnitTest::qt_metacast(_clname);
}

int TransectStyleComplexItemTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UnitTest::qt_metacall(_c, _id, _a);
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
    return _id;
}
struct qt_meta_stringdata_TransectStyleItem_t {
    QByteArrayData data[4];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TransectStyleItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TransectStyleItem_t qt_meta_stringdata_TransectStyleItem = {
    {
QT_MOC_LITERAL(0, 0, 17), // "TransectStyleItem"
QT_MOC_LITERAL(1, 18, 23), // "_rebuildTransectsPhase1"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 23) // "_rebuildTransectsPhase2"

    },
    "TransectStyleItem\0_rebuildTransectsPhase1\0"
    "\0_rebuildTransectsPhase2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TransectStyleItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TransectStyleItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TransectStyleItem *_t = static_cast<TransectStyleItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->_rebuildTransectsPhase1(); break;
        case 1: _t->_rebuildTransectsPhase2(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject TransectStyleItem::staticMetaObject = {
    { &TransectStyleComplexItem::staticMetaObject, qt_meta_stringdata_TransectStyleItem.data,
      qt_meta_data_TransectStyleItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TransectStyleItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TransectStyleItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TransectStyleItem.stringdata0))
        return static_cast<void*>(this);
    return TransectStyleComplexItem::qt_metacast(_clname);
}

int TransectStyleItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TransectStyleComplexItem::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
