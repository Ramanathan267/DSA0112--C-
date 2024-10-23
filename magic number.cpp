#include <iostream>
using namespace std;

int main() {
    int number, sum, temp;

    cout << "Enter a number: ";
    cin >> number;

    temp = number;
    while (temp > 9) {
        sum = 0;
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        temp = sum;  
    }
    if (temp == 1) {
        cout << number << " is a Magic Number!" << endl;
    } else {
        cout << number << " is not a Magic Number." << endl;
    }

    return 0;
}

