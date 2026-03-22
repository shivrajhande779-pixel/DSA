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
    while(top==bottom){

        //right
        for(int j=top;j<bottom;j++){
            cout<<a[j][i]<<" ";
        }
        right++;
        cout<<" : right"<<endl;

        //bottom
        for(int b=right;b<left;b++){   
            cout<<a[bottom][b]<<" ";
        }
        bottom--;
        cout<<" : bottom"<<endl;


        // left
        for(int l=bottom;l>=0;l--){
            cout<<a[l][n]<<" ";
        }
        left--;
        cout<<" : left"<<endl;
        
        //top
        for(int t=left;t>=0;t--){
            cout<<a[i][left]<<" ";
        }
        top++;
         cout<<" : top"<<endl;
        i++;
    }
}