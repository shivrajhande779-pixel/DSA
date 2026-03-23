#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int a[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    cout<<"---before swap-----"<<endl;
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            swap(a[i][n-j-1],a[j][i]);

        }
    }
    cout<<"-------after swap-----"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}