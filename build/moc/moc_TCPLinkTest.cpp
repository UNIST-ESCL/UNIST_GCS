/****************************************************************************
** Meta object code from reading C++ file 'TCPLinkTest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/qgcunittest/TCPLinkTest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TCPLinkTest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TCPLinkTest_t {
    QByteArrayData data[9];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TCPLinkTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TCPLinkTest_t qt_meta_stringdata_TCPLinkTest = {
    {
QT_MOC_LITERAL(0, 0, 11), // "TCPLinkTest"
QT_MOC_LITERAL(1, 12, 19), // "waitForBytesWritten"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 5), // "msecs"
QT_MOC_LITERAL(4, 39, 16), // "waitForReadyRead"
QT_MOC_LITERAL(5, 56, 4), // "init"
QT_MOC_LITERAL(6, 61, 7), // "cleanup"
QT_MOC_LITERAL(7, 69, 17), // "_connectFail_test"
QT_MOC_LITERAL(8, 87, 20) // "_connectSucceed_test"

    },
    "TCPLinkTest\0waitForBytesWritten\0\0msecs\0"
    "waitForReadyRead\0init\0cleanup\0"
    "_connectFail_test\0_connectSucceed_test"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TCPLinkTest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   50,    2, 0x08 /* Private */,
       6,    0,   51,    2, 0x08 /* Private */,
       7,    0,   52,    2, 0x08 /* Private */,
       8,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TCPLinkTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TCPLinkTest *_t = static_cast<TCPLinkTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->waitForBytesWritten((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->waitForReadyRead((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->init(); break;
        case 3: _t->cleanup(); break;
        case 4: _t->_connectFail_test(); break;
        case 5: _t->_connectSucceed_test(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TCPLinkTest::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TCPLinkTest::waitForBytesWritten)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TCPLinkTest::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TCPLinkTest::waitForReadyRead)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject TCPLinkTest::staticMetaObject = {
    { &UnitTest::staticMetaObject, qt_meta_stringdata_TCPLinkTest.data,
      qt_meta_data_TCPLinkTest,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TCPLinkTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TCPLinkTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TCPLinkTest.stringdata0))
        return static_cast<void*>(this);
    return UnitTest::qt_metacast(_clname);
}

int TCPLinkTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UnitTest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void TCPLinkTest::waitForBytesWritten(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TCPLinkTest::waitForReadyRead(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
