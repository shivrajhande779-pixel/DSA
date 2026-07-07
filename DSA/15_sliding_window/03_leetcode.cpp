#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int ans = 0;
        int r = 0;
        string a;

        while (r < n) {
            while (a.find(s[r]) != string::npos) {
                a.erase(a.begin());
            }
            a.push_back(s[r]);
            ans = max(ans, (int)a.size());
            r++;
        }

        return ans;
    }
};

int main() {
    Solution obj;
    string s;

    cout << "Enter string: ";
    cin >> s;

    cout << "Longest substring length: "
         << obj.lengthOfLongestSubstring(s) << endl;

    return 0;
}