#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter rows: ";
    cin >> rows;

    cout << "Enter columns: ";
    cin >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    cout << "Enter matrix elements:\n";

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    int top = 1;
    int bottom = rows - 1;
    int left = 0;
    int right = cols - 1;

    cout << "\nSpiral Order: ";

    while (top <= bottom && left <= right) {

        // Left -> Right
        for (int j = left; j <= right; j++)
            cout << matrix[top][j] << " ";

        top++;

        // Top -> Bottom
        for (int i = top; i <= bottom; i++)
            cout << matrix[i][right] << " ";

        right--;

        // Right -> Left
        if (top <= bottom) {
            for (int j = right; j >= left; j--)
                cout << matrix[bottom][j] << " ";

            bottom--;
        }

        // Bottom -> Top
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                cout << matrix[i][left] << " ";

            left++;
        }
    }

    cout << endl;

    return 0;
}