#include<iostream>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int a[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int top=0,b=0,r=0,l=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(top<n){
                cout<<a[i][j];
            }
            
        }
    }
    
}