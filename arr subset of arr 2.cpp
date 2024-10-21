#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter the size of array 1: ";
    cin >> m;
    int arr1[m];
    cout << "Enter " << m << " elements for array 1: ";
    for (int i = 0; i < m; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the size of array 2: ";
    cin >> n;
    int arr2[n];

    cout << "Enter " << n << " elements for array 2: ";
    for (int j = 0; j < n; j++) {
        cin >> arr2[j];
    }
    bool isSubset = true;

    for (int i = 0; i < m; i++) {
        bool found = false;
        for (int j = 0; j < n; j++) {
            if (arr1[i] == arr2[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            isSubset = false;
            break;
        }
    }

    if (isSubset)
        cout << "Array 1 is a subset of Array 2" << endl;
    else
        cout << "Array 1 is not a subset of Array 2" << endl;

    return 0;
}

