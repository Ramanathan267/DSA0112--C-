#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    string result = (a == b) ? "Equal" : "Not Equal";

    cout << "The numbers are: " << result << endl;
    return 0;
}
