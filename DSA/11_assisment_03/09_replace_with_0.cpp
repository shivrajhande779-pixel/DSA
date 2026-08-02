#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n,m,temp;
    double result,sum;
    cin>>n;
    int o=n;
   
    for(int i=0;n>0;i++){
        temp=n%10;
        n=n/10;
        if(temp==0){
            temp=5;
        }
        result=pow(10,i)*temp;
        sum=result+sum;
    }
    cout<<sum;
}