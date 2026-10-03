#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Duplicate elements: ";

    for(int i = 0; i < n; i++) {

        int count = 0;

        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        bool alreadyPrinted = false;

        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                alreadyPrinted = true;
                break;
            }
        }

        if(count > 1 && alreadyPrinted == false) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}