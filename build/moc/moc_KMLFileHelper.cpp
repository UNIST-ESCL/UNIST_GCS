/****************************************************************************
** Meta object code from reading C++ file 'KMLFileHelper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/KMLFileHelper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'KMLFileHelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KMLFileHelper_t {
    QByteArrayData data[8];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KMLFileHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KMLFileHelper_t qt_meta_stringdata_KMLFileHelper = {
    {
QT_MOC_LITERAL(0, 0, 13), // "KMLFileHelper"
QT_MOC_LITERAL(1, 14, 21), // "determineFileContents"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 7), // "kmlFile"
QT_MOC_LITERAL(4, 45, 15), // "KMLFileContents"
QT_MOC_LITERAL(5, 61, 7), // "Polygon"
QT_MOC_LITERAL(6, 69, 8), // "Polyline"
QT_MOC_LITERAL(7, 78, 5) // "Error"

    },
    "KMLFileHelper\0determineFileContents\0"
    "\0kmlFile\0KMLFileContents\0Polygon\0"
    "Polyline\0Error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KMLFileHelper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       1,   22, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QVariantList, QMetaType::QString,    3,

 // enums: name, flags, count, data
       4, 0x0,    3,   26,

 // enum data: key, value
       5, uint(KMLFileHelper::Polygon),
       6, uint(KMLFileHelper::Polyline),
       7, uint(KMLFileHelper::Error),

       0        // eod
};

void KMLFileHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KMLFileHelper *_t = static_cast<KMLFileHelper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QVariantList _r = _t->determineFileContents((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject KMLFileHelper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_KMLFileHelper.data,
      qt_meta_data_KMLFileHelper,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *KMLFileHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KMLFileHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KMLFileHelper.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KMLFileHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
