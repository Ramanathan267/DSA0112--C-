#include <iostream>
using namespace std;
int main() {
    int n, num, sum = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the numbers: ";
    
      for (int i = 0; i < n; i++) {
        cin >> num;  
        sum += num;  
    }
    cout << "The sum of the numbers is: " << sum;
    return 0;
}

