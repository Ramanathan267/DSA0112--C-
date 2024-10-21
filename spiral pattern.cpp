#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of matrix: ";
    cin >> n;

    int mat[n][n], val = 1;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++)
		mat[top][i] = val++;
        top++;
        for (int i = top; i <= bottom; i++) 
		mat[i][right] = val++;
        right--;
        for (int i = right; i >= left; i--) 
		mat[bottom][i] = val++;
        bottom--;
        for (int i = bottom; i >= top; i--) 
		mat[i][left] = val++;
        left++;
    }

    cout << "Spiral pattern:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

