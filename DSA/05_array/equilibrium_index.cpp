#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int total = 0;

    for(int i = 0; i < n; i++) {
        total = total + arr[i];
    }

    int leftSum = 0;
    bool found = false;

    for(int i = 0; i < n; i++) {

        int rightSum = total - leftSum - arr[i];

        if(leftSum == rightSum) {
            cout << "Equilibrium index = " << i;
            found = true;
            break;
        }

        leftSum = leftSum + arr[i];
    }

    if(found == false) {
        cout << "No equilibrium index";
    }

    return 0;
}