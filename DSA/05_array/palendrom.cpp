#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    string longest = "";

    for(int i = 0; i < s.length(); i++) {

        for(int j = i; j < s.length(); j++) {

            bool palindrome = true;

            int left = i;
            int right = j;

            while(left < right) {

                if(s[left] != s[right]) {
                    palindrome = false;
                    break;
                }

                left++;
                right--;
            }

            if(palindrome == true) {

                int length = j - i + 1;

                if(length > longest.length()) {
                    longest = s.substr(i, length);
                }
            }
        }
    }

    cout << "Longest palindrome = " << longest << endl;
    cout << "Length = " << longest.length();

    return 0;
}