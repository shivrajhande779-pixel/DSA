#include<iostream>
using namespace std;

int main(){

    string s;
    cin>>s;

        int st=0;
        int end=s.length()-1;

        bool ans =true;

        for (int i = 0; i < s.length(); i++) {
            s[i] = tolower(s[i]);  
        }

        while(st<=end){

            if(isalnum(s[st])){
                st++;
            }
            else if( isalnum(s[end]) ){
                end--;
            }

             else if(s[st]==s[end]){
                st++;
                end--;
            }
            else{
                ans=false;
            
            }
        }
        cout<< ans;
    }
