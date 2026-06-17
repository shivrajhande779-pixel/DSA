#include<iostream>
using namespace std;

int main(){
    int m,n;
    cin>>m;
    int a[m][m];

    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
     for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(i>j){
                a[i][j]=0;
            }
            cout<<a[i][j]<<" ";
        }
    }
}