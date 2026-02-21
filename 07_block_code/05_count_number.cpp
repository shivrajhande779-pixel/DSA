#include<iostream>
using namespace std;

int main(){
    int n,k=0;
    cin>>n;
      int p=n;
     int l=0;
    while(n!=0){
        int temp=n%10;
        n=n/10;
        k++;
      
       
        while(p!=0){
            int temp1=p%10;
            p=p/10;
            if(temp==temp1){
               
                l++;
            }
        }
         
    }
    cout<<"the found :"<<l;
}