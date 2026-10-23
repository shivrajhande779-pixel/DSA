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

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n - 1; j++) {
            for(int k = 0; k < n - j - 1; k++) {
                if(arr[i][k] > arr[i][k + 1]) {
                    int temp = arr[i][k];
                    arr[i][k] = arr[i][k + 1];
                    arr[i][k + 1] = temp;
                }
            }
        }
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}