#include <iostream>
using namespace std;
int gcd(int a,int b){
    for(int j=min(a,b);j>=1;j--){
        if(a%j==0 and b%j==0){
            return j;
        }
    }
    return 1;
}
int main() {
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}