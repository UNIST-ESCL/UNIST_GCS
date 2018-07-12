/****************************************************************************
** Meta object code from reading C++ file 'CustomCommandWidgetController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ViewWidgets/CustomCommandWidgetController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CustomCommandWidgetController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CustomCommandWidgetController_t {
    QByteArrayData data[17];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CustomCommandWidgetController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CustomCommandWidgetController_t qt_meta_stringdata_CustomCommandWidgetController = {
    {
QT_MOC_LITERAL(0, 0, 29), // "CustomCommandWidgetController"
QT_MOC_LITERAL(1, 30, 20), // "customQmlFileChanged"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 13), // "customQmlFile"
QT_MOC_LITERAL(4, 66, 11), // "sendCommand"
QT_MOC_LITERAL(5, 78, 9), // "commandId"
QT_MOC_LITERAL(6, 88, 11), // "componentId"
QT_MOC_LITERAL(7, 100, 7), // "confirm"
QT_MOC_LITERAL(8, 108, 6), // "param1"
QT_MOC_LITERAL(9, 115, 6), // "param2"
QT_MOC_LITERAL(10, 122, 6), // "param3"
QT_MOC_LITERAL(11, 129, 6), // "param4"
QT_MOC_LITERAL(12, 136, 6), // "param5"
QT_MOC_LITERAL(13, 143, 6), // "param6"
QT_MOC_LITERAL(14, 150, 6), // "param7"
QT_MOC_LITERAL(15, 157, 13), // "selectQmlFile"
QT_MOC_LITERAL(16, 171, 12) // "clearQmlFile"

    },
    "CustomCommandWidgetController\0"
    "customQmlFileChanged\0\0customQmlFile\0"
    "sendCommand\0commandId\0componentId\0"
    "confirm\0param1\0param2\0param3\0param4\0"
    "param5\0param6\0param7\0selectQmlFile\0"
    "clearQmlFile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CustomCommandWidgetController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       1,   60, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,   10,   37,    2, 0x02 /* Public */,
      15,    0,   58,    2, 0x02 /* Public */,
      16,    0,   59,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // methods: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant, QMetaType::QVariant,    5,    6,    7,    8,    9,   10,   11,   12,   13,   14,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495003,

 // properties: notify_signal_id
       0,

       0        // eod
};

void CustomCommandWidgetController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CustomCommandWidgetController *_t = static_cast<CustomCommandWidgetController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->customQmlFileChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->sendCommand((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2])),(*reinterpret_cast< QVariant(*)>(_a[3])),(*reinterpret_cast< QVariant(*)>(_a[4])),(*reinterpret_cast< QVariant(*)>(_a[5])),(*reinterpret_cast< QVariant(*)>(_a[6])),(*reinterpret_cast< QVariant(*)>(_a[7])),(*reinterpret_cast< QVariant(*)>(_a[8])),(*reinterpret_cast< QVariant(*)>(_a[9])),(*reinterpret_cast< QVariant(*)>(_a[10]))); break;
        case 2: _t->selectQmlFile(); break;
        case 3: _t->clearQmlFile(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (CustomCommandWidgetController::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CustomCommandWidgetController::customQmlFileChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CustomCommandWidgetController *_t = static_cast<CustomCommandWidgetController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->_customQmlFile; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CustomCommandWidgetController *_t = static_cast<CustomCommandWidgetController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_customQmlFile != *reinterpret_cast< QString*>(_v)) {
                _t->_customQmlFile = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->customQmlFileChanged(_t->_customQmlFile);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject CustomCommandWidgetController::staticMetaObject = {
    { &FactPanelController::staticMetaObject, qt_meta_stringdata_CustomCommandWidgetController.data,
      qt_meta_data_CustomCommandWidgetController,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CustomCommandWidgetController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CustomCommandWidgetController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CustomCommandWidgetController.stringdata0))
        return static_cast<void*>(this);
    return FactPanelController::qt_metacast(_clname);
}

int CustomCommandWidgetController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactPanelController::qt_metacall(_c, _id, _a);
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
void CustomCommandWidgetController::customQmlFileChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
