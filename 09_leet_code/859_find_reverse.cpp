#include<iostream>
using namespace std;

int main(){

    string s;
    cin>>s;
    string goal;
    cin>>goal;

     int st=0;
        int end= s.length()-1;
        bool ans=false;

        string str="";

        while(st<=end){

            swap(s[st],s[end]);
            st++;
            end--;
        }

      
        if(str==goal){
            ans=true;
        }
        
        if(ans){
            cout<<"true";
        }
        else cout<<"false";
}