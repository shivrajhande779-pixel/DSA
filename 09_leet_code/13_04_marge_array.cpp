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

         if(m==0 || n==0){
            if(m>0){
                if(m%2==0){
                    int mid=m/2-1;
                    int mid2=mid+1;
                    int kk= (num1[mid] + num1[mid2]);
                    double pp=kk/2; 
                    cout<< pp;
                }
                else{jhbhbh
                    int mid=m/2;
                    int tt=num1[mid];
                    cout<< tt;
                }
            }
            else{
                  if(n%2==0){
                    int mid=n/2-1;
                    int mid2=mid+1;
                    float kk= (num2[mid] + num2[mid2]);
                    double pp=kk/2; 
                    cout<<pp;
                    cout<< pp;
                }
                else{
                    int mid=n/2;
                    int tt=num2[mid];
                    cout<< tt;
                }
            }
        }
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
        cout<<" before sort "<<endl;
        for(int i = 0; i < v.size(); i++) {
        cout << v[i]<<" ";
        }
        cout<<endl;


        sort(v.begin(), v.end());

        cout<<" after sort "<<endl;
        for(int i = 0; i < v.size(); i++) {
        cout << v[i]<<" ";
        }
        cout<<endl;

        int s=v.size();
        cout<<" this is s size : "<<s<<endl;
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
            pi=mid;

        }
        cout<<endl;
        cout<<"the median is : "<<pi;
        cout<< 0;
    }