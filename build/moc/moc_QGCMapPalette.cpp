/****************************************************************************
** Meta object code from reading C++ file 'QGCMapPalette.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/QGCMapPalette.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCMapPalette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCMapPalette_t {
    QByteArrayData data[8];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCMapPalette_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCMapPalette_t qt_meta_stringdata_QGCMapPalette = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QGCMapPalette"
QT_MOC_LITERAL(1, 14, 14), // "paletteChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 18), // "lightColorsChanged"
QT_MOC_LITERAL(4, 49, 11), // "lightColors"
QT_MOC_LITERAL(5, 61, 4), // "text"
QT_MOC_LITERAL(6, 66, 11), // "textOutline"
QT_MOC_LITERAL(7, 78, 13) // "thumbJoystick"

    },
    "QGCMapPalette\0paletteChanged\0\0"
    "lightColorsChanged\0lightColors\0text\0"
    "textOutline\0thumbJoystick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCMapPalette[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       4,   28, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    1,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,

 // properties: name, type, flags
       4, QMetaType::Bool, 0x00495103,
       5, QMetaType::QColor, 0x00495001,
       6, QMetaType::QColor, 0x00495001,
       7, QMetaType::QColor, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,

       0        // eod
};

void QGCMapPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCMapPalette *_t = static_cast<QGCMapPalette *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->paletteChanged(); break;
        case 1: _t->lightColorsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGCMapPalette::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapPalette::paletteChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QGCMapPalette::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapPalette::lightColorsChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QGCMapPalette *_t = static_cast<QGCMapPalette *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->lightColors(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->text(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->textOutline(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->thumbJoystick(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QGCMapPalette *_t = static_cast<QGCMapPalette *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLightColors(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QGCMapPalette::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QGCMapPalette.data,
      qt_meta_data_QGCMapPalette,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCMapPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCMapPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCMapPalette.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGCMapPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void QGCMapPalette::paletteChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGCMapPalette::lightColorsChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
