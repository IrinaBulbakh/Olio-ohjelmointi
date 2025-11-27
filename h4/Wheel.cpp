#include "Wheel.h"

// Renkaan oletusrakentaja
Wheel::Wheel() : size(0), type("none") {}

// Renkaan rakentaja parametreilla
Wheel::Wheel(int s, string t) : size(s), type(t) {}

int Wheel::getSize() const { return size; }
string Wheel::getType() const { return type; }

void Wheel::setSize(int s) { size = s; }
void Wheel::setType(string t) { type = t; }
