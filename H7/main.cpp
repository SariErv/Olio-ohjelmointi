#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    //Olio luokasta QApplication
    QApplication a(argc, argv);
    //MainWindow luokan olio nimeltään w
    MainWindow w;
    //Tämä avaa ikkuna avaa formsin
    w.show();
    return a.exec();
}
