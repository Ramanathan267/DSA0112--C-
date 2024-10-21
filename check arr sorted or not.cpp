#include <iostream>
using namespace std;

bool isSorted(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        if (arr[i - 1] > arr[i]) {
            return false;
        }
    }
    return true;
}
int main() {
    const int SIZE = 6; 
    int arr[SIZE] = {20, 23, 23, 45, 78, 88};

    if (isSorted(arr, SIZE)) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}

