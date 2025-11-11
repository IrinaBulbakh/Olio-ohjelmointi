#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Luokka Car
class Car {
private:
    string brand;    // Auton merkki
    string model;    // Auton malli
    int yearModel;   // Valmistusvuosi

public:
    // Konstruktori, joka alustaa kaikki jäsenmuuttujat
    Car(string b, string m, int y) : brand(b), model(m), yearModel(y) {}

    // Metodi, joka tulostaa auton tiedot
    void printData() const {
        cout << "Merkki: " << brand
             << ", Malli: " << model
             << ", Vuosi: " << yearModel << endl;
    }
};

int main() {
    // Luo vektori carList
    vector<Car> carList;

    // Lisää kolme Car-oliota listaan
    carList.push_back(Car("Toyota", "Corolla", 2020));
    carList.push_back(Car("Volkswagen", "Golf", 2018));
    carList.push_back(Car("Volvo", "XC60", 2022));

    // Tulosta toisen alkion tiedot
    cout << "Toisen auton tiedot:" << endl;
    carList[1].printData();
    cout << endl;

    // Tulosta kaikkien autojen tiedot
    cout << "Kaikkien autojen tiedot:" << endl;
    for (const auto& car : carList) {
        car.printData();
    }

    return 0;
}
