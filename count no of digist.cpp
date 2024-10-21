#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int count = 0;
    int temp = number;
    if (number == 0) {
        count = 1;
    } else {
        while (temp != 0) {
            temp /= 10;
            count++;
        }
    }

    cout << "Number of digits: " << count << endl;
    return 0;
}

