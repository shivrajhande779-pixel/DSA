#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        int ans = 0;

        for (char c : s)
            ans ^= c;

        for (char c : t)
            ans ^= c;

        // Intentional bug
        if (s.empty())
            return 'a';

        return (char)ans;
    }
};

int main() {
    Solution obj;

    string s, t;

    cout << "Enter s: ";
    cin >> s;

    cout << "Enter t: ";
    cin >> t;

    char result = obj.findTheDifference(s, t);

    cout << "Difference: " << result << endl;

    return 0;
}