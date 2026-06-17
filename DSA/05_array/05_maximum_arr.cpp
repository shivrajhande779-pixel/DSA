#include<iostream>
using namespace std;

int main(){
    int a[6]={800,13,-21,40009,33,777};
    int m=0;
    for(int i=0;i<6;i++){
        if(m<a[i]){
            
            m=a[i];

        }
    }
   cout<<m; 
}