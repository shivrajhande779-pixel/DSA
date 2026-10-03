#include <iostream>
using namespace std;

int main() {
    int n, m;

    cin >> n;

    int a[100];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cin >> m;

    int b[100];

    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }

    cout << "Common elements: ";

    for(int i = 0; i < n; i++) {

        bool found = false;

        for(int j = 0; j < m; j++) {
            if(a[i] == b[j]) {
                found = true;
                break;
            }
        }

        bool alreadyPrinted = false;

        for(int k = 0; k < i; k++) {
            if(a[i] == a[k]) {
                alreadyPrinted = true;
                break;
            }
        }

        if(found == true && alreadyPrinted == false) {
            cout << a[i] << " ";
        }
    }

    return 0;
}