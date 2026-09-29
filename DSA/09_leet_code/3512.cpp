#include<iostream>
#include<vector>
using namespace std;

int main() {
        int sum=0,k;

        vector<int> nums = {3,9,7};
        int n=nums.size();
         
        cout<<"Enter the divide number: ";
        cin>>k;

        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            
        }
        cout<<"size is : "<<n<<endl;
        cout<<"sum is : "<<sum<<endl;

        int max=nums[1];
        for(int i=0;i<n;i++){
            if(nums[i]>max){
                max=nums[i];
            }
        }

         
        int count=0;

        while(max!=0){
            if(max%k==0){
                cout<<"The minimum sum divisible by "<<k<<" is: "<<sum<<endl;
                break;
            }
            else{
                max--;
            }
            count++;
        }
        cout<<"The minimum number : "<<count;
}