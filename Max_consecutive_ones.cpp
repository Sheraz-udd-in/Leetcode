#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n= nums.size();
        int cnt =0,maxCount =0;
        for(int i=0;i<n;i++){
            if(nums[i] == 1){
                cnt++;
                maxCount = max(maxCount, cnt);
            }
            else{
                cnt=0;
            }
        }
        return maxCount; // Return the maximum count of consecutive ones found
    }
};