#include<iostream>
using namespace std;

int main(){
    int m;
    cin>>m;

    int a[m];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    int max=0;
    for(int i=1;i<=m;i++){
        max=max+i;
    }
    for(int i=0;i<max;i++){
        cout<<i;
    }
}