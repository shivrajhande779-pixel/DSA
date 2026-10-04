#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr;

    int m,n;

    cin>>m>>n;
    for(int i=0;i<m;i++){

        for(int j=0;j<n;j++){

            arr.push_back(arr[i][j]);
        }
    }

    for(int i=0;i<m;i++){

        for(int j=0;j<n;j++){

            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
