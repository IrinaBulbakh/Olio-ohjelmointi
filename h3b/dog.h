#ifndef DOG_H
#define DOG_H

#include "animal.h"

class dog : public animal
{
public:
    dog() = default;
    ~dog() override = default;

    void callOut() const override;
};

#endif // DOG_H
