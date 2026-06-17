#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n;
    cin>>m;
    int a[6];

    for(int i=0;i<n;i++){
        cout<<"enter the number : ";
        cin>>a[i];
    }
    // find the element
    int a=0;
    for(int f=0;f<n;f++){
        if(m==a[f]){
            cout<<"element is the prsent : "<<m;
            break;
        }
        else
         { cout<<"element is not present";
    }
    cout<<a;
}
}