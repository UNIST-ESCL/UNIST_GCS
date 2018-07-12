/****************************************************************************
** Meta object code from reading C++ file 'CameraCalc.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/CameraCalc.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CameraCalc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CameraCalc_t {
    QByteArrayData data[29];
    char stringdata0[520];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CameraCalc_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CameraCalc_t qt_meta_stringdata_CameraCalc = {
    {
QT_MOC_LITERAL(0, 0, 10), // "CameraCalc"
QT_MOC_LITERAL(1, 11, 12), // "dirtyChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 5), // "dirty"
QT_MOC_LITERAL(4, 31, 25), // "imageFootprintSideChanged"
QT_MOC_LITERAL(5, 57, 18), // "imageFootprintSide"
QT_MOC_LITERAL(6, 76, 28), // "imageFootprintFrontalChanged"
QT_MOC_LITERAL(7, 105, 21), // "imageFootprintFrontal"
QT_MOC_LITERAL(8, 127, 32), // "distanceToSurfaceRelativeChanged"
QT_MOC_LITERAL(9, 160, 25), // "distanceToSurfaceRelative"
QT_MOC_LITERAL(10, 186, 21), // "isManualCameraChanged"
QT_MOC_LITERAL(11, 208, 21), // "isCustomCameraChanged"
QT_MOC_LITERAL(12, 230, 22), // "_recalcTriggerDistance"
QT_MOC_LITERAL(13, 253, 32), // "_adjustDistanceToSurfaceRelative"
QT_MOC_LITERAL(14, 286, 9), // "_setDirty"
QT_MOC_LITERAL(15, 296, 18), // "_cameraNameChanged"
QT_MOC_LITERAL(16, 315, 16), // "customCameraName"
QT_MOC_LITERAL(17, 332, 16), // "manualCameraName"
QT_MOC_LITERAL(18, 349, 14), // "isManualCamera"
QT_MOC_LITERAL(19, 364, 14), // "isCustomCamera"
QT_MOC_LITERAL(20, 379, 10), // "cameraName"
QT_MOC_LITERAL(21, 390, 5), // "Fact*"
QT_MOC_LITERAL(22, 396, 18), // "valueSetIsDistance"
QT_MOC_LITERAL(23, 415, 17), // "distanceToSurface"
QT_MOC_LITERAL(24, 433, 12), // "imageDensity"
QT_MOC_LITERAL(25, 446, 14), // "frontalOverlap"
QT_MOC_LITERAL(26, 461, 11), // "sideOverlap"
QT_MOC_LITERAL(27, 473, 21), // "adjustedFootprintSide"
QT_MOC_LITERAL(28, 495, 24) // "adjustedFootprintFrontal"

    },
    "CameraCalc\0dirtyChanged\0\0dirty\0"
    "imageFootprintSideChanged\0imageFootprintSide\0"
    "imageFootprintFrontalChanged\0"
    "imageFootprintFrontal\0"
    "distanceToSurfaceRelativeChanged\0"
    "distanceToSurfaceRelative\0"
    "isManualCameraChanged\0isCustomCameraChanged\0"
    "_recalcTriggerDistance\0"
    "_adjustDistanceToSurfaceRelative\0"
    "_setDirty\0_cameraNameChanged\0"
    "customCameraName\0manualCameraName\0"
    "isManualCamera\0isCustomCamera\0cameraName\0"
    "Fact*\0valueSetIsDistance\0distanceToSurface\0"
    "imageDensity\0frontalOverlap\0sideOverlap\0"
    "adjustedFootprintSide\0adjustedFootprintFrontal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CameraCalc[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
      15,   82, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,
       6,    1,   70,    2, 0x06 /* Public */,
       8,    1,   73,    2, 0x06 /* Public */,
      10,    0,   76,    2, 0x06 /* Public */,
      11,    0,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   78,    2, 0x08 /* Private */,
      13,    0,   79,    2, 0x08 /* Private */,
      14,    0,   80,    2, 0x08 /* Private */,
      15,    0,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      16, QMetaType::QString, 0x00095401,
      17, QMetaType::QString, 0x00095401,
      18, QMetaType::Bool, 0x00495001,
      19, QMetaType::Bool, 0x00495001,
      20, 0x80000000 | 21, 0x00095409,
      22, 0x80000000 | 21, 0x00095409,
      23, 0x80000000 | 21, 0x00095409,
      24, 0x80000000 | 21, 0x00095409,
      25, 0x80000000 | 21, 0x00095409,
      26, 0x80000000 | 21, 0x00095409,
      27, 0x80000000 | 21, 0x00095409,
      28, 0x80000000 | 21, 0x00095409,
       9, QMetaType::Bool, 0x00495103,
       5, QMetaType::Double, 0x00495001,
       7, QMetaType::Double, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       4,
       5,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       3,
       1,
       2,

       0        // eod
};

void CameraCalc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CameraCalc *_t = static_cast<CameraCalc *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dirtyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->imageFootprintSideChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->imageFootprintFrontalChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->distanceToSurfaceRelativeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->isManualCameraChanged(); break;
        case 5: _t->isCustomCameraChanged(); break;
        case 6: _t->_recalcTriggerDistance(); break;
        case 7: _t->_adjustDistanceToSurfaceRelative(); break;
        case 8: _t->_setDirty(); break;
        case 9: _t->_cameraNameChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (CameraCalc::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraCalc::dirtyChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CameraCalc::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraCalc::imageFootprintSideChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (CameraCalc::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraCalc::imageFootprintFrontalChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (CameraCalc::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraCalc::distanceToSurfaceRelativeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (CameraCalc::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraCalc::isManualCameraChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (CameraCalc::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraCalc::isCustomCameraChanged)) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 11:
        case 10:
        case 9:
        case 8:
        case 7:
        case 6:
        case 5:
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CameraCalc *_t = static_cast<CameraCalc *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->customCameraName(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->manualCameraName(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isManualCamera(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isCustomCamera(); break;
        case 4: *reinterpret_cast< Fact**>(_v) = _t->cameraName(); break;
        case 5: *reinterpret_cast< Fact**>(_v) = _t->valueSetIsDistance(); break;
        case 6: *reinterpret_cast< Fact**>(_v) = _t->distanceToSurface(); break;
        case 7: *reinterpret_cast< Fact**>(_v) = _t->imageDensity(); break;
        case 8: *reinterpret_cast< Fact**>(_v) = _t->frontalOverlap(); break;
        case 9: *reinterpret_cast< Fact**>(_v) = _t->sideOverlap(); break;
        case 10: *reinterpret_cast< Fact**>(_v) = _t->adjustedFootprintSide(); break;
        case 11: *reinterpret_cast< Fact**>(_v) = _t->adjustedFootprintFrontal(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->distanceToSurfaceRelative(); break;
        case 13: *reinterpret_cast< double*>(_v) = _t->imageFootprintSide(); break;
        case 14: *reinterpret_cast< double*>(_v) = _t->imageFootprintFrontal(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CameraCalc *_t = static_cast<CameraCalc *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 12: _t->setDistanceToSurfaceRelative(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject CameraCalc::staticMetaObject = {
    { &CameraSpec::staticMetaObject, qt_meta_stringdata_CameraCalc.data,
      qt_meta_data_CameraCalc,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CameraCalc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CameraCalc::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CameraCalc.stringdata0))
        return static_cast<void*>(this);
    return CameraSpec::qt_metacast(_clname);
}

int CameraCalc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CameraSpec::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 15;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void CameraCalc::dirtyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CameraCalc::imageFootprintSideChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CameraCalc::imageFootprintFrontalChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CameraCalc::distanceToSurfaceRelativeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CameraCalc::isManualCameraChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void CameraCalc::isCustomCameraChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
