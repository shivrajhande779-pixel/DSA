#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string getHint(string secret, string guess) {
        int f[10] = {0};

        for (int i = 0; i < secret.size(); i++) {
            f[secret[i] - '0']++;
        }

        int cow = 0;
        int bull = 0;

        for (int i = 0; i < guess.size(); i++) {
            if (f[guess[i] - '0'] > 0) {
                cow++;
                f[guess[i] - '0']--;
            }
        }

        for (int i = 0; i < secret.size(); i++) {
            if (guess[i] == secret[i]) {
                cow--;
                bull++;
            }
        }

        return to_string(bull) + "A" + to_string(cow) + "B";
    }
};

int main() {
    Solution obj;

    string secret = "1807";
    string guess = "7810";

    cout << obj.getHint(secret, guess) << endl;

    return 0;
}