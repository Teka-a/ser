/****************************************************************************
** Meta object code from reading C++ file 'authform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../ClientAndWindowsInOne/authform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'authform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AuthForm_t {
    QByteArrayData data[19];
    char stringdata0[441];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AuthForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AuthForm_t qt_meta_stringdata_AuthForm = {
    {
QT_MOC_LITERAL(0, 0, 8), // "AuthForm"
QT_MOC_LITERAL(1, 9, 28), // "logged_in_success_as_teacher"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 28), // "logged_in_success_as_student"
QT_MOC_LITERAL(4, 68, 24), // "on_pushButton_ok_clicked"
QT_MOC_LITERAL(5, 93, 22), // "success_log_as_student"
QT_MOC_LITERAL(6, 116, 22), // "success_log_as_teacher"
QT_MOC_LITERAL(7, 139, 15), // "not_success_log"
QT_MOC_LITERAL(8, 155, 11), // "success_reg"
QT_MOC_LITERAL(9, 167, 15), // "not_success_reg"
QT_MOC_LITERAL(10, 183, 25), // "on_pushButton_reg_clicked"
QT_MOC_LITERAL(11, 209, 30), // "on_lineEdit_1log_returnPressed"
QT_MOC_LITERAL(12, 240, 31), // "on_lineEdit_2pass_returnPressed"
QT_MOC_LITERAL(13, 272, 30), // "on_radioButton_student_clicked"
QT_MOC_LITERAL(14, 303, 7), // "checked"
QT_MOC_LITERAL(15, 311, 30), // "on_radioButton_teacher_clicked"
QT_MOC_LITERAL(16, 342, 33), // "on_toolButtonback_to_auth_cli..."
QT_MOC_LITERAL(17, 376, 32), // "on_lineEdit_3email_returnPressed"
QT_MOC_LITERAL(18, 409, 31) // "on_lineEdit_4name_returnPressed"

    },
    "AuthForm\0logged_in_success_as_teacher\0"
    "\0logged_in_success_as_student\0"
    "on_pushButton_ok_clicked\0"
    "success_log_as_student\0success_log_as_teacher\0"
    "not_success_log\0success_reg\0not_success_reg\0"
    "on_pushButton_reg_clicked\0"
    "on_lineEdit_1log_returnPressed\0"
    "on_lineEdit_2pass_returnPressed\0"
    "on_radioButton_student_clicked\0checked\0"
    "on_radioButton_teacher_clicked\0"
    "on_toolButtonback_to_auth_clicked\0"
    "on_lineEdit_3email_returnPressed\0"
    "on_lineEdit_4name_returnPressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AuthForm[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x06 /* Public */,
       3,    0,   95,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   96,    2, 0x08 /* Private */,
       5,    0,   97,    2, 0x08 /* Private */,
       6,    0,   98,    2, 0x08 /* Private */,
       7,    0,   99,    2, 0x08 /* Private */,
       8,    0,  100,    2, 0x08 /* Private */,
       9,    0,  101,    2, 0x08 /* Private */,
      10,    0,  102,    2, 0x08 /* Private */,
      11,    0,  103,    2, 0x08 /* Private */,
      12,    0,  104,    2, 0x08 /* Private */,
      13,    1,  105,    2, 0x08 /* Private */,
      15,    1,  108,    2, 0x08 /* Private */,
      16,    0,  111,    2, 0x08 /* Private */,
      17,    0,  112,    2, 0x08 /* Private */,
      18,    0,  113,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::Bool,   14,
    QMetaType::Bool, QMetaType::Bool,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AuthForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AuthForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->logged_in_success_as_teacher(); break;
        case 1: _t->logged_in_success_as_student(); break;
        case 2: _t->on_pushButton_ok_clicked(); break;
        case 3: _t->success_log_as_student(); break;
        case 4: _t->success_log_as_teacher(); break;
        case 5: _t->not_success_log(); break;
        case 6: _t->success_reg(); break;
        case 7: _t->not_success_reg(); break;
        case 8: _t->on_pushButton_reg_clicked(); break;
        case 9: _t->on_lineEdit_1log_returnPressed(); break;
        case 10: _t->on_lineEdit_2pass_returnPressed(); break;
        case 11: { bool _r = _t->on_radioButton_student_clicked((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->on_radioButton_teacher_clicked((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->on_toolButtonback_to_auth_clicked(); break;
        case 14: _t->on_lineEdit_3email_returnPressed(); break;
        case 15: _t->on_lineEdit_4name_returnPressed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AuthForm::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuthForm::logged_in_success_as_teacher)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AuthForm::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AuthForm::logged_in_success_as_student)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AuthForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AuthForm.data,
    qt_meta_data_AuthForm,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AuthForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AuthForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AuthForm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AuthForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void AuthForm::logged_in_success_as_teacher()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AuthForm::logged_in_success_as_student()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
