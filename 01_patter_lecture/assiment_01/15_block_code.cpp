#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n/2+1;i++){
        for(int j=n-i;j>=i;j--){
            cout<<"  ";
        }
        int m=i;
        for(int k=1;k<=i;k++){
            cout<<m<<" ";
            m--;
        }
        for(int s=1;s<=2*i-3;s++){
            cout<<"  ";
        }
        for(int l=1;l<=i;l++){
            if(i!=1){
                cout<<l<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=n/2;i>=1;i--){
        for(int j=n-i;j>=i;j--){
            cout<<"  ";
        }
        int m=i;
        for(int k=1;k<=i;k++){
            cout<<m<<" ";
            m--;
        }
        for(int s=1;s<=2*i-3;s++){
            cout<<"  ";
        }
        for(int l=1;l<=i;l++){
            if(i!=1){
                cout<<l<<" ";
            }
        }
        cout<<endl;
    }
}