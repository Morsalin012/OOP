#include <iostream>
#include <vector>
using namespace std;

// Function to return the spiral order of the matrix
vector<int> spiralmatrix(vector<vector<int>>& matrix) {
    vector<int> result;
    if (matrix.empty()) return result;

    int top = 0, bottom = matrix.size() - 1;
    int left = 0, right = matrix[0].size() - 1;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; ++i) result.push_back(matrix[top][i]);
        ++top;

        for (int i = top; i <= bottom; ++i) result.push_back(matrix[i][right]);
        --right;

        if (top <= bottom) {
            for (int i = right; i >= left; --i) result.push_back(matrix[bottom][i]);
            --bottom;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; --i) result.push_back(matrix[i][left]);
            ++left;
        }
    }

    return result;
}

int main() {
    int rows, cols;

    // Input the dimensions of the matrix
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    // Input the matrix elements
    cout << "Enter the matrix elements row by row:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Get the spiral order of the matrix
    vector<int> result = spiralmatrix(matrix);

    // Print the result
    cout << "The spiral order of the matrix is:\n";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
