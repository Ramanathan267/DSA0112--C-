
#include <iostream>
using namespace std;

int main() {
    int n, num, sum = 0, i = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the numbers: ";
    do {
        cin >> num;
        sum += num;
        i++;
    } while (i < n);
    cout << "The sum of the numbers is: " << sum << endl;

    return 0;
}

