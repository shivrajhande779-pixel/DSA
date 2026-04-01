#include<iostream>
using namespace std;

int main(){

    int x;
    cin>>x;
    int m=x;
        double rev=0;
        bool ans=false;

        while(x!=0){
            int temp=x%10;
            x=x/10;
            rev=rev*10+temp;
        }
        if(rev==m){
            ans=true;
        }

        if(ans){
            cout<<"true";
        }
        else cout<<"false";

    return 0;
}