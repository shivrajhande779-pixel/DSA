#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int arr[100][100];

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Row sums:" << endl;

    for(int i = 0; i < m; i++) {
        int sum = 0;

        for(int j = 0; j < n; j++) {
            sum += arr[i][j];
        }

        cout << sum << " ";
    }

    cout << endl << "Column sums:" << endl;

    for(int j = 0; j < n; j++) {
        int sum = 0;

        for(int i = 0; i < m; i++) {
            sum += arr[i][j];
        }

        cout << sum << " ";
    }

    return 0;
}