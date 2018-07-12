/****************************************************************************
** Meta object code from reading C++ file 'CameraSection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MissionManager/CameraSection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CameraSection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CameraSection_t {
    QByteArrayData data[32];
    char stringdata0[575];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CameraSection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CameraSection_t qt_meta_stringdata_CameraSection = {
    {
QT_MOC_LITERAL(0, 0, 13), // "CameraSection"
QT_MOC_LITERAL(1, 14, 20), // "specifyGimbalChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 13), // "specifyGimbal"
QT_MOC_LITERAL(4, 50, 24), // "specifyCameraModeChanged"
QT_MOC_LITERAL(5, 75, 17), // "specifyCameraMode"
QT_MOC_LITERAL(6, 93, 25), // "specifiedGimbalYawChanged"
QT_MOC_LITERAL(7, 119, 9), // "gimbalYaw"
QT_MOC_LITERAL(8, 129, 27), // "specifiedGimbalPitchChanged"
QT_MOC_LITERAL(9, 157, 11), // "gimbalPitch"
QT_MOC_LITERAL(10, 169, 9), // "_setDirty"
QT_MOC_LITERAL(11, 179, 27), // "_setDirtyAndUpdateItemCount"
QT_MOC_LITERAL(12, 207, 25), // "_updateSpecifiedGimbalYaw"
QT_MOC_LITERAL(13, 233, 27), // "_updateSpecifiedGimbalPitch"
QT_MOC_LITERAL(14, 261, 15), // "_specifyChanged"
QT_MOC_LITERAL(15, 277, 24), // "_updateSettingsSpecified"
QT_MOC_LITERAL(16, 302, 20), // "_cameraActionChanged"
QT_MOC_LITERAL(17, 323, 17), // "_dirtyIfSpecified"
QT_MOC_LITERAL(18, 341, 5), // "Fact*"
QT_MOC_LITERAL(19, 347, 12), // "cameraAction"
QT_MOC_LITERAL(20, 360, 23), // "cameraPhotoIntervalTime"
QT_MOC_LITERAL(21, 384, 27), // "cameraPhotoIntervalDistance"
QT_MOC_LITERAL(22, 412, 19), // "cameraModeSupported"
QT_MOC_LITERAL(23, 432, 10), // "cameraMode"
QT_MOC_LITERAL(24, 443, 12), // "CameraAction"
QT_MOC_LITERAL(25, 456, 16), // "CameraActionNone"
QT_MOC_LITERAL(26, 473, 22), // "TakePhotosIntervalTime"
QT_MOC_LITERAL(27, 496, 25), // "TakePhotoIntervalDistance"
QT_MOC_LITERAL(28, 522, 16), // "StopTakingPhotos"
QT_MOC_LITERAL(29, 539, 9), // "TakeVideo"
QT_MOC_LITERAL(30, 549, 15), // "StopTakingVideo"
QT_MOC_LITERAL(31, 565, 9) // "TakePhoto"

    },
    "CameraSection\0specifyGimbalChanged\0\0"
    "specifyGimbal\0specifyCameraModeChanged\0"
    "specifyCameraMode\0specifiedGimbalYawChanged\0"
    "gimbalYaw\0specifiedGimbalPitchChanged\0"
    "gimbalPitch\0_setDirty\0_setDirtyAndUpdateItemCount\0"
    "_updateSpecifiedGimbalYaw\0"
    "_updateSpecifiedGimbalPitch\0_specifyChanged\0"
    "_updateSettingsSpecified\0_cameraActionChanged\0"
    "_dirtyIfSpecified\0Fact*\0cameraAction\0"
    "cameraPhotoIntervalTime\0"
    "cameraPhotoIntervalDistance\0"
    "cameraModeSupported\0cameraMode\0"
    "CameraAction\0CameraActionNone\0"
    "TakePhotosIntervalTime\0TakePhotoIntervalDistance\0"
    "StopTakingPhotos\0TakeVideo\0StopTakingVideo\0"
    "TakePhoto"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CameraSection[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       9,   94, // properties
       1,  130, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    1,   77,    2, 0x06 /* Public */,
       6,    1,   80,    2, 0x06 /* Public */,
       8,    1,   83,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   86,    2, 0x08 /* Private */,
      11,    0,   87,    2, 0x08 /* Private */,
      12,    0,   88,    2, 0x08 /* Private */,
      13,    0,   89,    2, 0x08 /* Private */,
      14,    0,   90,    2, 0x08 /* Private */,
      15,    0,   91,    2, 0x08 /* Private */,
      16,    0,   92,    2, 0x08 /* Private */,
      17,    0,   93,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Bool, QMetaType::Bool,    3,
    QMetaType::Bool, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Double,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00495103,
       9, 0x80000000 | 18, 0x00095409,
       7, 0x80000000 | 18, 0x00095409,
      19, 0x80000000 | 18, 0x00095409,
      20, 0x80000000 | 18, 0x00095409,
      21, 0x80000000 | 18, 0x00095409,
      22, QMetaType::Bool, 0x00095401,
       5, QMetaType::Bool, 0x00495103,
      23, 0x80000000 | 18, 0x00095409,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       1,
       0,

 // enums: name, flags, count, data
      24, 0x0,    7,  134,

 // enum data: key, value
      25, uint(CameraSection::CameraActionNone),
      26, uint(CameraSection::TakePhotosIntervalTime),
      27, uint(CameraSection::TakePhotoIntervalDistance),
      28, uint(CameraSection::StopTakingPhotos),
      29, uint(CameraSection::TakeVideo),
      30, uint(CameraSection::StopTakingVideo),
      31, uint(CameraSection::TakePhoto),

       0        // eod
};

void CameraSection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CameraSection *_t = static_cast<CameraSection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->specifyGimbalChanged((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->specifyCameraModeChanged((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->specifiedGimbalYawChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->specifiedGimbalPitchChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->_setDirty(); break;
        case 5: _t->_setDirtyAndUpdateItemCount(); break;
        case 6: _t->_updateSpecifiedGimbalYaw(); break;
        case 7: _t->_updateSpecifiedGimbalPitch(); break;
        case 8: _t->_specifyChanged(); break;
        case 9: _t->_updateSettingsSpecified(); break;
        case 10: _t->_cameraActionChanged(); break;
        case 11: _t->_dirtyIfSpecified(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef bool (CameraSection::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraSection::specifyGimbalChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef bool (CameraSection::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraSection::specifyCameraModeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (CameraSection::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraSection::specifiedGimbalYawChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (CameraSection::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraSection::specifiedGimbalPitchChanged)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fact* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CameraSection *_t = static_cast<CameraSection *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->specifyGimbal(); break;
        case 1: *reinterpret_cast< Fact**>(_v) = _t->gimbalPitch(); break;
        case 2: *reinterpret_cast< Fact**>(_v) = _t->gimbalYaw(); break;
        case 3: *reinterpret_cast< Fact**>(_v) = _t->cameraAction(); break;
        case 4: *reinterpret_cast< Fact**>(_v) = _t->cameraPhotoIntervalTime(); break;
        case 5: *reinterpret_cast< Fact**>(_v) = _t->cameraPhotoIntervalDistance(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->cameraModeSupported(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->specifyCameraMode(); break;
        case 8: *reinterpret_cast< Fact**>(_v) = _t->cameraMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CameraSection *_t = static_cast<CameraSection *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSpecifyGimbal(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setSpecifyCameraMode(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject CameraSection::staticMetaObject = {
    { &Section::staticMetaObject, qt_meta_stringdata_CameraSection.data,
      qt_meta_data_CameraSection,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CameraSection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CameraSection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CameraSection.stringdata0))
        return static_cast<void*>(this);
    return Section::qt_metacast(_clname);
}

int CameraSection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Section::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
bool CameraSection::specifyGimbalChanged(bool _t1)
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}

// SIGNAL 1
bool CameraSection::specifyCameraModeChanged(bool _t1)
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
    return _t0;
}

// SIGNAL 2
void CameraSection::specifiedGimbalYawChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CameraSection::specifiedGimbalPitchChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
