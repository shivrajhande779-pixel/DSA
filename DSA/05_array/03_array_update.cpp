#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"---before updated array---"<<endl;
     for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
      cout<<"---after updated array---"<<endl;
     for(int i=0;i<n;i++){
        a[i]+=i;
    }
}