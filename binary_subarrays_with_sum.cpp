#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atm(nums, goal) - atm(nums, goal-1);
    }
    int atm(vector<int>& nums, int goal){
        int n = nums.size();
        int l=0,r=0,sum=0,cnt=0;
        while(r<n){
            sum += nums[r];
            while(sum > goal){
                sum -= nums[l];
                l++;
            }
            cnt = cnt + (r-l+1);
            r++;
        }
        return cnt;
    }
};