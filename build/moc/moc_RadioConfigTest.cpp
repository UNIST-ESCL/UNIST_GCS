/****************************************************************************
** Meta object code from reading C++ file 'RadioConfigTest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/qgcunittest/RadioConfigTest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RadioConfigTest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RadioConfigTest_t {
    QByteArrayData data[5];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RadioConfigTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RadioConfigTest_t qt_meta_stringdata_RadioConfigTest = {
    {
QT_MOC_LITERAL(0, 0, 15), // "RadioConfigTest"
QT_MOC_LITERAL(1, 16, 7), // "cleanup"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 25), // "_fullCalibration_px4_test"
QT_MOC_LITERAL(4, 51, 25) // "_fullCalibration_apm_test"

    },
    "RadioConfigTest\0cleanup\0\0"
    "_fullCalibration_px4_test\0"
    "_fullCalibration_apm_test"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RadioConfigTest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RadioConfigTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RadioConfigTest *_t = static_cast<RadioConfigTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cleanup(); break;
        case 1: _t->_fullCalibration_px4_test(); break;
        case 2: _t->_fullCalibration_apm_test(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject RadioConfigTest::staticMetaObject = {
    { &UnitTest::staticMetaObject, qt_meta_stringdata_RadioConfigTest.data,
      qt_meta_data_RadioConfigTest,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RadioConfigTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RadioConfigTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RadioConfigTest.stringdata0))
        return static_cast<void*>(this);
    return UnitTest::qt_metacast(_clname);
}

int RadioConfigTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UnitTest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
