#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){

        //space
        for(int j=1;j<=n-i;j++){
            cout<<"q"<<" ";
        }
        for(int m=1;m<=2*i-1;m++){
            if(i==1){
                cout<<i<<" ";
            }
           
            else{
                
                    if(m==1 || m==2*i-1){
                      //  int t=i-1;
                        cout<<i-1<<" ";
                    }
                    else{
                        cout<<"w ";
                    }
                
            }
        }
        cout<<endl;
    }
     for(int i=n-1;i>=1;i--){

        //space
        for(int j=1;j<=n-i;j++){
            cout<< ";
        }
        for(int m=1;m<=2*i-2;m++){
            if(i==1){
                cout<<i<<" ";
            }
           
            else{
                
                    if(m==1 || m==2*i-1){
                      //  int t=i-1;
                        cout<<i<<" ";
                    }
                    else{
                        cout<<"  ";
                    }
                
            }
        }
        cout<<endl;
    }
}

   