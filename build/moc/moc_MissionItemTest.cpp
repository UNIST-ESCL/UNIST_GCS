/****************************************************************************
** Meta object code from reading C++ file 'MissionItemTest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/MissionItemTest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MissionItemTest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MissionItemTest_t {
    QByteArrayData data[13];
    char stringdata0[228];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MissionItemTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MissionItemTest_t qt_meta_stringdata_MissionItemTest = {
    {
QT_MOC_LITERAL(0, 0, 15), // "MissionItemTest"
QT_MOC_LITERAL(1, 16, 11), // "_testSetGet"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 12), // "_testSignals"
QT_MOC_LITERAL(4, 42, 16), // "_testFactSignals"
QT_MOC_LITERAL(5, 59, 19), // "_testLoadFromStream"
QT_MOC_LITERAL(6, 79, 25), // "_testSimpleLoadFromStream"
QT_MOC_LITERAL(7, 105, 19), // "_testLoadFromJsonV1"
QT_MOC_LITERAL(8, 125, 19), // "_testLoadFromJsonV2"
QT_MOC_LITERAL(9, 145, 19), // "_testLoadFromJsonV3"
QT_MOC_LITERAL(10, 165, 22), // "_testLoadFromJsonV3NaN"
QT_MOC_LITERAL(11, 188, 23), // "_testSimpleLoadFromJson"
QT_MOC_LITERAL(12, 212, 15) // "_testSaveToJson"

    },
    "MissionItemTest\0_testSetGet\0\0_testSignals\0"
    "_testFactSignals\0_testLoadFromStream\0"
    "_testSimpleLoadFromStream\0_testLoadFromJsonV1\0"
    "_testLoadFromJsonV2\0_testLoadFromJsonV3\0"
    "_testLoadFromJsonV3NaN\0_testSimpleLoadFromJson\0"
    "_testSaveToJson"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MissionItemTest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MissionItemTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MissionItemTest *_t = static_cast<MissionItemTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->_testSetGet(); break;
        case 1: _t->_testSignals(); break;
        case 2: _t->_testFactSignals(); break;
        case 3: _t->_testLoadFromStream(); break;
        case 4: _t->_testSimpleLoadFromStream(); break;
        case 5: _t->_testLoadFromJsonV1(); break;
        case 6: _t->_testLoadFromJsonV2(); break;
        case 7: _t->_testLoadFromJsonV3(); break;
        case 8: _t->_testLoadFromJsonV3NaN(); break;
        case 9: _t->_testSimpleLoadFromJson(); break;
        case 10: _t->_testSaveToJson(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MissionItemTest::staticMetaObject = {
    { &UnitTest::staticMetaObject, qt_meta_stringdata_MissionItemTest.data,
      qt_meta_data_MissionItemTest,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MissionItemTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MissionItemTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MissionItemTest.stringdata0))
        return static_cast<void*>(this);
    return UnitTest::qt_metacast(_clname);
}

int MissionItemTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UnitTest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
