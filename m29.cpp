#include <iostream>
using namespace std;

class Largest {
    int a, b, m;

public:
    void setData(int x, int y) {
        a = x;
        b = y;
    }
    friend void find_Max(Largest obj);
};
void find_Max(Largest obj) {
    if (obj.a > obj.b)
        obj.m = obj.a;
    else
        obj.m = obj.b;
    
    cout << "Maximum no is " << obj.m << endl;
}

int main() {
    Largest num;
    int a, b;
    cout << "Enter the first no: ";
    cin >> a;
    cout << "Enter the second no: ";
    cin >> b;
    num.setData(a, b);

    find_Max(num);

    return 0;
}

