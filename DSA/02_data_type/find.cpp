#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;

    int arr[10];

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    

    for(int i=0; i<n; i++) {
        if(arr[i] % 2 == 0) {
            sum = sum + arr[i];
        }
    }

    cout << "Sum of even elements = " << sum;

    return 0;
}