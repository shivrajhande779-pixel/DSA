#include<iostream>
#include<algorithm>
using namespace std;

int main() {

	string s;
	cin>>s;
	

	for(int i=0;i<s.length()-1;i++){
		int n=0;

			n=s[i]-s[i+1];
			s.insert(i+1, to_string(n));
	}
	cout<<s;
	return 0;
}