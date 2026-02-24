#include<iostream>
using namespace std;

int main(){
    int n,i=0;
    cin>>n;
    int p=n; 
    while(n!=0){
        int temp=n%10;
        n=n/10;
        while(p!=0){
            int extra= p%10;
            p=p/10;
         
            if(temp==extra){
                i=temp;
            }   
        }
    }
     cout<<i;
 }