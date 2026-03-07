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
    cout<<"size : ";
    cout<<a.size()<<endl;

    cout<<"show  : ";
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    //delete
    a.pop_back();
    
    //capicity
    cout<<"capicity  :  ";
    cout<<a.capacity()<<endl;
   

    //first element
    cout<<"show first element : ";
    cout<<a.front()<<endl;

    //last element 
    cout<<"show last element  : ";
    cout<<a.back()<<endl;

    // random insert 
    cout<<"random insert  : ";
    a.insert(a.begin()+2,99);
     for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

      a.insert(a.begin()+a.size()/2,111);
     for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }

    //reverse

    reverse(a.begin(),a.end());

    //sort
    sort(a.begin(),a.end());
}
