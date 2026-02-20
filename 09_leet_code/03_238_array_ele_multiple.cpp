#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

     for(int i=0;i<n;i++){
        cout<<a[i];
    }
    cout<<endl;
    cout<<"after the adding "<<endl;
    int temp=1;
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            temp=temp*a[j];
        }
        a[i]=temp;
        
    }
     for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}