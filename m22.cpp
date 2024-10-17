#include <iostream>
using namespace std;

class Box {
public:
    int length;

private:
    int width;

public:
    void setWidth(int w) {
        width = w;
    }
    int getWidth() {
        return width;
    }
};

int main() {
    Box box;
    int inputLength, inputWidth;
    cout << "Enter the Length of the box: ";
    cin >> inputLength;
    box.length = inputLength; 
    cout << "Enter the Width of the box: ";
    cin >> inputWidth;
    box.setWidth(inputWidth); 
    cout << "Length of the box: " << box.length << endl; 
    cout << "Width of the box: " << box.getWidth() << endl; 

    return 0;
}

