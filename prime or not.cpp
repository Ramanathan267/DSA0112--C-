#include <iostream>
using namespace std;

int main() {
    int n, i;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n <= 1) {
        cout << n << " is not a prime number.";
    } else {
        for (i = 2; i < n; ++i) {
            if (n % i == 0) {
                cout << n << " is not a prime number.";
                return 0;
            }
        }
        cout << n << " is a prime number.";
    }

    return 0;
}

