/****************************************************************************
** Meta object code from reading C++ file 'qtprogramwin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Espere_A5/QtHelloWorldQt5/qtprogramwin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtprogramwin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtProgramWin_t {
    QByteArrayData data[15];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtProgramWin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtProgramWin_t qt_meta_stringdata_QtProgramWin = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QtProgramWin"
QT_MOC_LITERAL(1, 13, 13), // "digit_pressed"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 16), // "QAbstractButton*"
QT_MOC_LITERAL(4, 45, 24), // "binary_operation_pressed"
QT_MOC_LITERAL(5, 70, 2), // "op"
QT_MOC_LITERAL(6, 73, 29), // "on_pushButton_equals_released"
QT_MOC_LITERAL(7, 103, 28), // "on_pushButton_clear_released"
QT_MOC_LITERAL(8, 132, 13), // "keyPressEvent"
QT_MOC_LITERAL(9, 146, 10), // "QKeyEvent*"
QT_MOC_LITERAL(10, 157, 5), // "event"
QT_MOC_LITERAL(11, 163, 16), // "converttoDecimal"
QT_MOC_LITERAL(12, 180, 3), // "oct"
QT_MOC_LITERAL(13, 184, 14), // "converttoOctal"
QT_MOC_LITERAL(14, 199, 3) // "dec"

    },
    "QtProgramWin\0digit_pressed\0\0"
    "QAbstractButton*\0binary_operation_pressed\0"
    "op\0on_pushButton_equals_released\0"
    "on_pushButton_clear_released\0keyPressEvent\0"
    "QKeyEvent*\0event\0converttoDecimal\0oct\0"
    "converttoOctal\0dec"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtProgramWin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       1,    1,   60,    2, 0x08 /* Private */,
       4,    0,   63,    2, 0x08 /* Private */,
       4,    1,   64,    2, 0x08 /* Private */,
       6,    0,   67,    2, 0x08 /* Private */,
       7,    0,   68,    2, 0x08 /* Private */,
       8,    1,   69,    2, 0x08 /* Private */,
      11,    1,   72,    2, 0x08 /* Private */,
      13,    1,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Char,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Int, QMetaType::Int,   12,
    QMetaType::Int, QMetaType::Int,   14,

       0        // eod
};

void QtProgramWin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtProgramWin *_t = static_cast<QtProgramWin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->digit_pressed(); break;
        case 1: _t->digit_pressed((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 2: _t->binary_operation_pressed(); break;
        case 3: _t->binary_operation_pressed((*reinterpret_cast< char(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_equals_released(); break;
        case 5: _t->on_pushButton_clear_released(); break;
        case 6: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 7: { int _r = _t->converttoDecimal((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 8: { int _r = _t->converttoOctal((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractButton* >(); break;
            }
            break;
        }
    }
}

const QMetaObject QtProgramWin::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QtProgramWin.data,
      qt_meta_data_QtProgramWin,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtProgramWin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtProgramWin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtProgramWin.stringdata0))
        return static_cast<void*>(const_cast< QtProgramWin*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int QtProgramWin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
