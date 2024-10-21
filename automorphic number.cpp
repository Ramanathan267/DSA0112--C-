#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int square = number * number;
    int temp = number; 
    while (temp > 0) {
        if (temp % 10 != square % 10) {
            cout << number << " is not an automorphic number." << endl;
            return 0; 
        }
        temp /= 10; 
        square /= 10;
    }

    cout << number << " is an automorphic number." << endl;
    return 0;
}

