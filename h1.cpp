#include <iostream>
#include <stdexcept>
using namespace std;

void calcSum(int a, int b) {
    cout << a << " + " << b << " = " << (a + b) << endl;
}

void calcDiv(int a, int b) {
    if (b == 0) {
        cout << "Virhe: jakaja ei saa olla nolla!" << endl;
    } else {
        cout << a << " / " << b << " = " << (float)a / b << endl;
    }
}

int retSum(int a, int b) {
    return a + b;
}

float retDiv(int a, int b) {
    if (b == 0) {
        throw runtime_error("jakaja ei saa olla nolla!");
    }
    return (float)a / b;
}

int main() {
    int a, b;
    cout << "Anna kaksi kokonaislukua:" << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    cout << "\n== Tulostavat funktiot ==" << endl;
    calcSum(a, b);
    calcDiv(a, b);

    cout << "\n== Palauttavat funktiot ==" << endl;
    int sumResult = retSum(a, b);
    cout << a << " + " << b << " = " << sumResult << endl;

    try {
        float divResult = retDiv(a, b);
        cout << a << " / " << b << " = " << divResult << endl;
    } catch (runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}

