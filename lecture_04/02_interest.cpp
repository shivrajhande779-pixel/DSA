#include<iostream>
using namespace std;

int main(){
    int p,t,r;
    cout<<"enter the amount : ";
    cin>>p;
    cout<<"enter the time : ";
    cin>>t;
    cout<<"enter the rate : ";
    cin>>r;

    int show = p*t*r/100;
    cout<<show;
}