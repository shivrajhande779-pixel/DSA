#include<iostream>
using namespace std;

int index(int *a ,int m, int n){
    for(int i=0;i<n;i++){
        if(a[i]==m){
            return i;
        }
    }
    return -1;
}

int main(){
    int n,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    int result=index(a,m,n);
    cout<<result;
}