#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){

        //space
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int m=1;m<=2*i-1;m++){
            if(i==1){
                cout<<i<<" ";
            }
            else{
                
                    if(m==1 || m==i){
                        cout<<"h ";
                    }
                    else{
                        cout<<"  ";
                    }
                
            }
        }
        cout<<endl;
    }
}