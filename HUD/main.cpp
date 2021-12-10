#include "mainhud.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainHud w;
    w.showFullScreen();
    return a.exec();
}
