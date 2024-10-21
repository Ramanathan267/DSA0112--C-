#include <iostream>
using namespace std;

class Box {
private:
    int length, width, height;

public:
    Box(int l, int w, int h) : length(l), width(w), height(h) {}

    int volume() {
        return length * width * height;
    }
};

int main() {
    Box box(5, 3, 2);
    cout << "Volume of the box: " << box.volume() << endl;
    return 0;
}

