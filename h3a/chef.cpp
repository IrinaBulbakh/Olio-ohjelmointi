#include "chef.h"

chef::chef(std::string name) : name(name)
{
    std::cout << "Chef " << name << " konstruktori" << std::endl;
}

chef::~chef() {
    std::cout << "Chef " << name << " destruktori" << std::endl;
}

void chef::makeSalad()
{
    std::cout << "Chef " << name << " makes salad" << std::endl;
}

void chef::makeSoup()
{
    std::cout << "Chef " << name << " makes soup" << std::endl;
}

std::string chef::getName()
{
    return name;
}
