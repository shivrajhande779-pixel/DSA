#include<iostream>
#include<vector>
using namespace std;
int main(){
    int r,c,t;
    cin>>r>>c>>t;
    vector<vector<int>> a(r,vector<int>(c));

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
     for(int l=0;l<r;l++){
        for(int j=0;j<c;j++){
            cin>>a[l][j];
        }
    }
    for(int j=0;j<r;j++){
        if(j%2==0){
            for(int i=0;i<r;i++){
                cout<<a[i][j]<<" ";
            }
        }
        else {
            for(int i=r-1;i>0;i--){
                cout<<a[i][j]<<" ";
            }
        }
    }
}