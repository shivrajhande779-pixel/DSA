#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n,i=0,ans=0,temp;
    double dec;
    cin>>n;
    while(n!=0){
        temp=n%10;
        n=n/10;
        dec=pow(2,i)*temp;
        ans=ans+dec;
        i++;
    }
    cout<<ans;
}
