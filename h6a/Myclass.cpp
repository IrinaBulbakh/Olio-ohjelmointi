#include "Myclass.h"

Myclass::Myclass(QObject *parent) : QObject(parent) {
    connect(this, &Myclass::mySignal, this, &Myclass::mySlot);
}

void Myclass::raiseMySignal()
{
    emit mySignal();
}

void Myclass::mySlot()
{
    qDebug() << "mySlot:ia kutsuttiin";
}
