#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int m=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j=j++){
            cout<<"n ";
            m=m+2;
        }
        for(int j=n;j>=1;j--){
            cout<<"k ";
        }
        cout<<endl;
    }
}