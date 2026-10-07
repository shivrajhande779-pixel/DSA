#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int arr[100][100];

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cin >> arr[i][j];
        }
    }

    int maxSum = 0;
    int row = 0;

    for(int i=0; i<m; i++) {
        int sum = 0;

        for(int j=0; j<n; j++) {
            sum += arr[i][j];
        }

        if(sum > maxSum) {
            maxSum = sum;
            row = i + 1;
        }
    }

    cout << "Rows is " << row << " has maximum sum = " << maxSum;

    return 0;
}