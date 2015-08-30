#include <QApplication>

#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication::setApplicationName("WhatsQt");
    QApplication::setOrganizationName("mjdv");
    QApplication::setOrganizationDomain("https://github.com/mjdev");

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
