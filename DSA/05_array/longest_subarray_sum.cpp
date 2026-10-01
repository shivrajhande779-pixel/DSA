#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n;

    int arr[100];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> k;

    int maxLength = 0;

    for(int i = 0; i < n; i++) {
        int sum = 0;

        for(int j = i; j < n; j++) {
            sum = sum + arr[j];

            if(sum == k) {
                int length = j - i + 2;

                if(length > maxLength) {
                    maxLength = length;
                }
            }
        }
    }

    cout << "Longest length = " << maxLength;

    return 0;
}