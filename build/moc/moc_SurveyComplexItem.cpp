/****************************************************************************
** Meta object code from reading C++ file 'SurveyComplexItem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/SurveyComplexItem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SurveyComplexItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SurveyComplexItem_t {
    QByteArrayData data[10];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SurveyComplexItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SurveyComplexItem_t qt_meta_stringdata_SurveyComplexItem = {
    {
QT_MOC_LITERAL(0, 0, 17), // "SurveyComplexItem"
QT_MOC_LITERAL(1, 18, 21), // "refly90DegreesChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 14), // "refly90Degrees"
QT_MOC_LITERAL(4, 56, 23), // "_rebuildTransectsPhase1"
QT_MOC_LITERAL(5, 80, 23), // "_rebuildTransectsPhase2"
QT_MOC_LITERAL(6, 104, 16), // "rotateEntryPoint"
QT_MOC_LITERAL(7, 121, 9), // "gridAngle"
QT_MOC_LITERAL(8, 131, 5), // "Fact*"
QT_MOC_LITERAL(9, 137, 21) // "flyAlternateTransects"

    },
    "SurveyComplexItem\0refly90DegreesChanged\0"
    "\0refly90Degrees\0_rebuildTransectsPhase1\0"
    "_rebuildTransectsPhase2\0rotateEntryPoint\0"
    "gridAngle\0Fact*\0flyAlternateTransects"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SurveyComplexItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   40, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   37,    2, 0x08 /* Private */,
       5,    0,   38,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       6,    0,   39,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
       7, 0x80000000 | 8, 0x00095409,
       9, 0x80000000 | 8, 0x00095409,

       0        // eod
};

void SurveyComplexItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SurveyComplexItem *_t = static_cast<SurveyComplexItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->refly90DegreesChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->_rebuildTransectsPhase1(); break;
        case 2: _t->_rebuildTransectsPhase2(); break;
        case 3: _t->rotateEntryPoint(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SurveyComplexItem::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SurveyComplexItem::refly90DegreesChanged)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        SurveyComplexItem *_t = static_cast<SurveyComplexItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->gridAngle(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->flyAlternateTransects(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject SurveyComplexItem::staticMetaObject = {
    { &TransectStyleComplexItem::staticMetaObject, qt_meta_stringdata_SurveyComplexItem.data,
      qt_meta_data_SurveyComplexItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SurveyComplexItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SurveyComplexItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SurveyComplexItem.stringdata0))
        return static_cast<void*>(this);
    return TransectStyleComplexItem::qt_metacast(_clname);
}

int SurveyComplexItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TransectStyleComplexItem::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void SurveyComplexItem::refly90DegreesChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
