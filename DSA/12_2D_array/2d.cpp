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

    for(int j=0; j<n; j++) {
        int max = arr[0][j];

        for(int i=1; i<m; i++) {
            if(arr[i][j] > max) {
                max = arr[i][j];
            }
        }

        cout << max << " ";
    }

    return 0;
}