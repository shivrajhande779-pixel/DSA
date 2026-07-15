#include<iostream>
using namespace std;

int main(){
    int m,even=0,odd=0,j=0;
    cin>>m;

    while(m!=0){
        int temp=m%10;
        m=m/10;
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