#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k=1;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        if(i==1){
            cout<<i;
        }
        else{
            int o=1;
            o=i;
        for(int j=1;j<=i;j++){
           
            cout<<" "<<o;
            o++;
           }
             
        
        for(int j=i;j>=1;j--){
            cout<<" "<<j+1;
        }
    }
      cout<<endl;
    }
    }

