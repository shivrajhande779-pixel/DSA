#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int p= n-1;
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++){
            if(j%2!=0){
                int o=n-p;
                cout<<o<<" ";
            }
            else{
                int o=n+p;
                cout<<o<<" ";  
            }          
        }
       //space
    for(int s=1;s<=2*n-2*i;s++){
        cout<<"  ";
    }
    for(int l=1;l<=i;l++){
        if(l%2==0){
            int o=n-p;
            cout<<o<<" ";
        }
        else{
            int o=n+p;
            cout<<o<<" ";
        }
    }
    p--;
    cout<<endl;
    }
}
