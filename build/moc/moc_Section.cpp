/****************************************************************************
** Meta object code from reading C++ file 'Section.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/Section.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Section.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Section_t {
    QByteArrayData data[10];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Section_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Section_t qt_meta_stringdata_Section = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Section"
QT_MOC_LITERAL(1, 8, 16), // "availableChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 9), // "available"
QT_MOC_LITERAL(4, 36, 24), // "settingsSpecifiedChanged"
QT_MOC_LITERAL(5, 61, 17), // "settingsSpecified"
QT_MOC_LITERAL(6, 79, 12), // "dirtyChanged"
QT_MOC_LITERAL(7, 92, 5), // "dirty"
QT_MOC_LITERAL(8, 98, 16), // "itemCountChanged"
QT_MOC_LITERAL(9, 115, 9) // "itemCount"

    },
    "Section\0availableChanged\0\0available\0"
    "settingsSpecifiedChanged\0settingsSpecified\0"
    "dirtyChanged\0dirty\0itemCountChanged\0"
    "itemCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Section[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       6,    1,   40,    2, 0x06 /* Public */,
       8,    1,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Int,    9,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00495103,
       5, QMetaType::Bool, 0x00495001,
       7, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       0,

       0        // eod
};

void Section::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Section *_t = static_cast<Section *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->availableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->settingsSpecifiedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->dirtyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->itemCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Section::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Section::availableChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Section::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Section::settingsSpecifiedChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Section::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Section::dirtyChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Section::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Section::itemCountChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Section *_t = static_cast<Section *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->available(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->settingsSpecified(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->dirty(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Section *_t = static_cast<Section *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAvailable(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setDirty(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Section::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Section.data,
      qt_meta_data_Section,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Section::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Section::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Section.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Section::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
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
void Section::availableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Section::settingsSpecifiedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Section::dirtyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Section::itemCountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
