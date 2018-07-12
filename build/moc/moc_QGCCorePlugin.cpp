/****************************************************************************
** Meta object code from reading C++ file 'QGCCorePlugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/api/QGCCorePlugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCCorePlugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCCorePlugin_t {
    QByteArrayData data[18];
    char stringdata0[291];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCCorePlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCCorePlugin_t qt_meta_stringdata_QGCCorePlugin = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QGCCorePlugin"
QT_MOC_LITERAL(1, 14, 20), // "settingsPagesChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 22), // "instrumentPagesChanged"
QT_MOC_LITERAL(4, 59, 21), // "showTouchAreasChanged"
QT_MOC_LITERAL(5, 81, 14), // "showTouchAreas"
QT_MOC_LITERAL(6, 96, 21), // "showAdvancedUIChanged"
QT_MOC_LITERAL(7, 118, 14), // "showAdvancedUI"
QT_MOC_LITERAL(8, 133, 13), // "settingsPages"
QT_MOC_LITERAL(9, 147, 15), // "instrumentPages"
QT_MOC_LITERAL(10, 163, 15), // "defaultSettings"
QT_MOC_LITERAL(11, 179, 7), // "options"
QT_MOC_LITERAL(12, 187, 11), // "QGCOptions*"
QT_MOC_LITERAL(13, 199, 21), // "showAdvancedUIMessage"
QT_MOC_LITERAL(14, 221, 16), // "brandImageIndoor"
QT_MOC_LITERAL(15, 238, 17), // "brandImageOutdoor"
QT_MOC_LITERAL(16, 256, 14), // "customMapItems"
QT_MOC_LITERAL(17, 271, 19) // "QmlObjectListModel*"

    },
    "QGCCorePlugin\0settingsPagesChanged\0\0"
    "instrumentPagesChanged\0showTouchAreasChanged\0"
    "showTouchAreas\0showAdvancedUIChanged\0"
    "showAdvancedUI\0settingsPages\0"
    "instrumentPages\0defaultSettings\0options\0"
    "QGCOptions*\0showAdvancedUIMessage\0"
    "brandImageIndoor\0brandImageOutdoor\0"
    "customMapItems\0QmlObjectListModel*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCCorePlugin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
      10,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    1,   36,    2, 0x06 /* Public */,
       6,    1,   39,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    7,

 // properties: name, type, flags
       8, QMetaType::QVariantList, 0x00495001,
       9, QMetaType::QVariantList, 0x00495001,
      10, QMetaType::Int, 0x00095401,
      11, 0x80000000 | 12, 0x00095409,
       5, QMetaType::Bool, 0x00495103,
       7, QMetaType::Bool, 0x00495103,
      13, QMetaType::QString, 0x00095401,
      14, QMetaType::QString, 0x00095401,
      15, QMetaType::QString, 0x00095401,
      16, 0x80000000 | 17, 0x00095409,

 // properties: notify_signal_id
       0,
       1,
       0,
       0,
       2,
       3,
       0,
       0,
       0,
       0,

       0        // eod
};

void QGCCorePlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCCorePlugin *_t = static_cast<QGCCorePlugin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->settingsPagesChanged(); break;
        case 1: _t->instrumentPagesChanged(); break;
        case 2: _t->showTouchAreasChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->showAdvancedUIChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGCCorePlugin::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCorePlugin::settingsPagesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QGCCorePlugin::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCorePlugin::instrumentPagesChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QGCCorePlugin::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCorePlugin::showTouchAreasChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QGCCorePlugin::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCorePlugin::showAdvancedUIChanged)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QGCCorePlugin *_t = static_cast<QGCCorePlugin *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantList*>(_v) = _t->settingsPages(); break;
        case 1: *reinterpret_cast< QVariantList*>(_v) = _t->instrumentPages(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->defaultSettings(); break;
        case 3: *reinterpret_cast< QGCOptions**>(_v) = _t->options(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->showTouchAreas(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->showAdvancedUI(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->showAdvancedUIMessage(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->brandImageIndoor(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->brandImageOutdoor(); break;
        case 9: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->customMapItems(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QGCCorePlugin *_t = static_cast<QGCCorePlugin *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 4: _t->setShowTouchAreas(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setShowAdvancedUI(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QGCCorePlugin::staticMetaObject = {
    { &QGCTool::staticMetaObject, qt_meta_stringdata_QGCCorePlugin.data,
      qt_meta_data_QGCCorePlugin,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCCorePlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCCorePlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCCorePlugin.stringdata0))
        return static_cast<void*>(this);
    return QGCTool::qt_metacast(_clname);
}

int QGCCorePlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCTool::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QGCCorePlugin::settingsPagesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGCCorePlugin::instrumentPagesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QGCCorePlugin::showTouchAreasChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QGCCorePlugin::showAdvancedUIChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
