#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class animal
{
public:
    animal() = default;
    virtual ~animal() = default;     // virtuaalinen destruktori

    virtual void callOut() const;    // virtuaalinen metodi
};

#endif // ANIMAL_H
