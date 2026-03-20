#include<iostream>
#include<string>
#include <algorithm>
using namespace std;

int main(){
    string str;
    int st;
        string str5="shiiiiiiiiivvvvuuuu";

    string str1="shivf";
    string str2="hande";

    //add string
    string str3=str1+str2;
    
    //compare string
    cout<<(str1 > str2)<<endl; //in the string hande is big beacuse H letter is first in abcd
    // s is letter this reason  shivraj is big

    //input when spaces
    getline(cin,str);
    cout<<"output when spaces : "<<str<<endl;

    //reverse string 


    reverse(str5.begin(), str5.end());
    cout<<str5<<endl;

    //str size
    cout<<str5.size()<<endl;
    
    //convert lower case character
    cout<<tolower(str5[st]);

}