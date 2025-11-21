#include <iostream>
#include <memory>
#include "animal.h"
#include "dog.h"

int main()
{
    std::cout << "--- Tavalliset oliot ---" << std::endl;

    animal a;   // tavallinen animal-olio
    dog d;

    a.callOut();
    d.callOut();
    std::cout << "\n--- Polymorfinen olio ---" << std::endl;

    std::unique_ptr<animal> polyDog = std::make_unique<dog>();

    polyDog->callOut();

    return 0;
}
