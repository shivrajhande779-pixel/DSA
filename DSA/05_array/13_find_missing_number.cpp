#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100000];

    for(int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    for(int num = 1; num <= n; num++) {

        bool found = false;

        for(int i = 0; i < n - 1; i++) {
            if(arr[i] == num) {
                found = true;
                break;
            }
        }

        if(found == false) {
            cout << "Missing number = " << num;
            break;
        }
    }

    return 0;
}