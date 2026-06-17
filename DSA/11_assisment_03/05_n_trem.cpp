#include<iostream>
using namespace std;

int main(){
    int m,n=0,count,i=1;
    cin>>count>>m;

    while(count>n){  
        int temp = 3*i+2;
        if(temp%m!=0){
            cout<<temp<<endl;
            n++;
        }
        i++;
    }

}
#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    int count = 0;

    for (int i = 1; count < n1; i++) {
        int value = 3 * i + 2;

        if (value % n2 != 0) {
            cout << value << endl;
            count++;
        }
    }

    return 0;
}
