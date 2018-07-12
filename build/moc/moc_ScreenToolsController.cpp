/****************************************************************************
** Meta object code from reading C++ file 'ScreenToolsController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/QmlControls/ScreenToolsController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ScreenToolsController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScreenToolsController_t {
    QByteArrayData data[14];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScreenToolsController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScreenToolsController_t qt_meta_stringdata_ScreenToolsController = {
    {
QT_MOC_LITERAL(0, 0, 21), // "ScreenToolsController"
QT_MOC_LITERAL(1, 22, 6), // "mouseX"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 6), // "mouseY"
QT_MOC_LITERAL(4, 37, 9), // "isAndroid"
QT_MOC_LITERAL(5, 47, 5), // "isiOS"
QT_MOC_LITERAL(6, 53, 8), // "isMobile"
QT_MOC_LITERAL(7, 62, 11), // "testHighDPI"
QT_MOC_LITERAL(8, 74, 7), // "isDebug"
QT_MOC_LITERAL(9, 82, 7), // "isMacOS"
QT_MOC_LITERAL(10, 90, 7), // "isLinux"
QT_MOC_LITERAL(11, 98, 9), // "isWindows"
QT_MOC_LITERAL(12, 108, 9), // "iOSDevice"
QT_MOC_LITERAL(13, 118, 15) // "fixedFontFamily"

    },
    "ScreenToolsController\0mouseX\0\0mouseY\0"
    "isAndroid\0isiOS\0isMobile\0testHighDPI\0"
    "isDebug\0isMacOS\0isLinux\0isWindows\0"
    "iOSDevice\0fixedFontFamily"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScreenToolsController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
      10,   26, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x02 /* Public */,
       3,    0,   25,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Int,
    QMetaType::Int,

 // properties: name, type, flags
       4, QMetaType::Bool, 0x00095401,
       5, QMetaType::Bool, 0x00095401,
       6, QMetaType::Bool, 0x00095401,
       7, QMetaType::Bool, 0x00095401,
       8, QMetaType::Bool, 0x00095401,
       9, QMetaType::Bool, 0x00095401,
      10, QMetaType::Bool, 0x00095401,
      11, QMetaType::Bool, 0x00095401,
      12, QMetaType::QString, 0x00095401,
      13, QMetaType::QString, 0x00095401,

       0        // eod
};

void ScreenToolsController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScreenToolsController *_t = static_cast<ScreenToolsController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->mouseX();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 1: { int _r = _t->mouseY();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ScreenToolsController *_t = static_cast<ScreenToolsController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isAndroid(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isiOS(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isMobile(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->testHighDPI(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isDebug(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isMacOS(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isLinux(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isWindows(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->iOSDevice(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->fixedFontFamily(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject ScreenToolsController::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_ScreenToolsController.data,
      qt_meta_data_ScreenToolsController,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ScreenToolsController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScreenToolsController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScreenToolsController.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int ScreenToolsController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
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
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
