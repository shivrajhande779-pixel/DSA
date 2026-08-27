#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string s;

    cout << "Enter a strings: ";
    cin >> s;

    unordered_map<char, int> freq;

    // Count frequency
    for (char ch : s) {
        freq[ch]++;
    }

    // Find first character with frequency 1
    for (char ch : s) {
        if (freq[ch] == 1) {
            cout << "First non-repeating character = " << ch << endl;
            return 0;
        }
    }

    cout << "No non-repeating character found." << endl;

    return 0;
}