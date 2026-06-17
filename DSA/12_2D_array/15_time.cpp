#include<iostream>
using namespace std;

int main(){
    int m,o,num=1;
    cin>>m>>o;

    for(int i=2;num<=2;i++){
        
        int temp=m*i;
        if(temp%o==0){
            cout<<temp;
            break;
        }
    }
}