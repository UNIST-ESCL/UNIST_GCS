/****************************************************************************
** Meta object code from reading C++ file 'QGCApplication.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/QGCApplication.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCApplication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCApplication_t {
    QByteArrayData data[14];
    char stringdata0[276];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCApplication_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCApplication_t qt_meta_stringdata_QGCApplication = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QGCApplication"
QT_MOC_LITERAL(1, 15, 20), // "checkForLostLogFiles"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 33), // "informationMessageBoxOnMainTh..."
QT_MOC_LITERAL(4, 71, 5), // "title"
QT_MOC_LITERAL(5, 77, 3), // "msg"
QT_MOC_LITERAL(6, 81, 29), // "warningMessageBoxOnMainThread"
QT_MOC_LITERAL(7, 111, 30), // "criticalMessageBoxOnMainThread"
QT_MOC_LITERAL(8, 142, 13), // "showSetupView"
QT_MOC_LITERAL(9, 156, 21), // "qmlAttemptWindowClose"
QT_MOC_LITERAL(10, 178, 28), // "saveTelemetryLogOnMainThread"
QT_MOC_LITERAL(11, 207, 11), // "tempLogfile"
QT_MOC_LITERAL(12, 219, 34), // "checkTelemetrySavePathOnMainT..."
QT_MOC_LITERAL(13, 254, 21) // "_missingParamsDisplay"

    },
    "QGCApplication\0checkForLostLogFiles\0"
    "\0informationMessageBoxOnMainThread\0"
    "title\0msg\0warningMessageBoxOnMainThread\0"
    "criticalMessageBoxOnMainThread\0"
    "showSetupView\0qmlAttemptWindowClose\0"
    "saveTelemetryLogOnMainThread\0tempLogfile\0"
    "checkTelemetrySavePathOnMainThread\0"
    "_missingParamsDisplay"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCApplication[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   60,    2, 0x0a /* Public */,
       6,    2,   65,    2, 0x0a /* Public */,
       7,    2,   70,    2, 0x0a /* Public */,
       8,    0,   75,    2, 0x0a /* Public */,
       9,    0,   76,    2, 0x0a /* Public */,
      10,    1,   77,    2, 0x0a /* Public */,
      12,    0,   80,    2, 0x0a /* Public */,
      13,    0,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QGCApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCApplication *_t = static_cast<QGCApplication *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->checkForLostLogFiles(); break;
        case 1: _t->informationMessageBoxOnMainThread((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->warningMessageBoxOnMainThread((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->criticalMessageBoxOnMainThread((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->showSetupView(); break;
        case 5: _t->qmlAttemptWindowClose(); break;
        case 6: _t->saveTelemetryLogOnMainThread((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->checkTelemetrySavePathOnMainThread(); break;
        case 8: _t->_missingParamsDisplay(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGCApplication::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCApplication::checkForLostLogFiles)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QGCApplication::staticMetaObject = {
    { &QApplication::staticMetaObject, qt_meta_stringdata_QGCApplication.data,
      qt_meta_data_QGCApplication,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCApplication.stringdata0))
        return static_cast<void*>(this);
    return QApplication::qt_metacast(_clname);
}

int QGCApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void QGCApplication::checkForLostLogFiles()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE