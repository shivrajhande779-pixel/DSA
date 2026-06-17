#include<iostream>
using namespace std;
int main() {
	int n,m,temp;
	cin>>n>>m;

	for(int i=1;i<=n;i++){
		if(n%i==0 and m%i==0){
			temp=i;
		}
	}
	cout<<temp;
	return 0;
}