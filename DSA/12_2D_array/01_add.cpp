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
     for(int i=0;i<m;i++){
        if(i%2==0){
        for(int j=0;j<n;j=j+2){
            cout<<a[i][j]<<" ";
        }
    }
                 else if(i%2!=0){
                       for(int j=n;j>0;j=j-2){
                            cout<<a[i][j]<<" ";
                         }
                        }
     

    }
}