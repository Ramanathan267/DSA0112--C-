#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "Number of divisors: " << countDivisors(number) << endl;
    return 0;
}

