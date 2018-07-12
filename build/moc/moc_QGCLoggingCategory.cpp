/****************************************************************************
** Meta object code from reading C++ file 'QGCLoggingCategory.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/QGCLoggingCategory.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCLoggingCategory.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCLoggingCategoryRegister_t {
    QByteArrayData data[7];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCLoggingCategoryRegister_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCLoggingCategoryRegister_t qt_meta_stringdata_QGCLoggingCategoryRegister = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QGCLoggingCategoryRegister"
QT_MOC_LITERAL(1, 27, 20), // "registeredCategories"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 20), // "setCategoryLoggingOn"
QT_MOC_LITERAL(4, 70, 8), // "category"
QT_MOC_LITERAL(5, 79, 6), // "enable"
QT_MOC_LITERAL(6, 86, 17) // "categoryLoggingOn"

    },
    "QGCLoggingCategoryRegister\0"
    "registeredCategories\0\0setCategoryLoggingOn\0"
    "category\0enable\0categoryLoggingOn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCLoggingCategoryRegister[] = {

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

 // methods: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x02 /* Public */,
       3,    2,   30,    2, 0x02 /* Public */,
       6,    1,   35,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QStringList,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    4,    5,
    QMetaType::Bool, QMetaType::QString,    4,

       0        // eod
};

void QGCLoggingCategoryRegister::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCLoggingCategoryRegister *_t = static_cast<QGCLoggingCategoryRegister *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QStringList _r = _t->registeredCategories();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->setCategoryLoggingOn((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: { bool _r = _t->categoryLoggingOn((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject QGCLoggingCategoryRegister::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QGCLoggingCategoryRegister.data,
      qt_meta_data_QGCLoggingCategoryRegister,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCLoggingCategoryRegister::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCLoggingCategoryRegister::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCLoggingCategoryRegister.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGCLoggingCategoryRegister::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
