#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string hexNum;
    cout << "Enter a hexadecimal number: ";
    cin >> hexNum;

    int len = hexNum.length();
    int base = 1; 
    int dec_val = 0;  
    
    for (int i = len - 1; i >= 0; i--) {
        if (hexNum[i] >= '0' && hexNum[i] <= '9') {
            dec_val += (hexNum[i] - '0') * base; 
            base *= 16;  
        } else if (hexNum[i] >= 'A' && hexNum[i] <= 'F') {
            dec_val += (hexNum[i] - 'A' + 10) * base;  
            base *= 16;  
        }
    }

    cout << "Decimal value is: " << dec_val << endl;
    return 0;
}

