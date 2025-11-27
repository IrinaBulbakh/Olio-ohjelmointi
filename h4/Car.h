#ifndef CAR_H
#define CAR_H

#include "Engine.h"
#include "Wheel.h"
#include <string>
using std::string;

class Car {
private:
    Engine objEngine;
    Wheel objWheel1;
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;

    string model;
    string brand;

public:
    Car();
    Car(string m, string b);

    void setEngine();
    void setWheels();

    string getModel() const;
    void setModel(string m);

    string getBrand() const;
    void setBrand(string b);

    void printDetails() const;
};

#endif
