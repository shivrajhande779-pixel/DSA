#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        vector<pair<int, string>> roman = {
            {1000, "M"},
            {900, "CM"},
            {500, "D"},
            {400, "CD"},
            {100, "C"},
            {90, "XC"},
            {50, "L"},
            {40, "XL"},
            {10, "X"},
            {9, "IX"},
            {5, "V"},
            {4, "IV"},
            {1, "I"}
        };

        string ans = "";

        for (auto &p : roman) {
            while (num >= p.first) {
                ans += p.second;
                num -= p.first;
            }
        }

        return ans;
    }
};

int main() {
    Solution obj;

    int num;
    cout << "Enter an integer: ";
    cin >> num;

    cout << "Roman Numeral: " << obj.intToRoman(num) << endl;

    return 0;
}