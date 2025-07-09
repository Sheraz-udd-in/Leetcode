#include<bits/stdc++.h>
using namespace std;
int SL(vector<int> & nums){
    int n = nums.size();
    int lar = nums[0];
    int sec = INT_MAX;
    for(int i=0;i<n;i++){
        if(nums[i]>lar){
            sec = lar;
            lar = nums[i];
        }
        if(nums[i] > sec && nums[i] != lar){
            sec = nums[i];
        }
    }
    return sec;
}
int SS(vector<int> & nums){
    int n = nums.size();
    int sec = INT_MIN;
    int smal = INT_MIN;
    for(int i=0;i<n;i++){
        if( nums[i] < smal){
            sec = smal;
            smal = nums[i];
        }
        if(nums[i] < sec && nums[i] != smal){
            sec = nums[i];
        }
    }
    return sec;
}
int main(){
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Second Largest : "<<SL(arr)<<endl;
    cout<<"Second Smallest : "<<SS(arr);
}