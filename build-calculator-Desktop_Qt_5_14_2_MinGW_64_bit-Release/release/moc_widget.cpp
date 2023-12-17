/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../calculator/widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CustomListWidgetItem_t {
    QByteArrayData data[13];
    char stringdata0[242];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CustomListWidgetItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CustomListWidgetItem_t qt_meta_stringdata_CustomListWidgetItem = {
    {
QT_MOC_LITERAL(0, 0, 20), // "CustomListWidgetItem"
QT_MOC_LITERAL(1, 21, 18), // "button_add_Clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 21), // "CustomListWidgetItem*"
QT_MOC_LITERAL(4, 63, 4), // "item"
QT_MOC_LITERAL(5, 68, 21), // "button_modify_Clicked"
QT_MOC_LITERAL(6, 90, 21), // "button_delete_Clicked"
QT_MOC_LITERAL(7, 112, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(8, 129, 18), // "button_cal_Clicked"
QT_MOC_LITERAL(9, 148, 21), // "on_Button_add_Clicked"
QT_MOC_LITERAL(10, 170, 24), // "on_Button_modify_Clicked"
QT_MOC_LITERAL(11, 195, 24), // "on_Button_delete_Clicked"
QT_MOC_LITERAL(12, 220, 21) // "on_Button_cal_Clicked"

    },
    "CustomListWidgetItem\0button_add_Clicked\0"
    "\0CustomListWidgetItem*\0item\0"
    "button_modify_Clicked\0button_delete_Clicked\0"
    "QListWidgetItem*\0button_cal_Clicked\0"
    "on_Button_add_Clicked\0on_Button_modify_Clicked\0"
    "on_Button_delete_Clicked\0on_Button_cal_Clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CustomListWidgetItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       5,    1,   57,    2, 0x06 /* Public */,
       6,    1,   60,    2, 0x06 /* Public */,
       8,    1,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,
      11,    0,   68,    2, 0x08 /* Private */,
      12,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 7,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CustomListWidgetItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CustomListWidgetItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->button_add_Clicked((*reinterpret_cast< CustomListWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->button_modify_Clicked((*reinterpret_cast< CustomListWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->button_delete_Clicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->button_cal_Clicked((*reinterpret_cast< CustomListWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->on_Button_add_Clicked(); break;
        case 5: _t->on_Button_modify_Clicked(); break;
        case 6: _t->on_Button_delete_Clicked(); break;
        case 7: _t->on_Button_cal_Clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CustomListWidgetItem* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CustomListWidgetItem* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CustomListWidgetItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CustomListWidgetItem::*)(CustomListWidgetItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CustomListWidgetItem::button_add_Clicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CustomListWidgetItem::*)(CustomListWidgetItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CustomListWidgetItem::button_modify_Clicked)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CustomListWidgetItem::*)(QListWidgetItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CustomListWidgetItem::button_delete_Clicked)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CustomListWidgetItem::*)(CustomListWidgetItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CustomListWidgetItem::button_cal_Clicked)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CustomListWidgetItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CustomListWidgetItem.data,
    qt_meta_data_CustomListWidgetItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CustomListWidgetItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CustomListWidgetItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CustomListWidgetItem.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CustomListWidgetItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void CustomListWidgetItem::button_add_Clicked(CustomListWidgetItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CustomListWidgetItem::button_modify_Clicked(CustomListWidgetItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CustomListWidgetItem::button_delete_Clicked(QListWidgetItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CustomListWidgetItem::button_cal_Clicked(CustomListWidgetItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[34];
    char stringdata0[451];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 11), // "receiveData"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 9), // "init_name"
QT_MOC_LITERAL(4, 30, 8), // "new_name"
QT_MOC_LITERAL(5, 39, 7), // "add_mat"
QT_MOC_LITERAL(6, 47, 21), // "CustomListWidgetItem*"
QT_MOC_LITERAL(7, 69, 4), // "item"
QT_MOC_LITERAL(8, 74, 10), // "modify_mat"
QT_MOC_LITERAL(9, 85, 10), // "delete_mat"
QT_MOC_LITERAL(10, 96, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(11, 113, 7), // "cal_mat"
QT_MOC_LITERAL(12, 121, 13), // "on_B0_clicked"
QT_MOC_LITERAL(13, 135, 13), // "on_B1_clicked"
QT_MOC_LITERAL(14, 149, 13), // "on_B2_clicked"
QT_MOC_LITERAL(15, 163, 13), // "on_B3_clicked"
QT_MOC_LITERAL(16, 177, 13), // "on_B4_clicked"
QT_MOC_LITERAL(17, 191, 13), // "on_B5_clicked"
QT_MOC_LITERAL(18, 205, 13), // "on_B6_clicked"
QT_MOC_LITERAL(19, 219, 13), // "on_B7_clicked"
QT_MOC_LITERAL(20, 233, 13), // "on_B8_clicked"
QT_MOC_LITERAL(21, 247, 13), // "on_B9_clicked"
QT_MOC_LITERAL(22, 261, 14), // "on_LBR_clicked"
QT_MOC_LITERAL(23, 276, 14), // "on_RBR_clicked"
QT_MOC_LITERAL(24, 291, 14), // "on_ADD_clicked"
QT_MOC_LITERAL(25, 306, 16), // "on_MINUS_clicked"
QT_MOC_LITERAL(26, 323, 14), // "on_MUL_clicked"
QT_MOC_LITERAL(27, 338, 14), // "on_DIV_clicked"
QT_MOC_LITERAL(28, 353, 14), // "on_POW_clicked"
QT_MOC_LITERAL(29, 368, 16), // "on_TRANS_clicked"
QT_MOC_LITERAL(30, 385, 14), // "on_CLR_clicked"
QT_MOC_LITERAL(31, 400, 15), // "on_BACK_clicked"
QT_MOC_LITERAL(32, 416, 13), // "on_EQ_clicked"
QT_MOC_LITERAL(33, 430, 20) // "on_addMatrix_clicked"

    },
    "Widget\0receiveData\0\0init_name\0new_name\0"
    "add_mat\0CustomListWidgetItem*\0item\0"
    "modify_mat\0delete_mat\0QListWidgetItem*\0"
    "cal_mat\0on_B0_clicked\0on_B1_clicked\0"
    "on_B2_clicked\0on_B3_clicked\0on_B4_clicked\0"
    "on_B5_clicked\0on_B6_clicked\0on_B7_clicked\0"
    "on_B8_clicked\0on_B9_clicked\0on_LBR_clicked\0"
    "on_RBR_clicked\0on_ADD_clicked\0"
    "on_MINUS_clicked\0on_MUL_clicked\0"
    "on_DIV_clicked\0on_POW_clicked\0"
    "on_TRANS_clicked\0on_CLR_clicked\0"
    "on_BACK_clicked\0on_EQ_clicked\0"
    "on_addMatrix_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,  149,    2, 0x08 /* Private */,
       5,    1,  154,    2, 0x08 /* Private */,
       8,    1,  157,    2, 0x08 /* Private */,
       9,    1,  160,    2, 0x08 /* Private */,
      11,    1,  163,    2, 0x08 /* Private */,
      12,    0,  166,    2, 0x08 /* Private */,
      13,    0,  167,    2, 0x08 /* Private */,
      14,    0,  168,    2, 0x08 /* Private */,
      15,    0,  169,    2, 0x08 /* Private */,
      16,    0,  170,    2, 0x08 /* Private */,
      17,    0,  171,    2, 0x08 /* Private */,
      18,    0,  172,    2, 0x08 /* Private */,
      19,    0,  173,    2, 0x08 /* Private */,
      20,    0,  174,    2, 0x08 /* Private */,
      21,    0,  175,    2, 0x08 /* Private */,
      22,    0,  176,    2, 0x08 /* Private */,
      23,    0,  177,    2, 0x08 /* Private */,
      24,    0,  178,    2, 0x08 /* Private */,
      25,    0,  179,    2, 0x08 /* Private */,
      26,    0,  180,    2, 0x08 /* Private */,
      27,    0,  181,    2, 0x08 /* Private */,
      28,    0,  182,    2, 0x08 /* Private */,
      29,    0,  183,    2, 0x08 /* Private */,
      30,    0,  184,    2, 0x08 /* Private */,
      31,    0,  185,    2, 0x08 /* Private */,
      32,    0,  186,    2, 0x08 /* Private */,
      33,    0,  187,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 10,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->receiveData((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->add_mat((*reinterpret_cast< CustomListWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->modify_mat((*reinterpret_cast< CustomListWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->delete_mat((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->cal_mat((*reinterpret_cast< CustomListWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->on_B0_clicked(); break;
        case 6: _t->on_B1_clicked(); break;
        case 7: _t->on_B2_clicked(); break;
        case 8: _t->on_B3_clicked(); break;
        case 9: _t->on_B4_clicked(); break;
        case 10: _t->on_B5_clicked(); break;
        case 11: _t->on_B6_clicked(); break;
        case 12: _t->on_B7_clicked(); break;
        case 13: _t->on_B8_clicked(); break;
        case 14: _t->on_B9_clicked(); break;
        case 15: _t->on_LBR_clicked(); break;
        case 16: _t->on_RBR_clicked(); break;
        case 17: _t->on_ADD_clicked(); break;
        case 18: _t->on_MINUS_clicked(); break;
        case 19: _t->on_MUL_clicked(); break;
        case 20: _t->on_DIV_clicked(); break;
        case 21: _t->on_POW_clicked(); break;
        case 22: _t->on_TRANS_clicked(); break;
        case 23: _t->on_CLR_clicked(); break;
        case 24: _t->on_BACK_clicked(); break;
        case 25: _t->on_EQ_clicked(); break;
        case 26: _t->on_addMatrix_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CustomListWidgetItem* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CustomListWidgetItem* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CustomListWidgetItem* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Widget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Widget.data,
    qt_meta_data_Widget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
