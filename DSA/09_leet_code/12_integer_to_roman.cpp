#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string r="";

    while(n!=0){
       if(n>1000){
        r.push_back('M');
        n=n-1000;
       }
       else if(n>=900 && n<1000){
        r.push_back('C');
        r.push_back('M');
        n=n-900;
       }
       else if(n>=500 && n<900){
         r.push_back('D');
         n=n-500;
       }
       else if(n>=400 && n<500){
         r.push_back('C');
         r.push_back('D');
         n=n-400;
       }
       else if(n>=100 && n<400){
         r.push_back('C');
         n=n-100;
       }

        else if(n>=90 && n<100){
         r.push_back('X');
         r.push_back('C');
         n=n-90;
       }

        else if(n>=50 && n<90){
         r.push_back('L');
         n=n-50;
       }

        else if(n>=40 && n<50){
         r.push_back('X');
         r.push_back('L');
         n=n-40;
       }

        else if(n>=10 && n<40){
         r.push_back('X');
         n=n-10;
       }
        else if(n==9){
        r.push_back('I');
        r.push_back('X');
        n=n-9;
       }

        else if(n>=5 && n<9){
        r.push_back('V');
        n=n-5;
       }

        else if(n==4){
        r.push_back('I');
        r.push_back('V');
        n=n-9;
       }
        else if(n>=1 && n<3){
        r.push_back('I');
        n=n-1;
       }
    }
    cout<<r;
}