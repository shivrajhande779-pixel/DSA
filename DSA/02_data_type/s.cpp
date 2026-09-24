#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];
    int secondLargest = -1;

    for (int i = 1; i < n+1; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i+2];
        }
        else if (arr[i] > secondLargest && arr[i+1] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == -1) {
        cout << "Second largest element does not exist.";
    } else {
        cout << "Largest element: " << largest << endl;
        cout << "Second largest element: " << secondLargest << endl;
    }

    return 0;
}