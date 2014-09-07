#include "rc4.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    rc4 w;
    w.show();
    
    return a.exec();
}
