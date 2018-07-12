/****************************************************************************
** Meta object code from reading C++ file 'QGCMapRCToParamDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/QGCMapRCToParamDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCMapRCToParamDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGCMapRCToParamDialog_t {
    QByteArrayData data[12];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGCMapRCToParamDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGCMapRCToParamDialog_t qt_meta_stringdata_QGCMapRCToParamDialog = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QGCMapRCToParamDialog"
QT_MOC_LITERAL(1, 22, 24), // "mapRCToParamDialogResult"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 8), // "param_id"
QT_MOC_LITERAL(4, 57, 5), // "scale"
QT_MOC_LITERAL(5, 63, 6), // "value0"
QT_MOC_LITERAL(6, 70, 22), // "param_rc_channel_index"
QT_MOC_LITERAL(7, 93, 8), // "valueMin"
QT_MOC_LITERAL(8, 102, 8), // "valueMax"
QT_MOC_LITERAL(9, 111, 6), // "accept"
QT_MOC_LITERAL(10, 118, 17), // "_parameterUpdated"
QT_MOC_LITERAL(11, 136, 5) // "value"

    },
    "QGCMapRCToParamDialog\0mapRCToParamDialogResult\0"
    "\0param_id\0scale\0value0\0param_rc_channel_index\0"
    "valueMin\0valueMax\0accept\0_parameterUpdated\0"
    "value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGCMapRCToParamDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    6,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   42,    2, 0x0a /* Public */,
      10,    1,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::UChar, QMetaType::Float, QMetaType::Float,    3,    4,    5,    6,    7,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant,   11,

       0        // eod
};

void QGCMapRCToParamDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGCMapRCToParamDialog *_t = static_cast<QGCMapRCToParamDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mapRCToParamDialogResult((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< quint8(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6]))); break;
        case 1: _t->accept(); break;
        case 2: _t->_parameterUpdated((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGCMapRCToParamDialog::*_t)(QString , float , float , quint8 , float , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGCMapRCToParamDialog::mapRCToParamDialogResult)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QGCMapRCToParamDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QGCMapRCToParamDialog.data,
      qt_meta_data_QGCMapRCToParamDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGCMapRCToParamDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGCMapRCToParamDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGCMapRCToParamDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QGCMapRCToParamDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QGCMapRCToParamDialog::mapRCToParamDialogResult(QString _t1, float _t2, float _t3, quint8 _t4, float _t5, float _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
