#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin >> n;

    int odd = 0;
    int even = 0;
	int i=1;
	while(n!=0){
		m=n%10;
		if(i%2==0){
			even=m+even;
		}
		else{
		    odd=m+odd;
		}
		n=n/10;
		i++;
       
	}
    cout<<"even number : "<<even<<endl;
    cout<<"odd number : "<<odd<<endl;
    return 0;
}
