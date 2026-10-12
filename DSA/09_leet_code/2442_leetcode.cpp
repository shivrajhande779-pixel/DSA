
#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    vector<int> nums = {1, 13, 10, 12, 31};

    int n = nums.size();
    int size =n;

    for (int i = 0; i < n; i++) {
        int m = 0;
        int num = nums[i];

        while (num != 0) {
            int temp = num % 10;
            m = (m * 10) + temp;
            num = num / 10;
        }

        nums.push_back(m);
    }

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    set<int> x(nums.begin(), nums.end());
    cout << x.size() << endl;

 for (int s : x) {
        cout << s << " ";
    }
       
    return 0;
}
