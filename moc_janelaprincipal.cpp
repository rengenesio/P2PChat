/****************************************************************************
** Meta object code from reading C++ file 'janelaprincipal.h'
**
** Created: Mon May 16 20:08:11 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "janelaprincipal.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'janelaprincipal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_JanelaPrincipal[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,
      28,   16,   16,   16, 0x08,
      37,   16,   16,   16, 0x08,
      46,   16,   16,   16, 0x08,
      57,   55,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_JanelaPrincipal[] = {
    "JanelaPrincipal\0\0conectar()\0enviar()\0"
    "limpar()\0salvar()\0,\0setDefinicoes(QString,QString)\0"
};

const QMetaObject JanelaPrincipal::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_JanelaPrincipal,
      qt_meta_data_JanelaPrincipal, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &JanelaPrincipal::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *JanelaPrincipal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *JanelaPrincipal::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_JanelaPrincipal))
        return static_cast<void*>(const_cast< JanelaPrincipal*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int JanelaPrincipal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: conectar(); break;
        case 1: enviar(); break;
        case 2: limpar(); break;
        case 3: salvar(); break;
        case 4: setDefinicoes((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
