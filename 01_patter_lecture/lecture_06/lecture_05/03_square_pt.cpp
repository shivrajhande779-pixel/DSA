#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the number : ";
    cin>>n;
    int k=0;
    for( int i=1 ; i<=n;i++){ //9

       for(int j=0;j<k;j++){ //
        cout<<"p";
       }
       for(int l=5;l>1;l--){
        cout<<"*";
       }
       for(int m=4;m>1;m--){
        cout<<"m";
       }
       cout<<endl;
       k=k+2;
    }
}