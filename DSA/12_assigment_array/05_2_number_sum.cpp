#include<iostream>
using namespace std;

int main(){
    int n,target,x=1;
    cin>>n;
    int a[n];
  
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>target;

    for(int i=0;i<n;i++){
        
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==target){
                if(a[i]>a[j]){
                cout<<a[j]<<" and "<<a[i]<<endl;
                }
                else cout<<a[i]<<" and "<<a[j]<<endl;
            }
        }
    }
}