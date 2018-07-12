/****************************************************************************
** Meta object code from reading C++ file 'QGCFileDialogController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/QmlControls/QGCFileDialogController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCFileDialogController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCFileDialogController_t {
    QByteArrayData data[13];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCFileDialogController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCFileDialogController_t qt_meta_stringdata_QGCFileDialogController = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QGCFileDialogController"
QT_MOC_LITERAL(1, 24, 8), // "getFiles"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 13), // "directoryPath"
QT_MOC_LITERAL(4, 48, 14), // "fileExtensions"
QT_MOC_LITERAL(5, 63, 21), // "filenameWithExtension"
QT_MOC_LITERAL(6, 85, 8), // "filename"
QT_MOC_LITERAL(7, 94, 13), // "fileExtension"
QT_MOC_LITERAL(8, 108, 22), // "fullyQualifiedFilename"
QT_MOC_LITERAL(9, 131, 10), // "fileExists"
QT_MOC_LITERAL(10, 142, 10), // "deleteFile"
QT_MOC_LITERAL(11, 153, 14), // "urlToLocalFile"
QT_MOC_LITERAL(12, 168, 3) // "url"

    },
    "QGCFileDialogController\0getFiles\0\0"
    "directoryPath\0fileExtensions\0"
    "filenameWithExtension\0filename\0"
    "fileExtension\0fullyQualifiedFilename\0"
    "fileExists\0deleteFile\0urlToLocalFile\0"
    "url"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCFileDialogController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x02 /* Public */,
       5,    2,   49,    2, 0x02 /* Public */,
       8,    3,   54,    2, 0x02 /* Public */,
       9,    1,   61,    2, 0x02 /* Public */,
      10,    1,   64,    2, 0x02 /* Public */,
      11,    1,   67,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QStringList, QMetaType::QString, QMetaType::QStringList,    3,    4,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    6,    7,
    QMetaType::Bool, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::QString, QMetaType::QUrl,   12,

       0        // eod
};

void QGCFileDialogController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCFileDialogController *_t = static_cast<QGCFileDialogController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QStringList _r = _t->getFiles((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 1: { QString _r = _t->filenameWithExtension((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: { QString _r = _t->fullyQualifiedFilename((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->fileExists((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->deleteFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: { QString _r = _t->urlToLocalFile((*reinterpret_cast< QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject QGCFileDialogController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QGCFileDialogController.data,
      qt_meta_data_QGCFileDialogController,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCFileDialogController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCFileDialogController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCFileDialogController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGCFileDialogController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
