#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string s;
    string ans="";
    string et="";
    getline(cin , s);
    //cout<<s;
    

    reverse(s.begin(),s.end());

    int n=s.length();
    for(int i=0;i<n;i++){

        string word="";
        while(i<n && s[i]!=' '){
            word+=s[i];
            i++;
        }

        reverse(word.begin(),word.end());

        if(word.length()>0){
        ans+=" "+word;
        }
    }
    cout<<ans;
}
