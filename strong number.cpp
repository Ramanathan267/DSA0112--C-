#include <iostream>
using namespace std;

int main() {
    int num, temp, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    temp = num;

    while (temp != 0) {
        int digit = temp % 10;
        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }
        sum += fact;
        temp /= 10;
    }

    if (sum == num) {
        cout << num << " is a strong number." << endl;
    } else {
        cout << num << " is not a strong number." << endl;
    }

    return 0;
}

