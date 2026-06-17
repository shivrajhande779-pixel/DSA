#include<iostream>
using namespace std;

int main(){
    int n,find;
    int a[5];
    cin>>find;
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    for(int j=0;j<5;j++){
        if(find==a[j]){
            cout<<j+1;
        }
    }
}