#include "painter.h"
#include <ctime>
#include <iostream> // for unit-tests
Painter::Painter(QWidget *parent) : QWidget(parent)
{

    if (QFile("savedImages/").exists()) {
       QStringList listFiles = QDir("savedImages/").entryList(QDir::Files);
       foreach(QString entry, listFiles){
           QString entryAbsPath = QDir("savedImages/").absolutePath() + "/" + entry;
           QFile("savedImages/").setPermissions(entryAbsPath, QFile::ReadOwner | QFile::WriteOwner);
           QFile("savedImages/").remove(entryAbsPath);
       }
    }

    for (int i = 0; i < 5; i++){
        checkBoxes_Mass[i] = true;
    }

    this -> setStyleSheet("color: green;"
                          "background-color: green;");
    this -> resize(1650, 1000);
    this -> setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    this -> show();

    QHBoxLayout *h_lay = new QHBoxLayout(this);
    QVBoxLayout *v_lay = new QVBoxLayout();

    horlineValue = new SignalValues;
    airspeedTapeValue = new SignalValues;
    altitudeTapeValue = new SignalValues;
    horSitIndValue = new SignalValues;
    fightPathVecValue = new SignalValues;


    showing_lbl = new QLabel(this);
    showing_lbl -> resize(1650, 1000);
    showing_lbl -> setSizePolicy(QSizePolicy::Expanding, QSizePolicy:: Expanding);

    h_lay -> addLayout(v_lay);
    h_lay -> addWidget(showing_lbl,0,Qt::AlignCenter);

    update_timer = new QTimer(this);
    update_timer -> setInterval(100);
    update_timer -> start();
    QObject::connect(update_timer, SIGNAL(timeout()), this, SLOT(timerUpdate()));

    saving_images = new QTimer(this);
    saving_images -> setInterval(1000);
    saving_images -> start();
    QObject::connect(saving_images, SIGNAL(timeout()), this, SLOT(saveImage()));

}

Painter::~Painter()
{
    delete horlineValue;
    delete airspeedTapeValue;
    delete altitudeTapeValue;
    delete horSitIndValue;
    delete fightPathVecValue;
}

void Painter::horLine_toggled(int state){

    checkBoxes_Mass[0] = state;

}

void Painter::airTape_toggled(int state){

    checkBoxes_Mass[1] = state;

}

void Painter::altTape_toggled(int state)
{

    checkBoxes_Mass[2] = state;

}

void Painter::horSitInd_toggled(int state)
{
    checkBoxes_Mass[3] = state;
}

void Painter::figthPathVec_toggled(int state)
{
    checkBoxes_Mass[4] = state;
}

void Painter::setHorLineValueX(int value)
{
    horlineValue->x = value;
}

void Painter::setHorLineValueY(int value)
{
    horlineValue->y = value;
}


void Painter::setAirspeedValue(int value)
{
    airspeedTapeValue->x = value;
}

void Painter::setAltitudeValue(int value)
{
    altitudeTapeValue->x = value;
}

void Painter::setHorSitIndValueX(int value)
{
    horSitIndValue->x = value;
}

void Painter::setHorSitIndValueY(int value)
{
    horSitIndValue->y = value;
}

void Painter::setFightPathVecValueX(int value)
{
    fightPathVecValue->x = value;
}

void Painter::setFightPathVecValueY(int value)
{
    fightPathVecValue->y = value;
}

void Painter::setSavingImages(int state)
{
    stateOfSavingImages = state;
}


void Painter::paintEvent(QPaintEvent *)
{
       QImage hud_img(1650, 1000, QImage::Format_RGB32);

       QPainter hud_elements;
       hud_elements.begin(&hud_img);

       QPen hud_elements_pen, hud_elements_pen_red;

       QFont hud_elements_font;
       hud_elements_font.setPointSize(20);

       hud_elements_pen.setColor(Qt::green);
       hud_elements_pen_red.setColor(Qt::red);
       hud_elements_pen.setStyle(Qt::SolidLine);

       hud_elements.setPen(hud_elements_pen);
       hud_elements.setFont(hud_elements_font);


       if (checkBoxes_Mass[0]){
           hud_elements.drawLine(550 + horlineValue->x , 150+ horlineValue->y, 1065+horlineValue->x , 150 + horlineValue->y);
       }
       else hud_elements.drawLine(0, 0, 0, 0);


       if (checkBoxes_Mass[1]){
           hud_elements.drawRect(300, 175, 165, 650);
       }
       else hud_elements.drawLine(0, 0, 0, 0);


       if(checkBoxes_Mass[2]){
           hud_elements.drawRect(1150, 175, 165, 650);

       }
       else hud_elements.drawLine(0, 0, 0, 0);


       if(checkBoxes_Mass[3]){
           hud_elements.drawEllipse(650 + horSitIndValue->x, 600 + horSitIndValue->y, 300, 300);

       }
       else hud_elements.drawLine(0, 0, 0, 0);


       if(checkBoxes_Mass[4]){
           hud_elements.drawEllipse(785 + fightPathVecValue->x, 125 + fightPathVecValue->y, 50, 50 );
       }
       else hud_elements.drawLine(0, 0, 0, 0);

       hud_img.save("D://hud_png.jpg");
       hud_elements.end();
   }

//library
QString Painter::generateRandomName()
{
    const char arrayOfAllSymbols[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
                               'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    srand(time (0));
    QString str;
    for (unsigned int i = 0;  i <=10;  i++){
        int randIndex = rand() % 25 + i;
        str += arrayOfAllSymbols[randIndex];
    }
    return str;
}
//library

void Painter::saveImage()
{
    if (stateOfSavingImages){
        QPixmap savedHudImg("D://hud_png.jpg");
        QSize PicSize(1650, 1000);
        savedHudImg = savedHudImg.scaled(PicSize,Qt::KeepAspectRatio);
        savedHudImg.save("savedImages/" + generateRandomName() + ".jpg");
    }
}

void Painter::timerUpdate(){
    QPixmap hud_png("D://hud_png.jpg");
    QSize PicSize(1650, 1000);
    hud_png = hud_png.scaled(PicSize,Qt::KeepAspectRatio);
    showing_lbl -> setPixmap(hud_png);
    showing_lbl -> show();
}
