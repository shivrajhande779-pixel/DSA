#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;

    cin>>str;

    int st=0,end=str.size()-1;

    for(int i=0;i<str.size()/2+1;i++){
        if(str[i]==str[end]){
            st++;
        }
        end--;
    }
    if(st==str.size()/2+1){
        cout<<"word is pelendrom  ";
    }
    else cout<<"Not ";
}