#include<iostream>
using namespace std;

int fibo(int p){
    if(p==0 || p==1){
        return p;
    }
    return fibo(p-1)+fibo(p-2);
}

int main(){
    int n;
    cin>>n;

    int m=fibo(n);
    cout<<m<<endl;
    return 0;
}