#include<iostream>
using namespace std;

int main(){
    int n;

    cin>>n;
    int m=n/2+1;
    for(int i=1;i<=m;i++){
        
            for(int j=1;j<=n;j++){
                // if(i<=m){
                if(j==1 || j==m || i==m || (i==1 && j>m)){
                    cout<<"*";
                }
                else{
                cout<<" ";
                }
         //   }
        
            
        // else{
        //     if(j==m || i==m ){
        //         cout<<"p";5
        //     }
        // }
        cout<<endl;
    }     
    }
    
}