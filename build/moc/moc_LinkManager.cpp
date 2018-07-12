/****************************************************************************
** Meta object code from reading C++ file 'LinkManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/LinkManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LinkManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LinkManager_t {
    QByteArrayData data[41];
    char stringdata0[644];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LinkManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LinkManager_t qt_meta_stringdata_LinkManager = {
    {
QT_MOC_LITERAL(0, 0, 11), // "LinkManager"
QT_MOC_LITERAL(1, 12, 7), // "newLink"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 14), // "LinkInterface*"
QT_MOC_LITERAL(4, 36, 4), // "link"
QT_MOC_LITERAL(5, 41, 11), // "linkDeleted"
QT_MOC_LITERAL(6, 53, 13), // "linkConnected"
QT_MOC_LITERAL(7, 67, 16), // "linkDisconnected"
QT_MOC_LITERAL(8, 84, 10), // "linkActive"
QT_MOC_LITERAL(9, 95, 9), // "vehicleId"
QT_MOC_LITERAL(10, 105, 19), // "vehicleFirmwareType"
QT_MOC_LITERAL(11, 125, 11), // "vehicleType"
QT_MOC_LITERAL(12, 137, 12), // "linkInactive"
QT_MOC_LITERAL(13, 150, 22), // "commPortStringsChanged"
QT_MOC_LITERAL(14, 173, 16), // "commPortsChanged"
QT_MOC_LITERAL(15, 190, 25), // "linkConfigurationsChanged"
QT_MOC_LITERAL(16, 216, 14), // "_linkConnected"
QT_MOC_LITERAL(17, 231, 17), // "_linkDisconnected"
QT_MOC_LITERAL(18, 249, 22), // "_linkConnectionRemoved"
QT_MOC_LITERAL(19, 272, 16), // "_activeLinkCheck"
QT_MOC_LITERAL(20, 289, 19), // "createConfiguration"
QT_MOC_LITERAL(21, 309, 18), // "LinkConfiguration*"
QT_MOC_LITERAL(22, 328, 4), // "type"
QT_MOC_LITERAL(23, 333, 4), // "name"
QT_MOC_LITERAL(24, 338, 25), // "startConfigurationEditing"
QT_MOC_LITERAL(25, 364, 6), // "config"
QT_MOC_LITERAL(26, 371, 26), // "cancelConfigurationEditing"
QT_MOC_LITERAL(27, 398, 23), // "endConfigurationEditing"
QT_MOC_LITERAL(28, 422, 12), // "editedConfig"
QT_MOC_LITERAL(29, 435, 22), // "endCreateConfiguration"
QT_MOC_LITERAL(30, 458, 19), // "removeConfiguration"
QT_MOC_LITERAL(31, 478, 19), // "createConnectedLink"
QT_MOC_LITERAL(32, 498, 14), // "disconnectLink"
QT_MOC_LITERAL(33, 513, 8), // "shutdown"
QT_MOC_LITERAL(34, 522, 20), // "isBluetoothAvailable"
QT_MOC_LITERAL(35, 543, 18), // "linkConfigurations"
QT_MOC_LITERAL(36, 562, 19), // "QmlObjectListModel*"
QT_MOC_LITERAL(37, 582, 15), // "linkTypeStrings"
QT_MOC_LITERAL(38, 598, 15), // "serialBaudRates"
QT_MOC_LITERAL(39, 614, 17), // "serialPortStrings"
QT_MOC_LITERAL(40, 632, 11) // "serialPorts"

    },
    "LinkManager\0newLink\0\0LinkInterface*\0"
    "link\0linkDeleted\0linkConnected\0"
    "linkDisconnected\0linkActive\0vehicleId\0"
    "vehicleFirmwareType\0vehicleType\0"
    "linkInactive\0commPortStringsChanged\0"
    "commPortsChanged\0linkConfigurationsChanged\0"
    "_linkConnected\0_linkDisconnected\0"
    "_linkConnectionRemoved\0_activeLinkCheck\0"
    "createConfiguration\0LinkConfiguration*\0"
    "type\0name\0startConfigurationEditing\0"
    "config\0cancelConfigurationEditing\0"
    "endConfigurationEditing\0editedConfig\0"
    "endCreateConfiguration\0removeConfiguration\0"
    "createConnectedLink\0disconnectLink\0"
    "shutdown\0isBluetoothAvailable\0"
    "linkConfigurations\0QmlObjectListModel*\0"
    "linkTypeStrings\0serialBaudRates\0"
    "serialPortStrings\0serialPorts"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LinkManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       6,  186, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  124,    2, 0x06 /* Public */,
       5,    1,  127,    2, 0x06 /* Public */,
       6,    1,  130,    2, 0x06 /* Public */,
       7,    1,  133,    2, 0x06 /* Public */,
       8,    4,  136,    2, 0x06 /* Public */,
      12,    1,  145,    2, 0x06 /* Public */,
      13,    0,  148,    2, 0x06 /* Public */,
      14,    0,  149,    2, 0x06 /* Public */,
      15,    0,  150,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,  151,    2, 0x08 /* Private */,
      17,    0,  152,    2, 0x08 /* Private */,
      18,    1,  153,    2, 0x08 /* Private */,
      19,    0,  156,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      20,    2,  157,    2, 0x02 /* Public */,
      24,    1,  162,    2, 0x02 /* Public */,
      26,    1,  165,    2, 0x02 /* Public */,
      27,    2,  168,    2, 0x02 /* Public */,
      29,    1,  173,    2, 0x02 /* Public */,
      30,    1,  176,    2, 0x02 /* Public */,
      31,    1,  179,    2, 0x02 /* Public */,
      32,    1,  182,    2, 0x02 /* Public */,
      33,    0,  185,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int, QMetaType::Int,    4,    9,   10,   11,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 21, QMetaType::Int, QMetaType::QString,   22,   23,
    0x80000000 | 21, 0x80000000 | 21,   25,
    QMetaType::Void, 0x80000000 | 21,   25,
    QMetaType::Bool, 0x80000000 | 21, 0x80000000 | 21,   25,   28,
    QMetaType::Bool, 0x80000000 | 21,   25,
    QMetaType::Void, 0x80000000 | 21,   25,
    QMetaType::Void, 0x80000000 | 21,   25,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // properties: name, type, flags
      34, QMetaType::Bool, 0x00095401,
      35, 0x80000000 | 36, 0x00495009,
      37, QMetaType::QStringList, 0x00095401,
      38, QMetaType::QStringList, 0x00095401,
      39, QMetaType::QStringList, 0x00495001,
      40, QMetaType::QStringList, 0x00495001,

 // properties: notify_signal_id
       0,
       8,
       0,
       0,
       6,
       7,

       0        // eod
};

void LinkManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LinkManager *_t = static_cast<LinkManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newLink((*reinterpret_cast< LinkInterface*(*)>(_a[1]))); break;
        case 1: _t->linkDeleted((*reinterpret_cast< LinkInterface*(*)>(_a[1]))); break;
        case 2: _t->linkConnected((*reinterpret_cast< LinkInterface*(*)>(_a[1]))); break;
        case 3: _t->linkDisconnected((*reinterpret_cast< LinkInterface*(*)>(_a[1]))); break;
        case 4: _t->linkActive((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 5: _t->linkInactive((*reinterpret_cast< LinkInterface*(*)>(_a[1]))); break;
        case 6: _t->commPortStringsChanged(); break;
        case 7: _t->commPortsChanged(); break;
        case 8: _t->linkConfigurationsChanged(); break;
        case 9: _t->_linkConnected(); break;
        case 10: _t->_linkDisconnected(); break;
        case 11: _t->_linkConnectionRemoved((*reinterpret_cast< LinkInterface*(*)>(_a[1]))); break;
        case 12: _t->_activeLinkCheck(); break;
        case 13: { LinkConfiguration* _r = _t->createConfiguration((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< LinkConfiguration**>(_a[0]) = std::move(_r); }  break;
        case 14: { LinkConfiguration* _r = _t->startConfigurationEditing((*reinterpret_cast< LinkConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< LinkConfiguration**>(_a[0]) = std::move(_r); }  break;
        case 15: _t->cancelConfigurationEditing((*reinterpret_cast< LinkConfiguration*(*)>(_a[1]))); break;
        case 16: { bool _r = _t->endConfigurationEditing((*reinterpret_cast< LinkConfiguration*(*)>(_a[1])),(*reinterpret_cast< LinkConfiguration*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 17: { bool _r = _t->endCreateConfiguration((*reinterpret_cast< LinkConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 18: _t->removeConfiguration((*reinterpret_cast< LinkConfiguration*(*)>(_a[1]))); break;
        case 19: _t->createConnectedLink((*reinterpret_cast< LinkConfiguration*(*)>(_a[1]))); break;
        case 20: _t->disconnectLink((*reinterpret_cast< LinkInterface*(*)>(_a[1]))); break;
        case 21: _t->shutdown(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkConfiguration* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkConfiguration* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkConfiguration* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkConfiguration* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkConfiguration* >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkConfiguration* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LinkInterface* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (LinkManager::*_t)(LinkInterface * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManager::newLink)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (LinkManager::*_t)(LinkInterface * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManager::linkDeleted)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (LinkManager::*_t)(LinkInterface * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManager::linkConnected)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (LinkManager::*_t)(LinkInterface * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManager::linkDisconnected)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (LinkManager::*_t)(LinkInterface * , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManager::linkActive)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (LinkManager::*_t)(LinkInterface * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManager::linkInactive)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (LinkManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManager::commPortStringsChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (LinkManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManager::commPortsChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (LinkManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkManager::linkConfigurationsChanged)) {
                *result = 8;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        LinkManager *_t = static_cast<LinkManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isBluetoothAvailable(); break;
        case 1: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->_qmlLinkConfigurations(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = _t->linkTypeStrings(); break;
        case 3: *reinterpret_cast< QStringList*>(_v) = _t->serialBaudRates(); break;
        case 4: *reinterpret_cast< QStringList*>(_v) = _t->serialPortStrings(); break;
        case 5: *reinterpret_cast< QStringList*>(_v) = _t->serialPorts(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject LinkManager::staticMetaObject = {
    { &QGCTool::staticMetaObject, qt_meta_stringdata_LinkManager.data,
      qt_meta_data_LinkManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LinkManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LinkManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LinkManager.stringdata0))
        return static_cast<void*>(this);
    return QGCTool::qt_metacast(_clname);
}

int LinkManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void LinkManager::newLink(LinkInterface * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LinkManager::linkDeleted(LinkInterface * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LinkManager::linkConnected(LinkInterface * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void LinkManager::linkDisconnected(LinkInterface * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void LinkManager::linkActive(LinkInterface * _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void LinkManager::linkInactive(LinkInterface * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void LinkManager::commPortStringsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void LinkManager::commPortsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void LinkManager::linkConfigurationsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
