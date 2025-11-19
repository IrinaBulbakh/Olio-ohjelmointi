#include "italianchef.h"

italianchef::italianchef(std::string name) : chef(name)
{
    std::cout << "ItalianChef " << name << " konstruktori" << std::endl;
}

italianchef::~italianchef() {
    std::cout << "ItalianChef " << name << " destruktori" << std::endl;
}

void italianchef::makePasta()
{
    std::cout << "Italian Chef " << name << " makes pasta" << std::endl;
}
