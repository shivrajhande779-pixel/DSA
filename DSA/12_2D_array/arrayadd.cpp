#include <iostream>
using namespace std;

int main() {
    int m,n,o,p;
    cin >> n;

    int arr[100];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = arr[1];
    int maxSum = arr[0];

    for(int i = 1; i < n; i++) {
        if(sum + arr[i] < arr[i]) {
            sum = arr[i];
        }
        else {
            sum = sum + arr[i];
        }

        if(sum > maxSum) {
            maxSum = sum;
        }
    }

    cout << "Maximum subarray sum = " << maxSum;

    return 0;
}