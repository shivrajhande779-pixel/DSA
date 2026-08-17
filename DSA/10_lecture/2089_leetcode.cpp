#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {1, 2, 5, 2, 5};
    int target = 2;

    vector<int> result = obj.targetIndices(nums, target);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}