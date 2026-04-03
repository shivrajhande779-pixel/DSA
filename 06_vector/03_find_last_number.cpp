 #include<iostream>
 #include<vector>
 using namespace std;

 int main(){

    vector<int> v;
    int a[5]={1,2,3,4,5};
    for(int i =0;i<v.size();i++){
        v.push_back(a[i]);
    }
     vector<int> p;
    int f[5]={1,2,3,4,5};
    for(int w =0;w<p.size();w++){
        p.push_back(f[w]);
    }
     vector<int> r;
    int q[5]={1,2,3,4,5};
    for(int i =0;i<r.size();i++){
        r.push_back(q[i]);
    }
}