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
    int i=0;
    int top=0,bottom=m,left=n,right=0;
    while (top < bottom and left > right){

        //right
        for(int j=top;j<bottom;j++){
            cout<<a[j][i]<<" ";
            
        }
        right++;

        //bottom
        for(int b=right;b<left;b++){   
            cout<<a[bottom-1][b]<<" ";
        }
        bottom--;

        // left
        for(int l=bottom-1;l>=0;l--){
            cout<<a[l][n-1]<<" ";
        }
        left--;
        
        //top
        for(int t=left-1;t>=0;t--){
            cout<<a[i][left-1]<<" ";
        }
        top++;
        i++;
    }
}