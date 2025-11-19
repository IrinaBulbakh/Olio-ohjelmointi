#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

class italianchef : public chef {
public:
    italianchef(std::string name);   // konstruktori
    ~italianchef();                  // destruktori

    void makePasta();                // tekee pastaa
};

#endif
