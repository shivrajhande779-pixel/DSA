#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int p=0;
    int temp=0;
    int i=0;
    int swap=0;
    int x=0;
    while(n!=0){
        p=n%10;
        n=n/10;
        i++;
        temp=p;
        swap=i;

         //cout<<temp<<" "<<swap<<endl;
        x=temp;
        temp=swap;
        swap=x;
        
       cout<<x;
        
    }
}