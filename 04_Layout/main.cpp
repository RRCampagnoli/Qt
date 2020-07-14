#include "mainwindow.h"
#include "mainwindow2.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    MainWindow2 w2;
    w.show();
    w2.show();
    return a.exec();
}
