#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int sum = 0;

    for(int i=0; i<n; i++) {
        if(arr[i] % 2 == 0) {
            sum = sum + arr[i];
        }
    }

    cout << "Sum of even elements = " << sum;

    return 0;
}