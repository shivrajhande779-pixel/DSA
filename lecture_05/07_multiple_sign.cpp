#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the row number : ";
    cin>>n;
    int k=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
        if(i==j){
            cout<<"* ";
        }
        else if(j==k){
            cout<<"* ";
            k--;
            
        }
        else{
            cout<<"  ";
        }
        }
        cout<<endl;
    }
}