/****************************************************************************
** Meta object code from reading C++ file 'iomodule.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/iomodule.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'iomodule.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_IOmodule_t {
    QByteArrayData data[10];
    char stringdata[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IOmodule_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IOmodule_t qt_meta_stringdata_IOmodule = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 7),
QT_MOC_LITERAL(2, 17, 0),
QT_MOC_LITERAL(3, 18, 6),
QT_MOC_LITERAL(4, 25, 24),
QT_MOC_LITERAL(5, 50, 22),
QT_MOC_LITERAL(6, 73, 20),
QT_MOC_LITERAL(7, 94, 18),
QT_MOC_LITERAL(8, 113, 24),
QT_MOC_LITERAL(9, 138, 20)
    },
    "IOmodule\0updated\0\0update\0"
    "setDigitalDirectionArray\0"
    "_digitalDirectionArray\0setDigitalValueArray\0"
    "_digitalValueArray\0getDigitalDirectionArray\0"
    "getDigitalValueArray"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IOmodule[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   45,    2, 0x0a /* Public */,
       4,    1,   46,    2, 0x0a /* Public */,
       6,    1,   49,    2, 0x0a /* Public */,
       8,    0,   52,    2, 0x0a /* Public */,
       9,    0,   53,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QBitArray,    5,
    QMetaType::Void, QMetaType::QBitArray,    7,
    QMetaType::QBitArray,
    QMetaType::QBitArray,

       0        // eod
};

void IOmodule::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        IOmodule *_t = static_cast<IOmodule *>(_o);
        switch (_id) {
        case 0: _t->updated(); break;
        case 1: _t->update(); break;
        case 2: _t->setDigitalDirectionArray((*reinterpret_cast< QBitArray(*)>(_a[1]))); break;
        case 3: _t->setDigitalValueArray((*reinterpret_cast< QBitArray(*)>(_a[1]))); break;
        case 4: { QBitArray _r = _t->getDigitalDirectionArray();
            if (_a[0]) *reinterpret_cast< QBitArray*>(_a[0]) = _r; }  break;
        case 5: { QBitArray _r = _t->getDigitalValueArray();
            if (_a[0]) *reinterpret_cast< QBitArray*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (IOmodule::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&IOmodule::updated)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject IOmodule::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_IOmodule.data,
      qt_meta_data_IOmodule,  qt_static_metacall, 0, 0}
};


const QMetaObject *IOmodule::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IOmodule::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IOmodule.stringdata))
        return static_cast<void*>(const_cast< IOmodule*>(this));
    return QObject::qt_metacast(_clname);
}

int IOmodule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void IOmodule::updated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
