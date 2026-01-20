#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-1;j++){
            cout<<"*";
        }
        for(int m=1;m<=i;m++){
            cout<<"m";
        }
        cout<<endl;
    }
}