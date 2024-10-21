#include <iostream>
using namespace std;

int main() {
    int N, D;
    cout << "Enter a number: ";
    cin >> N;
    cout << "Enter a digit to find its frequency: ";
    cin >> D;
    int c = 0;

    while (N > 0) {
        if (N % 10 == D)
            c++;

        N = N / 10;
    }

    cout << "Frequency of " << D << " is: " << c << endl;

    return 0;
}

