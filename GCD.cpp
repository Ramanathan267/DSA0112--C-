#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (num1 < num2) {
        swap(num1, num2);
    }
    while (num2 != 0) {
        int temp = num2; 
        num2 = num1 % num2;
        num1 = temp; 
    }
    cout << "GCD is: " << num1 << endl; 
    return 0;
}

