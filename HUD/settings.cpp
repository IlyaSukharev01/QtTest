#include "settings.h"
#include "painter.h"

Settings::Settings(QWidget *parent) : QWidget(parent)
{
    this -> setStyleSheet(
                "background-color: black;"
                "color: green;");
    this -> resize(300, 1080);

    painter = new Painter(this);

    hor_line_box_X = new QSpinBox(this);
    hor_line_box_X -> setMinimum(-200);
    hor_line_box_X -> setMaximum(200);

    hor_line_box_Y = new QSpinBox(this);
    hor_line_box_Y -> setMinimum(-200);
    hor_line_box_Y -> setMaximum(200);


    air_tape_box = new QSpinBox(this);
    air_tape_box -> setMinimum(-200);
    air_tape_box -> setMaximum(200);


    alt_tape_box = new QSpinBox(this);
    alt_tape_box -> setMinimum(-200);
    alt_tape_box -> setMaximum(200);


    hor_sit_ind_box_X = new QSpinBox(this);
    hor_sit_ind_box_X -> setMinimum(-200);
    hor_sit_ind_box_X -> setMaximum(200);

    hor_sit_ind_box_Y = new QSpinBox(this);
    hor_sit_ind_box_Y -> setMinimum(-200);
    hor_sit_ind_box_Y -> setMaximum(200);


    fight_vec_box_X = new QSpinBox(this);
    fight_vec_box_X -> setMinimum(-200);
    fight_vec_box_X -> setMaximum(200);

    fight_vec_box_Y = new QSpinBox(this);
    fight_vec_box_Y -> setMinimum(-200);
    fight_vec_box_Y -> setMaximum(200);

    savingImages = new QCheckBox(this);
    savingImages->setChecked(true);

    QFormLayout *lay = new QFormLayout(this);
    lay ->addRow("Horizon Line: X", hor_line_box_X);

    lay ->addRow("Horizon Line: Y", hor_line_box_Y);

    lay -> addRow( "Airspeed Tape", air_tape_box);

    lay -> addRow("Altitude Tape", alt_tape_box);

    lay -> addRow("Horizon Situation Ind: X", hor_sit_ind_box_X);

    lay -> addRow("Horizon Situation Ind: Y", hor_sit_ind_box_Y);

    lay -> addRow("Fight Path Vec: X", fight_vec_box_X);

    lay -> addRow("Fight Path Vec: Y", fight_vec_box_Y);

    lay -> addRow("Save Images", savingImages);

    //signals for hud values
    QObject::connect(hor_line_box_X, SIGNAL(valueChanged(int)),  painter, SLOT(setHorLineValueX(int)));
    QObject::connect(hor_line_box_Y, SIGNAL(valueChanged(int)),  painter, SLOT(setHorLineValueY(int)));
    QObject::connect(air_tape_box, SIGNAL(valueChanged(int)), painter, SLOT(setAirspeedValue(int)));
    QObject::connect(alt_tape_box, SIGNAL(valueChanged(int)), painter, SLOT(setAltitudeValue(int)));
    QObject::connect(hor_sit_ind_box_X, SIGNAL(valueChanged(int)), painter, SLOT(setHorSitIndValueX(int)));
    QObject::connect(hor_sit_ind_box_Y, SIGNAL(valueChanged(int)), painter, SLOT(setHorSitIndValueY(int)));
    QObject::connect(fight_vec_box_X, SIGNAL(valueChanged(int)), painter, SLOT(setFightPathVecValueX(int)));
    QObject::connect(fight_vec_box_Y, SIGNAL(valueChanged(int)), painter, SLOT(setFightPathVecValueY(int)));

    //signals for saving images
    QObject::connect(savingImages, SIGNAL(stateChanged(int)), painter, SLOT(setSavingImages(int)));

}

