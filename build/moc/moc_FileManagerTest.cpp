/****************************************************************************
** Meta object code from reading C++ file 'FileManagerTest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/qgcunittest/FileManagerTest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FileManagerTest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FileManagerTest_t {
    QByteArrayData data[9];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileManagerTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileManagerTest_t qt_meta_stringdata_FileManagerTest = {
    {
QT_MOC_LITERAL(0, 0, 15), // "FileManagerTest"
QT_MOC_LITERAL(1, 16, 4), // "init"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 7), // "cleanup"
QT_MOC_LITERAL(4, 30, 8), // "_ackTest"
QT_MOC_LITERAL(5, 39, 10), // "_noAckTest"
QT_MOC_LITERAL(6, 50, 9), // "_listTest"
QT_MOC_LITERAL(7, 60, 9), // "listEntry"
QT_MOC_LITERAL(8, 70, 5) // "entry"

    },
    "FileManagerTest\0init\0\0cleanup\0_ackTest\0"
    "_noAckTest\0_listTest\0listEntry\0entry"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileManagerTest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    1,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void FileManagerTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FileManagerTest *_t = static_cast<FileManagerTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->init(); break;
        case 1: _t->cleanup(); break;
        case 2: _t->_ackTest(); break;
        case 3: _t->_noAckTest(); break;
        case 4: _t->_listTest(); break;
        case 5: _t->listEntry((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject FileManagerTest::staticMetaObject = {
    { &UnitTest::staticMetaObject, qt_meta_stringdata_FileManagerTest.data,
      qt_meta_data_FileManagerTest,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FileManagerTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileManagerTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileManagerTest.stringdata0))
        return static_cast<void*>(this);
    return UnitTest::qt_metacast(_clname);
}

int FileManagerTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
