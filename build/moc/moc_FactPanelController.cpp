/****************************************************************************
** Meta object code from reading C++ file 'FactPanelController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/FactSystem/FactControls/FactPanelController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FactPanelController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FactPanelController_t {
    QByteArrayData data[13];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FactPanelController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FactPanelController_t qt_meta_stringdata_FactPanelController = {
    {
QT_MOC_LITERAL(0, 0, 19), // "FactPanelController"
QT_MOC_LITERAL(1, 20, 25), // "_checkForMissingFactPanel"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 16), // "getParameterFact"
QT_MOC_LITERAL(4, 64, 5), // "Fact*"
QT_MOC_LITERAL(5, 70, 11), // "componentId"
QT_MOC_LITERAL(6, 82, 4), // "name"
QT_MOC_LITERAL(7, 87, 13), // "reportMissing"
QT_MOC_LITERAL(8, 101, 15), // "parameterExists"
QT_MOC_LITERAL(9, 117, 9), // "factPanel"
QT_MOC_LITERAL(10, 127, 11), // "QQuickItem*"
QT_MOC_LITERAL(11, 139, 7), // "vehicle"
QT_MOC_LITERAL(12, 147, 8) // "Vehicle*"

    },
    "FactPanelController\0_checkForMissingFactPanel\0"
    "\0getParameterFact\0Fact*\0componentId\0"
    "name\0reportMissing\0parameterExists\0"
    "factPanel\0QQuickItem*\0vehicle\0Vehicle*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FactPanelController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   52, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       3,    3,   35,    2, 0x02 /* Public */,
       3,    2,   42,    2, 0x22 /* Public | MethodCloned */,
       8,    2,   47,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 4, QMetaType::Int, QMetaType::QString, QMetaType::Bool,    5,    6,    7,
    0x80000000 | 4, QMetaType::Int, QMetaType::QString,    5,    6,
    QMetaType::Bool, QMetaType::Int, QMetaType::QString,    5,    6,

 // properties: name, type, flags
       9, 0x80000000 | 10, 0x0009510b,
      11, 0x80000000 | 12, 0x00095409,

       0        // eod
};

void FactPanelController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FactPanelController *_t = static_cast<FactPanelController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->_checkForMissingFactPanel(); break;
        case 1: { Fact* _r = _t->getParameterFact((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< Fact**>(_a[0]) = std::move(_r); }  break;
        case 2: { Fact* _r = _t->getParameterFact((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< Fact**>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->parameterExists((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vehicle* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        FactPanelController *_t = static_cast<FactPanelController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickItem**>(_v) = _t->factPanel(); break;
        case 1: *reinterpret_cast< Vehicle**>(_v) = _t->_vehicle; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        FactPanelController *_t = static_cast<FactPanelController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFactPanel(*reinterpret_cast< QQuickItem**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject FactPanelController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FactPanelController.data,
      qt_meta_data_FactPanelController,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FactPanelController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FactPanelController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FactPanelController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FactPanelController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
