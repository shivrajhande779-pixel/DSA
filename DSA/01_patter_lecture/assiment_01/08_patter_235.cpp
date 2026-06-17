#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int m=n+1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        for(int j=1;j<=m;j++){
            cout<<"  ";
           
        }
        m=m-2;
        if(i==n){
            for(int j=n-1;j>=1;j--){
                cout<<j<<" ";
            }
        }
        else{
            int h=i;
            for(int j=1;j<=i;j++){
                cout<<h<<" ";
                h--;
            }
            
        }
        cout<<endl;
    }
}