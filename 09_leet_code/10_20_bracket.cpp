#include<iostream>
#include<string>
using namespace std;

int main(){
    
        string s;
        cin>>s;
        int st=0;
        int end=s.length()-1;
        bool ans=false;
       

        for(int i=0;i<s.length();i++){
            char ch=s[i];
            cout<<ch<<" "<<ch+1<<"  ";
            if(ch=='('){
                if(ch+1==s[i+1] || ch+1==s[end]){
                    ans=true;
                }
            }
            else if(ch=='['){
                if(ch+2==s[i+1] || ch+2==s[end]){
                    ans=true;
                }
            }
            else if(ch=='{'){
                if(ch+2==s[i+1] || ch+2==s[end]){
                    ans=true;
                }
            }
            end--;
        }
        
        // if(ans){
        //     cout<<true;
        // }
        // else cout<<false;
    }
