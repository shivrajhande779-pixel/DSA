#include<iostream>
using namespace std;

int main(){
    int n,find,i=0;
    cout<<"Enter the number : "<<endl; 
    cin>>n;
    cout<<"Enter the find number : "<<endl; 
    cin>>find;
    while(n!=0){
        int temp=n%10;
        n=n/10;
        if(find==temp){
            i++;
        }
    }
    cout<<i<<" times present";
}