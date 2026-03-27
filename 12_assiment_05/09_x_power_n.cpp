#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

int main(){
    int n,k,result=0,et;
    int w=INT_MAX;
    cin>>n>>k;
    int temp=n/2;

    while(temp!=0){
        if(pow(temp,k)>w){

            break;
        }
        else{
            result=pow(temp,k);
            
            if(result<=n){
                if(result==n){
                    cout<<temp;
                    break;
                }
                else{
                    et=temp;
                    temp=temp+1;
                }
            }
            else{
                
                temp=temp/2;
                
            }
        }
    }
}
