#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    bool ans=true;

    for(int i=2;i<=sqrt(n);i++){
        if( n%i==0){
            ans = false;
        }
    }
    if(ans==true){
        cout<<"it is true "<<endl;
    }
    else cout<<"it is not prime "<<endl;

    return 0;
}