#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int m,n;
    double root=0;
    cin>>m>>n;

   for(int i=m;i<=n;i++){
    int temp=i;
    int add=0;
       for(int j=1;temp>0;j++){
        int r=temp%10;
        temp=temp/10;
        root=pow(r,3);
        add=add+root;
       }
       if(add==i){
        cout<<i<<endl;
       }
   }
}