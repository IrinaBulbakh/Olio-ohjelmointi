#ifndef CLASSB_H
#define CLASSB_H

#include <string>
using namespace std;

class ClassB
{
private:
    string info; // Tietokenttä

public:
    string getInfo();
    void setInfo(string value);
};

#endif
