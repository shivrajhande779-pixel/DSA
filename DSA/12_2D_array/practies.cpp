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

    int sum1 = 0, sum2 = 0;

    for(int i = 0; i < n; i++) {
        sum1 += arr[i][i];
        sum2 += arr[i][n - 1 - i];
    }

    cout << "Primary diagonal sum = " << sum1 << endl;
    cout << "Secondary diagonal sum = " << sum2;

    return 0;
}