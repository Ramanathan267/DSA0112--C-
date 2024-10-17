#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    int sum = 0, originalNum = num, digits = 0;

    // Count number of digits
    while (originalNum != 0) {
        digits++;
        originalNum /= 10;
    }

    originalNum = num;
    while (originalNum != 0) {
        int remainder = originalNum % 10;
        sum += pow(remainder, digits);
        originalNum /= 10;
    }

    return sum == num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num))
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;

    return 0;
}

