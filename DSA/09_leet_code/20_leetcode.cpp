class Solution {
public:
    bool isValid(string s) {
        int st=0;
        int end=s.length()-1;
        bool ans=false;
        int mid=s.length()/2;

        if(s[end]=='(' || s[end]=='[' || s[end]=='{'){
                return false;
            }
         if(s[st]==')' || s[st]==']' || s[st]=='}'){
                return false;
            }


        for(int i=0;i<s.length();i++){
            char ch=s[i];
            
            if(ch=='('){
                if(ch+1==s[i+1]){
                    ans=true;
                    i++;
                }
                else if(ch+1==s[end] && end>=mid){
                    ans=true;
                }

                else {ans=false;
                return ans;}
            }
           
            else if(ch=='['){
                if(ch+2==s[i+1] ){
                    ans=true;
                    i++;
                }
                else if(ch+2==s[end] && end>=mid){
                    ans=true;
                }
                else { ans=false;
                return ans;
                }
            }
            else if(ch=='{' ){
                if(ch+2==s[i+1]){
                    ans=true;
                    i++;
                }
                 else if(ch+2==s[end] && end>=mid){
                    ans=true;
                }
                else 
                {
                    ans=false;
                return ans;
                }
            }
            // else if(i<end ch==')' || ch==']' || ch=='}'){
            //     ans=false;
            //     return ans;
            // }
            
            //  if(end >= mid){
            //     end--;
            // }
           end--;
        
        }
        return ans;
    }
    
    #include<iostream>
    using namespace std;

    int main() {
        string s;
        string str = "({[]})";
        bool ans = s.isValid(str);
        if(ans){
            cout<<"Valid Parenthesis the parentheses are valid."<<endl;
        }
        else{
            cout<<"Invalid Parenthesis"<<endl;
        }
        return 0;
    }
};