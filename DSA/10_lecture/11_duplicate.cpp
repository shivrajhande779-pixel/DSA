#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    const int n = 20;
    int arr[n];

    // Generate random numbers
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100 + 1;
    }

    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // Find largest and smallest
    int largest = arr[0];
    int smallest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest)
            largest = arr[i];

        if (arr[i] < smallest)
            smallest = arr[i];
    }

    // Sort array
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {

            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "\n\nSorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // Find second largest
    int secondLargest = arr[n - 2];

    cout << "\n\nLargest: " << largest;
    cout << "\nSmallest: " << smallest;
    cout << "\nSecond Largest: " << secondLargest;

    // Check duplicates
    bool duplicate = false;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            duplicate = true;
            break;
        }
    }

    if (duplicate)
        cout << "\nDuplicate Found!";
    else
        cout << "\nNo Duplicate Found!";

    return 0;
}