#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i>=3){
                if(j==1 || j==i){
                    cout<<i<<" ";
                }
                else cout<<"0 ";
            }
            else
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
