#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[100000];

    for(int i=0;i<n;i++) cin>>arr[i];

    int sum=arr[0],ans=arr[0];

    for(int i=1;i<n;i++){
        sum=max(arr[i],sum+arr[i]);
        ans=max(ans,sum);
    }

    cout<<ans;
    return 0;
}