class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        bool hasOdd = false;
        bool hasEven = false;
        for (int x : nums1) {
            if (x % 2 == 0)
                hasEven = true;
            else
                hasOdd = true;
        }
        if (!hasOdd || !hasEven)
            return true;
         int mn = *min_element(nums1.begin(), nums1.end());
        if (mn % 2 == 1)
        return true;
        return false;
    }
};