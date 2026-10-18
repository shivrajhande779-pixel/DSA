#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >>m>>n;

    int arr[100][100];

    for(int s = 0; s < m; s++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[s][j];
        }
    }

    int sum = 0;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(i == 0 || j == 0 || i == m - 1 || j == n - 1) {
                sum += arr[i][j];
            }
        }
    }

    cout << "Boundary sum = " << sum;

    return 0;
}