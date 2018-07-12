/****************************************************************************
** Meta object code from reading C++ file 'QGCMapTileSet.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/QtLocationPlugin/QGCMapTileSet.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCMapTileSet.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCCachedTileSet_t {
    QByteArrayData data[54];
    char stringdata0[809];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCCachedTileSet_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCCachedTileSet_t qt_meta_stringdata_QGCCachedTileSet = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QGCCachedTileSet"
QT_MOC_LITERAL(1, 17, 15), // "deletingChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 18), // "downloadingChanged"
QT_MOC_LITERAL(4, 53, 21), // "totalTileCountChanged"
QT_MOC_LITERAL(5, 75, 22), // "uniqueTileCountChanged"
QT_MOC_LITERAL(6, 98, 21), // "uniqueTileSizeChanged"
QT_MOC_LITERAL(7, 120, 21), // "totalTilesSizeChanged"
QT_MOC_LITERAL(8, 142, 21), // "savedTileCountChanged"
QT_MOC_LITERAL(9, 164, 20), // "savedTileSizeChanged"
QT_MOC_LITERAL(10, 185, 15), // "completeChanged"
QT_MOC_LITERAL(11, 201, 17), // "errorCountChanged"
QT_MOC_LITERAL(12, 219, 15), // "selectedChanged"
QT_MOC_LITERAL(13, 235, 11), // "nameChanged"
QT_MOC_LITERAL(14, 247, 16), // "_tileListFetched"
QT_MOC_LITERAL(15, 264, 15), // "QList<QGCTile*>"
QT_MOC_LITERAL(16, 280, 5), // "tiles"
QT_MOC_LITERAL(17, 286, 21), // "_networkReplyFinished"
QT_MOC_LITERAL(18, 308, 18), // "_networkReplyError"
QT_MOC_LITERAL(19, 327, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(20, 355, 5), // "error"
QT_MOC_LITERAL(21, 361, 18), // "createDownloadTask"
QT_MOC_LITERAL(22, 380, 18), // "resumeDownloadTask"
QT_MOC_LITERAL(23, 399, 18), // "cancelDownloadTask"
QT_MOC_LITERAL(24, 418, 4), // "name"
QT_MOC_LITERAL(25, 423, 10), // "mapTypeStr"
QT_MOC_LITERAL(26, 434, 10), // "topleftLon"
QT_MOC_LITERAL(27, 445, 10), // "topleftLat"
QT_MOC_LITERAL(28, 456, 14), // "bottomRightLon"
QT_MOC_LITERAL(29, 471, 14), // "bottomRightLat"
QT_MOC_LITERAL(30, 486, 7), // "minZoom"
QT_MOC_LITERAL(31, 494, 7), // "maxZoom"
QT_MOC_LITERAL(32, 502, 14), // "totalTileCount"
QT_MOC_LITERAL(33, 517, 17), // "totalTileCountStr"
QT_MOC_LITERAL(34, 535, 14), // "totalTilesSize"
QT_MOC_LITERAL(35, 550, 17), // "totalTilesSizeStr"
QT_MOC_LITERAL(36, 568, 15), // "uniqueTileCount"
QT_MOC_LITERAL(37, 584, 18), // "uniqueTileCountStr"
QT_MOC_LITERAL(38, 603, 14), // "uniqueTileSize"
QT_MOC_LITERAL(39, 618, 17), // "uniqueTileSizeStr"
QT_MOC_LITERAL(40, 636, 14), // "savedTileCount"
QT_MOC_LITERAL(41, 651, 17), // "savedTileCountStr"
QT_MOC_LITERAL(42, 669, 13), // "savedTileSize"
QT_MOC_LITERAL(43, 683, 16), // "savedTileSizeStr"
QT_MOC_LITERAL(44, 700, 14), // "downloadStatus"
QT_MOC_LITERAL(45, 715, 12), // "creationDate"
QT_MOC_LITERAL(46, 728, 8), // "complete"
QT_MOC_LITERAL(47, 737, 10), // "defaultSet"
QT_MOC_LITERAL(48, 748, 5), // "setID"
QT_MOC_LITERAL(49, 754, 8), // "deleting"
QT_MOC_LITERAL(50, 763, 11), // "downloading"
QT_MOC_LITERAL(51, 775, 10), // "errorCount"
QT_MOC_LITERAL(52, 786, 13), // "errorCountStr"
QT_MOC_LITERAL(53, 800, 8) // "selected"

    },
    "QGCCachedTileSet\0deletingChanged\0\0"
    "downloadingChanged\0totalTileCountChanged\0"
    "uniqueTileCountChanged\0uniqueTileSizeChanged\0"
    "totalTilesSizeChanged\0savedTileCountChanged\0"
    "savedTileSizeChanged\0completeChanged\0"
    "errorCountChanged\0selectedChanged\0"
    "nameChanged\0_tileListFetched\0"
    "QList<QGCTile*>\0tiles\0_networkReplyFinished\0"
    "_networkReplyError\0QNetworkReply::NetworkError\0"
    "error\0createDownloadTask\0resumeDownloadTask\0"
    "cancelDownloadTask\0name\0mapTypeStr\0"
    "topleftLon\0topleftLat\0bottomRightLon\0"
    "bottomRightLat\0minZoom\0maxZoom\0"
    "totalTileCount\0totalTileCountStr\0"
    "totalTilesSize\0totalTilesSizeStr\0"
    "uniqueTileCount\0uniqueTileCountStr\0"
    "uniqueTileSize\0uniqueTileSizeStr\0"
    "savedTileCount\0savedTileCountStr\0"
    "savedTileSize\0savedTileSizeStr\0"
    "downloadStatus\0creationDate\0complete\0"
    "defaultSet\0setID\0deleting\0downloading\0"
    "errorCount\0errorCountStr\0selected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCCachedTileSet[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
      30,  126, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x06 /* Public */,
       3,    0,  105,    2, 0x06 /* Public */,
       4,    0,  106,    2, 0x06 /* Public */,
       5,    0,  107,    2, 0x06 /* Public */,
       6,    0,  108,    2, 0x06 /* Public */,
       7,    0,  109,    2, 0x06 /* Public */,
       8,    0,  110,    2, 0x06 /* Public */,
       9,    0,  111,    2, 0x06 /* Public */,
      10,    0,  112,    2, 0x06 /* Public */,
      11,    0,  113,    2, 0x06 /* Public */,
      12,    0,  114,    2, 0x06 /* Public */,
      13,    0,  115,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    1,  116,    2, 0x08 /* Private */,
      17,    0,  119,    2, 0x08 /* Private */,
      18,    1,  120,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      21,    0,  123,    2, 0x02 /* Public */,
      22,    0,  124,    2, 0x02 /* Public */,
      23,    0,  125,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   20,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      24, QMetaType::QString, 0x00495001,
      25, QMetaType::QString, 0x00095401,
      26, QMetaType::Double, 0x00095401,
      27, QMetaType::Double, 0x00095401,
      28, QMetaType::Double, 0x00095401,
      29, QMetaType::Double, 0x00095401,
      30, QMetaType::Int, 0x00095401,
      31, QMetaType::Int, 0x00095401,
      32, QMetaType::UInt, 0x00495001,
      33, QMetaType::QString, 0x00495001,
      34, QMetaType::ULongLong, 0x00495001,
      35, QMetaType::QString, 0x00495001,
      36, QMetaType::UInt, 0x00495001,
      37, QMetaType::QString, 0x00495001,
      38, QMetaType::ULongLong, 0x00495001,
      39, QMetaType::QString, 0x00495001,
      40, QMetaType::UInt, 0x00495001,
      41, QMetaType::QString, 0x00495001,
      42, QMetaType::ULongLong, 0x00495001,
      43, QMetaType::QString, 0x00495001,
      44, QMetaType::QString, 0x00495001,
      45, QMetaType::QDateTime, 0x00095401,
      46, QMetaType::Bool, 0x00495001,
      47, QMetaType::Bool, 0x00095401,
      48, QMetaType::ULongLong, 0x00095401,
      49, QMetaType::Bool, 0x00495001,
      50, QMetaType::Bool, 0x00495001,
      51, QMetaType::UInt, 0x00495001,
      52, QMetaType::QString, 0x00495001,
      53, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
      11,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       2,
       2,
       5,
       5,
       3,
       3,
       4,
       4,
       6,
       6,
       7,
       7,
       7,
       0,
       8,
       0,
       0,
       0,
       1,
       9,
       9,
      10,

       0        // eod
};

void QGCCachedTileSet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCCachedTileSet *_t = static_cast<QGCCachedTileSet *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deletingChanged(); break;
        case 1: _t->downloadingChanged(); break;
        case 2: _t->totalTileCountChanged(); break;
        case 3: _t->uniqueTileCountChanged(); break;
        case 4: _t->uniqueTileSizeChanged(); break;
        case 5: _t->totalTilesSizeChanged(); break;
        case 6: _t->savedTileCountChanged(); break;
        case 7: _t->savedTileSizeChanged(); break;
        case 8: _t->completeChanged(); break;
        case 9: _t->errorCountChanged(); break;
        case 10: _t->selectedChanged(); break;
        case 11: _t->nameChanged(); break;
        case 12: _t->_tileListFetched((*reinterpret_cast< QList<QGCTile*>(*)>(_a[1]))); break;
        case 13: _t->_networkReplyFinished(); break;
        case 14: _t->_networkReplyError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 15: _t->createDownloadTask(); break;
        case 16: _t->resumeDownloadTask(); break;
        case 17: _t->cancelDownloadTask(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGCCachedTileSet::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCachedTileSet::deletingChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QGCCachedTileSet::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCachedTileSet::downloadingChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QGCCachedTileSet::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCachedTileSet::totalTileCountChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QGCCachedTileSet::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCachedTileSet::uniqueTileCountChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QGCCachedTileSet::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCachedTileSet::uniqueTileSizeChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QGCCachedTileSet::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCachedTileSet::totalTilesSizeChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QGCCachedTileSet::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCachedTileSet::savedTileCountChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QGCCachedTileSet::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCachedTileSet::savedTileSizeChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QGCCachedTileSet::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCachedTileSet::completeChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QGCCachedTileSet::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCachedTileSet::errorCountChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QGCCachedTileSet::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCachedTileSet::selectedChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (QGCCachedTileSet::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCCachedTileSet::nameChanged)) {
                *result = 11;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QGCCachedTileSet *_t = static_cast<QGCCachedTileSet *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->mapTypeStr(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->topleftLon(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->topleftLat(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->bottomRightLon(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->bottomRightLat(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->minZoom(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->maxZoom(); break;
        case 8: *reinterpret_cast< quint32*>(_v) = _t->totalTileCount(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->totalTileCountStr(); break;
        case 10: *reinterpret_cast< quint64*>(_v) = _t->totalTilesSize(); break;
        case 11: *reinterpret_cast< QString*>(_v) = _t->totalTilesSizeStr(); break;
        case 12: *reinterpret_cast< quint32*>(_v) = _t->uniqueTileCount(); break;
        case 13: *reinterpret_cast< QString*>(_v) = _t->uniqueTileCountStr(); break;
        case 14: *reinterpret_cast< quint64*>(_v) = _t->uniqueTileSize(); break;
        case 15: *reinterpret_cast< QString*>(_v) = _t->uniqueTileSizeStr(); break;
        case 16: *reinterpret_cast< quint32*>(_v) = _t->savedTileCount(); break;
        case 17: *reinterpret_cast< QString*>(_v) = _t->savedTileCountStr(); break;
        case 18: *reinterpret_cast< quint64*>(_v) = _t->savedTileSize(); break;
        case 19: *reinterpret_cast< QString*>(_v) = _t->savedTileSizeStr(); break;
        case 20: *reinterpret_cast< QString*>(_v) = _t->downloadStatus(); break;
        case 21: *reinterpret_cast< QDateTime*>(_v) = _t->creationDate(); break;
        case 22: *reinterpret_cast< bool*>(_v) = _t->complete(); break;
        case 23: *reinterpret_cast< bool*>(_v) = _t->defaultSet(); break;
        case 24: *reinterpret_cast< quint64*>(_v) = _t->setID(); break;
        case 25: *reinterpret_cast< bool*>(_v) = _t->deleting(); break;
        case 26: *reinterpret_cast< bool*>(_v) = _t->downloading(); break;
        case 27: *reinterpret_cast< quint32*>(_v) = _t->errorCount(); break;
        case 28: *reinterpret_cast< QString*>(_v) = _t->errorCountStr(); break;
        case 29: *reinterpret_cast< bool*>(_v) = _t->selected(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QGCCachedTileSet *_t = static_cast<QGCCachedTileSet *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 29: _t->setSelected(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QGCCachedTileSet::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QGCCachedTileSet.data,
      qt_meta_data_QGCCachedTileSet,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCCachedTileSet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCCachedTileSet::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCCachedTileSet.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGCCachedTileSet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 30;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 30;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 30;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 30;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 30;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QGCCachedTileSet::deletingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGCCachedTileSet::downloadingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QGCCachedTileSet::totalTileCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QGCCachedTileSet::uniqueTileCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QGCCachedTileSet::uniqueTileSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QGCCachedTileSet::totalTilesSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QGCCachedTileSet::savedTileCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QGCCachedTileSet::savedTileSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QGCCachedTileSet::completeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QGCCachedTileSet::errorCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void QGCCachedTileSet::selectedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void QGCCachedTileSet::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
