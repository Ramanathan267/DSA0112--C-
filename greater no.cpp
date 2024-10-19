#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    if (a > b)
        cout << a << " is greater." << endl;
    else
        cout << b << " is greater." << endl;

    return 0;
}

