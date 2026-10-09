
#include<iostream>
#include<string>
using namespace std;

int main() {
    string s = s = "(()())(())(()(()()))";
    string ans = "";
    int count = 0;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '(') {
            if(count > 0)
                ans += s[i];
            count++;
        }
        else {
            count--;
            if(count > 0)
                ans += s[i];
        }
    }

    cout << ans;

    return 0;
}