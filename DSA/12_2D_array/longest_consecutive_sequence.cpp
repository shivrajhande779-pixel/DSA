#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int longest = 0;

    for(int i = 0; i < n; i++) {
        int count = 1;
        int num = arr[i];

        while(true) {
            bool found = false;

            for(int j = 0; j < n; j++) {
                if(arr[j] == num + 1) {
                    count++;
                    num++;
                    found = true;
                    break;
                }
            }

            if(found == false) {
                break;
            }
        }

        if(count > longest) {
            longest = count;
        }
    }

    cout << "Longest consecutive sequence = " << longest;

    return 0;
}