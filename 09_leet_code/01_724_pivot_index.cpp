#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int num[n];

    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int total=0;
    for(int i=0;i<5;i++){
        total+=num[i];
    }
    int leftsum=0;
    for( int i=0;i<5;i++){
        int rightsum=total-leftsum-num[i];
        if(leftsum==rightsum){
            cout<<i;
        }
        leftsum+num[i];
    }
}