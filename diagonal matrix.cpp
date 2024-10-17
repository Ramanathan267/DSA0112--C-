#include <iostream>
using namespace std;

int main() {
    int n = 3;
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int primaryDiagonalSum = 0, secondaryDiagonalSum = 0;

    for (int i = 0; i < n; i++) {
        primaryDiagonalSum += matrix[i][i];                 
        secondaryDiagonalSum += matrix[i][n - i - 1];  
    }

    cout << "Sum of primary diagonal: " << primaryDiagonalSum << endl;
    cout << "Sum of secondary diagonal: " << secondaryDiagonalSum << endl;

    return 0;
}

