#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);

    //size
    cout<<a.size()<<endl;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }

    //delete
    a.pop_back();
    
    //capicity
    cout<<a.capacity()<<endl;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }

    //first element 
    cout<<a.front()<<endl;

    //last element 
    cout<<a.back()<<endl;
}
