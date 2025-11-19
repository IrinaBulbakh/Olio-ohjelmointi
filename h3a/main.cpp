#include <iostream>
#include "italianchef.h"

int main()
{
    italianchef itc("Anthony Bourdain");

    itc.makeSalad();
    itc.makeSoup();
    itc.makePasta();

    std::cout << "name of the Italian Chef is " << itc.getName() << std::endl;

    return 0;
}
