#include<iostream>
using namespace std;

int main(){
    int n; 
    cin>>n;
    for(int i=1;i<=n;i++){
        int m=1;
        for(int j=1;j<=i;j++){
            if(j%2==0){
                cout<<" *";
            }
            else{
                cout<<" "<<i;
                m++;
            }
        }
        cout<<endl;
    }
        for(int i=n-1;i>=1;i--){
        int m=1;
        for(int j=1;j<=i;j++){
            if(j%2==0){
                cout<<" *";
            }
            else{
                cout<<" "<<i;
                m++;
            }
        }
        cout<<endl;
    }
}