#include <iostream>
using namespace std;

int main() {
    int decimal, octal = 0, placeValue = 1;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    int temp = decimal;

    while (temp > 0) {
        int remainder = temp % 8;
        octal += remainder * placeValue;
        temp /= 8;
        placeValue *= 10;
    }
    cout << "Octal equivalent of " << decimal << " is " << octal << endl;

    return 0;
}

