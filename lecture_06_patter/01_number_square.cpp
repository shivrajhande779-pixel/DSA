#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int k=n-i;k>=1;k--){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            if(j%2==0){
            cout<<"* ";
            }
            else
            cout<<"! ";
        }
        for(int m=1;m<=i-1;m++){
            if(m%2!=0){
            cout<<"* ";
            }
            else cout<<"p ";
        }
        cout<<endl;
    }
}