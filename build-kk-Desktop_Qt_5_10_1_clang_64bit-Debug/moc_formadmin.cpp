/****************************************************************************
** Meta object code from reading C++ file 'formadmin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../kk/formadmin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formadmin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FormAdmin_t {
    QByteArrayData data[22];
    char stringdata0[307];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FormAdmin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FormAdmin_t qt_meta_stringdata_FormAdmin = {
    {
QT_MOC_LITERAL(0, 0, 9), // "FormAdmin"
QT_MOC_LITERAL(1, 10, 8), // "Signal_1"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 8), // "Signal_2"
QT_MOC_LITERAL(4, 29, 8), // "Signal_3"
QT_MOC_LITERAL(5, 38, 8), // "Signal_4"
QT_MOC_LITERAL(6, 47, 17), // "QVector<Employee>"
QT_MOC_LITERAL(7, 65, 16), // "QVector<Manager>"
QT_MOC_LITERAL(8, 82, 14), // "QVector<Sales>"
QT_MOC_LITERAL(9, 97, 8), // "Signal_5"
QT_MOC_LITERAL(10, 106, 24), // "on_but_addWorker_clicked"
QT_MOC_LITERAL(11, 131, 12), // "SaveSlotInfo"
QT_MOC_LITERAL(12, 144, 7), // "strName"
QT_MOC_LITERAL(13, 152, 18), // "strPositionManager"
QT_MOC_LITERAL(14, 171, 8), // "inSalary"
QT_MOC_LITERAL(15, 180, 4), // "date"
QT_MOC_LITERAL(16, 185, 3), // "pas"
QT_MOC_LITERAL(17, 189, 21), // "on_comboBox_activated"
QT_MOC_LITERAL(18, 211, 4), // "arg1"
QT_MOC_LITERAL(19, 216, 30), // "on_pushButton_SaveBase_clicked"
QT_MOC_LITERAL(20, 247, 27), // "on_pushButton_close_clicked"
QT_MOC_LITERAL(21, 275, 31) // "on_pushButton_DelWorker_clicked"

    },
    "FormAdmin\0Signal_1\0\0Signal_2\0Signal_3\0"
    "Signal_4\0QVector<Employee>\0QVector<Manager>\0"
    "QVector<Sales>\0Signal_5\0"
    "on_but_addWorker_clicked\0SaveSlotInfo\0"
    "strName\0strPositionManager\0inSalary\0"
    "date\0pas\0on_comboBox_activated\0arg1\0"
    "on_pushButton_SaveBase_clicked\0"
    "on_pushButton_close_clicked\0"
    "on_pushButton_DelWorker_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FormAdmin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       3,    1,   72,    2, 0x06 /* Public */,
       4,    1,   75,    2, 0x06 /* Public */,
       5,    3,   78,    2, 0x06 /* Public */,
       9,    1,   85,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   88,    2, 0x08 /* Private */,
      11,    5,   89,    2, 0x08 /* Private */,
      17,    1,  100,    2, 0x08 /* Private */,
      19,    0,  103,    2, 0x08 /* Private */,
      20,    0,  104,    2, 0x08 /* Private */,
      21,    0,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 7, 0x80000000 | 8,    2,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Double, QMetaType::QDate, QMetaType::QString,   12,   13,   14,   15,   16,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FormAdmin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FormAdmin *_t = static_cast<FormAdmin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Signal_1((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->Signal_2((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->Signal_3((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->Signal_4((*reinterpret_cast< QVector<Employee>(*)>(_a[1])),(*reinterpret_cast< QVector<Manager>(*)>(_a[2])),(*reinterpret_cast< QVector<Sales>(*)>(_a[3]))); break;
        case 4: _t->Signal_5((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->on_but_addWorker_clicked(); break;
        case 6: _t->SaveSlotInfo((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< QDate(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        case 7: _t->on_comboBox_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_pushButton_SaveBase_clicked(); break;
        case 9: _t->on_pushButton_close_clicked(); break;
        case 10: _t->on_pushButton_DelWorker_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (FormAdmin::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormAdmin::Signal_1)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (FormAdmin::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormAdmin::Signal_2)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (FormAdmin::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormAdmin::Signal_3)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (FormAdmin::*_t)(QVector<Employee> , QVector<Manager> , QVector<Sales> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormAdmin::Signal_4)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (FormAdmin::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormAdmin::Signal_5)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FormAdmin::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FormAdmin.data,
      qt_meta_data_FormAdmin,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FormAdmin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FormAdmin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FormAdmin.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int FormAdmin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void FormAdmin::Signal_1(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FormAdmin::Signal_2(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FormAdmin::Signal_3(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FormAdmin::Signal_4(QVector<Employee> _t1, QVector<Manager> _t2, QVector<Sales> _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FormAdmin::Signal_5(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
