#include "mainhud.h"

MainHud::MainHud(QWidget *parent)
    : QWidget(parent)
{
    this -> setStyleSheet("background-color: black;"
                          "color: green;");

    fullScreen_lbl = new QLabel(this);
    fullScreen_lbl -> setStyleSheet(
                "background: green;"
                "color: black;");
    fullScreen_lbl -> setText("PRESS Q TO QUIT FROM FULLSCREEN");


    settings = new Settings(this);
    painter = settings -> getInstanceOfPainter();

    horizon_line = new QCheckBox(this);
    horizon_line -> setText("Horizon line");
    horizon_line -> setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    horizon_line -> setChecked(true);


    airspeed_tape = new QCheckBox(this);
    airspeed_tape -> setText("Airspeed tape");
    airspeed_tape -> setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    airspeed_tape -> setChecked(true);

    altitude_tape = new QCheckBox(this);
    altitude_tape -> setText("Altitude tape");
    altitude_tape -> setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    altitude_tape -> setChecked(true);

    horizon_situation_indicator = new QCheckBox(this);
    horizon_situation_indicator -> setText("Horizon situation\nindicator");
    horizon_situation_indicator -> setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    horizon_situation_indicator -> setChecked(true);

    fight_path_vector = new QCheckBox(this);
    fight_path_vector -> setText("Fight path vector");
    fight_path_vector -> setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    fight_path_vector -> setChecked(true);

    connectToServer = new QCheckBox(this);
    connectToServer -> setText("Connection to Server");


    QHBoxLayout *h_lay = new QHBoxLayout(this);
    QVBoxLayout *v_lay = new QVBoxLayout();


    h_lay -> addLayout (v_lay);

    v_lay -> addWidget(settings);
    v_lay -> addWidget(connectToServer);
    v_lay -> addWidget(fullScreen_lbl, 0, Qt::AlignRight);
    v_lay -> addWidget (horizon_line, 1, Qt::AlignLeft);
    v_lay -> addWidget (airspeed_tape, 1, Qt::AlignLeft);
    v_lay -> addWidget (altitude_tape, 1, Qt::AlignLeft);
    v_lay -> addWidget (horizon_situation_indicator, 1, Qt::AlignLeft);
    v_lay -> addWidget (fight_path_vector, 1, Qt::AlignLeft);
    h_lay -> addWidget (painter);


    QObject::connect(horizon_line, SIGNAL(stateChanged(int)), painter, SLOT(horLine_toggled(int)));
    QObject::connect(airspeed_tape, SIGNAL(stateChanged(int)), painter, SLOT(airTape_toggled(int)));
    QObject::connect(altitude_tape, SIGNAL(stateChanged(int)), painter, SLOT(altTape_toggled(int)));
    QObject::connect(horizon_situation_indicator, SIGNAL(stateChanged(int)), painter, SLOT(horSitInd_toggled(int)));
    QObject::connect(fight_path_vector, SIGNAL(stateChanged(int)), painter, SLOT(figthPathVec_toggled(int)));

    QObject::connect(connectToServer, SIGNAL(stateChanged(int)), this, SLOT(tryToConnectWithServ()));
}

MainHud::~MainHud()
{
}

void MainHud::keyPressEvent(QKeyEvent *event)
{
    int key = event->key();
    if (key == Qt::Key_Q) {
        this -> showNormal();
        fullScreen_lbl -> show();
        fullScreen_lbl -> setText("PRESS F11 TO SHOW FULL SCREEN");
    }
    if (key == Qt::Key_F11){
        this -> showFullScreen();
        fullScreen_lbl -> show();
        fullScreen_lbl -> setText("PRESS Q TO QUIT FROM FULLSCREEN");
    }

}


