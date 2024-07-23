/****************************************************************************
** Meta object code from reading C++ file 'tcpserver_thread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../myServer/tcp/tcpserver_thread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcpserver_thread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Tcpserver_Thread_t {
    QByteArrayData data[8];
    char stringdata[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Tcpserver_Thread_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Tcpserver_Thread_t qt_meta_stringdata_Tcpserver_Thread = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 16),
QT_MOC_LITERAL(2, 34, 0),
QT_MOC_LITERAL(3, 35, 6),
QT_MOC_LITERAL(4, 42, 20),
QT_MOC_LITERAL(5, 63, 20),
QT_MOC_LITERAL(6, 84, 21),
QT_MOC_LITERAL(7, 106, 8)
    },
    "Tcpserver_Thread\0sig_disconnetTCP\0\0"
    "sockID\0sig_sendToClientData\0"
    "slot_disconnetToHost\0slot_sendToClientData\0"
    "sendData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Tcpserver_Thread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    2,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   42,    2, 0x08 /* Private */,
       6,    2,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::QByteArray,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    7,

       0        // eod
};

void Tcpserver_Thread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Tcpserver_Thread *_t = static_cast<Tcpserver_Thread *>(_o);
        switch (_id) {
        case 0: _t->sig_disconnetTCP((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sig_sendToClientData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 2: _t->slot_disconnetToHost(); break;
        case 3: _t->slot_sendToClientData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Tcpserver_Thread::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Tcpserver_Thread::sig_disconnetTCP)) {
                *result = 0;
            }
        }
        {
            typedef void (Tcpserver_Thread::*_t)(int , QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Tcpserver_Thread::sig_sendToClientData)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject Tcpserver_Thread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_Tcpserver_Thread.data,
      qt_meta_data_Tcpserver_Thread,  qt_static_metacall, 0, 0}
};


const QMetaObject *Tcpserver_Thread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tcpserver_Thread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tcpserver_Thread.stringdata))
        return static_cast<void*>(const_cast< Tcpserver_Thread*>(this));
    return QThread::qt_metacast(_clname);
}

int Tcpserver_Thread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Tcpserver_Thread::sig_disconnetTCP(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tcpserver_Thread::sig_sendToClientData(int _t1, QByteArray _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
