#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Arabic Pass Fixer");
    w.setWindowIcon(QIcon(":/logo/looogo.png"));
    w.show();
    return a.exec();
}
