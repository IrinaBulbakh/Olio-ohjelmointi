#include "car.h"
#include <iostream>
using namespace std;

void Car::setBrand(string b) {
    brand = b;
}

void Car::setModel(string m) {
    model = m;
}

void Car::setYearModel(int y) {
    yearModel = y;
}

void Car::printData() {
    cout << "Марка: " << brand << endl;
    cout << "Модель: " << model << endl;
    cout << "Год выпуска: " << yearModel << endl;
}
