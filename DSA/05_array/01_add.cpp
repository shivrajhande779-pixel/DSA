#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"enter the array element : ";
        cin>>a[i];
    }
    cout<<endl;
      for(int i=0;i<n;i++){
        cout<<"array element is : "<<a[i];
        cout<<endl;
    }
}