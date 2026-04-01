#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
     for(int i=0;i<n;i++){
        int temp=1;
        for(int j=i+1;j<n;j++){     
            temp=temp*a[j];
        }
        a[i]=temp;
        cout<<a[i]<<" ";
    }
}