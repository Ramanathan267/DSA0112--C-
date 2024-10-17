#include <iostream>  
using namespace std;  

int main() {  
    string name = "malayaa";
    string ori = name; 
    int len = name.length();
    string rev = "";
    for (int i = len - 1; i >= 0; i--) { 
        rev = rev + name[i];
    }
    if (ori == rev)
        cout << "y";
    else
        cout << "n";

    return 0;  
}
