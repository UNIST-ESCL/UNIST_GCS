/****************************************************************************
** Meta object code from reading C++ file 'JoystickManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Joystick/JoystickManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'JoystickManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JoystickManager_t {
    QByteArrayData data[14];
    char stringdata0[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JoystickManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JoystickManager_t qt_meta_stringdata_JoystickManager = {
    {
QT_MOC_LITERAL(0, 0, 15), // "JoystickManager"
QT_MOC_LITERAL(1, 16, 21), // "activeJoystickChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 9), // "Joystick*"
QT_MOC_LITERAL(4, 49, 8), // "joystick"
QT_MOC_LITERAL(5, 58, 25), // "activeJoystickNameChanged"
QT_MOC_LITERAL(6, 84, 4), // "name"
QT_MOC_LITERAL(7, 89, 25), // "availableJoysticksChanged"
QT_MOC_LITERAL(8, 115, 4), // "init"
QT_MOC_LITERAL(9, 120, 25), // "_updateAvailableJoysticks"
QT_MOC_LITERAL(10, 146, 9), // "joysticks"
QT_MOC_LITERAL(11, 156, 13), // "joystickNames"
QT_MOC_LITERAL(12, 170, 14), // "activeJoystick"
QT_MOC_LITERAL(13, 185, 18) // "activeJoystickName"

    },
    "JoystickManager\0activeJoystickChanged\0"
    "\0Joystick*\0joystick\0activeJoystickNameChanged\0"
    "name\0availableJoysticksChanged\0init\0"
    "_updateAvailableJoysticks\0joysticks\0"
    "joystickNames\0activeJoystick\0"
    "activeJoystickName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JoystickManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   48, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    1,   42,    2, 0x06 /* Public */,
       7,    0,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   46,    2, 0x0a /* Public */,
       9,    0,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::QVariantList, 0x00495001,
      11, QMetaType::QStringList, 0x00495001,
      12, 0x80000000 | 3, 0x0049510b,
      13, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       2,
       2,
       0,
       1,

       0        // eod
};

void JoystickManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        JoystickManager *_t = static_cast<JoystickManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activeJoystickChanged((*reinterpret_cast< Joystick*(*)>(_a[1]))); break;
        case 1: _t->activeJoystickNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->availableJoysticksChanged(); break;
        case 3: _t->init(); break;
        case 4: _t->_updateAvailableJoysticks(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Joystick* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (JoystickManager::*_t)(Joystick * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoystickManager::activeJoystickChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (JoystickManager::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoystickManager::activeJoystickNameChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (JoystickManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JoystickManager::availableJoysticksChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Joystick* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        JoystickManager *_t = static_cast<JoystickManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantList*>(_v) = _t->joysticks(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->joystickNames(); break;
        case 2: *reinterpret_cast< Joystick**>(_v) = _t->activeJoystick(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->activeJoystickName(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        JoystickManager *_t = static_cast<JoystickManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setActiveJoystick(*reinterpret_cast< Joystick**>(_v)); break;
        case 3: _t->setActiveJoystickName(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject JoystickManager::staticMetaObject = {
    { &QGCTool::staticMetaObject, qt_meta_stringdata_JoystickManager.data,
      qt_meta_data_JoystickManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *JoystickManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JoystickManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JoystickManager.stringdata0))
        return static_cast<void*>(this);
    return QGCTool::qt_metacast(_clname);
}

int JoystickManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
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
void JoystickManager::activeJoystickChanged(Joystick * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void JoystickManager::activeJoystickNameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void JoystickManager::availableJoysticksChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
