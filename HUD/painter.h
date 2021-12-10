#ifndef PAINTER_H
#define PAINTER_H

#include <QWidget>
#include <QPainter>
#include <QImage>
#include <QPixmap>
#include <QLabel>
#include <QFile>
#include <QDir>
#include <QBoxLayout>
#include <QTimer>

class Painter : public QWidget
{
    Q_OBJECT
public:
    explicit Painter(QWidget *parent = nullptr);   
    ~Painter();
protected:
    void paintEvent(QPaintEvent *) override;

public slots:
    void horLine_toggled(int state);
    void airTape_toggled(int state);
    void altTape_toggled(int state);
    void horSitInd_toggled(int state);
    void figthPathVec_toggled(int state);

    void setHorLineValueX(int value);
    void setHorLineValueY(int value);
    void setAirspeedValue(int value);
    void setAltitudeValue(int value);
    void setHorSitIndValueX(int value);
    void setHorSitIndValueY(int value);
    void setFightPathVecValueX(int value);
    void setFightPathVecValueY(int value);

    QString generateRandomName();

    void setSavingImages(int state);

    void saveImage();

    void timerUpdate();
private:
    bool checkBoxes_Mass[5];

    bool stateOfSavingImages = true;
    int counterOfSavedImages = 0;

    QLabel *showing_lbl;
    QTimer *update_timer;
    QTimer *saving_images;

    //for signal values to change drawing elements
    struct SignalValues{
        int x;
        int y;
    };
    SignalValues* horlineValue;
    SignalValues* airspeedTapeValue;
    SignalValues* altitudeTapeValue;
    SignalValues* horSitIndValue;
    SignalValues* fightPathVecValue;

};

#endif // PAINTER_H
