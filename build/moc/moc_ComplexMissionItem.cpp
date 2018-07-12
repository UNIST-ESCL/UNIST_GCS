/****************************************************************************
** Meta object code from reading C++ file 'ComplexMissionItem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/ComplexMissionItem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ComplexMissionItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ComplexMissionItem_t {
    QByteArrayData data[6];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ComplexMissionItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ComplexMissionItem_t qt_meta_stringdata_ComplexMissionItem = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ComplexMissionItem"
QT_MOC_LITERAL(1, 19, 22), // "complexDistanceChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 25), // "greatestDistanceToChanged"
QT_MOC_LITERAL(4, 69, 26), // "additionalTimeDelayChanged"
QT_MOC_LITERAL(5, 96, 15) // "complexDistance"

    },
    "ComplexMissionItem\0complexDistanceChanged\0"
    "\0greatestDistanceToChanged\0"
    "additionalTimeDelayChanged\0complexDistance"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ComplexMissionItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::Double, 0x00495001,

 // properties: notify_signal_id
       0,

       0        // eod
};

void ComplexMissionItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ComplexMissionItem *_t = static_cast<ComplexMissionItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->complexDistanceChanged(); break;
        case 1: _t->greatestDistanceToChanged(); break;
        case 2: _t->additionalTimeDelayChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ComplexMissionItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComplexMissionItem::complexDistanceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ComplexMissionItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComplexMissionItem::greatestDistanceToChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ComplexMissionItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComplexMissionItem::additionalTimeDelayChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ComplexMissionItem *_t = static_cast<ComplexMissionItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->complexDistance(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject ComplexMissionItem::staticMetaObject = {
    { &VisualMissionItem::staticMetaObject, qt_meta_stringdata_ComplexMissionItem.data,
      qt_meta_data_ComplexMissionItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ComplexMissionItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ComplexMissionItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ComplexMissionItem.stringdata0))
        return static_cast<void*>(this);
    return VisualMissionItem::qt_metacast(_clname);
}

int ComplexMissionItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VisualMissionItem::qt_metacall(_c, _id, _a);
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
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ComplexMissionItem::complexDistanceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ComplexMissionItem::greatestDistanceToChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ComplexMissionItem::additionalTimeDelayChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
