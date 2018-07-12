/****************************************************************************
** Meta object code from reading C++ file 'MultiVehicleDockWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/MultiVehicleDockWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MultiVehicleDockWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MultiVehicleDockWidget_t {
    QByteArrayData data[7];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MultiVehicleDockWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MultiVehicleDockWidget_t qt_meta_stringdata_MultiVehicleDockWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "MultiVehicleDockWidget"
QT_MOC_LITERAL(1, 23, 13), // "_vehicleAdded"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 8), // "Vehicle*"
QT_MOC_LITERAL(4, 47, 7), // "vehicle"
QT_MOC_LITERAL(5, 55, 15), // "_vehicleRemoved"
QT_MOC_LITERAL(6, 71, 21) // "_activeVehicleChanged"

    },
    "MultiVehicleDockWidget\0_vehicleAdded\0"
    "\0Vehicle*\0vehicle\0_vehicleRemoved\0"
    "_activeVehicleChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MultiVehicleDockWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       5,    1,   32,    2, 0x08 /* Private */,
       6,    1,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void MultiVehicleDockWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MultiVehicleDockWidget *_t = static_cast<MultiVehicleDockWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->_vehicleAdded((*reinterpret_cast< Vehicle*(*)>(_a[1]))); break;
        case 1: _t->_vehicleRemoved((*reinterpret_cast< Vehicle*(*)>(_a[1]))); break;
        case 2: _t->_activeVehicleChanged((*reinterpret_cast< Vehicle*(*)>(_a[1]))); break;
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
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vehicle* >(); break;
            }
            break;
        }
    }
}

const QMetaObject MultiVehicleDockWidget::staticMetaObject = {
    { &QGCDockWidget::staticMetaObject, qt_meta_stringdata_MultiVehicleDockWidget.data,
      qt_meta_data_MultiVehicleDockWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MultiVehicleDockWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MultiVehicleDockWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MultiVehicleDockWidget.stringdata0))
        return static_cast<void*>(this);
    return QGCDockWidget::qt_metacast(_clname);
}

int MultiVehicleDockWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
