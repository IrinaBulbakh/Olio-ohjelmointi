#include "student.h"

void Student::setName(string n) {
    name = n;
}

void Student::setStudentNumber(int sn) {
    studentNumber = sn;
}

void Student::setAverage(double a) {
    average = a;
}

string Student::getName() {
    return name;
}

int Student::getStudentNumber() {
    return studentNumber;
}

double Student::getAverage() {
    return average;
}
