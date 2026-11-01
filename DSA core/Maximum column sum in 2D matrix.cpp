
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;

    int matrix[100][100];

    // Input matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    int maxSum = INT_MIN ;
    for (int j = 0; j < cols; j++) {
        int sum = 0;

        for (int i = 0; i < rows; i++) {
            sum += matrix[i][j];
        }

        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    cout << "Maximum Column Sum = " << maxSum;

    return 0;
}

