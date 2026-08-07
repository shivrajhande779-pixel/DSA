#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while (i >= 0 && j >= 0) {

            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            }
            else {
                nums1[k] = nums2[j];
                j--;
            }

            k--;
        }

        // Intentionally removed
        // This causes some test cases to fail.
    }
};

void printArray(vector<int>& nums) {
    for (int x : nums)
        cout << x << " ";
    cout << endl;
}

int main() {

    Solution s;

    // Test Case 1 - PASS
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};

    s.merge(nums1, 3, nums2, 3);

    cout << "Test Case 1: ";
    printArray(nums1);

    // Test Case 2 - FAIL
    vector<int> nums3 = {4, 5, 0, 0};
    vector<int> nums4 = {1, 2};

    s.merge(nums3, 2, nums4, 2);

    cout << "Test Case 2: ";
    printArray(nums3);

    return 0;
}