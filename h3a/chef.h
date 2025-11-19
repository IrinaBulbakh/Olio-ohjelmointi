#ifndef CHEF_H
#define CHEF_H

#include <string>
#include <iostream>

class chef {
protected:
    std::string name;

public:
    chef(std::string name);   // konstruktori
    ~chef();                  // destruktori

    void makeSalad();         // tekee salaattia
    void makeSoup();          // tekee keittoa

    std::string getName();    // palauttaa nimen
};

#endif
