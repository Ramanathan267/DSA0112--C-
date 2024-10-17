#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double base;
    int exponent;

    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;

    double result = pow(base, exponent);
    cout << base << " raised to the power of " << exponent << " = " << result ;

    return 0;
}

