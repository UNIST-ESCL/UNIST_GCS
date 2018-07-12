/****************************************************************************
** Meta object code from reading C++ file 'CameraSpec.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/CameraSpec.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CameraSpec.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CameraSpec_t {
    QByteArrayData data[13];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CameraSpec_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CameraSpec_t qt_meta_stringdata_CameraSpec = {
    {
QT_MOC_LITERAL(0, 0, 10), // "CameraSpec"
QT_MOC_LITERAL(1, 11, 12), // "dirtyChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 5), // "dirty"
QT_MOC_LITERAL(4, 31, 11), // "sensorWidth"
QT_MOC_LITERAL(5, 43, 5), // "Fact*"
QT_MOC_LITERAL(6, 49, 12), // "sensorHeight"
QT_MOC_LITERAL(7, 62, 10), // "imageWidth"
QT_MOC_LITERAL(8, 73, 11), // "imageHeight"
QT_MOC_LITERAL(9, 85, 11), // "focalLength"
QT_MOC_LITERAL(10, 97, 9), // "landscape"
QT_MOC_LITERAL(11, 107, 16), // "fixedOrientation"
QT_MOC_LITERAL(12, 124, 18) // "minTriggerInterval"

    },
    "CameraSpec\0dirtyChanged\0\0dirty\0"
    "sensorWidth\0Fact*\0sensorHeight\0"
    "imageWidth\0imageHeight\0focalLength\0"
    "landscape\0fixedOrientation\0"
    "minTriggerInterval"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CameraSpec[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       8,   22, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // properties: name, type, flags
       4, 0x80000000 | 5, 0x00095409,
       6, 0x80000000 | 5, 0x00095409,
       7, 0x80000000 | 5, 0x00095409,
       8, 0x80000000 | 5, 0x00095409,
       9, 0x80000000 | 5, 0x00095409,
      10, 0x80000000 | 5, 0x00095409,
      11, 0x80000000 | 5, 0x00095409,
      12, 0x80000000 | 5, 0x00095409,

       0        // eod
};

void CameraSpec::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CameraSpec *_t = static_cast<CameraSpec *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dirtyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (CameraSpec::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraSpec::dirtyChanged)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
        case 6:
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CameraSpec *_t = static_cast<CameraSpec *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->sensorWidth(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->sensorHeight(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->imageWidth(); break;
        case 3: *reinterpret_cast< Fact**>(_v) = _t->imageHeight(); break;
        case 4: *reinterpret_cast< Fact**>(_v) = _t->focalLength(); break;
        case 5: *reinterpret_cast< Fact**>(_v) = _t->landscape(); break;
        case 6: *reinterpret_cast< Fact**>(_v) = _t->fixedOrientation(); break;
        case 7: *reinterpret_cast< Fact**>(_v) = _t->minTriggerInterval(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject CameraSpec::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CameraSpec.data,
      qt_meta_data_CameraSpec,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CameraSpec::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CameraSpec::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CameraSpec.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CameraSpec::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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

// SIGNAL 0
void CameraSpec::dirtyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
