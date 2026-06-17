#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<10;i++){
        double result=pow(n,i);
        cout<<result<<" ";
    }
}