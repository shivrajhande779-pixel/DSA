#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100][100];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += arr[i][i];

        if(i != n - 1 - i) {
            sum += arr[i][n - 1 - i];
        }
    }

    cout << "Diagonal sum = " << sum;

    return 0;
}