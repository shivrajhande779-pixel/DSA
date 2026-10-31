#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];

    int reach=0;

    for(int i=0;i<n;i++){
        if(i>reach){
            cout<<"false";
            return 0;
        }
        reach=max(reach,i+nums[i]);
    }

    cout<<"true";
    return 0;
}