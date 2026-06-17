#include<iostream>
using namespace std;

int main(){
    int m,n=0;
    cin>>m;
    int a[m][m];

    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
     for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
          if(a[i][j]==0 or j>i){
                n++;
                cout<<i<<"-"<<j<<" ";
          }
        }
        
    }
    cout<<n<<endl;

    // for(int k=0;k<m;k++){
    //     for(int t=0;t<m;t++){
    //         cout<<a[k][t]<<" ";
    //     }
    //     cout<<endl;
    // }
}