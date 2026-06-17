#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int m=i;
        int o=i;
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<m<<" ";
            m++;
        }
        o=m;
        for(int j=1;j<=i-1;j++){
            if(j==1){
            o=o-2;
            cout<<o<<" ";
            }
            else{
                o=o-1;
                cout<<o<<" ";
            }
           
        }
        cout<<endl;
    }
}