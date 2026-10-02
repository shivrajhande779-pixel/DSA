#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int smallest = arr[0];
    int second = 1000000000;

    for(int i = 1; i < n; i++) {

        if(arr[i] < smallest) {
            second = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < second && arr[i] != smallest) {
            second = arr[i];
        }
    }

    cout << "Smallest = " << smallest << endl;

    if(second == 1000000000) {
        cout << "Second smallest does not exist";
    }
    else {
        cout << "Second smallest = " << second;
    }

    return 0;
}