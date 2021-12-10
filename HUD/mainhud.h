#ifndef MAINHUD_H
#define MAINHUD_H

#include <QWidget>
#include <QBoxLayout>
#include <QCheckBox>
#include <QKeyEvent>
#include <painter.h>
#include <settings.h>


class MainHud : public QWidget
{
    Q_OBJECT

public:
    MainHud(QWidget *parent = nullptr);
    ~MainHud();
public slots:

protected:
   virtual void keyPressEvent(QKeyEvent *event);

private:
    QLabel *fullScreen_lbl;
    Settings *settings;
    Painter *painter;
    QCheckBox *horizon_line;
    QCheckBox *airspeed_tape;
    QCheckBox *altitude_tape;
    QCheckBox *horizon_situation_indicator;
    QCheckBox *fight_path_vector;
    QCheckBox *connectToServer;

};
#endif // MAINHUD_H
