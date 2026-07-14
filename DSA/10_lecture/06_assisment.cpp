#include<iostream>
using namespace std;

int main(){
    int n,even=0,odd=0,j=0;
    cin>>n;

    while(n!=0){
        int temp=n%10;
        n=n/10;
        if(j%2==0){
            even=even+temp;
        }
        else{
            odd=odd+temp;
        }
        j++;
    }
    cout<<odd<<" "<<even;
}