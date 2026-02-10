#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cout<<"enter the number : ";
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<"element is the : "<<a[i]<<endl;
    }
}