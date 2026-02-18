#include<iostream>
using namespace std;

int main(){
    int n,m=0,k,t=0,i=1;
    cin>>n;
    int r=n;
  
     while(r!=0){
        m=r%10;
        r=r/10;
        k=m*m;
        t=t+k;
       
        cout<<t<<endl;
      
    }
     r=t;
     
}

