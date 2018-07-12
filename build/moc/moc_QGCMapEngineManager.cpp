/****************************************************************************
** Meta object code from reading C++ file 'QGCMapEngineManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/QtLocationPlugin/QMLControl/QGCMapEngineManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCMapEngineManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCMapEngineManager_t {
    QByteArrayData data[92];
    char stringdata0[1143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCMapEngineManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCMapEngineManager_t qt_meta_stringdata_QGCMapEngineManager = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QGCMapEngineManager"
QT_MOC_LITERAL(1, 20, 13), // "tileX0Changed"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 13), // "tileX1Changed"
QT_MOC_LITERAL(4, 49, 13), // "tileY0Changed"
QT_MOC_LITERAL(5, 63, 13), // "tileY1Changed"
QT_MOC_LITERAL(6, 77, 16), // "tileCountChanged"
QT_MOC_LITERAL(7, 94, 15), // "tileSizeChanged"
QT_MOC_LITERAL(8, 110, 15), // "tileSetsChanged"
QT_MOC_LITERAL(9, 126, 18), // "maxMemCacheChanged"
QT_MOC_LITERAL(10, 145, 19), // "maxDiskCacheChanged"
QT_MOC_LITERAL(11, 165, 19), // "errorMessageChanged"
QT_MOC_LITERAL(12, 185, 21), // "fetchElevationChanged"
QT_MOC_LITERAL(13, 207, 20), // "freeDiskSpaceChanged"
QT_MOC_LITERAL(14, 228, 20), // "selectedCountChanged"
QT_MOC_LITERAL(15, 249, 21), // "actionProgressChanged"
QT_MOC_LITERAL(16, 271, 19), // "importActionChanged"
QT_MOC_LITERAL(17, 291, 20), // "importReplaceChanged"
QT_MOC_LITERAL(18, 312, 9), // "taskError"
QT_MOC_LITERAL(19, 322, 20), // "QGCMapTask::TaskType"
QT_MOC_LITERAL(20, 343, 4), // "type"
QT_MOC_LITERAL(21, 348, 5), // "error"
QT_MOC_LITERAL(22, 354, 13), // "_tileSetSaved"
QT_MOC_LITERAL(23, 368, 17), // "QGCCachedTileSet*"
QT_MOC_LITERAL(24, 386, 3), // "set"
QT_MOC_LITERAL(25, 390, 15), // "_tileSetFetched"
QT_MOC_LITERAL(26, 406, 8), // "tileSets"
QT_MOC_LITERAL(27, 415, 15), // "_tileSetDeleted"
QT_MOC_LITERAL(28, 431, 5), // "setID"
QT_MOC_LITERAL(29, 437, 13), // "_updateTotals"
QT_MOC_LITERAL(30, 451, 10), // "totaltiles"
QT_MOC_LITERAL(31, 462, 9), // "totalsize"
QT_MOC_LITERAL(32, 472, 12), // "defaulttiles"
QT_MOC_LITERAL(33, 485, 11), // "defaultsize"
QT_MOC_LITERAL(34, 497, 15), // "_resetCompleted"
QT_MOC_LITERAL(35, 513, 16), // "_actionCompleted"
QT_MOC_LITERAL(36, 530, 22), // "_actionProgressHandler"
QT_MOC_LITERAL(37, 553, 10), // "percentage"
QT_MOC_LITERAL(38, 564, 12), // "loadTileSets"
QT_MOC_LITERAL(39, 577, 20), // "updateForCurrentView"
QT_MOC_LITERAL(40, 598, 4), // "lon0"
QT_MOC_LITERAL(41, 603, 4), // "lat0"
QT_MOC_LITERAL(42, 608, 4), // "lon1"
QT_MOC_LITERAL(43, 613, 4), // "lat1"
QT_MOC_LITERAL(44, 618, 7), // "minZoom"
QT_MOC_LITERAL(45, 626, 7), // "maxZoom"
QT_MOC_LITERAL(46, 634, 7), // "mapName"
QT_MOC_LITERAL(47, 642, 13), // "startDownload"
QT_MOC_LITERAL(48, 656, 4), // "name"
QT_MOC_LITERAL(49, 661, 7), // "mapType"
QT_MOC_LITERAL(50, 669, 11), // "saveSetting"
QT_MOC_LITERAL(51, 681, 3), // "key"
QT_MOC_LITERAL(52, 685, 5), // "value"
QT_MOC_LITERAL(53, 691, 11), // "loadSetting"
QT_MOC_LITERAL(54, 703, 12), // "defaultValue"
QT_MOC_LITERAL(55, 716, 13), // "deleteTileSet"
QT_MOC_LITERAL(56, 730, 7), // "tileSet"
QT_MOC_LITERAL(57, 738, 13), // "renameTileSet"
QT_MOC_LITERAL(58, 752, 7), // "newName"
QT_MOC_LITERAL(59, 760, 13), // "getUniqueName"
QT_MOC_LITERAL(60, 774, 8), // "findName"
QT_MOC_LITERAL(61, 783, 9), // "selectAll"
QT_MOC_LITERAL(62, 793, 10), // "selectNone"
QT_MOC_LITERAL(63, 804, 10), // "exportSets"
QT_MOC_LITERAL(64, 815, 4), // "path"
QT_MOC_LITERAL(65, 820, 10), // "importSets"
QT_MOC_LITERAL(66, 831, 11), // "resetAction"
QT_MOC_LITERAL(67, 843, 6), // "tileX0"
QT_MOC_LITERAL(68, 850, 6), // "tileX1"
QT_MOC_LITERAL(69, 857, 6), // "tileY0"
QT_MOC_LITERAL(70, 864, 6), // "tileY1"
QT_MOC_LITERAL(71, 871, 9), // "tileCount"
QT_MOC_LITERAL(72, 881, 12), // "tileCountStr"
QT_MOC_LITERAL(73, 894, 8), // "tileSize"
QT_MOC_LITERAL(74, 903, 11), // "tileSizeStr"
QT_MOC_LITERAL(75, 915, 19), // "QmlObjectListModel*"
QT_MOC_LITERAL(76, 935, 7), // "mapList"
QT_MOC_LITERAL(77, 943, 11), // "maxMemCache"
QT_MOC_LITERAL(78, 955, 12), // "maxDiskCache"
QT_MOC_LITERAL(79, 968, 12), // "errorMessage"
QT_MOC_LITERAL(80, 981, 14), // "fetchElevation"
QT_MOC_LITERAL(81, 996, 13), // "freeDiskSpace"
QT_MOC_LITERAL(82, 1010, 9), // "diskSpace"
QT_MOC_LITERAL(83, 1020, 13), // "selectedCount"
QT_MOC_LITERAL(84, 1034, 14), // "actionProgress"
QT_MOC_LITERAL(85, 1049, 12), // "importAction"
QT_MOC_LITERAL(86, 1062, 12), // "ImportAction"
QT_MOC_LITERAL(87, 1075, 13), // "importReplace"
QT_MOC_LITERAL(88, 1089, 10), // "ActionNone"
QT_MOC_LITERAL(89, 1100, 15), // "ActionImporting"
QT_MOC_LITERAL(90, 1116, 15), // "ActionExporting"
QT_MOC_LITERAL(91, 1132, 10) // "ActionDone"

    },
    "QGCMapEngineManager\0tileX0Changed\0\0"
    "tileX1Changed\0tileY0Changed\0tileY1Changed\0"
    "tileCountChanged\0tileSizeChanged\0"
    "tileSetsChanged\0maxMemCacheChanged\0"
    "maxDiskCacheChanged\0errorMessageChanged\0"
    "fetchElevationChanged\0freeDiskSpaceChanged\0"
    "selectedCountChanged\0actionProgressChanged\0"
    "importActionChanged\0importReplaceChanged\0"
    "taskError\0QGCMapTask::TaskType\0type\0"
    "error\0_tileSetSaved\0QGCCachedTileSet*\0"
    "set\0_tileSetFetched\0tileSets\0"
    "_tileSetDeleted\0setID\0_updateTotals\0"
    "totaltiles\0totalsize\0defaulttiles\0"
    "defaultsize\0_resetCompleted\0"
    "_actionCompleted\0_actionProgressHandler\0"
    "percentage\0loadTileSets\0updateForCurrentView\0"
    "lon0\0lat0\0lon1\0lat1\0minZoom\0maxZoom\0"
    "mapName\0startDownload\0name\0mapType\0"
    "saveSetting\0key\0value\0loadSetting\0"
    "defaultValue\0deleteTileSet\0tileSet\0"
    "renameTileSet\0newName\0getUniqueName\0"
    "findName\0selectAll\0selectNone\0exportSets\0"
    "path\0importSets\0resetAction\0tileX0\0"
    "tileX1\0tileY0\0tileY1\0tileCount\0"
    "tileCountStr\0tileSize\0tileSizeStr\0"
    "QmlObjectListModel*\0mapList\0maxMemCache\0"
    "maxDiskCache\0errorMessage\0fetchElevation\0"
    "freeDiskSpace\0diskSpace\0selectedCount\0"
    "actionProgress\0importAction\0ImportAction\0"
    "importReplace\0ActionNone\0ActionImporting\0"
    "ActionExporting\0ActionDone"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCMapEngineManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      40,   14, // methods
      20,  312, // properties
       1,  392, // enums/sets
       0,    0, // constructors
       0,       // flags
      16,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  214,    2, 0x06 /* Public */,
       3,    0,  215,    2, 0x06 /* Public */,
       4,    0,  216,    2, 0x06 /* Public */,
       5,    0,  217,    2, 0x06 /* Public */,
       6,    0,  218,    2, 0x06 /* Public */,
       7,    0,  219,    2, 0x06 /* Public */,
       8,    0,  220,    2, 0x06 /* Public */,
       9,    0,  221,    2, 0x06 /* Public */,
      10,    0,  222,    2, 0x06 /* Public */,
      11,    0,  223,    2, 0x06 /* Public */,
      12,    0,  224,    2, 0x06 /* Public */,
      13,    0,  225,    2, 0x06 /* Public */,
      14,    0,  226,    2, 0x06 /* Public */,
      15,    0,  227,    2, 0x06 /* Public */,
      16,    0,  228,    2, 0x06 /* Public */,
      17,    0,  229,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    2,  230,    2, 0x0a /* Public */,
      22,    1,  235,    2, 0x08 /* Private */,
      25,    1,  238,    2, 0x08 /* Private */,
      27,    1,  241,    2, 0x08 /* Private */,
      29,    4,  244,    2, 0x08 /* Private */,
      34,    0,  253,    2, 0x08 /* Private */,
      35,    0,  254,    2, 0x08 /* Private */,
      36,    1,  255,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      38,    0,  258,    2, 0x02 /* Public */,
      39,    7,  259,    2, 0x02 /* Public */,
      47,    2,  274,    2, 0x02 /* Public */,
      50,    2,  279,    2, 0x02 /* Public */,
      53,    2,  284,    2, 0x02 /* Public */,
      55,    1,  289,    2, 0x02 /* Public */,
      57,    2,  292,    2, 0x02 /* Public */,
      59,    0,  297,    2, 0x02 /* Public */,
      60,    1,  298,    2, 0x02 /* Public */,
      61,    0,  301,    2, 0x02 /* Public */,
      62,    0,  302,    2, 0x02 /* Public */,
      63,    1,  303,    2, 0x02 /* Public */,
      63,    0,  306,    2, 0x22 /* Public | MethodCloned */,
      65,    1,  307,    2, 0x02 /* Public */,
      65,    0,  310,    2, 0x22 /* Public | MethodCloned */,
      66,    0,  311,    2, 0x02 /* Public */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 19, QMetaType::QString,   20,   21,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, 0x80000000 | 23,   26,
    QMetaType::Void, QMetaType::ULongLong,   28,
    QMetaType::Void, QMetaType::UInt, QMetaType::ULongLong, QMetaType::UInt, QMetaType::ULongLong,   30,   31,   32,   33,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   37,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Int, QMetaType::Int, QMetaType::QString,   40,   41,   42,   43,   44,   45,   46,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   48,   49,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   51,   52,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,   51,   54,
    QMetaType::Void, 0x80000000 | 23,   56,
    QMetaType::Void, 0x80000000 | 23, QMetaType::QString,   56,   58,
    QMetaType::QString,
    QMetaType::Bool, QMetaType::QString,   48,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,   64,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QString,   64,
    QMetaType::Bool,
    QMetaType::Void,

 // properties: name, type, flags
      67, QMetaType::Int, 0x00495001,
      68, QMetaType::Int, 0x00495001,
      69, QMetaType::Int, 0x00495001,
      70, QMetaType::Int, 0x00495001,
      71, QMetaType::ULongLong, 0x00495001,
      72, QMetaType::QString, 0x00495001,
      73, QMetaType::ULongLong, 0x00495001,
      74, QMetaType::QString, 0x00495001,
      26, 0x80000000 | 75, 0x00495009,
      76, QMetaType::QStringList, 0x00095401,
      77, QMetaType::UInt, 0x00495103,
      78, QMetaType::UInt, 0x00495103,
      79, QMetaType::QString, 0x00495001,
      80, QMetaType::Bool, 0x00495103,
      81, QMetaType::UInt, 0x00495001,
      82, QMetaType::UInt, 0x00095401,
      83, QMetaType::Int, 0x00495001,
      84, QMetaType::Int, 0x00495001,
      85, 0x80000000 | 86, 0x0049510b,
      87, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       4,
       5,
       5,
       6,
       0,
       7,
       8,
       9,
      10,
      11,
       0,
      12,
      13,
      14,
      15,

 // enums: name, flags, count, data
      86, 0x0,    4,  396,

 // enum data: key, value
      88, uint(QGCMapEngineManager::ActionNone),
      89, uint(QGCMapEngineManager::ActionImporting),
      90, uint(QGCMapEngineManager::ActionExporting),
      91, uint(QGCMapEngineManager::ActionDone),

       0        // eod
};

void QGCMapEngineManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCMapEngineManager *_t = static_cast<QGCMapEngineManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tileX0Changed(); break;
        case 1: _t->tileX1Changed(); break;
        case 2: _t->tileY0Changed(); break;
        case 3: _t->tileY1Changed(); break;
        case 4: _t->tileCountChanged(); break;
        case 5: _t->tileSizeChanged(); break;
        case 6: _t->tileSetsChanged(); break;
        case 7: _t->maxMemCacheChanged(); break;
        case 8: _t->maxDiskCacheChanged(); break;
        case 9: _t->errorMessageChanged(); break;
        case 10: _t->fetchElevationChanged(); break;
        case 11: _t->freeDiskSpaceChanged(); break;
        case 12: _t->selectedCountChanged(); break;
        case 13: _t->actionProgressChanged(); break;
        case 14: _t->importActionChanged(); break;
        case 15: _t->importReplaceChanged(); break;
        case 16: _t->taskError((*reinterpret_cast< QGCMapTask::TaskType(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 17: _t->_tileSetSaved((*reinterpret_cast< QGCCachedTileSet*(*)>(_a[1]))); break;
        case 18: _t->_tileSetFetched((*reinterpret_cast< QGCCachedTileSet*(*)>(_a[1]))); break;
        case 19: _t->_tileSetDeleted((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 20: _t->_updateTotals((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3])),(*reinterpret_cast< quint64(*)>(_a[4]))); break;
        case 21: _t->_resetCompleted(); break;
        case 22: _t->_actionCompleted(); break;
        case 23: _t->_actionProgressHandler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->loadTileSets(); break;
        case 25: _t->updateForCurrentView((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7]))); break;
        case 26: _t->startDownload((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 27: _t->saveSetting((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 28: { QString _r = _t->loadSetting((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 29: _t->deleteTileSet((*reinterpret_cast< QGCCachedTileSet*(*)>(_a[1]))); break;
        case 30: _t->renameTileSet((*reinterpret_cast< QGCCachedTileSet*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 31: { QString _r = _t->getUniqueName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 32: { bool _r = _t->findName((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 33: _t->selectAll(); break;
        case 34: _t->selectNone(); break;
        case 35: { bool _r = _t->exportSets((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 36: { bool _r = _t->exportSets();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 37: { bool _r = _t->importSets((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 38: { bool _r = _t->importSets();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 39: _t->resetAction(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGCCachedTileSet* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGCCachedTileSet* >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGCCachedTileSet* >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGCCachedTileSet* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGCMapEngineManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapEngineManager::tileX0Changed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QGCMapEngineManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapEngineManager::tileX1Changed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QGCMapEngineManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapEngineManager::tileY0Changed)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QGCMapEngineManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapEngineManager::tileY1Changed)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QGCMapEngineManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapEngineManager::tileCountChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QGCMapEngineManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapEngineManager::tileSizeChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QGCMapEngineManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapEngineManager::tileSetsChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QGCMapEngineManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapEngineManager::maxMemCacheChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QGCMapEngineManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapEngineManager::maxDiskCacheChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QGCMapEngineManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapEngineManager::errorMessageChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QGCMapEngineManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapEngineManager::fetchElevationChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (QGCMapEngineManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapEngineManager::freeDiskSpaceChanged)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (QGCMapEngineManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapEngineManager::selectedCountChanged)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (QGCMapEngineManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapEngineManager::actionProgressChanged)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (QGCMapEngineManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapEngineManager::importActionChanged)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (QGCMapEngineManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapEngineManager::importReplaceChanged)) {
                *result = 15;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QGCMapEngineManager *_t = static_cast<QGCMapEngineManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->tileX0(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->tileX1(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->tileY0(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->tileY1(); break;
        case 4: *reinterpret_cast< quint64*>(_v) = _t->tileCount(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->tileCountStr(); break;
        case 6: *reinterpret_cast< quint64*>(_v) = _t->tileSize(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->tileSizeStr(); break;
        case 8: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->tileSets(); break;
        case 9: *reinterpret_cast< QStringList*>(_v) = _t->mapList(); break;
        case 10: *reinterpret_cast< quint32*>(_v) = _t->maxMemCache(); break;
        case 11: *reinterpret_cast< quint32*>(_v) = _t->maxDiskCache(); break;
        case 12: *reinterpret_cast< QString*>(_v) = _t->errorMessage(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->fetchElevation(); break;
        case 14: *reinterpret_cast< quint32*>(_v) = _t->freeDiskSpace(); break;
        case 15: *reinterpret_cast< quint32*>(_v) = _t->diskSpace(); break;
        case 16: *reinterpret_cast< int*>(_v) = _t->selectedCount(); break;
        case 17: *reinterpret_cast< int*>(_v) = _t->actionProgress(); break;
        case 18: *reinterpret_cast< ImportAction*>(_v) = _t->importAction(); break;
        case 19: *reinterpret_cast< bool*>(_v) = _t->importReplace(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QGCMapEngineManager *_t = static_cast<QGCMapEngineManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 10: _t->setMaxMemCache(*reinterpret_cast< quint32*>(_v)); break;
        case 11: _t->setMaxDiskCache(*reinterpret_cast< quint32*>(_v)); break;
        case 13: _t->setFetchElevation(*reinterpret_cast< bool*>(_v)); break;
        case 18: _t->setImportAction(*reinterpret_cast< ImportAction*>(_v)); break;
        case 19: _t->setImportReplace(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QGCMapEngineManager::staticMetaObject = {
    { &QGCTool::staticMetaObject, qt_meta_stringdata_QGCMapEngineManager.data,
      qt_meta_data_QGCMapEngineManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCMapEngineManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCMapEngineManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCMapEngineManager.stringdata0))
        return static_cast<void*>(this);
    return QGCTool::qt_metacast(_clname);
}

int QGCMapEngineManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 20;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QGCMapEngineManager::tileX0Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGCMapEngineManager::tileX1Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QGCMapEngineManager::tileY0Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QGCMapEngineManager::tileY1Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QGCMapEngineManager::tileCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QGCMapEngineManager::tileSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QGCMapEngineManager::tileSetsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QGCMapEngineManager::maxMemCacheChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QGCMapEngineManager::maxDiskCacheChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QGCMapEngineManager::errorMessageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void QGCMapEngineManager::fetchElevationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void QGCMapEngineManager::freeDiskSpaceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void QGCMapEngineManager::selectedCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void QGCMapEngineManager::actionProgressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void QGCMapEngineManager::importActionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void QGCMapEngineManager::importReplaceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
