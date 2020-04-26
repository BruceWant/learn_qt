#include "qwdialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWDialog w;
    w.setWindowTitle("my first qt project");
    w.show();
    return a.exec();
}
