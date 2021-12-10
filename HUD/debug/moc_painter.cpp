/****************************************************************************
** Meta object code from reading C++ file 'painter.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../painter.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'painter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Painter_t {
    const uint offsetsAndSize[42];
    char stringdata0[315];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Painter_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Painter_t qt_meta_stringdata_Painter = {
    {
QT_MOC_LITERAL(0, 7), // "Painter"
QT_MOC_LITERAL(8, 15), // "horLine_toggled"
QT_MOC_LITERAL(24, 0), // ""
QT_MOC_LITERAL(25, 5), // "state"
QT_MOC_LITERAL(31, 15), // "airTape_toggled"
QT_MOC_LITERAL(47, 15), // "altTape_toggled"
QT_MOC_LITERAL(63, 17), // "horSitInd_toggled"
QT_MOC_LITERAL(81, 20), // "figthPathVec_toggled"
QT_MOC_LITERAL(102, 16), // "setHorLineValueX"
QT_MOC_LITERAL(119, 5), // "value"
QT_MOC_LITERAL(125, 16), // "setHorLineValueY"
QT_MOC_LITERAL(142, 16), // "setAirspeedValue"
QT_MOC_LITERAL(159, 16), // "setAltitudeValue"
QT_MOC_LITERAL(176, 18), // "setHorSitIndValueX"
QT_MOC_LITERAL(195, 18), // "setHorSitIndValueY"
QT_MOC_LITERAL(214, 21), // "setFightPathVecValueX"
QT_MOC_LITERAL(236, 21), // "setFightPathVecValueY"
QT_MOC_LITERAL(258, 18), // "generateRandomName"
QT_MOC_LITERAL(277, 15), // "setSavingImages"
QT_MOC_LITERAL(293, 9), // "saveImage"
QT_MOC_LITERAL(303, 11) // "timerUpdate"

    },
    "Painter\0horLine_toggled\0\0state\0"
    "airTape_toggled\0altTape_toggled\0"
    "horSitInd_toggled\0figthPathVec_toggled\0"
    "setHorLineValueX\0value\0setHorLineValueY\0"
    "setAirspeedValue\0setAltitudeValue\0"
    "setHorSitIndValueX\0setHorSitIndValueY\0"
    "setFightPathVecValueX\0setFightPathVecValueY\0"
    "generateRandomName\0setSavingImages\0"
    "saveImage\0timerUpdate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Painter[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  116,    2, 0x0a,    1 /* Public */,
       4,    1,  119,    2, 0x0a,    3 /* Public */,
       5,    1,  122,    2, 0x0a,    5 /* Public */,
       6,    1,  125,    2, 0x0a,    7 /* Public */,
       7,    1,  128,    2, 0x0a,    9 /* Public */,
       8,    1,  131,    2, 0x0a,   11 /* Public */,
      10,    1,  134,    2, 0x0a,   13 /* Public */,
      11,    1,  137,    2, 0x0a,   15 /* Public */,
      12,    1,  140,    2, 0x0a,   17 /* Public */,
      13,    1,  143,    2, 0x0a,   19 /* Public */,
      14,    1,  146,    2, 0x0a,   21 /* Public */,
      15,    1,  149,    2, 0x0a,   23 /* Public */,
      16,    1,  152,    2, 0x0a,   25 /* Public */,
      17,    0,  155,    2, 0x0a,   27 /* Public */,
      18,    1,  156,    2, 0x0a,   28 /* Public */,
      19,    0,  159,    2, 0x0a,   30 /* Public */,
      20,    0,  160,    2, 0x0a,   31 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::QString,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Painter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Painter *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->horLine_toggled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->airTape_toggled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->altTape_toggled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->horSitInd_toggled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->figthPathVec_toggled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setHorLineValueX((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setHorLineValueY((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setAirspeedValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setAltitudeValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setHorSitIndValueX((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->setHorSitIndValueY((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->setFightPathVecValueX((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->setFightPathVecValueY((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: { QString _r = _t->generateRandomName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->setSavingImages((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->saveImage(); break;
        case 16: _t->timerUpdate(); break;
        default: ;
        }
    }
}

const QMetaObject Painter::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Painter.offsetsAndSize,
    qt_meta_data_Painter,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Painter_t
, QtPrivate::TypeAndForceComplete<Painter, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Painter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Painter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Painter.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Painter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
