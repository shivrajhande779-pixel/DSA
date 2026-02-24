#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);

    //initialies

    cout<<"new type like 5 means 5 intiger sotore hosakte hai 0 : means all position me 0 store hoga ";
    vector<int> vec(5,0);
    cout<<vec[0]<<" ";
    cout<<vec[1]<<" ";
    cout<<vec[2]<<" ";
    cout<<vec[3]<<" ";
    cout<<vec[4]<<" "<<endl;

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

    // random insert 
    a.insert(a.begin()+2,99);
     for(int i=0;i<a.size();i++){
        cout<<a[i]<<" "<<endl;
    }

      a.insert(a.begin()+a.size()/2,111);
     for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }

    //reverse

    reverse(a.begin(),a.end());

    //sort
    sort(a.begin(),a.end());
}
