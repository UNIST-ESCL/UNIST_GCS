/****************************************************************************
** Meta object code from reading C++ file 'ParameterManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/FactSystem/ParameterManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ParameterManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ParameterManager_t {
    QByteArrayData data[9];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ParameterManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ParameterManager_t qt_meta_stringdata_ParameterManager = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ParameterManager"
QT_MOC_LITERAL(1, 17, 22), // "parametersReadyChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 15), // "parametersReady"
QT_MOC_LITERAL(4, 57, 24), // "missingParametersChanged"
QT_MOC_LITERAL(5, 82, 17), // "missingParameters"
QT_MOC_LITERAL(6, 100, 19), // "loadProgressChanged"
QT_MOC_LITERAL(7, 120, 5), // "value"
QT_MOC_LITERAL(8, 126, 12) // "loadProgress"

    },
    "ParameterManager\0parametersReadyChanged\0"
    "\0parametersReady\0missingParametersChanged\0"
    "missingParameters\0loadProgressChanged\0"
    "value\0loadProgress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ParameterManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,
       6,    1,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Float,    7,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00495001,
       5, QMetaType::Bool, 0x00495001,
       8, QMetaType::Double, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void ParameterManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ParameterManager *_t = static_cast<ParameterManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->parametersReadyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->missingParametersChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->loadProgressChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ParameterManager::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParameterManager::parametersReadyChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ParameterManager::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParameterManager::missingParametersChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ParameterManager::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParameterManager::loadProgressChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ParameterManager *_t = static_cast<ParameterManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->parametersReady(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->missingParameters(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->loadProgress(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject ParameterManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ParameterManager.data,
      qt_meta_data_ParameterManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ParameterManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ParameterManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ParameterManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ParameterManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ParameterManager::parametersReadyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ParameterManager::missingParametersChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ParameterManager::loadProgressChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
