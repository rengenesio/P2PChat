/****************************************************************************
** Meta object code from reading C++ file 'janelaconectar.h'
**
** Created: Mon May 16 19:16:50 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "janelaconectar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'janelaconectar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_JanelaConectar[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   16,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      45,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_JanelaConectar[] = {
    "JanelaConectar\0\0ip,nick\0fim(QString,QString)\0"
    "ok()\0"
};

const QMetaObject JanelaConectar::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_JanelaConectar,
      qt_meta_data_JanelaConectar, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &JanelaConectar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *JanelaConectar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *JanelaConectar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_JanelaConectar))
        return static_cast<void*>(const_cast< JanelaConectar*>(this));
    return QDialog::qt_metacast(_clname);
}

int JanelaConectar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: fim((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: ok(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void JanelaConectar::fim(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
