#include <iostream>
using namespace std;

#include "ClassB.h"
#include "ClassA1.h"
#include "ClassA2.h"

int main()
{
    int a = 5;

    cout << "a:n arvo on: " << a << " ja osoite on: " << &a << endl;

    int *pointerA = &a; // Osoitin muuttujaan a
    cout << "Pointterin osoittama osoite on: " << pointerA << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *pointerA << endl;

    int &refA = a; // Referenssi muuttujaan a
    cout << "refA osoittaa osoitteeseen: " << &refA << endl;
    cout << "refA:n osoittaman muistipaikan arvo on: " << refA << endl;

    int b = 6;

    refA = b; // Ei vaihda kohdetta, vain arvon
    cout << "a:n arvo refA = b -operaation jälkeen: " << a << endl;

    pointerA = &b; // Osoitin voidaan vaihtaa
    cout << "pointerA osoittaa nyt osoitteeseen: " << pointerA << endl;
    cout << "pointerA:n muistipaikan arvo on: " << *pointerA << endl;

    cout << endl;

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    ClassA1 objA1(objB); // Kopio
    objA1.setBinfo("Olion objA1 asettama info");

    cout << "objB: " << objB.getInfo() << endl;
    cout << "objA1: " << objA1.getBinfo() << endl;

    cout << endl;

    ClassB &refB = objB; // Viittaus B:hen
    ClassA2 objA2(refB); // Viittausparametri

    objA2.setBinfo("Olion Agr asettama info");

    cout << "objB: " << objB.getInfo() << endl;
    cout << "objA2: " << objA2.getBinfo() << endl;

    return 0;
}
