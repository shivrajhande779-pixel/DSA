#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k=n;
    for(int i=1;i<=n;i++){
          int p=1;
        for(int j=n;j>=1;j--){
            if(p==j){
                cout<<"* ";
            }
            else{
                cout<<j;
            }
          
            p++;
        }
        n--;
        cout<<endl;
    }
}