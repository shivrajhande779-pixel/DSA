#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        int smallest=i;
        for(int j=i+1;j<n-1;j++){
            if(a[smallest]>a[j]){
                smallest=i;
            }
        }
        swap(a[i],a[smallest]);
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}