#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i=0;
        for(int j=1;j<n;i++){
            if(nums[j] != nums[i]){
                i++;
                nums[i]= nums[j];
            }
        }
        return i+1;
    }
};