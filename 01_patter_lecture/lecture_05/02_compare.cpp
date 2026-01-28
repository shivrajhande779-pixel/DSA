#include<iostream>
using namespace std;

int main(){

    int n,i;
    cout<<"enter the number : ";
    cin>>n;

    if(n>=381 && n<=460){
        cout<<"you won the macbook"<<endl;
        if(n>=300 && n<=380){
            cout<<"m1 mac"<<endl;
        }
        else if(n>=381 && n<=460){
            cout<<"m2 mac"<<endl;
        }
    }
     if(n>=200 && n<=280){
        cout<<"you won the pack of kurkure"<<endl;
        if(n>=200 && n<=240){
            cout<<"chili kurkure"<<endl;
        }
        else if(n>=381 && n<=460){
            cout<<"onion kurkure"<<endl;
        }
    }
    if(n>=50 && n<=80){
        cout<<"you won the pack of bike"<<endl;
        if(n>=50 && n<=65){
            cout<<"bullet"<<endl;
        }
        else if(n>=66 && n<=80){
            cout<<"raj doot"<<endl;
        }
    }
    if(n>=1100 && n<=1500){
        cout<<"you won the pack of cycle"<<endl;
        if(n>=1100 && n<=1300){
            cout<<"avon cycle"<<endl;
        }
        else if(n>=1301 && n<=1500){
            cout<<"hero cycle"<<endl;
        }
    }
}