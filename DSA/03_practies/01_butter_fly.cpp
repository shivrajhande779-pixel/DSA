#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    // int m=n;
    for(int i=1;i<=n+1;i++){
        for(int j=n;j>=n-i+1;j--){
            cout<<j<<" ";
        }
        for(int s=1;s<=2*n-2*i+1;s++){
            cout<<"* ";
        }
        for(int l=1;l<=i;l++){
            if(i==n+1){
                int o=l;
                cout<<o<<" ";
            }
            else{
                cout<<"t ";
            }
        }
        cout<<endl;
    }
}