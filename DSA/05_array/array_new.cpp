#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> nums(n);
    vector<int> ans;

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
     for(int i=0;i<n;i++){
        cin>>ans[i];
    }


    int largest=0;
    int second=0;

    for(int i=0;i<n;i++){
        if(nums[i]>largest){
            second=largest;
            largest=nums[i];
        }
        else if(nums[i]>second&&nums[i]!=largest){
            second=nums[i];
        }
    }

    if(second==0)
        cout<<"No second largest";
    else
        cout<<second;

    return 0;
}