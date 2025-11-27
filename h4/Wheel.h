#ifndef WHEEL_H
#define WHEEL_H

#include <string>
using std::string;

class Wheel {
private:
    int size;
    string type;

public:
    Wheel();
    Wheel(int s, string t);

    int getSize() const;
    string getType() const;

    void setSize(int s);
    void setType(string t);
};

#endif
