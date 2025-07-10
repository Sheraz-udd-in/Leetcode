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
int SS(vector<int>& nums) {
    int n = nums.size();
    if (n < 2) return -1;

    int smal = INT_MAX, sec = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (nums[i] < smal) {
            sec = smal;
            smal = nums[i];
        } else if (nums[i] > smal && nums[i] < sec) {
            sec = nums[i];
        }
    }

    return (sec == INT_MAX) ? -1 : sec;
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