/****************************************************************************
** Meta object code from reading C++ file 'FactGroup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/FactSystem/FactGroup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FactGroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FactGroup_t {
    QByteArrayData data[10];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FactGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FactGroup_t qt_meta_stringdata_FactGroup = {
    {
QT_MOC_LITERAL(0, 0, 9), // "FactGroup"
QT_MOC_LITERAL(1, 10, 16), // "_updateAllValues"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 7), // "getFact"
QT_MOC_LITERAL(4, 36, 5), // "Fact*"
QT_MOC_LITERAL(5, 42, 4), // "name"
QT_MOC_LITERAL(6, 47, 12), // "getFactGroup"
QT_MOC_LITERAL(7, 60, 10), // "FactGroup*"
QT_MOC_LITERAL(8, 71, 9), // "factNames"
QT_MOC_LITERAL(9, 81, 14) // "factGroupNames"

    },
    "FactGroup\0_updateAllValues\0\0getFact\0"
    "Fact*\0name\0getFactGroup\0FactGroup*\0"
    "factNames\0factGroupNames"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FactGroup[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   36, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
       3,    1,   30,    2, 0x02 /* Public */,
       6,    1,   33,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 4, QMetaType::QString,    5,
    0x80000000 | 7, QMetaType::QString,    5,

 // properties: name, type, flags
       8, QMetaType::QStringList, 0x00095401,
       9, QMetaType::QStringList, 0x00095401,

       0        // eod
};

void FactGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FactGroup *_t = static_cast<FactGroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->_updateAllValues(); break;
        case 1: { Fact* _r = _t->getFact((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Fact**>(_a[0]) = std::move(_r); }  break;
        case 2: { FactGroup* _r = _t->getFactGroup((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< FactGroup**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        FactGroup *_t = static_cast<FactGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->factNames(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->factGroupNames(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject FactGroup::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FactGroup.data,
      qt_meta_data_FactGroup,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FactGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FactGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FactGroup.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FactGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
