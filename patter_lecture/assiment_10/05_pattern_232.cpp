#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int m=n/2+1;
    for(int i=1;i<=m;i++){
        int p=i;
        for(int j=1;j<=m-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<p<<" ";
            p++;
        }
        int x=p;
        for(int j=1;j<=i-1;j++){
          if(j==1){
            x=x-2;
            cout<<x<<" ";
          }
          else{
            x--;
            cout<<x<<" ";
          }
        }
          cout<<endl;
    }
  
}