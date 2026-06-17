#include<iostream>
using namespace std;

int main(){
    int m,n,num=1;
    cin>>m>>n;

    for(int i=2;num<=2;i++){
        
        int temp=m*i;
        if(temp%n==0){
            cout<<temp;
            break;
        }
    }
}