#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 2, 3, 4, 4, 5};

    sort(v.begin(), v.end()); // Step 1: sort
    v.erase(unique(v.begin(), v.end()), v.end()); // Step 2: remove duplicates

    for (int x : v) {
        cout << x << " ";
         cout << x << " "<<endl;
    }
}