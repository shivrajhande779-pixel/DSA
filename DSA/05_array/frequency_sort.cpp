#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int answer = arr[0];
    int maxCount = 0;

    for(int i = 0; i < n; i++) {

        int count = 0;

        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        if(count > maxCount) {
            maxCount = count;
            answer = arr[i];
        }
        else if(count == maxCount && arr[i] < answer) {
            answer = arr[i];
        }
    }

    cout << "Most frequent element = " << answer << endl;
    cout << "Frequency = " << maxCount;

    return 0;
}