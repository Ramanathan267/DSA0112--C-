#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    if (n < 0) {
        cout << "Please enter a non-negative integer." << endl;
        return 1; 
    }
    int a = 0, b = 1, result = 0;
    if (n == 0) {
        result = a; 
    } else if (n == 1) {
        result = b; 
    } else {
        for (int i = 2; i <= n; i++) {
            result = a + b;
            a = b;        
            b = result;     
        }
    }
    cout << "The " << n << "th Fibonacci number is: " << result;
    return 0;
}

