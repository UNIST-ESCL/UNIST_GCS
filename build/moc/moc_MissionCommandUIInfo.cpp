/****************************************************************************
** Meta object code from reading C++ file 'MissionCommandUIInfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/MissionCommandUIInfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MissionCommandUIInfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MissionCmdParamInfo_t {
    QByteArrayData data[9];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MissionCmdParamInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MissionCmdParamInfo_t qt_meta_stringdata_MissionCmdParamInfo = {
    {
QT_MOC_LITERAL(0, 0, 19), // "MissionCmdParamInfo"
QT_MOC_LITERAL(1, 20, 13), // "decimalPlaces"
QT_MOC_LITERAL(2, 34, 12), // "defaultValue"
QT_MOC_LITERAL(3, 47, 11), // "enumStrings"
QT_MOC_LITERAL(4, 59, 10), // "enumValues"
QT_MOC_LITERAL(5, 70, 5), // "label"
QT_MOC_LITERAL(6, 76, 5), // "param"
QT_MOC_LITERAL(7, 82, 5), // "units"
QT_MOC_LITERAL(8, 88, 12) // "nanUnchanged"

    },
    "MissionCmdParamInfo\0decimalPlaces\0"
    "defaultValue\0enumStrings\0enumValues\0"
    "label\0param\0units\0nanUnchanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MissionCmdParamInfo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       8,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00095401,
       2, QMetaType::Double, 0x00095401,
       3, QMetaType::QStringList, 0x00095401,
       4, QMetaType::QVariantList, 0x00095401,
       5, QMetaType::QString, 0x00095401,
       6, QMetaType::Int, 0x00095401,
       7, QMetaType::QString, 0x00095401,
       8, QMetaType::Bool, 0x00095401,

       0        // eod
};

void MissionCmdParamInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        MissionCmdParamInfo *_t = static_cast<MissionCmdParamInfo *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->decimalPlaces(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->defaultValue(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = _t->enumStrings(); break;
        case 3: *reinterpret_cast< QVariantList*>(_v) = _t->enumValues(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->label(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->param(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->units(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->nanUnchanged(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject MissionCmdParamInfo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MissionCmdParamInfo.data,
      qt_meta_data_MissionCmdParamInfo,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MissionCmdParamInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MissionCmdParamInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MissionCmdParamInfo.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MissionCmdParamInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_MissionCommandUIInfo_t {
    QByteArrayData data[10];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MissionCommandUIInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MissionCommandUIInfo_t qt_meta_stringdata_MissionCommandUIInfo = {
    {
QT_MOC_LITERAL(0, 0, 20), // "MissionCommandUIInfo"
QT_MOC_LITERAL(1, 21, 8), // "category"
QT_MOC_LITERAL(2, 30, 11), // "description"
QT_MOC_LITERAL(3, 42, 12), // "friendlyEdit"
QT_MOC_LITERAL(4, 55, 12), // "friendlyName"
QT_MOC_LITERAL(5, 68, 7), // "rawName"
QT_MOC_LITERAL(6, 76, 22), // "isStandaloneCoordinate"
QT_MOC_LITERAL(7, 99, 19), // "specifiesCoordinate"
QT_MOC_LITERAL(8, 119, 21), // "specifiesAltitudeOnly"
QT_MOC_LITERAL(9, 141, 7) // "command"

    },
    "MissionCommandUIInfo\0category\0description\0"
    "friendlyEdit\0friendlyName\0rawName\0"
    "isStandaloneCoordinate\0specifiesCoordinate\0"
    "specifiesAltitudeOnly\0command"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MissionCommandUIInfo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       9,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095401,
       2, QMetaType::QString, 0x00095401,
       3, QMetaType::Bool, 0x00095401,
       4, QMetaType::QString, 0x00095401,
       5, QMetaType::QString, 0x00095401,
       6, QMetaType::Bool, 0x00095401,
       7, QMetaType::Bool, 0x00095401,
       8, QMetaType::Bool, 0x00095401,
       9, QMetaType::Int, 0x00095401,

       0        // eod
};

void MissionCommandUIInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        MissionCommandUIInfo *_t = static_cast<MissionCommandUIInfo *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->category(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->description(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->friendlyEdit(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->friendlyName(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->rawName(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isStandaloneCoordinate(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->specifiesCoordinate(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->specifiesAltitudeOnly(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->intCommand(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject MissionCommandUIInfo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MissionCommandUIInfo.data,
      qt_meta_data_MissionCommandUIInfo,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MissionCommandUIInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MissionCommandUIInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MissionCommandUIInfo.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MissionCommandUIInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
