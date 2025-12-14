#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>
#include <QDebug>

class Myclass : public QObject {
    Q_OBJECT

public:
    Myclass(QObject* parent = nullptr);

    void raiseMySignal();

signals:
    void mySignal();

public slots:
    void mySlot();
};

#endif
