#include <iostream>
using namespace std;

int main() {
    int number, sum = 0, i = 1;
    cout << "Enter a number: ";
    cin >> number;

    while (i <= number / 2) {
        if (number % i == 0) { 
            sum += i;
        }
        i++; 
    }
    if (sum == number && number != 0) {
        cout << number << " is a perfect number." << endl;
    } else {
        cout << number << " is not a perfect number." << endl;
    }
    return 0;
}

