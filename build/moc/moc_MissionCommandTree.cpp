/****************************************************************************
** Meta object code from reading C++ file 'MissionCommandTree.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/MissionCommandTree.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MissionCommandTree.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MissionCommandTree_t {
    QByteArrayData data[7];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MissionCommandTree_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MissionCommandTree_t qt_meta_stringdata_MissionCommandTree = {
    {
QT_MOC_LITERAL(0, 0, 18), // "MissionCommandTree"
QT_MOC_LITERAL(1, 19, 20), // "categoriesForVehicle"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 8), // "Vehicle*"
QT_MOC_LITERAL(4, 50, 7), // "vehicle"
QT_MOC_LITERAL(5, 58, 22), // "getCommandsForCategory"
QT_MOC_LITERAL(6, 81, 8) // "category"

    },
    "MissionCommandTree\0categoriesForVehicle\0"
    "\0Vehicle*\0vehicle\0getCommandsForCategory\0"
    "category"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MissionCommandTree[] = {

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

 // methods: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x02 /* Public */,
       5,    2,   27,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QStringList, 0x80000000 | 3,    4,
    QMetaType::QVariantList, 0x80000000 | 3, QMetaType::QString,    4,    6,

       0        // eod
};

void MissionCommandTree::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MissionCommandTree *_t = static_cast<MissionCommandTree *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QStringList _r = _t->categoriesForVehicle((*reinterpret_cast< Vehicle*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 1: { QVariantList _r = _t->getCommandsForCategory((*reinterpret_cast< Vehicle*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vehicle* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vehicle* >(); break;
            }
            break;
        }
    }
}

const QMetaObject MissionCommandTree::staticMetaObject = {
    { &QGCTool::staticMetaObject, qt_meta_stringdata_MissionCommandTree.data,
      qt_meta_data_MissionCommandTree,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MissionCommandTree::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MissionCommandTree::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MissionCommandTree.stringdata0))
        return static_cast<void*>(this);
    return QGCTool::qt_metacast(_clname);
}

int MissionCommandTree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
