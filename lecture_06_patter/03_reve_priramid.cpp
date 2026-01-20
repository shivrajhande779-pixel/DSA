#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=n;i0;i--){
         for(int j=i-1;j>=1;j++){
            cout<<"*";
        }
        for(int j=1;j<=n;j++){
            cout<<"88  ";
        }
       
        cout<<endl;
    }
}