#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=n;i>=1;i--){
       for(int j=i;j<=i;j++){
        cout<<"* ";
       }
        cout<<endl;
    }
}