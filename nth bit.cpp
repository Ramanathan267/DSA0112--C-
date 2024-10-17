#include <iostream>
using namespace std;

int main()
{
    int num, n;

    cout << "Enter number: ";
    cin >> num;

    cout << "Enter bit number you wish to set: ";
    cin >> n;

    cout << "Bit set Successfully";
    cout << "Answer: " << (num | (1 << (n - 1)));

    return 0;
}
