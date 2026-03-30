#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> nums;
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(1);
    // nums.push_back(1);
    // nums.push_back(2);

        int ans=0;
        if(nums.size()==1){
            cout<<nums[0]<<" t ";
        }
        for(int i=0;i<nums.size();i++){
            int temp=nums[i];
            for(int j=i+1;j<nums.size();j++){
                if(temp==nums[j]){
                    nums[j]=0;
                    nums[i]=0;
                }
            }
        }
        for(int i=0;i<nums.size();i++){
           if(nums[i]!=0){
            ans=nums[i];
           }
        //     int temp=nums[i];
        //      for(int j=i+1;j<nums.size();j++){
        //         if(temp!=0){
        //             ans=nums[j];
        //             break;
        //         }
        
        // }
        }
       cout<<ans;
    }