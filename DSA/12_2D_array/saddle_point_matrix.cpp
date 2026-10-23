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

    bool found = false;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {

            bool smallest = true;
            bool largest = true;

            for(int k = 0; k < n; k++) {
                if(arr[i][k] < arr[i][j]) {
                    smallest = false;
                }
            }

            for(int k = 0; k < m; k++) {
                if(arr[k][j] > arr[i][j]) {
                    largest = false;
                }
            }

            if(smallest && largest) {
                cout << "Saddle point = " << arr[i][j];
                found = true;
                break;
            }
        }

        if(found) {
            break;
        }
    }

    if(!found) {
        cout << "No saddle point";
    }

    return 0;
}