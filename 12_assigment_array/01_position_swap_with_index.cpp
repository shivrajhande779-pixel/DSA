#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(int i=0;i<=n;i++){
        int ele=0;
        ele=a[i]; // 0 2 4 1 3
        a[ele]=i;
        // cout<<" "<<ele<<" ";
 
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}