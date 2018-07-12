/****************************************************************************
** Meta object code from reading C++ file 'ValuesWidgetController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/FlightMap/Widgets/ValuesWidgetController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ValuesWidgetController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ValuesWidgetController_t {
    QByteArrayData data[8];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ValuesWidgetController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ValuesWidgetController_t qt_meta_stringdata_ValuesWidgetController = {
    {
QT_MOC_LITERAL(0, 0, 22), // "ValuesWidgetController"
QT_MOC_LITERAL(1, 23, 18), // "largeValuesChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 6), // "values"
QT_MOC_LITERAL(4, 50, 18), // "smallValuesChanged"
QT_MOC_LITERAL(5, 69, 11), // "largeValues"
QT_MOC_LITERAL(6, 81, 11), // "smallValues"
QT_MOC_LITERAL(7, 93, 18) // "altitudeProperties"

    },
    "ValuesWidgetController\0largeValuesChanged\0"
    "\0values\0smallValuesChanged\0largeValues\0"
    "smallValues\0altitudeProperties"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ValuesWidgetController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       3,   30, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, QMetaType::QStringList,    3,

 // properties: name, type, flags
       5, QMetaType::QStringList, 0x00495103,
       6, QMetaType::QStringList, 0x00495103,
       7, QMetaType::QStringList, 0x00095401,

 // properties: notify_signal_id
       0,
       1,
       0,

       0        // eod
};

void ValuesWidgetController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ValuesWidgetController *_t = static_cast<ValuesWidgetController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->largeValuesChanged((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 1: _t->smallValuesChanged((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ValuesWidgetController::*_t)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ValuesWidgetController::largeValuesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ValuesWidgetController::*_t)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ValuesWidgetController::smallValuesChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ValuesWidgetController *_t = static_cast<ValuesWidgetController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->largeValues(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->smallValues(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = _t->altitudeProperties(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        ValuesWidgetController *_t = static_cast<ValuesWidgetController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLargeValues(*reinterpret_cast< QStringList*>(_v)); break;
        case 1: _t->setSmallValues(*reinterpret_cast< QStringList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject ValuesWidgetController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ValuesWidgetController.data,
      qt_meta_data_ValuesWidgetController,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ValuesWidgetController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ValuesWidgetController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ValuesWidgetController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ValuesWidgetController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
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
void ValuesWidgetController::largeValuesChanged(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ValuesWidgetController::smallValuesChanged(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
