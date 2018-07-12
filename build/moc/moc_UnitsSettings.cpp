/****************************************************************************
** Meta object code from reading C++ file 'UnitsSettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Settings/UnitsSettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UnitsSettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UnitsSettings_t {
    QByteArrayData data[25];
    char stringdata0[451];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UnitsSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UnitsSettings_t qt_meta_stringdata_UnitsSettings = {
    {
QT_MOC_LITERAL(0, 0, 13), // "UnitsSettings"
QT_MOC_LITERAL(1, 14, 13), // "distanceUnits"
QT_MOC_LITERAL(2, 28, 5), // "Fact*"
QT_MOC_LITERAL(3, 34, 9), // "areaUnits"
QT_MOC_LITERAL(4, 44, 10), // "speedUnits"
QT_MOC_LITERAL(5, 55, 16), // "temperatureUnits"
QT_MOC_LITERAL(6, 72, 13), // "DistanceUnits"
QT_MOC_LITERAL(7, 86, 17), // "DistanceUnitsFeet"
QT_MOC_LITERAL(8, 104, 19), // "DistanceUnitsMeters"
QT_MOC_LITERAL(9, 124, 9), // "AreaUnits"
QT_MOC_LITERAL(10, 134, 19), // "AreaUnitsSquareFeet"
QT_MOC_LITERAL(11, 154, 21), // "AreaUnitsSquareMeters"
QT_MOC_LITERAL(12, 176, 25), // "AreaUnitsSquareKilometers"
QT_MOC_LITERAL(13, 202, 17), // "AreaUnitsHectares"
QT_MOC_LITERAL(14, 220, 14), // "AreaUnitsAcres"
QT_MOC_LITERAL(15, 235, 20), // "AreaUnitsSquareMiles"
QT_MOC_LITERAL(16, 256, 10), // "SpeedUnits"
QT_MOC_LITERAL(17, 267, 23), // "SpeedUnitsFeetPerSecond"
QT_MOC_LITERAL(18, 291, 25), // "SpeedUnitsMetersPerSecond"
QT_MOC_LITERAL(19, 317, 22), // "SpeedUnitsMilesPerHour"
QT_MOC_LITERAL(20, 340, 27), // "SpeedUnitsKilometersPerHour"
QT_MOC_LITERAL(21, 368, 15), // "SpeedUnitsKnots"
QT_MOC_LITERAL(22, 384, 16), // "TemperatureUnits"
QT_MOC_LITERAL(23, 401, 23), // "TemperatureUnitsCelsius"
QT_MOC_LITERAL(24, 425, 25) // "TemperatureUnitsFarenheit"

    },
    "UnitsSettings\0distanceUnits\0Fact*\0"
    "areaUnits\0speedUnits\0temperatureUnits\0"
    "DistanceUnits\0DistanceUnitsFeet\0"
    "DistanceUnitsMeters\0AreaUnits\0"
    "AreaUnitsSquareFeet\0AreaUnitsSquareMeters\0"
    "AreaUnitsSquareKilometers\0AreaUnitsHectares\0"
    "AreaUnitsAcres\0AreaUnitsSquareMiles\0"
    "SpeedUnits\0SpeedUnitsFeetPerSecond\0"
    "SpeedUnitsMetersPerSecond\0"
    "SpeedUnitsMilesPerHour\0"
    "SpeedUnitsKilometersPerHour\0SpeedUnitsKnots\0"
    "TemperatureUnits\0TemperatureUnitsCelsius\0"
    "TemperatureUnitsFarenheit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UnitsSettings[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       4,   26, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00095409,
       3, 0x80000000 | 2, 0x00095409,
       4, 0x80000000 | 2, 0x00095409,
       5, 0x80000000 | 2, 0x00095409,

 // enums: name, flags, count, data
       6, 0x0,    2,   42,
       9, 0x0,    6,   46,
      16, 0x0,    5,   58,
      22, 0x0,    2,   68,

 // enum data: key, value
       7, uint(UnitsSettings::DistanceUnitsFeet),
       8, uint(UnitsSettings::DistanceUnitsMeters),
      10, uint(UnitsSettings::AreaUnitsSquareFeet),
      11, uint(UnitsSettings::AreaUnitsSquareMeters),
      12, uint(UnitsSettings::AreaUnitsSquareKilometers),
      13, uint(UnitsSettings::AreaUnitsHectares),
      14, uint(UnitsSettings::AreaUnitsAcres),
      15, uint(UnitsSettings::AreaUnitsSquareMiles),
      17, uint(UnitsSettings::SpeedUnitsFeetPerSecond),
      18, uint(UnitsSettings::SpeedUnitsMetersPerSecond),
      19, uint(UnitsSettings::SpeedUnitsMilesPerHour),
      20, uint(UnitsSettings::SpeedUnitsKilometersPerHour),
      21, uint(UnitsSettings::SpeedUnitsKnots),
      23, uint(UnitsSettings::TemperatureUnitsCelsius),
      24, uint(UnitsSettings::TemperatureUnitsFarenheit),

       0        // eod
};

void UnitsSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        UnitsSettings *_t = static_cast<UnitsSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Fact**>(_v) = _t->distanceUnits(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->areaUnits(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->speedUnits(); break;
        case 3: *reinterpret_cast< Fact**>(_v) = _t->temperatureUnits(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

const QMetaObject UnitsSettings::staticMetaObject = {
    { &SettingsGroup::staticMetaObject, qt_meta_stringdata_UnitsSettings.data,
      qt_meta_data_UnitsSettings,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UnitsSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UnitsSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UnitsSettings.stringdata0))
        return static_cast<void*>(this);
    return SettingsGroup::qt_metacast(_clname);
}

int UnitsSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SettingsGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
