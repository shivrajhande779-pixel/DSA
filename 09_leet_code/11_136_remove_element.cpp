#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> nums;

    for(int i=0;i<)
        int ans=0;
        if(nums.size()==1){
            return nums[0];
        }
        for(int i=0;i<nums.size();i++){
            int temp=nums[i];
            for(int j=i+1;j<nums.size();j++){
                if(temp==nums[j]){
                    nums.erase(nums.begin() + j);
                    nums.erase(nums.begin() + i);
                }
            }
        }
        for(int i=0;i<nums.size();i++){
           ans=nums[i];
        }
        
        return ans;
    }
};