#include<iostream>
using namespace std;

int main(){
    int a[5];
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    cout<<endl;
    int sum=0;
    for(int n=0;n<5;n++){
        sum=sum+a[n];
    }
    cout<<"total number sum is : "<<sum;
}