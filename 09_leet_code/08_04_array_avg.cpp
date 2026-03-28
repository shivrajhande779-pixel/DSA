#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
        long long n=0;
        for(int i=0;i<s.length();i++){
            char p=s[];
            char ch=s[i];
            if(ch=='I' ){
                n=n+1;
            }
            else if(ch=='V'){
                if(p=='I'){
                    n=n+5-2;
                }
                else n=n+5;
            } 
            else if(ch=='X'){
                if(p=='I'){
                    n=n+10-2;
                }
                else n=n+10;
            }
            else if(ch=='L'){
                if(p=='X'){
                    n=n+50-20;
                }
                 else n=n+50;
            }
            else if(ch=='C'){
                if(p=='X'){
                     n=n+100-20;
                }
                else n=n+100;
            }
            else if(ch=='D'){
                if(p=='C'){
                     n=n+500-200;
                }
                else
                n=n+500;
            }
            else if(ch=='M'){
                if(p=='C'){
                     n=n+1000-200;
                }
                else
                n=n+1000;
            }
        }
        cout<<n;
}