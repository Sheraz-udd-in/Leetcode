#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int func(vector<int> & nums,int k){
        int n = nums.size();
        int l=0,r=0,sum=0,cnt=0;
        while(r<n){
            sum += nums[r];
            while(sum >k){
                sum -= nums[l];
                l++;
            }
            cnt = cnt + (r-l+1);
            r++;
        }
        return cnt;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return func(nums,k) - func(nums,k-1);
    }
};