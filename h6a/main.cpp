#include <QCoreApplication>
#include "Myclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Myclass obj;
    obj.raiseMySignal();

    return 0;
}
