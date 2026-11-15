#include<iostream>
using namespace std;

int main(){
    int n,extra,temp=0,sum=1;

    cin>>n;
    
    for(int i=1;i<=n;i++){
        if(i==1){
            cout<<temp<<" ";
            cout<<sum<<" ";        
        }
        else{   
        extra=sum+temp;
        temp=sum;
        sum=extra;
        cout<<extra<<" ";
        }
    }
}