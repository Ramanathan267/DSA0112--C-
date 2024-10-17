#include <iostream>
using namespace std;

int main() {
    int n, num, sum = 0, i = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the numbers: ";
    while (i < n) {
        cin >> num;   
        sum =sum+ num;   
        i++;         
    }
    cout << "The sum of the numbers is: " << sum;
    return 0;
}

