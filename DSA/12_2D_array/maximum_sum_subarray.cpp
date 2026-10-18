#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = arr[0];
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