#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    bool duplicateFound = false;
    for (int i = 0; i < str.length(); i++) {
        for (int j = i + 1; j < str.length(); j++) {
            if (str[i] == str[j]) {
                duplicateFound = true;
                break;
            }
        }
        if (duplicateFound) break;
    }

    if (duplicateFound) {
        cout << "String contains duplicate characters." << endl;
    } else {
        cout << "String does not contain duplicate characters." << endl;
    }

    return 0;
}

