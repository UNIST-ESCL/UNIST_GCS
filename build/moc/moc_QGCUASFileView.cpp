/****************************************************************************
** Meta object code from reading C++ file 'QGCUASFileView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/QGCUASFileView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCUASFileView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCUASFileView_t {
    QByteArrayData data[16];
    char stringdata0[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCUASFileView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCUASFileView_t qt_meta_stringdata_QGCUASFileView = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QGCUASFileView"
QT_MOC_LITERAL(1, 15, 18), // "_listEntryReceived"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 5), // "entry"
QT_MOC_LITERAL(4, 41, 12), // "_refreshTree"
QT_MOC_LITERAL(5, 54, 13), // "_downloadFile"
QT_MOC_LITERAL(6, 68, 11), // "_uploadFile"
QT_MOC_LITERAL(7, 80, 16), // "_commandProgress"
QT_MOC_LITERAL(8, 97, 5), // "value"
QT_MOC_LITERAL(9, 103, 13), // "_commandError"
QT_MOC_LITERAL(10, 117, 3), // "msg"
QT_MOC_LITERAL(11, 121, 16), // "_commandComplete"
QT_MOC_LITERAL(12, 138, 19), // "_currentItemChanged"
QT_MOC_LITERAL(13, 158, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(14, 175, 7), // "current"
QT_MOC_LITERAL(15, 183, 8) // "previous"

    },
    "QGCUASFileView\0_listEntryReceived\0\0"
    "entry\0_refreshTree\0_downloadFile\0"
    "_uploadFile\0_commandProgress\0value\0"
    "_commandError\0msg\0_commandComplete\0"
    "_currentItemChanged\0QTreeWidgetItem*\0"
    "current\0previous"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCUASFileView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x08 /* Private */,
       4,    0,   57,    2, 0x08 /* Private */,
       5,    0,   58,    2, 0x08 /* Private */,
       6,    0,   59,    2, 0x08 /* Private */,
       7,    1,   60,    2, 0x08 /* Private */,
       9,    1,   63,    2, 0x08 /* Private */,
      11,    0,   66,    2, 0x08 /* Private */,
      12,    2,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 13,   14,   15,

       0        // eod
};

void QGCUASFileView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCUASFileView *_t = static_cast<QGCUASFileView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->_listEntryReceived((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->_refreshTree(); break;
        case 2: _t->_downloadFile(); break;
        case 3: _t->_uploadFile(); break;
        case 4: _t->_commandProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->_commandError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->_commandComplete(); break;
        case 7: _t->_currentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject QGCUASFileView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QGCUASFileView.data,
      qt_meta_data_QGCUASFileView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCUASFileView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCUASFileView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCUASFileView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QGCUASFileView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
