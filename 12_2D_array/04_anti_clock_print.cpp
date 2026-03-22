#include<iostream>
using  namespace std;

int main (){
	int m,n;
	cin>>m>>n;
    int a[m][n];

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}

    int top=0,bottom=m-1,left=n-1,right=0;
    for(int i=0;i<m;i++){

        //right
        for(int j=right;j<m;j++){
            cout<<a[j][i];
        }
        right++;

        //bottom
        for(int b=right;b<n;b++){   
            cout<<a[bottom][b];
        }
        bottom--;

        // left
        for(int l=bottom;l<=0;l--){
            cout<<a[l][n];
        }
        left--;
        
        //top
        for(int t=left;t>=0;t--){
            cout<<a[i][left];
        }
        top++;

    }
}