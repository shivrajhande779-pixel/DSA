#include <iostream>
using namespace std;

int main() {
    int m,n;

    cout<<" enter the max of array : ";
    cin>>m;

    cout << "Enter size of array : ";
    cin >> n;

    int arr[999];

    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];
    int second = -1;

    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    cout << "Largest element = " << largest << endl;
    cout << "Second largest element = " << second << endl;

    return 0;
}