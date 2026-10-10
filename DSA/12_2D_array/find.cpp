#include <iostream>
using namespace std;

int main() {
    int arr[4][5];

    for(int i=0; i<4; i++) {
        for(int j=0; j<5; j++) {
            cin >> arr[i][j];
        }
    }

    int maxSize = 1;

    for(int i=0; i<4; i++) {
        for(int j=0; j<5; j++) {
            int size = 1;

            while(i + size < 4 && j + size < 5) {
                bool same = true;

                for(int r=i; r<=i+size; r++) {
                    for(int c=j; c<=j+size; c++) {
                        if(arr[r][c] != arr[i][j]) {
                            same = false;
                            break;
                        }
                    }
                    if(!same) break;
                }

                if(same) maxSize = max(maxSize, size + 1);
                else break;

                size++;
            }
        }
    }

    cout << maxSize;
    return 0;
}