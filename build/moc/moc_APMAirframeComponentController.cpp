/****************************************************************************
** Meta object code from reading C++ file 'APMAirframeComponentController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/AutoPilotPlugins/APM/APMAirframeComponentController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'APMAirframeComponentController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_APMAirframeComponentController_t {
    QByteArrayData data[30];
    char stringdata0[494];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_APMAirframeComponentController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_APMAirframeComponentController_t qt_meta_stringdata_APMAirframeComponentController = {
    {
QT_MOC_LITERAL(0, 0, 30), // "APMAirframeComponentController"
QT_MOC_LITERAL(1, 31, 22), // "loadAirframesCompleted"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 26), // "currentAirframeTypeChanged"
QT_MOC_LITERAL(4, 82, 16), // "APMAirframeType*"
QT_MOC_LITERAL(5, 99, 12), // "airframeType"
QT_MOC_LITERAL(6, 112, 19), // "currentAirframeType"
QT_MOC_LITERAL(7, 132, 23), // "currentAirframeTypeName"
QT_MOC_LITERAL(8, 156, 22), // "setCurrentAirframeType"
QT_MOC_LITERAL(9, 179, 1), // "t"
QT_MOC_LITERAL(10, 181, 14), // "_fillAirFrames"
QT_MOC_LITERAL(11, 196, 17), // "_factFrameChanged"
QT_MOC_LITERAL(12, 214, 1), // "v"
QT_MOC_LITERAL(13, 216, 27), // "_githubJsonDownloadFinished"
QT_MOC_LITERAL(14, 244, 10), // "remoteFile"
QT_MOC_LITERAL(15, 255, 9), // "localFile"
QT_MOC_LITERAL(16, 265, 24), // "_githubJsonDownloadError"
QT_MOC_LITERAL(17, 290, 8), // "errorMsg"
QT_MOC_LITERAL(18, 299, 26), // "_paramFileDownloadFinished"
QT_MOC_LITERAL(19, 326, 23), // "_paramFileDownloadError"
QT_MOC_LITERAL(20, 350, 14), // "loadParameters"
QT_MOC_LITERAL(21, 365, 9), // "paramFile"
QT_MOC_LITERAL(22, 375, 18), // "airframeTypesModel"
QT_MOC_LITERAL(23, 394, 19), // "QmlObjectListModel*"
QT_MOC_LITERAL(24, 414, 7), // "FrameId"
QT_MOC_LITERAL(25, 422, 15), // "FRAME_TYPE_PLUS"
QT_MOC_LITERAL(26, 438, 12), // "FRAME_TYPE_X"
QT_MOC_LITERAL(27, 451, 12), // "FRAME_TYPE_V"
QT_MOC_LITERAL(28, 464, 12), // "FRAME_TYPE_H"
QT_MOC_LITERAL(29, 477, 16) // "FRAME_TYPE_NEWY6"

    },
    "APMAirframeComponentController\0"
    "loadAirframesCompleted\0\0"
    "currentAirframeTypeChanged\0APMAirframeType*\0"
    "airframeType\0currentAirframeType\0"
    "currentAirframeTypeName\0setCurrentAirframeType\0"
    "t\0_fillAirFrames\0_factFrameChanged\0v\0"
    "_githubJsonDownloadFinished\0remoteFile\0"
    "localFile\0_githubJsonDownloadError\0"
    "errorMsg\0_paramFileDownloadFinished\0"
    "_paramFileDownloadError\0loadParameters\0"
    "paramFile\0airframeTypesModel\0"
    "QmlObjectListModel*\0FrameId\0FRAME_TYPE_PLUS\0"
    "FRAME_TYPE_X\0FRAME_TYPE_V\0FRAME_TYPE_H\0"
    "FRAME_TYPE_NEWY6"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_APMAirframeComponentController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       2,  106, // properties
       1,  114, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    1,   75,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   78,    2, 0x0a /* Public */,
       7,    0,   79,    2, 0x0a /* Public */,
       8,    1,   80,    2, 0x0a /* Public */,
      10,    0,   83,    2, 0x08 /* Private */,
      11,    1,   84,    2, 0x08 /* Private */,
      13,    2,   87,    2, 0x08 /* Private */,
      16,    1,   92,    2, 0x08 /* Private */,
      18,    2,   95,    2, 0x08 /* Private */,
      19,    1,  100,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      20,    1,  103,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    0x80000000 | 4,
    QMetaType::QString,
    QMetaType::Void, 0x80000000 | 4,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   14,   15,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   14,   15,
    QMetaType::Void, QMetaType::QString,   17,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,   21,

 // properties: name, type, flags
      22, 0x80000000 | 23, 0x00095409,
       6, 0x80000000 | 4, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,

 // enums: name, flags, count, data
      24, 0x0,    5,  118,

 // enum data: key, value
      25, uint(APMAirframeComponentController::FRAME_TYPE_PLUS),
      26, uint(APMAirframeComponentController::FRAME_TYPE_X),
      27, uint(APMAirframeComponentController::FRAME_TYPE_V),
      28, uint(APMAirframeComponentController::FRAME_TYPE_H),
      29, uint(APMAirframeComponentController::FRAME_TYPE_NEWY6),

       0        // eod
};

void APMAirframeComponentController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        APMAirframeComponentController *_t = static_cast<APMAirframeComponentController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadAirframesCompleted(); break;
        case 1: _t->currentAirframeTypeChanged((*reinterpret_cast< APMAirframeType*(*)>(_a[1]))); break;
        case 2: { APMAirframeType* _r = _t->currentAirframeType();
            if (_a[0]) *reinterpret_cast< APMAirframeType**>(_a[0]) = std::move(_r); }  break;
        case 3: { QString _r = _t->currentAirframeTypeName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->setCurrentAirframeType((*reinterpret_cast< APMAirframeType*(*)>(_a[1]))); break;
        case 5: _t->_fillAirFrames(); break;
        case 6: _t->_factFrameChanged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 7: _t->_githubJsonDownloadFinished((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 8: _t->_githubJsonDownloadError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->_paramFileDownloadFinished((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 10: _t->_paramFileDownloadError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->loadParameters((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< APMAirframeType* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< APMAirframeType* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (APMAirframeComponentController::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&APMAirframeComponentController::loadAirframesCompleted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (APMAirframeComponentController::*_t)(APMAirframeType * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&APMAirframeComponentController::currentAirframeTypeChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< APMAirframeType* >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlObjectListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        APMAirframeComponentController *_t = static_cast<APMAirframeComponentController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QmlObjectListModel**>(_v) = _t->_airframeTypesModel; break;
        case 1: *reinterpret_cast< APMAirframeType**>(_v) = _t->currentAirframeType(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        APMAirframeComponentController *_t = static_cast<APMAirframeComponentController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setCurrentAirframeType(*reinterpret_cast< APMAirframeType**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject APMAirframeComponentController::staticMetaObject = {
    { &FactPanelController::staticMetaObject, qt_meta_stringdata_APMAirframeComponentController.data,
      qt_meta_data_APMAirframeComponentController,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *APMAirframeComponentController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *APMAirframeComponentController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_APMAirframeComponentController.stringdata0))
        return static_cast<void*>(this);
    return FactPanelController::qt_metacast(_clname);
}

int APMAirframeComponentController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FactPanelController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void APMAirframeComponentController::loadAirframesCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void APMAirframeComponentController::currentAirframeTypeChanged(APMAirframeType * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_APMAirframe_t {
    QByteArrayData data[4];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_APMAirframe_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_APMAirframe_t qt_meta_stringdata_APMAirframe = {
    {
QT_MOC_LITERAL(0, 0, 11), // "APMAirframe"
QT_MOC_LITERAL(1, 12, 4), // "name"
QT_MOC_LITERAL(2, 17, 4), // "type"
QT_MOC_LITERAL(3, 22, 6) // "params"

    },
    "APMAirframe\0name\0type\0params"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_APMAirframe[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095401,
       2, QMetaType::Int, 0x00095401,
       3, QMetaType::QString, 0x00095401,

       0        // eod
};

void APMAirframe::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        APMAirframe *_t = static_cast<APMAirframe *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->_name; break;
        case 1: *reinterpret_cast< int*>(_v) = _t->_type; break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->_paramsFile; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject APMAirframe::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_APMAirframe.data,
      qt_meta_data_APMAirframe,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *APMAirframe::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *APMAirframe::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_APMAirframe.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int APMAirframe::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_APMAirframeType_t {
    QByteArrayData data[6];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_APMAirframeType_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_APMAirframeType_t qt_meta_stringdata_APMAirframeType = {
    {
QT_MOC_LITERAL(0, 0, 15), // "APMAirframeType"
QT_MOC_LITERAL(1, 16, 4), // "name"
QT_MOC_LITERAL(2, 21, 13), // "imageResource"
QT_MOC_LITERAL(3, 35, 9), // "airframes"
QT_MOC_LITERAL(4, 45, 4), // "type"
QT_MOC_LITERAL(5, 50, 5) // "dirty"

    },
    "APMAirframeType\0name\0imageResource\0"
    "airframes\0type\0dirty"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_APMAirframeType[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095401,
       2, QMetaType::QString, 0x00095401,
       3, QMetaType::QVariantList, 0x00095401,
       4, QMetaType::Int, 0x00095401,
       5, QMetaType::Bool, 0x00095401,

       0        // eod
};

void APMAirframeType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        APMAirframeType *_t = static_cast<APMAirframeType *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->_name; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->_imageResource; break;
        case 2: *reinterpret_cast< QVariantList*>(_v) = _t->_airframes; break;
        case 3: *reinterpret_cast< int*>(_v) = _t->_type; break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->_dirty; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject APMAirframeType::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_APMAirframeType.data,
      qt_meta_data_APMAirframeType,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *APMAirframeType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *APMAirframeType::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_APMAirframeType.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int APMAirframeType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
