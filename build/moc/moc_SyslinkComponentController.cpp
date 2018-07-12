/****************************************************************************
** Meta object code from reading C++ file 'SyslinkComponentController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/AutoPilotPlugins/Common/SyslinkComponentController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SyslinkComponentController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SyslinkComponentController_t {
    QByteArrayData data[16];
    char stringdata0[214];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SyslinkComponentController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SyslinkComponentController_t qt_meta_stringdata_SyslinkComponentController = {
    {
QT_MOC_LITERAL(0, 0, 26), // "SyslinkComponentController"
QT_MOC_LITERAL(1, 27, 19), // "radioChannelChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 19), // "radioAddressChanged"
QT_MOC_LITERAL(4, 68, 16), // "radioRateChanged"
QT_MOC_LITERAL(5, 85, 15), // "_channelChanged"
QT_MOC_LITERAL(6, 101, 5), // "value"
QT_MOC_LITERAL(7, 107, 15), // "_addressChanged"
QT_MOC_LITERAL(8, 123, 12), // "_rateChanged"
QT_MOC_LITERAL(9, 136, 13), // "resetDefaults"
QT_MOC_LITERAL(10, 150, 12), // "radioChannel"
QT_MOC_LITERAL(11, 163, 12), // "radioAddress"
QT_MOC_LITERAL(12, 176, 9), // "radioRate"
QT_MOC_LITERAL(13, 186, 10), // "radioRates"
QT_MOC_LITERAL(14, 197, 7), // "vehicle"
QT_MOC_LITERAL(15, 205, 8) // "Vehicle*"

    },
    "SyslinkComponentController\0"
    "radioChannelChanged\0\0radioAddressChanged\0"
    "radioRateChanged\0_channelChanged\0value\0"
    "_addressChanged\0_rateChanged\0resetDefaults\0"
    "radioChannel\0radioAddress\0radioRate\0"
    "radioRates\0vehicle\0Vehicle*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SyslinkComponentController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       5,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   52,    2, 0x08 /* Private */,
       7,    1,   55,    2, 0x08 /* Private */,
       8,    1,   58,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       9,    0,   61,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant,    6,
    QMetaType::Void, QMetaType::QVariant,    6,
    QMetaType::Void, QMetaType::QVariant,    6,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::Int, 0x00495103,
      11, QMetaType::QString, 0x00495103,
      12, QMetaType::Int, 0x00495103,
      13, QMetaType::QStringList, 0x00095401,
      14, 0x80000000 | 15, 0x00095409,

 // properties: notify_signal_id
       0,
       1,
       2,
       0,
       0,

       0        // eod
};

void SyslinkComponentController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SyslinkComponentController *_t = static_cast<SyslinkComponentController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->radioChannelChanged(); break;
        case 1: _t->radioAddressChanged(); break;
        case 2: _t->radioRateChanged(); break;
        case 3: _t->_channelChanged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 4: _t->_addressChanged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 5: _t->_rateChanged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 6: _t->resetDefaults(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SyslinkComponentController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SyslinkComponentController::radioChannelChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SyslinkComponentController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SyslinkComponentController::radioAddressChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SyslinkComponentController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SyslinkComponentController::radioRateChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Vehicle* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        SyslinkComponentController *_t = static_cast<SyslinkComponentController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->radioChannel(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->radioAddress(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->radioRate(); break;
        case 3: *reinterpret_cast< QStringList*>(_v) = _t->radioRates(); break;
        case 4: *reinterpret_cast< Vehicle**>(_v) = _t->vehicle(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        SyslinkComponentController *_t = static_cast<SyslinkComponentController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRadioChannel(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setRadioAddress(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setRadioRate(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject SyslinkComponentController::staticMetaObject = {
    { &FactPanelController::staticMetaObject, qt_meta_stringdata_SyslinkComponentController.data,
      qt_meta_data_SyslinkComponentController,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SyslinkComponentController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SyslinkComponentController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SyslinkComponentController.stringdata0))
        return static_cast<void*>(this);
    return FactPanelController::qt_metacast(_clname);
}

int SyslinkComponentController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactPanelController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SyslinkComponentController::radioChannelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SyslinkComponentController::radioAddressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SyslinkComponentController::radioRateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
