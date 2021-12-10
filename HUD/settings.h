#ifndef SETTINGS_H
#define SETTINGS_H

#include <QWidget>
#include <QFormLayout>
#include <QCheckBox>
#include <QSpinBox>
#include <painter.h>

class Settings : public QWidget
{
    Q_OBJECT
public:
    explicit Settings(QWidget *parent = nullptr);

    Painter* getInstanceOfPainter(){
        return painter;
    }

public slots:

private:
    Painter *painter;
    //SpinBoxes
    QSpinBox* hor_line_box_X;
    QSpinBox* hor_line_box_Y;
    QSpinBox* air_tape_box;
    QSpinBox* alt_tape_box;
    QSpinBox* hor_sit_ind_box_X;
    QSpinBox* hor_sit_ind_box_Y;
    QSpinBox* fight_vec_box_X;
    QSpinBox* fight_vec_box_Y;
    //SavingControl
    QCheckBox* savingImages;

signals:

};

#endif // SETTINGS_H
