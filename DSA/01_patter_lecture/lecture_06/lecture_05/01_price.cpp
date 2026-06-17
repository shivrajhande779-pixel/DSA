#include<iostream>
using namespace std;

int main(){
 int n;
 cout<<"enter the  number : ";
 cin>>n;
 if(n>50 && n<=80){
    cout<<"the price is bike"<<endl;
 }
 else if(n>=200 &&  n<=280){
    cout<<"you win kurkure price";
 }
else if(n>=300 &&  n<=460){
    cout<<"you win macbook price";
 }
 else if(n>=1100 &&  n<=1500){
    cout<<"you win cycle price";
 }
 else
 cout<<"better luck next time ";
}