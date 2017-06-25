#include "LANConnectChat_View.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LANConnectChat_View w;
    w.show();
    return a.exec();
}
