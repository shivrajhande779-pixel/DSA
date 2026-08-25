#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_set<int> s;

    for (int x : arr) {
        s.insert(x);
    }

    int longest = 0;

    for (int x : s) {
        // Start only if x is the beginning of a sequence
        if (s.find(x - 1) == s.end()) {
            int current = x;
            int length = 1;

            while (s.find(current + 1) != s.end()) {
                current++;
                length++;
            }

            longest = max(longest, length);
        }
    }

    cout << "\nLongest consecutive sequence length = "
         << longest << endl;

    return 0;
}