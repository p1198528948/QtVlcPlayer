#include "WidMain.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CWidMain w;
    w.show();

    return a.exec();
}
