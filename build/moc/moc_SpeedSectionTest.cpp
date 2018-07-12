/****************************************************************************
** Meta object code from reading C++ file 'SpeedSectionTest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/SpeedSectionTest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SpeedSectionTest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SpeedSectionTest_t {
    QByteArrayData data[9];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpeedSectionTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpeedSectionTest_t qt_meta_stringdata_SpeedSectionTest = {
    {
QT_MOC_LITERAL(0, 0, 16), // "SpeedSectionTest"
QT_MOC_LITERAL(1, 17, 10), // "_testDirty"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 22), // "_testSettingsAvailable"
QT_MOC_LITERAL(4, 52, 15), // "_checkAvailable"
QT_MOC_LITERAL(5, 68, 14), // "_testItemCount"
QT_MOC_LITERAL(6, 83, 23), // "_testAppendSectionItems"
QT_MOC_LITERAL(7, 107, 19), // "_testScanForSection"
QT_MOC_LITERAL(8, 127, 32) // "_testSpecifiedFlightSpeedChanged"

    },
    "SpeedSectionTest\0_testDirty\0\0"
    "_testSettingsAvailable\0_checkAvailable\0"
    "_testItemCount\0_testAppendSectionItems\0"
    "_testScanForSection\0"
    "_testSpecifiedFlightSpeedChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpeedSectionTest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SpeedSectionTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SpeedSectionTest *_t = static_cast<SpeedSectionTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->_testDirty(); break;
        case 1: _t->_testSettingsAvailable(); break;
        case 2: _t->_checkAvailable(); break;
        case 3: _t->_testItemCount(); break;
        case 4: _t->_testAppendSectionItems(); break;
        case 5: _t->_testScanForSection(); break;
        case 6: _t->_testSpecifiedFlightSpeedChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject SpeedSectionTest::staticMetaObject = {
    { &SectionTest::staticMetaObject, qt_meta_stringdata_SpeedSectionTest.data,
      qt_meta_data_SpeedSectionTest,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SpeedSectionTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpeedSectionTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SpeedSectionTest.stringdata0))
        return static_cast<void*>(this);
    return SectionTest::qt_metacast(_clname);
}

int SpeedSectionTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SectionTest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
