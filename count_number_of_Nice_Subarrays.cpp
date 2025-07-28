#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int func(vector<int> & nums,int k){
        int n = nums.size();
        int left=0,right=0,sum=0,cnt=0;
        while(right<n){
            sum += nums[right];
            while(sum >k){
                sum -= nums[left];
                left++;
            }
            cnt = cnt + (right-left+1);
            right++;
        }
        return cnt;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return func(nums,k) - func(nums,k-1);
    }
};