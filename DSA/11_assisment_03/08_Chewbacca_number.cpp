#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n,a=0,j=0,temp;
	cin>>n;

    while(n!=0){
        temp=n%10;
        n=n/10;
        if(temp>4 && temp<9){
            a=10-temp-1;
         //   cout<<" "<<a;
        }
        //else cout<<" "<<temp;
        j++;
    }
	return 0;
}