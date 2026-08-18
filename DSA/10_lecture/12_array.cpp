#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int findMax(int arr[], int n) {
    int mx = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > mx) {
            mx = arr[i];
        }
    }

    return mx;
}

int main() {
    srand(time(0));

    int n = 20;
    int arr[10];

    cout << "Random Array: ";

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100 + 1;
        cout << arr[i] << " ";
    }

    cout << "\n\nMaximum value = " << findMax(arr, n);

    return 0;
}