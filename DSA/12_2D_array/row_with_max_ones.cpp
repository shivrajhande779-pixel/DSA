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

    int maxCount = 0;
    int row = -1;

    for(int i = 0; i < m; i++) {
        int count = 0;

        for(int j = 0; j < n; j++) {
            if(arr[i][j] == 1) {
                count++;
            }
        }

        if(count > maxCount) {
            maxCount = count;
            row = i;
        }
    }

    cout << "Row = " << row << endl;
    cout << "Maximum ones = " << maxCount;

    return 0;
}