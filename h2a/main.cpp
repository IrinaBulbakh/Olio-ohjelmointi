#include <iostream>
#include <memory>
#include "car.h"
#include "rectangle.h"
#include "student.h"
using namespace std;

int main() {
    // --- Auto ---
    Car car;  // Luodaan Car-olio pinomuistiin
    car.setBrand("Toyota");       // Asetetaan auton merkki
    car.setModel("Corolla");      // Asetetaan auton malli
    car.setYearModel(2020);       // Asetetaan auton vuosimalli

    cout << "--- Auton tiedot ---" << endl;
    car.printData();              // Tulostetaan auton tiedot
    cout << endl;

    // --- Suorakulmio ---
    Rectangle* rect = new Rectangle();  // Luodaan Rectangle-olio kekomuistiin
    rect->setWidth(5.0);                // Asetetaan leveys
    rect->setHeight(3.0);               // Asetetaan korkeus

    cout << "--- Suorakulmion tiedot ---" << endl;
    cout << "Pinta-ala: " << rect->getArea() << endl;       // Tulostetaan pinta-ala
    cout << "Ympärysmitta: " << rect->getCircum() << endl;  // Tulostetaan ympärysmitta
    delete rect;  // Vapautetaan muisti
    cout << endl;

    // --- Opiskelija ---
    shared_ptr<Student> student = make_shared<Student>();  // Luodaan Student-olio älykkäällä osoittimella
    student->setName("Anna Virtanen");        // Asetetaan nimi
    student->setStudentNumber(12345);         // Asetetaan opiskelijanumero
    student->setAverage(4.2);                 // Asetetaan keskiarvo

    cout << "--- Opiskelijan tiedot ---" << endl;
    cout << "Nimi: " << student->getName() << endl;                  // Tulostetaan nimi
    cout << "Opiskelijanumero: " << student->getStudentNumber() << endl; // Tulostetaan opiskelijanumero
    cout << "Keskiarvo: " << student->getAverage() << endl;          // Tulostetaan keskiarvo

    return 0;
}
