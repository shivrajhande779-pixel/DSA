#include<iostream>
#include <vector>
using namespace std;

int main(){

        bool ans=true;
        vector<int> nums={1,3,2,1};
        int temp=0,n=nums.size();
        
    

        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                nums.erase(nums.begin() + i);
                i--;
                temp++;
            }
             if(temp>0){
                ans=false;
               
            }
        }

        if(ans==true){
            cout<<"true"<<endl;
        }
        else{
            cout<<"false"<<endl;
        }
     return 0;
}