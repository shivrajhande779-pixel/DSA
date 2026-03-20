#include<iostream>
using namespace std;

int main () {
        int a;
        cin >> a;
        

         int mid=a/2;
         int n=0;
         cout<<mid<<endl;
        while(a!=mid*mid){
                n=mid*mid;    

                if(n<a){
                        mid=mid+1;
                }
                else{
                if(n==a){
                        cout<< mid;
                }
                else mid=mid/2;
                }
                cout<<"n :"<<n<<" mid : "<<mid<<endl;
        }
	return 0;
}