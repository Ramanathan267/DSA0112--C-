#include <iostream>
using namespace std;

int main() {
    const int rows = 3;
    const int cols = 3;

    int firstMatrix[rows][cols], secondMatrix[rows][cols], resultMatrix[rows][cols] = {0};

    cout << "Enter the first matrix elements (3x3):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> firstMatrix[i][j];
        }
    }
    cout << "Enter the second matrix elements (3x3):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> secondMatrix[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            for (int k = 0; k < cols; k++) {
                resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
    cout << "Multiplication of the matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << resultMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}




2 cross 2 matrix



#include <iostream>
using namespace std;

int main() {
    int first[3][3], second[3][3], result[3][3] = {0};

    // Input first matrix
    cout << "Enter the first matrix (3x3):\n";
    for (auto& row : first) 
        for (int& elem : row) cin >> elem;

    // Input second matrix
    cout << "Enter the second matrix (3x3):\n";
    for (auto& row : second) 
        for (int& elem : row) cin >> elem;

    // Matrix multiplication
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            for (int k = 0; k < 3) 
                result[i][j] += first[i][k] * second[k][j];

    // Output the result
    cout << "Result:\n";
    for (auto& row : result) {
        for (int elem : row) cout << elem << " ";
        cout << endl;
    }
    
    return 0;
}

