#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    vector<int> arr(10);

    cout << "Random Array: ";

    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 100 + 1;
        cout << arr[i] << " ";
    }

    int maxValue = arr[0];
    int minValue = arr[0];

    for (int x : arr) {
        if (x > maxValue)
            maxValue = x;

        if (x < minValue)
            minValue = x;
    }

    cout << "\n\nMaximum: " << maxValue;
    cout << "\nMinimum: " << minValue;

    return 0;
}