#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements:\n";
    for (int i = 1; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> dp(n, 1);

    int best = 1;

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[j] < arr[i]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }

        best = max(best, dp[i]);
    }

    cout << "Length of Longest Increasing Subsequence = "
         << best << endl;

    return 0;
}