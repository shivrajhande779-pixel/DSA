#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> nums = {9,12,5,10,14,3,10}; 
    int pivot=10;

     int n=nums.size();
        for(int i=0;i<n;i++){
            

            if(pivot==nums[i]){
                nums.erase(nums.begin() + i);
                nums.insert(nums.begin(),pivot);
            }
        }

          int st=0,mx=0;

        for(int i=0;i<n;i++){
            if(nums[i]==pivot){
                mx++;
                continue;+
            }
            

            if(nums[i]<pivot){
                nums.insert(nums.begin() + st, nums[i]);
                nums.erase(nums.begin() + (i+1));
                st++;
            }

            if(nums[i]>pivot){
                nums.insert(nums.begin()+i, nums[i]);
            }
            
        }

        for(int i=0;i<n;i++){
            cout<<nums[i]<<" ";
        }
    
} 
 
 
