/****************************************************************************
** Meta object code from reading C++ file 'APMFlightModesComponent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/AutoPilotPlugins/APM/APMFlightModesComponent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'APMFlightModesComponent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_APMFlightModesComponent_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_APMFlightModesComponent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_APMFlightModesComponent_t qt_meta_stringdata_APMFlightModesComponent = {
    {
QT_MOC_LITERAL(0, 0, 23) // "APMFlightModesComponent"

    },
    "APMFlightModesComponent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_APMFlightModesComponent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void APMFlightModesComponent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject APMFlightModesComponent::staticMetaObject = {
    { &VehicleComponent::staticMetaObject, qt_meta_stringdata_APMFlightModesComponent.data,
      qt_meta_data_APMFlightModesComponent,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *APMFlightModesComponent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *APMFlightModesComponent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_APMFlightModesComponent.stringdata0))
        return static_cast<void*>(this);
    return VehicleComponent::qt_metacast(_clname);
}

int APMFlightModesComponent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VehicleComponent::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
