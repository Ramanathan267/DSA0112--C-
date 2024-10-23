#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100], ch;
    cout << "Enter a string: ";
    cin >> str;

    cout << "Enter the character to remove: ";
    cin >> ch;

    int len = strlen(str);
    cout << "Modified string: ";
    
    for (int i = 0; i < len; i++) {
        if (str[i] != ch) {
            cout << str[i];
        }
    }
    cout << endl;

    return 0;
}

