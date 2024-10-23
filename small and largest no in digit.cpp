#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int smallest = 9;
    int largest = 0;  
    
    while (number > 0) {
        int digit = number % 10; 
        if (digit < smallest) smallest = digit;
        if (digit > largest) largest = digit; 
        number /= 10; 
    }

    cout << "Smallest digit: " << smallest << endl;
    cout << "Largest digit: " << largest << endl;

    return 0;
}

