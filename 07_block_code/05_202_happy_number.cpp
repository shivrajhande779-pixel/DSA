#include<iostream>
using namespace std;

int main(){
    int n,m=0,k,t=0,i=1;
    cin>>n;
    while(i!=10){
     while(n!=0){
        m=n%10;
        n=n/10;
        k=m*m;
        t=t+k;
       
        cout<<t<<endl;
      
    }
     n=t;
     i++;
}

}