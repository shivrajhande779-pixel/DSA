#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n/2;i++){
        int temp=a[n-1-i];
        a[n-1-i]=a[i];
        a[i]=temp;
    }
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}