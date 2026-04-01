#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
 int r,h;
    cout << "Enter size: ";
    cin >> r>>h;

    vector<int> num1(r);
    vector<int> num2(h);  // size n ka vector

    cout << "Enter elements:\n";
    for(int i = 0; i < r; i++) {
        cin >> num1[i];
    }
    for(int i = 0; i < h; i++) {
        cin >> num2[i];
    }
        int m=num1.size();
        int n=num2.size();
        int p=m+n;


        vector<int> v;
        int q=0; 
        for(int i=0;i<p;i++){
            if(i<m){
                v.push_back(num1[i]);
            }
            else{
               v.push_back(num2[q]);
               q++; 
            }
        }

        cout<<endl;

        sort(v.begin(), v.end());

        int s=v.size();
        
        float u;
        double pi;
        if(s%2==0){
            int mid=s/2-1;
            int mid2=mid+1;
            u= (v[mid] + v[mid2]);
            pi=u/2;
            }
        else{
            int mid=s/2+1;
            u=mid;
            cout<<
        }
        cout<<endl;
        cout<<"the median is : "<<pi;
        return 0;
    }