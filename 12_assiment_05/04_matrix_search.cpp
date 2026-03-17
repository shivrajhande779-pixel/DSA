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
    int target;
    cin>>target;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(target==a[i][j]){
                cout<<"1";
            }
            else cout<<"0";
        }
    }
}