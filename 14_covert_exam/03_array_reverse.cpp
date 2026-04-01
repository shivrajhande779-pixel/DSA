#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int nums[n];

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int k,a=0;
    cin>>k;

    for(int i=0;i<n/k;i++){
        reverse(nums.begin()+a, nums.begin()+a+k);
        a=a+k;
    }

}