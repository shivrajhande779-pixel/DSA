#include<iostream>
using namespace std;

int main(){
    int n,even=0,odd=0,i=0;
    cin>>n;

    while(n!=0){
        int temp=n%10;
        n=n/10;
        if(i%2==0){
            even=even+temp;
        }
        else{
            odd=odd+temp;
        }
        i++;
    }
    cout<<odd<<" "<<even;
}