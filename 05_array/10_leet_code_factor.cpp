#include<iostream>
using namespace std;

int main(){
    int n,count=0;
    cin>>n;
    int k;
    cin>>k;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
            if(count==k){
                cout<<i;
            }
        }
    }
}