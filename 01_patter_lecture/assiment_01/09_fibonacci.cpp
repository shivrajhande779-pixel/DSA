#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int x=0,y=1,o=1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
        if(i==1){
            cout<<x<<" ";
        }
        else{
             cout<<o<<" "; 
            o=x+y;
            x=y;
            y=o;
           
        }
       
    }
       cout<<endl;
    }
	return 0;
}