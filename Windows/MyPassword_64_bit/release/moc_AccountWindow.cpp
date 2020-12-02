/****************************************************************************
** Meta object code from reading C++ file 'AccountWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../MyPassword/Src/AccountWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AccountWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AccountWindow_t {
    QByteArrayData data[11];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AccountWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AccountWindow_t qt_meta_stringdata_AccountWindow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "AccountWindow"
QT_MOC_LITERAL(1, 14, 21), // "checkPasswordSecurity"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 18), // "itemChangedDetails"
QT_MOC_LITERAL(4, 56, 14), // "saveModifLogin"
QT_MOC_LITERAL(5, 71, 16), // "saveModifDetails"
QT_MOC_LITERAL(6, 88, 17), // "saveModifPassword"
QT_MOC_LITERAL(7, 106, 13), // "checkPassword"
QT_MOC_LITERAL(8, 120, 12), // "viewPassword"
QT_MOC_LITERAL(9, 133, 11), // "viewTestPwd"
QT_MOC_LITERAL(10, 145, 13) // "deleteAccount"

    },
    "AccountWindow\0checkPasswordSecurity\0"
    "\0itemChangedDetails\0saveModifLogin\0"
    "saveModifDetails\0saveModifPassword\0"
    "checkPassword\0viewPassword\0viewTestPwd\0"
    "deleteAccount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AccountWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x08 /* Private */,
       3,    0,   62,    2, 0x08 /* Private */,
       4,    0,   63,    2, 0x08 /* Private */,
       5,    0,   64,    2, 0x08 /* Private */,
       6,    0,   65,    2, 0x08 /* Private */,
       7,    0,   66,    2, 0x08 /* Private */,
       8,    0,   67,    2, 0x08 /* Private */,
       9,    0,   68,    2, 0x08 /* Private */,
      10,    0,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AccountWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AccountWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->checkPasswordSecurity((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->itemChangedDetails(); break;
        case 2: { bool _r = _t->saveModifLogin();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->saveModifDetails();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->saveModifPassword();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->checkPassword(); break;
        case 6: _t->viewPassword(); break;
        case 7: _t->viewTestPwd(); break;
        case 8: _t->deleteAccount(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AccountWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AccountWindow.data,
    qt_meta_data_AccountWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AccountWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AccountWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AccountWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AccountWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
