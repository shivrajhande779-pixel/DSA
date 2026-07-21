#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    int plus=2;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            plus=i;
        }
    }
    cout<<plus<<endl;
    return 0;
}
