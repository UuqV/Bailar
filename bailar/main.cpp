#include "mainwindow.h"
#include <QApplication>
#include "bidirectional_map.h"
#include <QtWebKit/QtWebKit>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
