#include<iostream>
using namespace std;

int main(){
    int n; 
    cin>>n;

    for(int i=1;i<=n;i++){
        int p=n-1;
        int o;
        for(int j=1;j<=i;j++){
            if(j%2!=0){
            o=n-p;
            cout<<o<<" ";
            p--;
            }
            else{
                o=n+p;
                cout<<o<<" ";
                p--;
            }
        }
        for(int j=1;j<=2*n-2*i;j++){
            cout<<"  ";
        }
        int k=n-1;
        int y;
        for(int l=1;l<=i;l++){
            if(l%2!=0){
                y=n+k;
                cout<<y<<" ";
                k--;
            }
            else{
                y=n-k;
                cout<<y<<" ";
                k--;
            }
        }
        cout<<endl;
    }
}