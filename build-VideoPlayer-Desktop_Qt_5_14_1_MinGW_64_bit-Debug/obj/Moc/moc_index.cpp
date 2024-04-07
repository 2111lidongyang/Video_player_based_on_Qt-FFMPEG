/****************************************************************************
** Meta object code from reading C++ file 'index.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../VideoPlayer-master/src/Widget/index.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'index.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Index_t {
    QByteArrayData data[13];
    char stringdata0[296];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Index_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Index_t qt_meta_stringdata_Index = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Index"
QT_MOC_LITERAL(1, 6, 27), // "on_videolabel_linkActivated"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 4), // "link"
QT_MOC_LITERAL(4, 40, 29), // "on_videolabel_2_linkActivated"
QT_MOC_LITERAL(5, 70, 29), // "on_videolabel_3_linkActivated"
QT_MOC_LITERAL(6, 100, 29), // "on_videolabel_4_linkActivated"
QT_MOC_LITERAL(7, 130, 29), // "on_videolabel_5_linkActivated"
QT_MOC_LITERAL(8, 160, 29), // "on_videolabel_6_linkActivated"
QT_MOC_LITERAL(9, 190, 29), // "on_videolabel_7_linkActivated"
QT_MOC_LITERAL(10, 220, 29), // "on_videolabel_8_linkActivated"
QT_MOC_LITERAL(11, 250, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(12, 272, 23) // "on_pushButton_4_clicked"

    },
    "Index\0on_videolabel_linkActivated\0\0"
    "link\0on_videolabel_2_linkActivated\0"
    "on_videolabel_3_linkActivated\0"
    "on_videolabel_4_linkActivated\0"
    "on_videolabel_5_linkActivated\0"
    "on_videolabel_6_linkActivated\0"
    "on_videolabel_7_linkActivated\0"
    "on_videolabel_8_linkActivated\0"
    "on_pushButton_clicked\0on_pushButton_4_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Index[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x08 /* Private */,
       4,    1,   67,    2, 0x08 /* Private */,
       5,    1,   70,    2, 0x08 /* Private */,
       6,    1,   73,    2, 0x08 /* Private */,
       7,    1,   76,    2, 0x08 /* Private */,
       8,    1,   79,    2, 0x08 /* Private */,
       9,    1,   82,    2, 0x08 /* Private */,
      10,    1,   85,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Index::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Index *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_videolabel_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_videolabel_2_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_videolabel_3_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_videolabel_4_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_videolabel_5_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_videolabel_6_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_videolabel_7_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_videolabel_8_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_pushButton_clicked(); break;
        case 9: _t->on_pushButton_4_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Index::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Index.data,
    qt_meta_data_Index,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Index::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Index::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Index.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Index::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
