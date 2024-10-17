#include <iostream>
using namespace std;

void mergeArrays(int arr1[], int arr2[], int n1, int n2, int merged[]) {
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j])
            merged[k++] = arr1[i++];
        else
            merged[k++] = arr2[j++];
    }

    while (i < n1) {
        merged[k++] = arr1[i++];
    }

    while (j < n2) {
        merged[k++] = arr2[j++];
    }
}

int main() {
    int n1 = 5, n2 = 4;
    int arr1[] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 4, 6, 8};

    int merged[n1 + n2];

    mergeArrays(arr1, arr2, n1, n2, merged);

    cout << "Merged array: ";
    for (int i = 0; i < n1 + n2; i++

