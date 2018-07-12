/****************************************************************************
** Meta object code from reading C++ file 'IncrementalPlot.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/linechart/IncrementalPlot.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IncrementalPlot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_IncrementalPlot_t {
    QByteArrayData data[22];
    char stringdata0[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IncrementalPlot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IncrementalPlot_t qt_meta_stringdata_IncrementalPlot = {
    {
QT_MOC_LITERAL(0, 0, 15), // "IncrementalPlot"
QT_MOC_LITERAL(1, 16, 10), // "appendData"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 3), // "key"
QT_MOC_LITERAL(4, 32, 1), // "x"
QT_MOC_LITERAL(5, 34, 1), // "y"
QT_MOC_LITERAL(6, 36, 7), // "double*"
QT_MOC_LITERAL(7, 44, 4), // "size"
QT_MOC_LITERAL(8, 49, 12), // "resetScaling"
QT_MOC_LITERAL(9, 62, 11), // "updateScale"
QT_MOC_LITERAL(10, 74, 10), // "removeData"
QT_MOC_LITERAL(11, 85, 10), // "showLegend"
QT_MOC_LITERAL(12, 96, 4), // "show"
QT_MOC_LITERAL(13, 101, 8), // "showGrid"
QT_MOC_LITERAL(14, 110, 12), // "setStyleText"
QT_MOC_LITERAL(15, 123, 5), // "style"
QT_MOC_LITERAL(16, 129, 12), // "setSymmetric"
QT_MOC_LITERAL(17, 142, 9), // "symmetric"
QT_MOC_LITERAL(18, 152, 17), // "handleLegendClick"
QT_MOC_LITERAL(19, 170, 12), // "QwtPlotItem*"
QT_MOC_LITERAL(20, 183, 4), // "item"
QT_MOC_LITERAL(21, 188, 2) // "on"

    },
    "IncrementalPlot\0appendData\0\0key\0x\0y\0"
    "double*\0size\0resetScaling\0updateScale\0"
    "removeData\0showLegend\0show\0showGrid\0"
    "setStyleText\0style\0setSymmetric\0"
    "symmetric\0handleLegendClick\0QwtPlotItem*\0"
    "item\0on"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IncrementalPlot[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   64,    2, 0x0a /* Public */,
       1,    4,   71,    2, 0x0a /* Public */,
       8,    0,   80,    2, 0x0a /* Public */,
       9,    0,   81,    2, 0x0a /* Public */,
      10,    0,   82,    2, 0x0a /* Public */,
      11,    1,   83,    2, 0x0a /* Public */,
      13,    1,   86,    2, 0x0a /* Public */,
      14,    1,   89,    2, 0x0a /* Public */,
      16,    1,   92,    2, 0x0a /* Public */,
      18,    2,   95,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Double, QMetaType::Double,    3,    4,    5,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 6, 0x80000000 | 6, QMetaType::Int,    3,    4,    5,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, 0x80000000 | 19, QMetaType::Bool,   20,   21,

       0        // eod
};

void IncrementalPlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        IncrementalPlot *_t = static_cast<IncrementalPlot *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->appendData((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 1: _t->appendData((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< double*(*)>(_a[2])),(*reinterpret_cast< double*(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 2: _t->resetScaling(); break;
        case 3: _t->updateScale(); break;
        case 4: _t->removeData(); break;
        case 5: _t->showLegend((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->showGrid((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setStyleText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->setSymmetric((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->handleLegendClick((*reinterpret_cast< QwtPlotItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QwtPlotItem* >(); break;
            }
            break;
        }
    }
}

const QMetaObject IncrementalPlot::staticMetaObject = {
    { &ChartPlot::staticMetaObject, qt_meta_stringdata_IncrementalPlot.data,
      qt_meta_data_IncrementalPlot,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *IncrementalPlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IncrementalPlot::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IncrementalPlot.stringdata0))
        return static_cast<void*>(this);
    return ChartPlot::qt_metacast(_clname);
}

int IncrementalPlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ChartPlot::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
